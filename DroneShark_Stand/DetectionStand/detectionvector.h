#ifndef DETECTIONVECTOR_H
#define DETECTIONVECTOR_H

#include <QObject>
#include <QProcess>
#include <QTimer>
#include <QDebug>

class DetectionVector : public QObject
{
    Q_OBJECT
public:
    explicit DetectionVector(QObject *parent = 0);
    ~DetectionVector();
    void installDetection(QString script,QString name,QString expect); // name vector, place script in object, and set attack level
    void detect(); // start detection
    void haltDetect(); // stop detection

private:
    QString name; // name of vector
    QString script; // name of script to run detection
    QString expect; // name of expected output from detection script. i.e. "DJI" for ALFA wifi adapter vector
    QProcess* engage; // process to run script for detection
    QTimer* engageTimer; //timer to run detection
    bool running; // flag to signal if detection is running or not running
    bool installed; // flag to ensure vector is not ran without first having a script issued to it

signals:
    void droneDetected(); //signal to emit when drone is detected. (send to Log, attackVector, and alert objects)


public slots:
    void checkScriptResult(); // slot to be ran when the detection script
    void runEngageScript(); // slot to ran detection script
};

#endif // DETECTIONVECTOR_H
