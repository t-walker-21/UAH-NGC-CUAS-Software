#ifndef LOG_H
#define LOG_H

#include <QObject>
#include <QFile>
#include <QTime>

class Log : public QObject
{
    Q_OBJECT
public:
    explicit Log(QObject *parent = 0);

private:
    QFile* logFile; //file to hold information about current shark operation
    QTime* timeStamp; //object to store information about time
    QString user; //QString script,int level,QString name
    bool createNewLogFile(); //function to create a new Log file. returns TRUE/FALSE if successful

    /*QTime time = QTime::currentTime();
    QString te = time.toString("hh:mm:ss");*/

public slots:
};

#endif // LOG_H
