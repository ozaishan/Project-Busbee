#include "userpage.h"
#include "ui_userpage.h"
#include "userwindow.h"
#include "viewbusinfo.h"
#include "seatbooking.h"
#include "deletetickets.h"
userwindow *us2;
viewbusinfo *vb1;
Seatbooking *sb1;
Deletetickets *dl1;

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


void Userpage::on_pushButton_MY_clicked()
{
    this->hide();
    sb1 = new Seatbooking();
    sb1->show();

}


void Userpage::on_pushButton_cancel_clicked()
{

    dl1 = new Deletetickets(this);
    dl1->show();
}

