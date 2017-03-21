#ifndef SHARK_H
#define SHARK_H

#include <QObject>
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
    AttackVector* aVector; // attack vector to engage enemy drone
    DetectionVector* dVector; // detection vector to sense enemy drone
    void disableAttack(); // set ability to attack drones
    void disableDetect(); // set ability to detect drones


private:
    bool autoTakedown; // option to automatically engage drone upon detection
    bool attackEnabled; // option to enable/disable attack vector(s)
    bool detectEnabled; // opttion to enable/disable detect vector(s)



public slots:
};

#endif // SHARK_H
