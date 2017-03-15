#ifndef LOG_H
#define LOG_H

#include <QObject>
#include <QFile>

class Log : public QObject
{
    Q_OBJECT
public:
    explicit Log(QObject *parent = 0);

private:
    QFile* logFile;


public slots:
};

#endif // LOG_H
