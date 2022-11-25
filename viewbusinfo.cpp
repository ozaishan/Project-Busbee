#include "viewbusinfo.h"
#include "ui_viewbusinfo.h"

viewbusinfo::viewbusinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewbusinfo)
{
    ui->setupUi(this);
    this->setFixedSize(610,333);
}

viewbusinfo::~viewbusinfo()
{
    delete ui;
}
