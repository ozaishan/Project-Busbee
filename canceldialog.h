#ifndef CANCELDIALOG_H
#define CANCELDIALOG_H

#include <QDialog>

namespace Ui {
class Canceldialog;
}

class Canceldialog : public QDialog
{
    Q_OBJECT

public:
    explicit Canceldialog(QWidget *parent = nullptr);
    ~Canceldialog();

private slots:
    void on_pushButton_clicked();

    void on_Cancel_no_clicked();

    void on_cancel_yes_clicked();

private:
    Ui::Canceldialog *ui;
};

#endif // CANCELDIALOG_H
