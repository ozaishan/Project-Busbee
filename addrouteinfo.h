#ifndef ADDROUTEINFO_H
#define ADDROUTEINFO_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFileInfo>

namespace Ui {
class addrouteinfo;
}

class addrouteinfo : public QDialog
{
    Q_OBJECT

public:
    explicit addrouteinfo(QWidget *parent = nullptr);
    ~addrouteinfo();

private slots:
    void on_saveButton_clicked();

private:
    Ui::addrouteinfo *ui;
    QSqlDatabase routeinfo;
};

#endif // ADDROUTEINFO_H
