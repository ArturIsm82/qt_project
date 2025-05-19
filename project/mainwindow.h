// mainwindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void onWeatherDataReceived(QNetworkReply *reply);
    void onRefreshClicked();
    void onClothingAdviceClicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    void fetchWeather(const QString &city);
    void displayWeather(double temp, const QString &desc, int humidity,
                        const QString &gender, const QString &style);
    QString suggestClothing(double temp, const QString &desc, int humidity,
                            const QString &gender, const QString &style); // Обновленный метод
    void setupGenderStyleUI(); // Новый метод для настройки UI
};
#endif // MAINWINDOW_H
