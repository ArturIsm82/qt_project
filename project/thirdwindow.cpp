#include "thirdwindow.h"
#include "ui_thirdwindow.h"
#include <QPixmap>

ThirdWindow::ThirdWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ThirdWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/e7cc84af-ea66-425a-aa1b-4045f7bbf4cf.jpg");
    int w=ui->img1->width();
    int h=ui->img1->height();
    ui->img1->setPixmap(pix.scaled(w,h));
    QPixmap pix1(":/img/img/179fc386-4e95-4050-b5c9-32b33f230b07.jpg");
    int w1=ui->img2->width();
    int h1=ui->img2->height();
    ui->img2->setPixmap(pix1.scaled(w1,h1));

}

ThirdWindow::~ThirdWindow()
{
    delete ui;
}
