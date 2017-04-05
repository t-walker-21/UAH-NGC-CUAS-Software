#ifndef ALERT_H
#define ALERT_H

#include <QObject>
#include"alertdialog.h"
#include<QProcess>
#include<QTimer>

#define SCNPER 500
#define DETPER 250

class Alert : public QObject
{
    Q_OBJECT
public:
    explicit Alert(QObject *parent = 0);
    void killAllLights(bool killTimer); //turn of all lights and buzzer

       ~Alert();



private:

    void checkHardware(); //check to sure hardware peripherals are still attached

    AlertDialog* alertWindow; //GUI window presented upon drone detection to give user information/options to engage threat UAV

    //keep track of lights/buzzer state
    bool YELLOW_STATE;
    bool GREEN_STATE;
    bool RED_STATE;
    bool BUZZER_STATE;
    bool YELLOW;
    bool GREEN;
    bool RED;
    bool BUZZER;

    //processes to drive lights/buzzer
    QProcess* redProc;
    QProcess* yellowProc;
    QProcess* greenProc;
    QProcess* buzzerProc;
    QProcess* initProc; //TODO: replace with master initialization process called on startup
    QTimer* flashTimer;

public slots:
    void toggleLights();
    void greenToggle();
    void yellowToggle();
    void redToggle();
    void buzzerToggle();
    void standby(); //solid green light
    void droneDetected(); //flash red and sound buzzer @ 4 Hz
    void scanning(); //flash yellow @ 1 Hz
    void deployGUI(); // show alert GUI when alert is signaled
};

#endif // ALERT_H
