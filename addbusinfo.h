#ifndef ADDBUSINFO_H
#define ADDBUSINFO_H

#include <QDialog>
#include <QtSql>
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

private:
    Ui::Addbusinfo *ui;
     QSqlDatabase Businfo;
};

#endif // ADDBUSINFO_H
