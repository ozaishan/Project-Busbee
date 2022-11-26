#include "adminpage.h"
#include "ui_adminpage.h"
#include "addbusinfo.h"
#include "choice_window.h"
#include "addbusinfo.h"
#include "viewuserinfo.h"
#include "viewbookedticketsinfo.h"
viewuserinfo *vsi;
choice_window *ch2;
viewbookedticketsinfo *vbti;
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


void adminpage::on_pushButton_5_clicked()
{
    this->hide();
    vsi = new viewuserinfo();
    vsi->show();
}


void adminpage::on_pushButton_6_clicked()
{
    this->hide();
    vbti = new viewbookedticketsinfo();
    vbti->show();
}

