#ifndef TASK_H
#define TASK_H

#include <QThread>
#include <QObject>

class Task : public QObject
{
    Q_OBJECT

public:
    Task();
    void taskCompletion();
    QString getState();

signals:
    void started();
    void finished();


};

#endif // TASK_H
