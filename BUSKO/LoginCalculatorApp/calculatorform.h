#ifndef CALCULATORFORM_H
#define CALCULATORFORM_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>

class CalculatorForm : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatorForm(QWidget *parent = nullptr);
    ~CalculatorForm();

private slots:
    void onButtonClicked();

private:
    QLineEdit *display;
    QGridLayout *layout;
    QPushButton* createButton(const QString &text);
};

#endif // CALCULATORFORM_H
