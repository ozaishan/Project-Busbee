#include "adminpage.h"
#include "ui_adminpage.h"

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
