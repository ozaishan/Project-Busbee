#include "userwindow.h"
#include "./ui_userwindow.h"
#include "choice_window.h"
choice_window *ch3;
//reg_user *reg1;



userwindow::userwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::userwindow)
{
    ui->setupUi(this);
    this->setFixedSize(610,333);
    userdb= QSqlDatabase::addDatabase("QSQLITE");
   userdb.setDatabaseName("C:/Users/acer/Desktop/Database/user_info.db");
   if (!userdb.open()){
       ui->label_status->setText("Failed to open the data base");
   }else{
       ui->label_status->setText("Database connection sucessfull");
}

}

userwindow::~userwindow()
{
    delete ui;
}





void userwindow::on_login_clicked()
{
     QString username, password;

     username=ui->lineEdit_username->text();
     password=ui->lineEdit_password->text();
     if (!userdb.isOpen()){
         qDebug()<<"Failed to open the database";
         return;
     }
     QSqlQuery qry;
     if(qry.exec("select * from user_info where Username='"+username+"' and Password='"+password+"' "))
     {
         int count =0;

     while(qry.next())
     {
         count++;

     }
     if (count==1){
         ui->label_status->setText("username and password is correct");
         this->hide();
         userdb.close();
         qDebug("Database closed");
         Userpage useropen;
         useropen.setModal(true);
         useropen.exec();
     }

     if (count>1){
         ui->label_status->setText("username and password is Duplicate");
     }
     if (count<1){
         ui->label_status->setText("username and password is not correct");
     }
     }

}

void userwindow::on_pushButton_clicked()
{
    hide();
    ch3 = new choice_window(this);
  ch3->show();

}


void userwindow::on_login_2_clicked()
{
this->hide();
    signopen = new Signup_page(this);
    signopen->show();

}






