#ifndef SIXTHWINDOW_H
#define SIXTHWINDOW_H

#include <QDialog>

namespace Ui {
class SixthWindow;
}

class SixthWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SixthWindow(QWidget *parent = nullptr);
    ~SixthWindow();

private:
    Ui::SixthWindow *ui;
};

#endif // SIXTHWINDOW_H
