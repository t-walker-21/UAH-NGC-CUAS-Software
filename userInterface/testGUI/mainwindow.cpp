#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("No drone detected");
     proc = new QProcess();
     proc->startDetached("sh hello.sh");

}

MainWindow::~MainWindow()
{
    delete ui;
}
