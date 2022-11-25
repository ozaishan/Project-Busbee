#ifndef VIEWBUSINFO_H
#define VIEWBUSINFO_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFileInfo>
#include <QSortFilterProxyModel>
namespace Ui {
class viewbusinfo;
}

class viewbusinfo : public QDialog
{
    Q_OBJECT

public:
    explicit viewbusinfo(QWidget *parent = nullptr);
    ~viewbusinfo();

private slots:


    void on_push_load_clicked();

    void on_lineEdit_search_textChanged(const QString &arg1);

    void on_pushButton_goback_clicked();

private:
    Ui::viewbusinfo *ui;
    QSqlDatabase viewbus;
    QSortFilterProxyModel *proxyPersonas;
};

#endif // VIEWBUSINFO_H
