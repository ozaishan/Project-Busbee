#include "userpage.h"
#include "ui_userpage.h"
#include "userwindow.h"
#include "viewbusinfo.h"
userwindow *us2;
viewbusinfo *vb1;
Userpage::Userpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Userpage)
{
    ui->setupUi(this);
    this->setFixedSize(610,333);
}

Userpage::~Userpage()
{
    delete ui;
}

void Userpage::on_pushButton_clicked()
{
  this->hide();
  us2 = new userwindow();
  us2->show();



}


void Userpage::on_pushButton_show_clicked()
{
    this->hide();
    vb1 = new viewbusinfo();
    vb1->show();
}

