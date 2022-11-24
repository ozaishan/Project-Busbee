#include "userlogin.h"
#include "ui_userlogin.h"

Userlogin::Userlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Userlogin)
{
    ui->setupUi(this);
    this->setFixedSize(610,333);

}

Userlogin::~Userlogin()
{
    delete ui;
}
