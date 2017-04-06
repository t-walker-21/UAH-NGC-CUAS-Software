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


    logFile->setFileName("../../Logs/Log_" + date.toString("MMM-dd-yyyy") + "_" + timeStamp.toString("hh-mm-ss") + ".txt");
    logFile->open(QIODevice::ReadWrite);


    logFile->write("DRONESHARK SYSTEM STARTED BY USER: " + qgetenv("USER") + "\n");

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

void Log::recordDetectedDrone(QString message)
{
        timeStamp = QTime::currentTime();
        QString mess = message + " DETECTED AT " + timeStamp.toString("hh:mm:ss") + "\n";
        logFile->write(mess.toStdString().c_str());
}
