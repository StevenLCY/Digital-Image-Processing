#include "hw3.h"
#include "ui_hw3.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
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
    cv::Mat dst = src.clone();
    int value = ui->horizontalSlider->value();
    int element = 1/(value*value);
    std::vector<std::vector<int>> kernel(value, std::vector<int>(value, element));


}
