#include "alert.h"

Alert::Alert(QObject *parent) : QObject(parent)
{
    initProc = new QProcess();
    //initProc->start("..."); //TODO:init light script

        YELLOW = false;
        GREEN = false;
        RED = false;
        BUZZER = false;

        redProc = new QProcess();
        yellowProc = new QProcess();
        greenProc = new QProcess();
        buzzerProc = new QProcess();
        flashTimer = new QTimer();

        connect(flashTimer,SIGNAL(timeout()),this,SLOT(toggleLights()));
        delete initProc;
}

Alert::~Alert()
{
    delete redProc;
    delete yellowProc;
    delete greenProc;
    delete buzzerProc;
    delete flashTimer;
}

void Alert::buzzerToggle()
{
    if (BUZZER) //light is on
    {
        buzzerProc->start("sh ../../Scripts/BUZZER_OFF.sh");
        BUZZER = false;
    }

    else //light is off
    {
        buzzerProc->start("sh ../../Scripts/BUZZER_ON.sh");
        BUZZER = true;
    }
}

void Alert::yellowToggle()
{
    if (YELLOW) //light is on
    {
        yellowProc->start("sh ../../Scripts/YELLOW_OFF.sh");
        YELLOW = false;
    }

    else //light is off
    {
        yellowProc->start("sh ../../Scripts/YELLOW_ON.sh");
        YELLOW = true;
    }
}

void Alert::greenToggle()
{
    if (GREEN) //light is on
    {
        greenProc->start("sh ../../Scripts/GREEN_OFF.sh");
        GREEN = false;
    }

    else //light is off
    {
        greenProc->start("sh ../../Scripts/GREEN_ON.sh");
        GREEN = true;
    }

}

void Alert::redToggle()
{
    if (RED) //light is on
    {
        redProc->start("sh ../../Scripts/RED_OFF.sh");
        RED = false;
    }

    else //light is off
    {
        redProc->start("sh ../../Scripts/RED_ON.sh");
        RED = true;
    }


}

void Alert::toggleLights()
{
    if (RED)
    {
        redToggle();
    }

    if (YELLOW)
    {
        yellowToggle();
    }

    if (GREEN)
    {
       greenToggle();
    }

    if (BUZZER)
    {
        buzzerToggle();
    }
}

void Alert::scanning() //only yellow will flash
{
    flashTimer->setInterval(SCNPER);
    killAllLights(false);


    RED = GREEN = BUZZER = false;
    YELLOW = true;
}

void Alert::standby() //only green is solid
{

    killAllLights(true);

    if(!GREEN)
    {
        greenToggle();
    }
}

void Alert::droneDetected() //only red and buzzer will flash
{
    flashTimer->setInterval(DETPER);
    killAllLights(false);
    RED = BUZZER = true;
}

void Alert::killAllLights(bool killTimer) //turnoff all lights
{
    if(killTimer && flashTimer->isActive())
    {
        flashTimer->stop();
    }

    if(GREEN)
    {
        greenToggle();

    }

    if(RED)
    {
        redToggle();

    }

    if(YELLOW)
    {
        yellowToggle();

    }

    if(BUZZER)
    {
        buzzerToggle();

    }

}

void Alert::deployGUI() //setup and show alertWindow;
{
    alertWindow = new AlertDialog();
    alertWindow->showFullScreen();
    //temp->setModal(false);
}

void Alert::checkHardware() //check for hardware
{

}
