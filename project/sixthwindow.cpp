#include "sixthwindow.h"
#include "ui_sixthwindow.h"
#include <QPixmap>

SixthWindow::SixthWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SixthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/cfc36b34-8a7e-4892-80a3-a5be6682a392.jpg");
    int w=ui->img1->width();
    int h=ui->img1->height();
    ui->img1->setPixmap(pix.scaled(w,h));
    QPixmap pix1(":/img/img/01d349af-ae60-408c-8376-30596cedcc29.jpg");
    int w1=ui->img2->width();
    int h1=ui->img2->height();
    ui->img2->setPixmap(pix1.scaled(w1,h1));
}

SixthWindow::~SixthWindow()
{
    delete ui;
}
