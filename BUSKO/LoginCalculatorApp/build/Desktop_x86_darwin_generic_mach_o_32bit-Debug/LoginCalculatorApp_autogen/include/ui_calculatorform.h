/********************************************************************************
** Form generated from reading UI file 'calculatorform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORFORM_H
#define UI_CALCULATORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorForm
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *displayLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *equalButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *clearButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;

    void setupUi(QWidget *CalculatorForm)
    {
        if (CalculatorForm->objectName().isEmpty())
            CalculatorForm->setObjectName("CalculatorForm");
        CalculatorForm->resize(400, 353);
        widget = new QWidget(CalculatorForm);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 361, 301));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        displayLineEdit = new QLineEdit(widget);
        displayLineEdit->setObjectName("displayLineEdit");
        displayLineEdit->setReadOnly(true);

        gridLayout->addWidget(displayLineEdit, 0, 0, 1, 4);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        equalButton = new QPushButton(widget);
        equalButton->setObjectName("equalButton");

        gridLayout->addWidget(equalButton, 1, 3, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName("clearButton");

        gridLayout->addWidget(clearButton, 2, 3, 1, 1);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");

        gridLayout->addWidget(pushButton_9, 3, 2, 1, 1);

        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName("pushButton_10");

        gridLayout->addWidget(pushButton_10, 3, 3, 1, 1);

        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName("pushButton_14");

        gridLayout->addWidget(pushButton_14, 4, 0, 1, 1);

        pushButton_13 = new QPushButton(widget);
        pushButton_13->setObjectName("pushButton_13");

        gridLayout->addWidget(pushButton_13, 4, 1, 1, 1);

        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName("pushButton_11");

        gridLayout->addWidget(pushButton_11, 4, 2, 1, 1);

        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName("pushButton_12");

        gridLayout->addWidget(pushButton_12, 4, 3, 1, 1);


        retranslateUi(CalculatorForm);

        QMetaObject::connectSlotsByName(CalculatorForm);
    } // setupUi

    void retranslateUi(QWidget *CalculatorForm)
    {
        CalculatorForm->setWindowTitle(QCoreApplication::translate("CalculatorForm", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("CalculatorForm", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CalculatorForm", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CalculatorForm", "3", nullptr));
        equalButton->setText(QCoreApplication::translate("CalculatorForm", "=", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CalculatorForm", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CalculatorForm", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("CalculatorForm", "6", nullptr));
        clearButton->setText(QCoreApplication::translate("CalculatorForm", "CLEAR", nullptr));
        pushButton_7->setText(QCoreApplication::translate("CalculatorForm", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("CalculatorForm", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("CalculatorForm", "9", nullptr));
        pushButton_10->setText(QCoreApplication::translate("CalculatorForm", "0", nullptr));
        pushButton_14->setText(QCoreApplication::translate("CalculatorForm", "+", nullptr));
        pushButton_13->setText(QCoreApplication::translate("CalculatorForm", "-", nullptr));
        pushButton_11->setText(QCoreApplication::translate("CalculatorForm", "*", nullptr));
        pushButton_12->setText(QCoreApplication::translate("CalculatorForm", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorForm: public Ui_CalculatorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORFORM_H
