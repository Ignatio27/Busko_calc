#include "loginform.h"
#include "ui_loginform.h"
#include <QHBoxLayout>
LoginForm::LoginForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
    ui->gridLayout->addWidget(ui->LoginButton,4,0,Qt::AlignHCenter);
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_LoginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username == "ignat" && password == "0000") {
        emit loginSuccess();  // Отправляем сигнал об успешном логине
        this->accept();
    }
}
