#include "getbus.h"
#include "ui_getbus.h"
#include "userpage.h"
#include <vector>
#include <QString>
#include<QMessageBox>
Userpage *us7;

getbus::getbus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::getbus)
{
    ui->setupUi(this);
    this->setFixedSize(610,333);
}
struct journeyinfo
{
    QString Username  ;
    QString Routefrom ;
    QString Routeto;
    QString Seatno;
    QString Date;


};
std::vector<journeyinfo>v;

 QString str, str1 , str3, str4, str5;

getbus::~getbus()
{
    delete ui;
}

void getbus::on_pushButton_clicked()
{
    journeyinfo pi;

    pi.Username = ui->username->text();
    pi.Routefrom= ui->Routefrom->text();
    pi.Routeto = ui->routeto->text();
    pi.Seatno=ui->Seatno->text();
    pi.Date=ui->date->text();
    v.push_back(pi);


     str= v[0].Username;
     str1= v[0].Routefrom;
     str3= v[0].Routeto;
     str4= v[0].Seatno;
     str5= v[0].Date;





}


void getbus::on_pushButton_2_clicked()
{
    QString username1 =  str;
     QString routefrom1 =  str1;
      QString routeto1 =  str3;
       QString seatno =  str4;
        QString date =  str5;
    user1db= QSqlDatabase::addDatabase("QSQLITE");
   user1db.setDatabaseName("C:/Users/acer/Desktop/Database/user_info.db");
   if (!user1db.open()){
       qDebug("Failed to open the data base");
   }else{
       qDebug("Database connection sucessfull");
}
   QSqlQuery qry;
   qry.prepare("INSERT INTO ticket_info("
               "username,"
               "routefrom,"
               "routeto,"
               "seatno,"
               "date)"
               "VALUES(:username,:routefrom,:routeto,:seatno,:date);");
   qry.bindValue(":username",username1 );
   qry.bindValue(":routefrom", routefrom1);
   qry.bindValue(":routeto", routeto1);
   qry.bindValue(":seatno", seatno);
   qry.bindValue(":date", date);
   if(qry.exec()){
       qDebug("sucess updating data ");
       QMessageBox::critical(this, "Saved", "Sucess updating data");
   }
   else{
       QMessageBox::critical(this, " not Saved", "not saved");
   }
 user1db.close();
    ui->label_username->setText(str);
     ui->label_routefrom->setText(str1);
      ui->label_routeto->setText(str3);
       ui->label_seatno->setText(str4);
        ui->label_date->setText(str5);
    ui->stackedWidget->setCurrentIndex(1);
}


void getbus::on_pushButton_3_clicked()
{
    v.clear();
    this->hide();
    us7 = new Userpage();
    us7->show();
}

