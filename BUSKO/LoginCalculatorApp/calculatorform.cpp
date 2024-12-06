#include "calculatorform.h"

CalculatorForm::CalculatorForm(QWidget *parent)
    : QWidget(parent),
    layout(new QGridLayout(this)),
    display(new QLineEdit(this))
{
    display->setReadOnly(true);
    layout->addWidget(display, 0, 0, 1, 4);

    QString buttons[4][4] = {
        {"7", "8", "9", "/"},
        {"4", "5", "6", "*"},
        {"1", "2", "3", "-"},
        {"0", "Clear", "=", "+"}
    };

    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 4; ++col) {
            QPushButton *button = createButton(buttons[row][col]);
            layout->addWidget(button, row + 1, col);
        }
    }
}

CalculatorForm::~CalculatorForm()
{
    delete layout;
    delete display;
}

QPushButton* CalculatorForm::createButton(const QString &text)
{
    QPushButton *button = new QPushButton(text, this);
    connect(button, &QPushButton::clicked, this, &CalculatorForm::onButtonClicked);
    return button;
}

void CalculatorForm::onButtonClicked()
{

    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString buttonText = button->text();

    if (buttonText == "Clear"
                      "") {
        display->clear();
    } else if (buttonText == "=") {
        display->setText("Result");
    } else {
        display->setText(display->text() + buttonText);
    }
}
