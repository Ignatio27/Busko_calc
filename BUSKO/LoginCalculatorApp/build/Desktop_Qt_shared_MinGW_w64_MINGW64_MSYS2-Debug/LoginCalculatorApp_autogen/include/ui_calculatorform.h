/********************************************************************************
** Form generated from reading UI file 'calculatorform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORFORM_H
#define UI_CALCULATORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorForm
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;

    void setupUi(QWidget *CalculatorForm)
    {
        if (CalculatorForm->objectName().isEmpty())
            CalculatorForm->setObjectName("CalculatorForm");
        CalculatorForm->resize(400, 300);
        pushButton = new QPushButton(CalculatorForm);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 90, 80, 61));
        pushButton_2 = new QPushButton(CalculatorForm);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 90, 80, 61));
        pushButton_3 = new QPushButton(CalculatorForm);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(200, 90, 80, 61));
        pushButton_4 = new QPushButton(CalculatorForm);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 160, 80, 61));
        pushButton_5 = new QPushButton(CalculatorForm);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(110, 160, 80, 61));
        pushButton_6 = new QPushButton(CalculatorForm);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(200, 160, 80, 61));
        pushButton_7 = new QPushButton(CalculatorForm);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 230, 80, 61));
        pushButton_8 = new QPushButton(CalculatorForm);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(110, 230, 80, 61));
        pushButton_9 = new QPushButton(CalculatorForm);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(200, 230, 80, 61));
        pushButton_10 = new QPushButton(CalculatorForm);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(290, 230, 80, 61));
        pushButton_11 = new QPushButton(CalculatorForm);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(290, 90, 80, 61));
        pushButton_12 = new QPushButton(CalculatorForm);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(290, 160, 80, 61));
        pushButton_13 = new QPushButton(CalculatorForm);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(290, 20, 80, 61));
        pushButton_14 = new QPushButton(CalculatorForm);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(200, 20, 80, 61));

        retranslateUi(CalculatorForm);

        QMetaObject::connectSlotsByName(CalculatorForm);
    } // setupUi

    void retranslateUi(QWidget *CalculatorForm)
    {
        CalculatorForm->setWindowTitle(QCoreApplication::translate("CalculatorForm", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("CalculatorForm", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CalculatorForm", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CalculatorForm", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CalculatorForm", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CalculatorForm", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("CalculatorForm", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("CalculatorForm", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("CalculatorForm", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("CalculatorForm", "9", nullptr));
        pushButton_10->setText(QCoreApplication::translate("CalculatorForm", "0", nullptr));
        pushButton_11->setText(QCoreApplication::translate("CalculatorForm", "*", nullptr));
        pushButton_12->setText(QCoreApplication::translate("CalculatorForm", "/", nullptr));
        pushButton_13->setText(QCoreApplication::translate("CalculatorForm", "-", nullptr));
        pushButton_14->setText(QCoreApplication::translate("CalculatorForm", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorForm: public Ui_CalculatorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORFORM_H
