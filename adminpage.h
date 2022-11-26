#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QDialog>
#include"addbusinfo.h"
#include"addrouteinfo.h"
#include"viewallinfo.h"



namespace Ui {
class adminpage;
}

class adminpage : public QDialog
{
    Q_OBJECT

public:
    explicit adminpage(QWidget *parent = nullptr);
    ~adminpage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::adminpage *ui;
    Addbusinfo *Ab;
    addrouteinfo *addroute;
    viewallinfo *viewinfo;


};

#endif // ADMINPAGE_H
