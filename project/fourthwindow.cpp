#include "fourthwindow.h"
#include "ui_fourthwindow.h"
#include <QPixmap>

FourthWindow::FourthWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FourthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/8571037c-aa94-463e-9c6e-2ea64d910c64.jpg");
    int w=ui->img1->width();
    int h=ui->img1->height();
    ui->img1->setPixmap(pix.scaled(w,h));
    QPixmap pix1(":/img/img/da8b0327-5cc8-4bf9-bb23-69971ddf7a0b.jpg");
    int w1=ui->img2->width();
    int h1=ui->img2->height();
    ui->img2->setPixmap(pix1.scaled(w1,h1));
}

FourthWindow::~FourthWindow()
{
    delete ui;
}
