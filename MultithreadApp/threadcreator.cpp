#include "threadcreator.h"
#include "task.h"
#include <QDebug>
#include "ui_mainwindow.h"

ThreadCreator::ThreadCreator(QObject *parent) : QThread(parent)
{
    task = new Task();
    start();
}

ThreadCreator::~ThreadCreator()
{
    delete task;
}

void ThreadCreator::run()
{
   qDebug() << currentThreadId();
   task->complete(); //Переопределяем ран при запуске потока, чтобы он запускал выполнение таска
}

void ThreadCreator::createTh()
{

}


