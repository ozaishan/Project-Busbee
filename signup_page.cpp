#include "signup_page.h"
#include "ui_signup_page.h"
#include <QDebug>
#include <QMessageBox>
#include "userwindow.h"
userwindow *uw1;
Signup_page::Signup_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signup_page)
{
    ui->setupUi(this);
     this->setFixedSize(610,333);
}

Signup_page::~Signup_page()
{
    delete ui;
}

void Signup_page::on_push_signup_clicked()
{
    userdb= QSqlDatabase::addDatabase("QSQLITE");
   userdb.setDatabaseName("C:/Users/acer/Desktop/Database/user_info.db");
   if (!userdb.open()){
       qDebug("Failed to open the data base");
   }else{
       qDebug("Database connection sucessfull");
}
   QString fname = ui->lineEdit_Fname->text();
   QString lname = ui->lineEdit_Lname->text();
   QString email = ui->lineEdit_Email->text();
   QString phoneno= ui->lineEdit_phone->text();
   QString username=ui->lineEdit_Uname->text();
   QString password=ui->lineEdit_pw->text();
    QSqlQuery qry;
    qry.prepare("INSERT INTO user_info("
                "Firstname,"
                "Lastname,"
                "Email,"
                "Phoneno,"
                "Username,"
                "Password)"
                "VALUES(:Firstname,:Lastname,:Email,:Phoneno,:Username,:Password);");
    qry.bindValue(":Firstname",fname );
    qry.bindValue(":Lastname", lname);
    qry.bindValue(":Email", email);
    qry.bindValue(":Phoneno", phoneno);
    qry.bindValue(":Username", username);
    qry.bindValue(":Password", password);
    if(qry.exec()){
        qDebug("sucess updating data ");
        QMessageBox::information(this, "Saved", "Sucess updating data");
    }
    else{
        QMessageBox::critical(this, " not Saved", "error updating data");
    }
  userdb.close();
}


void Signup_page::on_push_goback_clicked()
{
    this->hide();
    uw1 = new userwindow();
    uw1->show();
}

