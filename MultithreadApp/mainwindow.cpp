#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <threadcreator.h>
#include <task.h>

#include <QObject>
#include <QProgressBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit->setValidator(new QIntValidator(0, 1000, this));
}

MainWindow::~MainWindow()
{
    delete th;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(!(getTasksCount() > 0))
        return;

    for (int i = 0; i < getTasksCount(); i++) {
            th = new ThreadCreator();
    }
}

void MainWindow::createTable()
{

}

int MainWindow::getTasksCount()
{
    return ui->lineEdit->text().toInt();
}


