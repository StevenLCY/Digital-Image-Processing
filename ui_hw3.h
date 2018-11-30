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
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *HW3)
    {
        if (HW3->objectName().isEmpty())
            HW3->setObjectName(QStringLiteral("HW3"));
        HW3->resize(400, 300);
        widget = new QWidget(HW3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 50, 161, 201));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("3ds"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(3);
        horizontalSlider->setMaximum(48);
        horizontalSlider->setSingleStep(2);
        horizontalSlider->setPageStep(6);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(HW3);

        QMetaObject::connectSlotsByName(HW3);
    } // setupUi

    void retranslateUi(QDialog *HW3)
    {
        HW3->setWindowTitle(QApplication::translate("HW3", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("HW3", "Kernal Size:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("HW3", "Box Filter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("HW3", "Gaussian Filter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HW3: public Ui_HW3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HW3_H
