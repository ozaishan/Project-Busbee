#include "deletetickets.h"
#include "ui_deletetickets.h"
#include <QMessageBox>

Deletetickets::Deletetickets(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Deletetickets)
{
    ui->setupUi(this);
}

Deletetickets::~Deletetickets()
{
    delete ui;
}




void Deletetickets::on_pushButton_clicked()
{

    deltic= QSqlDatabase::addDatabase("QSQLITE");
  deltic.setDatabaseName("C:/Users/acer/Desktop/Database/user_info.db");
   if (!deltic.open()){
      qDebug("failed");
   }else{
      qDebug("sucessfool"); }
    QSqlQuery query;
    query.prepare("Delete from ticket_info where username= "+ui->lineEdit->text()+"  ");

    if(query.exec()){
        qDebug("sucess deleting data ");
        QMessageBox::critical(this, "DELETED", "data deleted");
    }
    deltic.close();
}

