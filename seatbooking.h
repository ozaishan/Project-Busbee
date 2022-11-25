#ifndef SEATBOOKING_H
#define SEATBOOKING_H

#include <QMainWindow>
#include "book.h"
#include "cancel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Seatbooking; }
QT_END_NAMESPACE

class Seatbooking : public QMainWindow
{
    Q_OBJECT

public:
    Seatbooking(QWidget *parent = nullptr);
    ~Seatbooking();
void updateUI();
private slots:
void on_btnBook_clicked();

void on_btnCancel_clicked();

void on_btnReset_clicked();

private:
    Ui::Seatbooking *ui;
    book *ptrBook;
    cancel *ptrCancel;
};
#endif // SEATBOOKING_H
