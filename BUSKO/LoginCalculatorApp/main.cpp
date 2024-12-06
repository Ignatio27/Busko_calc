#include <QApplication>
#include "loginform.h"
#include "calculatorform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    LoginForm loginWindow;


    if (loginWindow.exec() == QDialog::Accepted) {

        CalculatorForm calculatorWindow;
        calculatorWindow.show();

        return a.exec();
    }

    return 0;
}
