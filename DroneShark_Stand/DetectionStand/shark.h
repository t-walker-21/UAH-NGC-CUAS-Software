#ifndef SHARK_H
#define SHARK_H

#include <QObject>
#include <QQueue>
#include"attackvector.h"
#include"detectionvector.h"

class Shark : public QObject
{
    Q_OBJECT
public:
    explicit Shark(QObject *parent = 0);

    void setAutoTakedown(bool state); // set option to automatically engage drone upon detection
    void bite(); // run attack vector
    void stopBite(); // stop attack vector
    void startShark(); //start shark operation
    void stopShark(); //stop shark operation

    void disableAttack(); // set ability to attack drones
    void disableDetect(); // set ability to detect drones
    void installDetection(QString script,QString name,QString expect); // name vector, place script in object, and set attack level

private:
    bool autoTakedown; // option to automatically engage drone upon detection
    bool attackEnabled; // option to enable/disable attack vector(s)
    bool detectEnabled; // opttion to enable/disable detect vector(s)
    QQueue<AttackVector> aVectors;
    AttackVector* aVector; // attack vector to engage enemy drone
    QQueue<DetectionVector> dVectors;
    DetectionVector* dVector; // detection vector to sense enemy drone

signals:
    void droneDetected(QString message);


public slots:
    void alertSys();
};

#endif // SHARK_H
