/********************************************************************************
** Form generated from reading UI file 'hw3.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HW3_H
#define UI_HW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HW3
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QPushButton *boxFilter;
    QPushButton *gaussianFilter;
    QPushButton *bilateralFilter;
    QPushButton *sobelFilter;

    void setupUi(QDialog *HW3)
    {
        if (HW3->objectName().isEmpty())
            HW3->setObjectName(QStringLiteral("HW3"));
        HW3->resize(400, 300);
        layoutWidget = new QWidget(HW3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 193, 231));
        _2 = new QVBoxLayout(layoutWidget);
        _2->setSpacing(10);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(10, 10, 10, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(8, 8, 8, 8);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("3ds"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);


        _2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(3);
        horizontalSlider->setMaximum(48);
        horizontalSlider->setSingleStep(2);
        horizontalSlider->setPageStep(6);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        boxFilter = new QPushButton(layoutWidget);
        boxFilter->setObjectName(QStringLiteral("boxFilter"));

        verticalLayout->addWidget(boxFilter);

        gaussianFilter = new QPushButton(layoutWidget);
        gaussianFilter->setObjectName(QStringLiteral("gaussianFilter"));

        verticalLayout->addWidget(gaussianFilter);

        bilateralFilter = new QPushButton(layoutWidget);
        bilateralFilter->setObjectName(QStringLiteral("bilateralFilter"));

        verticalLayout->addWidget(bilateralFilter);


        _2->addLayout(verticalLayout);

        sobelFilter = new QPushButton(HW3);
        sobelFilter->setObjectName(QStringLiteral("sobelFilter"));
        sobelFilter->setGeometry(QRect(260, 50, 101, 21));

        retranslateUi(HW3);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(HW3);
    } // setupUi

    void retranslateUi(QDialog *HW3)
    {
        HW3->setWindowTitle(QApplication::translate("HW3", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("HW3", "Kernal Size:", Q_NULLPTR));
        boxFilter->setText(QApplication::translate("HW3", "Box Filter", Q_NULLPTR));
        gaussianFilter->setText(QApplication::translate("HW3", "Gaussian Filter", Q_NULLPTR));
        bilateralFilter->setText(QApplication::translate("HW3", "Bilateral Filter", Q_NULLPTR));
        sobelFilter->setText(QApplication::translate("HW3", "Sobel filter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HW3: public Ui_HW3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HW3_H
