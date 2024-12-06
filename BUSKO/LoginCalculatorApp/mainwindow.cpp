#include "mainwindow.h"
#include "loginform.h"
#include "calculatorform.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Создаем объекты для форм логина и калькулятора
    LoginForm *loginForm = new LoginForm(this);  // Создаем форму логина
    CalculatorForm *calculatorForm = new CalculatorForm(this);  // Создаем форму калькулятора

    // Показываем только форму логина при запуске программы
    loginForm->show();  // Показать форму логина

    // Когда логин успешен, скрываем логин и показываем калькулятор
    connect(loginForm, &LoginForm::loginSuccess, [loginForm, calculatorForm]() {
        loginForm->hide();  // Скрываем форму логина
        calculatorForm->show();  // Показываем форму калькулятора
    });
}

MainWindow::~MainWindow()
{
}
