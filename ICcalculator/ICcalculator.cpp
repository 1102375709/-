#include "ICcalculator.h"
#include "ui_ICcalculator.h"
#include <QGridLayout>
#include <QVBoxLayout>
#include <QQueue>
#include <QStack>
#include <QStackedWidget>

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/images/mainIco.ico"));
    new_date=new Date;
    new_science=new science;
    new_programmer=new Programmer;


    ui->stackedWidget->addWidget(new_date);
    ui->stackedWidget->addWidget(new_science);
    ui->stackedWidget->addWidget(new_programmer);


    ui->stackedWidget->setCurrentWidget(new_science);

    connect(ui->actiondate,&QAction::triggered,this,&Calculator::open_date);
    connect(ui->actionscience,&QAction::triggered,this,&Calculator::open_science);
    connect(ui->actionprogrammer,&QAction::triggered,this,&Calculator::open_programmer);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::open_science()
{
    ui->stackedWidget->setCurrentWidget(new_science);
}

void Calculator::open_date()
{
    ui->stackedWidget->setCurrentWidget(new_date);
}

void Calculator::open_programmer()
{
    ui->stackedWidget->setCurrentWidget(new_programmer);
}

