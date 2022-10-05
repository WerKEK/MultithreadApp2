#ifndef THREADCREATOR_H
#define THREADCREATOR_H

#include <QThread>
#include <QObject>
#include <task.h>

class ThreadCreator : public QThread
{   

public:
    explicit ThreadCreator(QObject *parent = nullptr);

    void run();
    void createTh(QObject*);

    QObject* widget;
    Task* task;

public slots:
    void changeStateStarted();
    void changeStateFinished();

};

#endif // THREADCREATOR_H
