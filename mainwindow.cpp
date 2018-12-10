#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include "hw3.h"
#include <QObject>
using namespace cv;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


QImage MainWindow::Mat2QImage(const Mat mat_original){
    if(mat_original.type()==CV_8UC1)
    {
        QVector<QRgb> colorTable;
        for (int i = 0; i < 256; i++){
            colorTable.push_back(qRgb(i,i,i));
        }
        const uchar *qImageBuffer = (const uchar*)mat_original.data;
        QImage img(qImageBuffer, mat_original.cols, mat_original.rows, mat_original.step, QImage::Format_Indexed8);
        img.setColorTable(colorTable);
        return img;
    }
    if(mat_original.type()== CV_8UC3)
    {
        const uchar *qImageBuffer = (const uchar*)mat_original.data;
        QImage img(qImageBuffer, mat_original.cols, mat_original.rows, mat_original.step, QImage::Format_RGB888);
        return img.rgbSwapped();
    }
    else
    {
        qDebug() << "Error! Can't convert image type.";
        return QImage();
    }
}

void MainWindow::showImage(const Mat &mat_original, QLabel* label){

    Mat mat_processed;
    int width = label->width();
    int height = label->height();
    double ratio = (double)width / (double)height;
    double imgRatio = mat_original.cols / mat_original.rows;

    if (ratio<imgRatio)
    {
       cv::resize(mat_original,mat_processed,Size(width,(mat_original.rows*width)/mat_original.cols));
    }
    else
    {
       cv::resize(mat_original,mat_processed,Size((mat_original.cols*height)/mat_original.rows,height));
    }

    label->setPixmap((QPixmap::fromImage(this->Mat2QImage(mat_processed))).scaled(label->width(),label->height(),Qt::KeepAspectRatio));

}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName();
    if(fileName == NULL){
        QMessageBox::information(0,"Error!","Need image file!");
        return;
    }
    else{
        //Mat mat;
        a = new QImage;
        a->load(fileName);
        if(a->isNull()){
            QMessageBox::information(this,"Warning!","Need a image file!");
        }
    if(!a->isNull()){
        Image = new QImage;
        Image = a;
        pixmap = QPixmap::fromImage(*Image);
    }
    cv::Mat mat;
    qDebug() << fileName;
    src = cv::imread(fileName.toStdString());
    //cv::imshow("show", mat);
    int width = src.cols;
    int height = src.rows;

    cv::resize(src, src, Size(width/2,height/2));


    showImage(src, ui->originalImg);

}


}

void MainWindow::on_HW3_clicked()
{

    hw3Window = new HW3(this);
    hw3Window->show();
    qDebug() << "change";
    connect(this, SIGNAL(sendFrame(cv::Mat)), hw3Window, SLOT(getFrame(cv::Mat)));
    emit sendFrame(src);
}
