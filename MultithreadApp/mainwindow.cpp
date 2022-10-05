#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <threadcreator.h>
#include <task.h>
#include <QVector>
#include <QListWidget>
#include <QWidget>
#include <QObject>

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

void MainWindow::on_pushButton_clicked()
{
    for (auto checkbox : MainWindow::findChildren<QCheckBox *>()) { //Ищем все чекбоксы
        if(checkbox->isChecked()){      //Проверка, чекед они или нет
            th = new ThreadCreator();
            th->createTh(checkbox); //Передаём родительский виджет
        }
    }
}


