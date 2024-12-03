#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter++;
    updateCount(counter);
}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    updateCount(counter);
}

void MainWindow::updateCount(int count)
{
    // Asettaa numeron UI:hin
    QString counterAsString = QString::number(count);

    ui->labelInfo->setText("Painiketta painettu " + counterAsString + " kertaa");
    ui->txtResult->setText(counterAsString);
}
