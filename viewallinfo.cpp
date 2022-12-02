#include "viewallinfo.h"
#include "ui_viewallinfo.h"
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include "adminpage.h"
adminpage *apo;

viewallinfo::viewallinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewallinfo)
{
    ui->setupUi(this);
     this->setFixedSize(610,333);

}

viewallinfo::~viewallinfo()
{
    delete ui;
}

void viewallinfo::on_pushButton_load_clicked()
{
      QSqlQueryModel * modal = new QSqlQueryModel();
      allinfo= QSqlDatabase::addDatabase("QSQLITE");
    allinfo.setDatabaseName("C:/Users/acer/Desktop/Database/user_info.db");
     if (!allinfo.open()){
        qDebug("failed");
     }else{
        qDebug("sucessfool"); }
    QSqlQuery  * qry = new QSqlQuery(allinfo);
    qry->prepare("select * from driverinfo");
    qry->exec();
    modal->setQuery(std::move(*qry));
    ui->tableView->setModel(modal);
    allinfo.close();

}


void viewallinfo::on_pushButton_clicked()
{
    allinfo= QSqlDatabase::addDatabase("QSQLITE");
  allinfo.setDatabaseName("C:/Users/acer/Desktop/Database/user_info.db");
   if (!allinfo.open()){
      qDebug("failed");
   }else{
      qDebug("sucessfool"); }
    QSqlQuery qry;
    qry.prepare("DELETE FROM driverinfo WHERE EID = "+ui->lineEdit->text()+" ");
    if(qry.exec()){
        qDebug("sucess deleting data ");
        QMessageBox::information(this, "DELETED", "data deleted");
    }
    allinfo.close();
}


void viewallinfo::on_pushButton_2_clicked()
{
    this->hide();
    apo = new adminpage();
    apo->show();
}

