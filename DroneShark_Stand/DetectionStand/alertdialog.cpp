#include "alertdialog.h"
#include "ui_alertdialog.h"

AlertDialog::AlertDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlertDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Drone Found!");
}

AlertDialog::~AlertDialog()
{
    delete ui;
}
