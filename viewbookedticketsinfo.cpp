#include "viewbookedticketsinfo.h"
#include "ui_viewbookedticketsinfo.h"
#include "adminpage.h"
adminpage *ad69;

viewbookedticketsinfo::viewbookedticketsinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewbookedticketsinfo)
{
    ui->setupUi(this);
}

viewbookedticketsinfo::~viewbookedticketsinfo()
{
    delete ui;
}

void viewbookedticketsinfo::on_pushButton_2_clicked()
{
    this->hide();
    ad69 = new adminpage();
    ad69->show();
}


void viewbookedticketsinfo::on_pushButton_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();
    viewtic= QSqlDatabase::addDatabase("QSQLITE");
  viewtic.setDatabaseName("C:/Users/acer/Desktop/Database/user_info.db");
   if (!viewtic.open()){
      qDebug("failed");
   }else{
      qDebug("sucessfool"); }
  QSqlQuery  * qry = new QSqlQuery(viewtic);
  qry->prepare("select * from ticket_info");
  qry->exec();
  modal->setQuery(std::move(*qry));
  ui->tableView->setModel(modal);
  viewtic.close();
}

