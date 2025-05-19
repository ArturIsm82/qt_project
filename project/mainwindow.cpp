// mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>
#include <QIcon>
#include <QButtonGroup>
#include "secondwindow.h"
#include "thirdwindow.h"
#include "fourthwindow.h"
#include "fifthwindow.h"
#include "sixthwindow.h"
#include "seventhwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , manager(new QNetworkAccessManager(this))
{
    ui->setupUi(this);

    // Настройка интерфейса
    setWindowTitle("Погодное приложение");
    setWindowIcon(QIcon(":/icons/weather.png"));
    ui->refreshButton->setIcon(QIcon(":/icons/refresh.png"));

    // Настройка UI для выбора пола и стиля
    setupGenderStyleUI();

    // Подключение сигналов
    connect(ui->refreshButton, &QPushButton::clicked, this, &MainWindow::onRefreshClicked);
    connect(manager, &QNetworkAccessManager::finished, this, &MainWindow::onWeatherDataReceived);
    connect(ui->clothingAdviceButton, &QPushButton::clicked,
            this, &MainWindow::onClothingAdviceClicked);

    // Первоначальный запрос погоды
    fetchWeather("Perm,RU");
}

void MainWindow::setupGenderStyleUI()
{
    // Группируем радиокнопки для пола
    QButtonGroup *genderGroup = new QButtonGroup(this);
    genderGroup->addButton(ui->radioButtonMale, 0);
    genderGroup->addButton(ui->radioButtonFemale, 1);
    ui->radioButtonMale->setChecked(true); // По умолчанию выбран мужской пол

    // Группируем радиокнопки для стиля
    QButtonGroup *styleGroup = new QButtonGroup(this);
    styleGroup->addButton(ui->radioButtonCasual, 0);
    styleGroup->addButton(ui->radioButtonBusiness, 1);
    styleGroup->addButton(ui->radioButtonSport, 2);
    ui->radioButtonCasual->setChecked(true); // По умолчанию выбран casual стиль

    // Показываем новые элементы UI
    ui->genderGroupBox->setVisible(true);
    ui->styleGroupBox->setVisible(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fetchWeather(const QString &city)
{
    const QString apiKey = "7e8fce33df02242c68a505434b3e83bf";
    const QString url = QString("https://api.openweathermap.org/data/2.5/weather?q=%1&appid=%2&units=metric&lang=ru")
                            .arg(city)
                            .arg(apiKey);

    manager->get(QNetworkRequest(QUrl(url)));
    ui->statusLabel->setText("Загружаем данные...");
}

void MainWindow::onWeatherDataReceived(QNetworkReply *reply)
{
    if (reply->error() != QNetworkReply::NoError) {
        QMessageBox::warning(this, "Ошибка", "Не удалось получить данные: " + reply->errorString());
        ui->statusLabel->setText("Ошибка загрузки");
        reply->deleteLater();
        return;
    }

    const QByteArray data = reply->readAll();
    const QJsonDocument doc = QJsonDocument::fromJson(data);
    const QJsonObject root = doc.object();

    if (!root.contains("main") || !root.contains("weather")) {
        QMessageBox::warning(this, "Ошибка", "Некорректный формат данных");
        ui->statusLabel->setText("Ошибка данных");
        reply->deleteLater();
        return;
    }

    const double temp = root["main"].toObject()["temp"].toDouble();
    const QString desc = root["weather"].toArray()[0].toObject()["description"].toString();
    const int humidity = root["main"].toObject()["humidity"].toInt();

    // Получаем выбранные пол и стиль
    QString gender = ui->radioButtonMale->isChecked() ? "male" : "female";
    QString style;
    if (ui->radioButtonCasual->isChecked()) style = "casual";
    else if (ui->radioButtonBusiness->isChecked()) style = "business";
    else style = "sport";

    displayWeather(temp, desc, humidity, gender, style);
    ui->statusLabel->setText("Данные обновлены: " + QDateTime::currentDateTime().toString("hh:mm:ss"));

    reply->deleteLater();
}

void MainWindow::displayWeather(double temp, const QString &desc, int humidity,
                                const QString &gender, const QString &style)
{
    ui->cityLabel->setText("Текущая погода в Перми");
    ui->tempLabel->setText(QString("%1 °C").arg(temp, 0, 'f', 1));
    ui->descLabel->setText(desc);
    ui->humidityLabel->setText(QString("Влажность: %1%").arg(humidity));

    // Установка соответствующей иконки погоды
    if (desc.contains("дождь", Qt::CaseInsensitive)) {
        ui->weatherIcon->setPixmap(QPixmap(":/icons/rain.png"));
    } else if (desc.contains("облачно", Qt::CaseInsensitive)) {
        ui->weatherIcon->setPixmap(QPixmap(":/icons/cloudy.png"));
    } else {
        ui->weatherIcon->setPixmap(QPixmap(":/icons/sunny.png"));
    }

    // Добавляем рекомендации по одежде с учетом пола и стиля
    ui->clothingLabel->setText(suggestClothing(temp, desc, humidity, gender, style));
}

QString MainWindow::suggestClothing(double temp, const QString &desc, int humidity,
                                    const QString &gender, const QString &style)
{
    QString clothingAdvice;
    QString baseClothing;

    // Базовые рекомендации по температуре с учетом пола
    if (temp < 0) {
        baseClothing = "❄️ Очень теплая одежда: ";
        if (gender == "male") {
            baseClothing += "зимняя куртка, теплые брюки, ";
        } else {
            baseClothing += "пуховик, теплые брюки или юбка с теплыми колготками, ";
        }
        baseClothing += "шапка, шарф, варежки, теплая обувь.";
    } else if (temp < 10) {
        baseClothing = "⛄ Теплая одежда: ";
        if (gender == "male") {
            baseClothing += "пуховик или демисезонная куртка, брюки, ";
        } else {
            baseClothing += "теплое пальто, брюки или юбка с колготками, ";
        }
        baseClothing += "шапка, перчатки.";
    } else if (temp < 15) {
        baseClothing = "🍂 Легкая куртка или теплый свитер, ";
        if (gender == "male") {
            baseClothing += "джинсы или брюки, ";
        } else {
            baseClothing += "джинсы или юбка с колготками, ";
        }
        baseClothing += "закрытая обувь.";
    } else if (temp < 20) {
        baseClothing = "🌤️ Легкая куртка или кофта, ";
        if (gender == "male") {
            baseClothing += "джинсы или брюки, ";
        } else {
            baseClothing += "джинсы, юбка или платье, ";
        }
        baseClothing += "закрытая обувь.";
    } else {
        baseClothing = "☀️ Легкая одежда: ";
        if (gender == "male") {
            baseClothing += "футболка, шорты или легкие брюки, ";
        } else {
            baseClothing += "футболка или топ, шорты/юбка/платье, ";
        }
        baseClothing += "сандалии или открытая обувь.";
    }

    // Добавляем стилевые рекомендации с учетом пола
    QString styleAdvice;
    if (style == "business") {
        if (gender == "male") {
            if (temp < 10) {
                styleAdvice = "\n👔 Деловой стиль: теплый костюм, пальто, кожаные перчатки, классические ботинки.";
            } else if (temp < 20) {
                styleAdvice = "\n👔 Деловой стиль: костюм или блейзер с брюками, рубашка с галстуком.";
            } else {
                styleAdvice = "\n👔 Деловой стиль: рубашка с коротким рукавом, светлые брюки, классические туфли.";
            }
        } else { // female
            if (temp < 10) {
                styleAdvice = "\n👔 Деловой стиль: теплый костюм или пальто, брюки или юбка с теплыми колготками, сапоги.";
            } else if (temp < 20) {
                styleAdvice = "\n👔 Деловой стиль: костюм или блейзер с брюками/юбкой, блузка.";
            } else {
                styleAdvice = "\n👔 Деловой стиль: блузка, юбка или брюки, легкие туфли.";
            }
        }
    } else if (style == "sport") {
        if (temp < 10) {
            styleAdvice = "\n🏃 Спортивный стиль: термобелье, спортивная куртка, спортивные брюки, кроссовки.";
        } else if (temp < 20) {
            styleAdvice = "\n🏃 Спортивный стиль: спортивный костюм или ветровка, футболка.";
        } else {
            styleAdvice = "\n🏃 Спортивный стиль: футболка, шорты, кроссовки.";
        }
    } else { // casual
        if (gender == "male") {
            if (temp < 10) {
                styleAdvice = "\n👕 Повседневный стиль: свитер, джинсы, удобная обувь, куртка.";
            } else if (temp < 20) {
                styleAdvice = "\n👕 Повседневный стиль: рубашка или футболка с джинсами, легкая куртка.";
            } else {
                styleAdvice = "\n👕 Повседневный стиль: майка, шорты, сандалии.";
            }
        } else { // female
            if (temp < 10) {
                styleAdvice = "\n👕 Повседневный стиль: свитер, джинсы или юбка с колготками, удобная обувь.";
            } else if (temp < 20) {
                styleAdvice = "\n👕 Повседневный стиль: футболка или блузка с джинсами/юбкой, кардиган.";
            } else {
                styleAdvice = "\n👕 Повседневный стиль: топ, шорты/юбка/платье, сандалии.";
            }
        }
    }

    // Дополнительные рекомендации по осадкам
    QString precipitationAdvice;
    if (desc.contains("дождь", Qt::CaseInsensitive)) {
        precipitationAdvice = "\n🌧️ Возьмите зонт и наденьте непромокаемую обувь!";
        if (style == "business") precipitationAdvice += " Подойдет компактный складной зонт.";
    } else if (desc.contains("снег", Qt::CaseInsensitive)) {
        precipitationAdvice = "\n❄️ Наденьте зимнюю обувь с нескользящей подошвой!";
    }

    // Учет влажности
    QString humidityAdvice;
    if (humidity > 80) {
        if (temp < 10) {
            humidityAdvice = "\n💧 Высокая влажность усиливает холод - оденьтесь теплее!";
        } else if (temp > 20) {
            humidityAdvice = "\n💦 Высокая влажность делает жару более душной - выбирайте дышащие ткани.";
            if (style == "business") {
                if (gender == "male") {
                    humidityAdvice += " Лучше подойдет льняная или хлопковая рубашка.";
                } else {
                    humidityAdvice += " Лучше подойдет легкая блузка из натуральных тканей.";
                }
            }
        }
    }

    // Собираем все рекомендации вместе
    clothingAdvice = baseClothing + styleAdvice + precipitationAdvice + humidityAdvice;

    return clothingAdvice;
}
void MainWindow::onClothingAdviceClicked()
{
    // Получаем текущие погодные данные
    double temp = ui->tempLabel->text().replace(" °C", "").toDouble();
    QString desc = ui->descLabel->text();
    int humidity = ui->humidityLabel->text().replace("Влажность: ", "").replace("%", "").toInt();

    // Получаем выбранные пол и стиль
    QString gender = ui->radioButtonMale->isChecked() ? "male" : "female";
    QString style;
    if (ui->radioButtonCasual->isChecked()) style = "casual";
    else if (ui->radioButtonBusiness->isChecked()) style = "business";
    else style = "sport";

    // Создаем диалоговое окно с рекомендациями
    QMessageBox adviceBox;
    adviceBox.setWindowTitle("Персональные рекомендации по одежде");
    adviceBox.setText(suggestClothing(temp, desc, humidity, gender, style));
    adviceBox.setIconPixmap(ui->weatherIcon->pixmap());
    adviceBox.exec();
}
void MainWindow::on_pushButton_clicked()
{
    if (ui->radioButtonMale->isChecked() && ui->radioButtonBusiness->isChecked())
    {
        SecondWindow window;
        window.setModal(true);
        window.exec();
    }
    if (ui->radioButtonMale->isChecked() && ui->radioButtonSport->isChecked())
    {
        ThirdWindow window;
        window.setModal(true);
        window.exec();
    }
    if (ui->radioButtonMale->isChecked() && ui->radioButtonCasual->isChecked())
    {
        FourthWindow window;
        window.setModal(true);
        window.exec();
    }
    if (ui->radioButtonFemale->isChecked() && ui->radioButtonBusiness->isChecked())
    {
        FifthWindow window;
        window.setModal(true);
        window.exec();
    }
    if (ui->radioButtonFemale->isChecked() && ui->radioButtonSport->isChecked())
    {
        SixthWindow window;
        window.setModal(true);
        window.exec();
    }
    if (ui->radioButtonFemale->isChecked() && ui->radioButtonCasual->isChecked())
    {
        SeventhWindow window;
        window.setModal(true);
        window.exec();
    }
}
void MainWindow::onRefreshClicked()
{
    fetchWeather("Perm,RU");
}

