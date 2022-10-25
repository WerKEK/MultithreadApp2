#include "task.h"
#include <QDebug>

Task::Task()
{

}

void Task::complete() //Метод отвечает за каждый такс, наверно, можно было сделать это через механику сигналов и слотов.
{
    emit started(); //Отправляем сигнал, что задача началась
    qDebug() << "Started";
    QThread::sleep(2); //Эмуляция вычислений/выполениня задачи
    qDebug() << "Finished";
    emit finished(); //Отправляем сигнал, что задача закончилась
}





