#include "threadcreator.h"
#include "task.h"
#include <QDebug>
#include "ui_mainwindow.h"

ThreadCreator::ThreadCreator(QObject *parent) : QThread(parent)
{

}

void ThreadCreator::run()
{
   task->taskCompletion(); //Переопределяем ран при запуске потока, чтобы он запускал выполнение таска
}

void ThreadCreator::createTh(QObject* newWidget)
{
    task = new Task();
    widget = newWidget;//Создаем новый поток и запускаем его

    connect(task,&Task::started, this, &ThreadCreator::changeStateStarted); //Соединяем сигнал старта с методом, который изменяет статус
    connect(task,&Task::finished, this, &ThreadCreator::changeStateFinished); //То же, только с финишем

    start();
}

void ThreadCreator::changeStateStarted() //Слоты для сигнала
{
    widget->parent()->findChild<QLabel*>()->setText("Started"); //Находим лейбл у объекта и изменяем его текст
}

void ThreadCreator::changeStateFinished()
{
    widget->parent()->findChild<QLabel*>()->setText("Finished"); //Находим лейбл у объекта и изменяем его текст
}

