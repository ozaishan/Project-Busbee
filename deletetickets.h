#ifndef DELETETICKETS_H
#define DELETETICKETS_H

#include <QDialog>
#include <QSqlDatabase>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class Deletetickets;
}

class Deletetickets : public QDialog
{
    Q_OBJECT

public:
    explicit Deletetickets(QWidget *parent = nullptr);
    ~Deletetickets();

private slots:


    void on_pushButton_clicked();

private:
    Ui::Deletetickets *ui;
QSqlDatabase deltic;
};

#endif // DELETETICKETS_H
