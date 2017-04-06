#include "detectionvector.h"

DetectionVector::DetectionVector(QObject *parent) : QObject(parent)
{
    engage = new QProcess();
    engageTimer = new QTimer();
    engageTimer->setInterval(500);
    installed = false;

    connect(engageTimer,SIGNAL(timeout()),this,SLOT(runEngageScript()));
    connect(engage,SIGNAL(readyReadStandardOutput()),this,SLOT(checkScriptResult()));

}

void DetectionVector::installDetection(QString script, QString name,QString expect)
{
    this->script = script;
    this->name = name;
    this->expect = expect;
    installed = true;
}

void DetectionVector::detect()
{
    if (installed)
    {

        engageTimer->start();
        qDebug() << "Running script";
        running = true;
    }
    else
    {
        qDebug() << "No Script installed on detection vector\n";
    }

}

void DetectionVector::runEngageScript()
{
    //engage->start("sh " + script);
    engage->start("sh ../../Scripts/myGrep.sh");
}

void DetectionVector::haltDetect()
{
    engageTimer->stop();

    if (engage->isOpen())
    {
        engage->kill();
    }
    running = false;
}

void DetectionVector::checkScriptResult()
{
    //qDebug() << "hello?";
    QString input;
    input = engage->readAllStandardOutput();
    //qDebug() << input;

    if (input == expect)
    {
        emit droneDetected();
        haltDetect();
    }
}

DetectionVector::~DetectionVector()
{
    delete engage;
    delete engageTimer;
}

QString DetectionVector::getName()
{
    return name;
}
