#ifndef HW3_H
#define HW3_H

#include <QDialog>
#include <opencv2/opencv.hpp>
#include <opencv/highgui.h>
#include <vector>
namespace Ui {
class HW3;
}

class HW3 : public QDialog
{
    Q_OBJECT

public:
    explicit HW3(QWidget *parent = nullptr);
    ~HW3();

private slots:
    void getFrame(cv::Mat img);

    void on_boxFilter_clicked();

private:
    cv::Mat convolution(cv::Mat src, std::vector<std::vector <int> > kernel, int size);
    Ui::HW3 *ui;
    cv::Mat src;

};

#endif // HW3_H
