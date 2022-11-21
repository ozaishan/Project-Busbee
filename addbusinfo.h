#ifndef ADDBUSINFO_H
#define ADDBUSINFO_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFileInfo>
namespace Ui {
class Addbusinfo;
}

class Addbusinfo : public QDialog
{
    Q_OBJECT

public:
    explicit Addbusinfo(QWidget *parent = nullptr);
    ~Addbusinfo();

private slots:
    void on_pushButton_clicked();

    void on_GoBack_clicked();

    void on_Push_save_clicked();

    void on_push_udate_clicked();

private:
    Ui::Addbusinfo *ui;
     QSqlDatabase Businfo;
};

#endif // ADDBUSINFO_H
