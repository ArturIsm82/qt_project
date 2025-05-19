#ifndef SEVENTHWINDOW_H
#define SEVENTHWINDOW_H

#include <QDialog>

namespace Ui {
class SeventhWindow;
}

class SeventhWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SeventhWindow(QWidget *parent = nullptr);
    ~SeventhWindow();

private:
    Ui::SeventhWindow *ui;
};

#endif // SEVENTHWINDOW_H
