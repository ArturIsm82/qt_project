#include "seventhwindow.h"
#include "ui_seventhwindow.h"
#include <QPixmap>
SeventhWindow::SeventhWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SeventhWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/babefcbe-708b-4632-9792-2123e4ec3205.jpg");
    int w=ui->img1->width();
    int h=ui->img1->height();
    ui->img1->setPixmap(pix.scaled(w,h));
    QPixmap pix1(":/img/img/dcc6c38e-db2c-4a61-9922-f1f5cb34ba04.jpg");
    int w1=ui->img2->width();
    int h1=ui->img2->height();
    ui->img2->setPixmap(pix1.scaled(w1,h1));
}

SeventhWindow::~SeventhWindow()
{
    delete ui;
}
