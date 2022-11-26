#include "viewuserinfo.h"
#include "ui_viewuserinfo.h"
#include "adminpage.h"
adminpage *sp5;

viewuserinfo::viewuserinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewuserinfo)
{
    ui->setupUi(this);
    this->setFixedSize(610,333);
}

viewuserinfo::~viewuserinfo()
{
    delete ui;
}

void viewuserinfo::on_pushButton_2_clicked()
{
    this->hide();
    sp5 =new adminpage();
    sp5->show();
}


void viewuserinfo::on_pushButton_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();
    viewuser= QSqlDatabase::addDatabase("QSQLITE");
  viewuser.setDatabaseName("C:/Users/acer/Desktop/Database/user_info.db");
   if (!viewuser.open()){
      qDebug("failed");
   }else{
      qDebug("sucessfool"); }
  QSqlQuery  * qry = new QSqlQuery(viewuser);
  qry->prepare("select * from user_info");
  qry->exec();
  modal->setQuery(std::move(*qry));
  ui->tableView->setModel(modal);
  viewuser.close();

}

