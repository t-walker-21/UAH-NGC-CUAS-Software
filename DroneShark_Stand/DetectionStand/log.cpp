#include "log.h"

Log::Log(QObject *parent) : QObject(parent)
{
    this->logFile = new QFile();

}


void Log::startRecording()
{
    if (logFile->isOpen())
        return;
    timeStamp = QTime::currentTime();
    date = QDate::currentDate();

    //qDebug() <<


    logFile->setFileName("../../Logs/Log_" + date.toString("MMM-dd-yyyy") + "_" + timeStamp.toString("hh-mm-ss"));
    logFile->open(QIODevice::ReadWrite);

    logFile->write("USER: " + qgetenv("USER"));
    logFile->write("\nThis is where the data will go");

}

void Log::stopRecording()
{
    if (logFile->isOpen())
    {
        logFile->close();
    }

}

Log::~Log()
{
    if (logFile->isOpen())
        logFile->close();

    delete logFile;
}
