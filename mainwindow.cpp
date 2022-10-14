#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"canceldialog.h"
#include<QMessageBox>
#include "choice_window.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{

    hide();
    c= new Canceldialog(this);
    c->show();
}


void MainWindow::on_pushButton_clicked()
{
    if (ui->checkBox->isChecked())
    {
        hide();
        ch = new choice_window(this);
        ch->show();
    }
    else
    {
        QMessageBox::information(this, "Error-404!", "You havent agreed terms and conditions of BusBee");
    }
}

