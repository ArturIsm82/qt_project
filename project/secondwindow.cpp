#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QPixmap>

SecondWindow::SecondWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/03f46d69-8376-468e-a25b-ffce35928afd.jpg");
    int w=ui->img1->width();
    int h=ui->img1->height();
    ui->img1->setPixmap(pix.scaled(w,h));
    QPixmap pix1(":/img/img/833fb7bc-522d-4f07-836f-3718e4dafbd1.jpg");
    int w1=ui->img2->width();
    int h1=ui->img2->height();
    ui->img2->setPixmap(pix1.scaled(w1,h1));
}

SecondWindow::~SecondWindow()
{
    delete ui;
}
