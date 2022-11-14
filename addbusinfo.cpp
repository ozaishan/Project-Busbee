#include "addbusinfo.h"
#include "ui_addbusinfo.h"
#include <QDebug>

Addbusinfo::Addbusinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Addbusinfo)
{
    ui->setupUi(this);
    this->setFixedSize(610,333);
    Businfo= QSqlDatabase::addDatabase("QSQLITE");
   Businfo.setDatabaseName("C:/Users/acer/Desktop/Database/BusBee.db");
   if (!Businfo.open()){
      qDebug("failed");
   }else{
      qDebug("sucessfool");
      if (!Businfo.open()){
ui->Label_Status->setText("Failed to open the data base");
      }else{
ui->Label_Status->setText("Connected sucessfully");
  }

}
}

Addbusinfo::~Addbusinfo()
{
    delete ui;
}



