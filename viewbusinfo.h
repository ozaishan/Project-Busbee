#ifndef VIEWBUSINFO_H
#define VIEWBUSINFO_H

#include <QDialog>

namespace Ui {
class viewbusinfo;
}

class viewbusinfo : public QDialog
{
    Q_OBJECT

public:
    explicit viewbusinfo(QWidget *parent = nullptr);
    ~viewbusinfo();

private:
    Ui::viewbusinfo *ui;
};

#endif // VIEWBUSINFO_H
