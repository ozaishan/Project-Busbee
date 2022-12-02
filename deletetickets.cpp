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
QString gett = ui->lineEdit->text();
    deltic= QSqlDatabase::addDatabase("QSQLITE");
  deltic.setDatabaseName("C:/Users/acer/Desktop/Database/user_info.db");
   if (!deltic.open()){
      qDebug("failed");
   }else{
      qDebug("sucessfool"); }
    QSqlQuery query;
    query.prepare("DELETE FROM ticket_info WHERE username= :username  ");
    query.bindValue(":username",gett);

    if(query.exec()){
        qDebug("sucess deleting data ");
        QMessageBox::information(this, "DELETED", "data deleted");
    }
    else
    {
        QMessageBox::critical(this,"Error","Not saved");
    }
    deltic.close();
}

