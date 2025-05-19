#include "fifthwindow.h"
#include "ui_fifthwindow.h"
#include <QPixmap>
FifthWindow::FifthWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FifthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/fc950ed5-d2ba-427b-acfc-9569b114bd51.jpg");
    int w=ui->img1->width();
    int h=ui->img1->height();
    ui->img1->setPixmap(pix.scaled(w,h));
    QPixmap pix1(":/img/img/9691abe0-7762-4c15-80e6-8f747f42acac.jpg");
    int w1=ui->img2->width();
    int h1=ui->img2->height();
    ui->img2->setPixmap(pix1.scaled(w1,h1));
    QPixmap pix2(":/img/img/b00c8e3f-79bb-42d4-bdb2-41dc5ea59f11.jpg");
    int w2=ui->img3->width();
    int h2=ui->img3->height();
    ui->img3->setPixmap(pix2.scaled(w2,h2));
}

FifthWindow::~FifthWindow()
{
    delete ui;
}
