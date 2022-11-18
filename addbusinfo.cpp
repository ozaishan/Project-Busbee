#include "addbusinfo.h"
#include "ui_addbusinfo.h"
#include "adminpage.h"
#include <QDebug>
#include <QMessageBox>
//adminpage *Ap;

Addbusinfo::Addbusinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Addbusinfo)
{
    ui->setupUi(this);
    this->setFixedSize(610,333);

 ui->Label_Status->setText("STATUS : ...");

}

Addbusinfo::~Addbusinfo()
{
    delete ui;
}




void Addbusinfo::on_GoBack_clicked()
{
    hide();
    adminpage pageopen;
    pageopen.setModal(true);
    pageopen.exec();
}


void Addbusinfo::on_Push_save_clicked()
{
    Businfo= QSqlDatabase::addDatabase("QSQLITE");
   Businfo.setDatabaseName("C:/Users/acer/Desktop/Database/BusBee.db");
   if (!Businfo.open()){
      qDebug("failed");
   }else{
      qDebug("sucessfool"); }
      if (!Businfo.open()){
ui->Label_Status->setText("Failed to open the data base");
      }else{
ui->Label_Status->setText("Connected sucessfully"); }

      QString query = "CREATE TABLE driverinfo("
                      "NAME VARCHAR(20),"
                      "EID integer,"
                      "BUSNO VARCHAR(20));";
      QString Drivername = ui->lineEdit->text();
      QString eid = ui->lineEdit_2->text();
      QString Busno = ui->lineEdit_3->text();
      QSqlQuery qry;
      qry.prepare("INSERT INTO driverinfo("
                  "NAME,"
                  "EID,"
                  "BUSNO)"
                  "VALUES(:NAME,:EID,:BUSNO);");

      qry.bindValue(":NAME", Drivername);
      qry.bindValue(":EID", eid);
      qry.bindValue(":BUSNO", Busno);
      if(qry.exec()){
          qDebug("sucess updating data ");
          QMessageBox::critical(this, "Saved", "Sucess updating data");
      }
      else{
          QMessageBox::critical(this, " not Saved", "error updating data");
      }

      if(!qry.exec(query)){
          qDebug("error creating table // it may already exxist");
      }
      Businfo.close();

      qDebug("Db.closed");

}
