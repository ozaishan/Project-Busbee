#include "adminlogin.h"
#include "ui_adminlogin.h"
#include "choice_window.h"
choice_window *ch1;
adminlogin::adminlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminlogin)
{
        ui->setupUi(this);
        this->setFixedSize(610,333);
        ui->label_value->hide();
        ui->progressBar->hide();
     admindb= QSqlDatabase::addDatabase("QSQLITE");
    admindb.setDatabaseName("C:/Users/acer/Desktop/Database/adminlogin.db");
    if (!admindb.open()){
        ui->label_status->setText("Failed to open the data base");
    }else{
        ui->label_status->setText("Database connection sucessfull");
}

}

adminlogin::~adminlogin()
{
    delete ui;
}

void adminlogin::on_login_clicked()
{

    QString username, password;
username=ui->lineEdit_username->text();
password=ui->lineEdit_password->text();

if (!admindb.isOpen()){
    qDebug()<<"Failed to open the database";
    return;
}
QSqlQuery qry;
if(qry.exec("select * from information where username='"+username+"' and password='"+password+"' "))
{
    int count =0;
while(qry.next())
{
    count++;

}
if (count==1){
    ui->progressBar->show();
    ui->label_value->show();

    ui->label_status->setText("username and password is correct");

    for (int value=1; value<=100;value++)
        {
        QThread::msleep(20);
        ui->progressBar->setValue(value);
        ui->label_value->setText(QString::number(value)+ "%");
        qApp->processEvents(QEventLoop::AllEvents);

        }
    this->hide();
    adminpage adminopen;
    adminopen.setModal(true);
    adminopen.exec();

}
if (count>1){
    ui->label_status->setText("username and password is Duplicate");
}
if (count<1){
    ui->label_status->setText("username and password is not correct");
}
}
}





void adminlogin::on_pushButton_clicked()
{
  hide();
  ch1 = new choice_window(this);
  ch1->show();
}

