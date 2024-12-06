#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QDialog>

namespace Ui {
class LoginForm;
}

class LoginForm : public QDialog
{
    Q_OBJECT  // Не забудь добавить этот макрос для работы с сигналами и слотами

public:
    explicit LoginForm(QWidget *parent = nullptr);
    ~LoginForm();

signals:
    void loginSuccess();

private slots:
    void on_LoginButton_clicked();

private:
    Ui::LoginForm *ui;
};

#endif
