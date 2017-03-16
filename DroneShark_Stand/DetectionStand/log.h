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
    QFile* logFile;
    QTime* timeStamp;
    QString user; //QString script,int level,QString name
    bool createNewLogFile();



public slots:
};

#endif // LOG_H
