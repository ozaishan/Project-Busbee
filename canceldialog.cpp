#include "canceldialog.h"
#include "ui_canceldialog.h"
#include "mainwindow.h"

MainWindow *mainw;

Canceldialog::Canceldialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Canceldialog)
{
    ui->setupUi(this);
}

Canceldialog::~Canceldialog()
{
    delete ui;
}



void Canceldialog::on_Cancel_no_clicked()
{
    hide();
    mainw = new MainWindow(this);
    mainw->show();
}


void Canceldialog::on_cancel_yes_clicked()
{
    close();
    mainw->close();
}

