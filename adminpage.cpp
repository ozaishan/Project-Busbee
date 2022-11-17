#include "adminpage.h"
#include "ui_adminpage.h"
#include "addbusinfo.h"
#include "adminlogin.h"

adminpage::adminpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminpage)
{
    ui->setupUi(this);
    this->setFixedSize(610,333);
}

adminpage::~adminpage()
{
    delete ui;
}

void adminpage::on_pushButton_clicked() // add bus information
{
  hide();

  Addbusinfo businfoopen;
  businfoopen.setModal(true);
  businfoopen.exec();

}


void adminpage::on_pushButton_3_clicked()
{
    close();
    adminlogin loginfoopen;
    loginfoopen.setModal(true);
    loginfoopen.exec();
}

