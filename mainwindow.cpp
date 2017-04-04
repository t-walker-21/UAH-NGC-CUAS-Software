#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("No drone detected");
    scanProc = new QProcess();
    readProc = new QProcess();
    timer = new QTimer();
    //prepProc = new QProcess();
    deauthProc = new QProcess();
    timer->setInterval(1000);

    //prepProc->start("sudo sh prep.sh"); // delete previous dump files and take down wlan0
    scanProc->start("sudo sh scan.sh");  // start airodump and save output to file
    timer->start();

    connect(scanProc,SIGNAL(readyReadStandardOutput()),this,SLOT(readScanOutput()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readScanOutput()));    // after 500 ms, read dump file again
}

MainWindow::~MainWindow()
{
    //scanProc->kill();
    //readProc->kill();
    delete ui;
}


void MainWindow::readScanOutput()
{
    QByteArray input;
    readProc->start("sudo bash grep_DJI.bash");
    readProc->waitForFinished();
    input = readProc->readAllStandardOutput();

    if(!input.startsWith("60:60:1F"))
    {
        ui->label->setText("Searching...");
        qDebug() << "Input: " << input;
    }
    else
    {
        qDebug() << "Drone Found: " << input;
        ui->label->setText("DJI Found");
        if (ui->checkBox->isChecked())
        {
          scanProc->kill(); //kill scanning script
          attackDji();
          timer->stop();
        }
    }


}

void MainWindow::attackDji()
{
    deauthProc->start("sudo bash deauth_DJI.bash");
}
