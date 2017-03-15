#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QSerialPort>
#include <mainmenu.h>

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
    QSerialPort* xbee;
    bool configureSerialPort();
    MainMenu* mainMenu;
    int bufferCount;
    QString* receivedData;


private slots:
    void goToMainMenu();
    void sendData();
    void populateLineEdit();
};

#endif // MAINWINDOW_H
