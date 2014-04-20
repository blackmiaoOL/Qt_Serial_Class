#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MQS=new MQSerial();
    ui->tabWidget->insertTab(1,MQS,QString("MQS"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
