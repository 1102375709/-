#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include "science.h"
#include "date.h"
#include "programmer.h"

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void open_date();
    void open_science();
    void open_programmer();

private:
    Ui::Calculator *ui;
    Date *new_date;
    science *new_science;
    Programmer *new_programmer;

};

#endif // CALCULATOR_H
