#include "alertdialog.h"
#include "ui_alertdialog.h"

AlertDialog::AlertDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlertDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("DroneShark Alert");
    fadeTimer = new QTimer();
    fadeTimer->setInterval(1000);
    timerCount = 0;
    connect(fadeTimer,SIGNAL(timeout()),this,SLOT(updateOpacity()));

    fadeTimer->start();
}


AlertDialog::~AlertDialog()
{
    delete ui;
}

void AlertDialog::updateOpacity()
{
    if(timerCount == 1)
    {
        fadeTimer->setInterval(20);
        float temp = this->windowOpacity();
        if (temp == 0)
        {
            fadeTimer->stop();
            this->close();
        }


        else
        {
            this->setWindowOpacity(temp-0.02);
        }
    }

    else
    {
        timerCount++;
    }
}
