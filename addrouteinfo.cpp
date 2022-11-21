#include "addrouteinfo.h"
#include "ui_addrouteinfo.h"

addrouteinfo::addrouteinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addrouteinfo)
{
    ui->setupUi(this);
    this->setFixedSize(610,333);
}

addrouteinfo::~addrouteinfo()
{
    delete ui;
}

void addrouteinfo::on_saveButton_clicked()
{
    routeinfo= QSqlDatabase::addDatabase("QSQLITE");
  routeinfo.setDatabaseName("C:/Users/acer/Desktop/Database/BusBee.db");
   if (!routeinfo.open()){
      qDebug("failed");
   }else{
      qDebug("sucessfool"); }
   QString routefrom = ui->lineedit_rf->text();
   QString routeto = ui->lineEdit_rt->text();
    QSqlQuery qry;
    qry.prepare("UPDATE driverinfo SET  RouteFrom=:RouteFrom, RouteTo=:RouteTo WHERE EID="+ui->geteid->text()+"   ");
    qry.bindValue(":RouteFrom", routefrom);
    qry.bindValue(":RouteTo", routeto);
    qry.exec();

}
