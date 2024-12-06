/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *label_2;
    QPushButton *LoginButton;
    QLabel *label;

    void setupUi(QDialog *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName("LoginForm");
        LoginForm->resize(400, 300);
        layoutWidget = new QWidget(LoginForm);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 32, 301, 211));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        usernameLineEdit = new QLineEdit(layoutWidget);
        usernameLineEdit->setObjectName("usernameLineEdit");

        gridLayout->addWidget(usernameLineEdit, 1, 0, 1, 2);

        passwordLineEdit = new QLineEdit(layoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");

        gridLayout->addWidget(passwordLineEdit, 3, 0, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        LoginButton = new QPushButton(layoutWidget);
        LoginButton->setObjectName("LoginButton");

        gridLayout->addWidget(LoginButton, 4, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QDialog *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("LoginForm", "Password", nullptr));
        LoginButton->setText(QCoreApplication::translate("LoginForm", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginForm", "Username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
