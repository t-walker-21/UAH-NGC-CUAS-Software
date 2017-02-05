#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QDebug>
#include <QTimer>
#include <fstream>
#include <string>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QProcess* scanProc; //process to start airDump
    QProcess* checkProc; //process to check dump file
    QProcess* prepProc; //process to remove dump files and take down wlan0
    QProcess* attackDjiProc;
    QTimer* checkTimer; //timer to run checkProc
    void attackDjiTelem(QString &address); //deauth transmitter AP and shutdown down telemetry
    std::ifstream fin;
    // bool droneFound; //change to ENUM
    QString macAddr;

private slots:
    void readScript(); //slot to read from script output
    void runCheck(); //run checkProc script

};

#endif // MAINWINDOW_H
