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
    void installDetection(QString script,QString name,QString expect);
    void detect();
    void haltDetect();

private:
    QString name;
    QString script;
    QString expect;
    QProcess* engage;
    QTimer* engageTimer;
    bool running;
    bool installed;

signals:
    void droneDetected();


public slots:
    void checkScriptResult();
    void runEngageScript();
};

#endif // DETECTIONVECTOR_H
