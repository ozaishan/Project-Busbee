#include "userpage.h"
#include "ui_userpage.h"
#include "userwindow.h"
userwindow *us2;

Userpage::Userpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Userpage)
{
    ui->setupUi(this);
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

