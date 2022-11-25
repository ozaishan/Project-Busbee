#include "viewbusinfo.h"
#include "ui_viewbusinfo.h"
#include "userpage.h"
Userpage *usp;

viewbusinfo::viewbusinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewbusinfo)
{
    ui->setupUi(this);
    this->setFixedSize(610,333);
}

viewbusinfo::~viewbusinfo()
{
    delete ui;
}




void viewbusinfo::on_push_load_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();
    viewbus= QSqlDatabase::addDatabase("QSQLITE");
  viewbus.setDatabaseName("C:/Users/acer/Desktop/Database/BusBee.db");
   if (!viewbus.open()){
      qDebug("failed");
   }else{
      qDebug("sucessfool"); }
  QSqlQuery  * qry = new QSqlQuery(viewbus);
  qry->prepare("select BUSNO,RouteFrom,RouteTo from driverinfo");
  qry->exec();
  modal->setQuery(std::move(*qry));
  proxyPersonas=new QSortFilterProxyModel(this);
     proxyPersonas->setSourceModel(modal);
     proxyPersonas->setFilterCaseSensitivity(Qt::CaseInsensitive);
     proxyPersonas->setFilterKeyColumn(-1);
  ui->tableView->setModel(proxyPersonas);

  viewbus.close();
}


void viewbusinfo::on_lineEdit_search_textChanged(const QString &arg1)
{
     proxyPersonas->setFilterFixedString(arg1);
}


void viewbusinfo::on_pushButton_goback_clicked()
{
    this->hide();
    usp= new Userpage();
    usp->show();
}

