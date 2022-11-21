#include "adminpage.h"
#include "ui_adminpage.h"
#include "addbusinfo.h"
#include "choice_window.h"
#include "addbusinfo.h"
choice_window *ch2;
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

    this->hide();
    ch2 = new choice_window();
    ch2->show();

}


void adminpage::on_pushButton_4_clicked()
{
    hide();
    addrouteinfo routeinfoopen;
    routeinfoopen.setModal(true);
    routeinfoopen.exec();
}


void adminpage::on_pushButton_2_clicked()
{
    hide();
    viewallinfo viewinfo;
    viewinfo.setModal(true);
    viewinfo.exec();
}

