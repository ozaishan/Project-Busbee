#include "seatbooking.h"
#include "ui_seatbooking.h"

Seatbooking::Seatbooking(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Seatbooking)
{
    ui->setupUi(this);
    this->setFixedSize(610,333);
    ptrBook  = new book(this);
    ptrCancel = new cancel(this);

    connect(ptrBook, &book::mysignal, this, &Seatbooking::updateUI);
    connect(ptrCancel, &cancel::mysignal1, this, &Seatbooking::updateUI);

    updateUI();

}

Seatbooking::~Seatbooking()
{
    delete ui;
}
void Seatbooking::updateUI()
    {
        qDebug() << "in updateUI()";

        QSqlQuery query(MyDB::getInstance()->getDBInstance());
        query.prepare("select Seat, Available from Busbee_booking");

        if(!query.exec())
        {
            qDebug() << query.lastError().text() << query.lastQuery();
            //ui->lblInfo->setText(query.lastError().text());
        }
        else{
            qDebug() << "read was successful "<< query.lastQuery();
        }

       // int no = 1;
        while(query.next())
        {
            QString sLabel = "lbl" + query.value(0).toString();
            qDebug() <<"label is : "<< sLabel;
            QLabel * ptr = this->findChild<QLabel*>(sLabel);
            if(ptr!=nullptr)
            {   qDebug() << "label found "<<sLabel;
                if(query.value(1).toString().compare("N") == 0)
                {
                    //int no = (qrand() % ((6 + 1) - 1) + 1);
                    QPixmap pm(":/img/images/booked.jpg");
                    ptr->setPixmap(pm);
                    ptr->setScaledContents(true);
                    qDebug()<<query.value(0).toString() << " : is booked";
                }
                else
                {
                    QPixmap pm(":/img/images/available.jpg");
                    ptr->setPixmap(pm);
                    ptr->setScaledContents(true);
                    qDebug()<<query.value(0).toString() << " : is Available";
                }


            }
        }
  }

void Seatbooking::on_btnBook_clicked()
{
    ptrBook->updateUI();
    ptrBook->show();
}


void Seatbooking::on_btnCancel_clicked()
{
    ptrCancel->updateUI();
    ptrCancel->show();
}


void Seatbooking::on_btnReset_clicked()
{
    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("update Busbee_booking set Available = 'Y'");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        //ui->lblInfo->setText(query.lastError().text());
    }
    else{
        if(query.numRowsAffected() > 0)
        {

            qDebug() << "Update was successful. "<< query.lastQuery();
        }
        else
        {
            qDebug() << "Update Failed. "<< query.lastQuery();
        }

    }

    updateUI();
}

