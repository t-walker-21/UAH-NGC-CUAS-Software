#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QSerialPort>
#include <mainmenu.h>
#include <QTime>
#include <shark.h>
#include <alert.h>

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

    MainMenu* mainMenu;
    int bufferCount;
    QString* receivedData;
    Shark* shark;
    Alert* alert;


private slots:
    void goToMainMenu();
    void sendData();
    void populateLineEdit();
    void receiveDetect();
};

#endif // MAINWINDOW_H
