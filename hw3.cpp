#include "hw3.h"
#include "ui_hw3.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>

#include "omp.h"
#define _USE_MATH_DEFINES // for C++
#include "math.h"


HW3::HW3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HW3)
{
    ui->setupUi(this);
}

HW3::~HW3()
{
    delete ui;
}

void HW3::getFrame(cv::Mat img)
{
    //cv::imshow("show", img);
    src = img.clone();
}


void HW3::on_boxFilter_clicked()
{
    cv::Mat img = src.clone(); // source img
    cv::Mat dst; //filtered img
    double value = ui->horizontalSlider->value();

    cv::Mat kernel(value, value, CV_32F, cv::Scalar(0)); //custom kernel
    for(int i=0; i<value; i++){
        for(int j=0; j<value; j++){
            kernel.at<float>(i, j) = 1/(value * value); // make box kernel
        }
    }

    applyConvolution(img, dst, kernel); // apply custom boxFilter
    emit sendProcImg(dst); // send processed image to MainWindow

}

void HW3::applyConvolution(const cv::Mat &src, cv::Mat &dst, const cv::Mat &kernel){
    cv::filter2D(src, dst, src.depth(), kernel);
}

void HW3::on_gaussianFilter_clicked()
{
    cv::Mat img = src.clone();
    cv::Mat dst;
    double value = ui->horizontalSlider->value();
    cv::GaussianBlur(img, dst, cv::Size(value, value), 3);

    emit sendProcImg(dst);
}

void HW3::on_bilateralFilter_clicked()
{
    cv::Mat img = src.clone();
    cv::Mat dst;
    double value = ui->horizontalSlider->value();
    cv::bilateralFilter(img, dst, 9, 30, 30);

    emit sendProcImg(dst);
}

void HW3::on_sobelFilter_clicked()
{
    cv::Mat img = src.clone();
    cv::Size ksize = cv::Size(5,5);
    cv::GaussianBlur(img, img, cv::Size(7,7), 3);
    cv::cvtColor(img, img, cv::COLOR_BGR2GRAY);
    cv::Mat grad_x, grad_y, abs_grad_x, abs_grad_y, root, dst;

    cv::Sobel(img, grad_x, CV_32F, 1, 0, 3); // x direction sobel operation
    cv::Sobel(img, grad_y, CV_32F, 0, 1, 3); // y direstion sobel operation

    cv::pow(grad_x, 2, grad_x);
    cv::pow(grad_y, 2, grad_y);
    cv::add(grad_x, grad_y, root);
    cv::sqrt(root, root);
    // dst = sqrt(x^2+y^2)

    cv::convertScaleAbs(root, dst); //convert from CV_32F to CV_8U


//    cv::imshow("x", grad_x);
//    cv::imshow("y", grad_y);

//    cv::convertScaleAbs(grad_x, abs_grad_x);
//    cv::convertScaleAbs(grad_y, abs_grad_y);

//    cv::addWeighted(abs_grad_x, 0.5, abs_grad_y, 0.5, 0, dst);

//    cv::imshow("test", dst);
    emit sendProcImg(dst);
}
