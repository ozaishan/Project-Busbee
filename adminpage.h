#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QDialog>
#include"addbusinfo.h"

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

private:
    Ui::adminpage *ui;
    Addbusinfo *Ab;

};

#endif // ADMINPAGE_H
