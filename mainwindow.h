#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <opencv.hpp>
#include <QFileDialog>
#include <qfiledialog.h>
#include <QMessageBox>
#include <QDebug>
#include <QImage>
#include <QVector>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <QLabel>
#include "hw3.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_HW3_clicked();

private:
    Ui::MainWindow *ui;
    QImage Mat2QImage(const cv::Mat mat_original);
    void showImage(const cv::Mat &mat_original, QLabel* label);
    HW3 *hw3Window;

    cv::Mat src;
//    bool GrayYet;
//    int color;
//    int status;
    QImage *Image;
//    QImage *Image_save;
    QPixmap pixmap;
    QImage *a;
signals:
    void sendFrame(cv::Mat src);



};

#endif // MAINWINDOW_H
