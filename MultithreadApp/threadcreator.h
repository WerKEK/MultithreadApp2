#ifndef THREADCREATOR_H
#define THREADCREATOR_H

#include <QThread>
#include <QObject>
#include <task.h>

class ThreadCreator : public QThread
{   

public:
    explicit ThreadCreator(QObject *parent = nullptr);
    ~ThreadCreator();


    void createTh();


private:
    QObject* widget;
    Task* task;

    void run();


};

#endif // THREADCREATOR_H
