/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *cityLabel;
    QLabel *weatherIcon;
    QPushButton *refreshButton;
    QLabel *label_4;
    QLabel *clothingLabel;
    QGroupBox *genderGroupBox;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButtonMale;
    QRadioButton *radioButtonFemale;
    QGroupBox *styleGroupBox;
    QLabel *label_6;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButtonBusiness;
    QRadioButton *radioButtonSport;
    QRadioButton *radioButtonCasual;
    QPushButton *clothingAdviceButton;
    QPushButton *pushButton;
    QLabel *descLabel;
    QLabel *statusLabel;
    QLabel *tempLabel;
    QLabel *humidityLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(804, 501);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(85, 85, 127, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(127, 127, 190, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(106, 106, 158, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(42, 42, 63, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(57, 57, 85, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 127));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush9(QColor(42, 42, 63, 127));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        QBrush brush10(QColor(60, 60, 89, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        cityLabel = new QLabel(centralwidget);
        cityLabel->setObjectName("cityLabel");
        cityLabel->setGeometry(QRect(130, 10, 411, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        cityLabel->setFont(font);
        weatherIcon = new QLabel(centralwidget);
        weatherIcon->setObjectName("weatherIcon");
        weatherIcon->setGeometry(QRect(20, 450, 81, 51));
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setGeometry(QRect(10, 130, 181, 31));
        QPalette palette1;
        QBrush brush11(QColor(255, 0, 0, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush11);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush11);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush11);
        refreshButton->setPalette(palette1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 170, 421, 41));
        QPalette palette2;
        QBrush brush12(QColor(255, 10, 116, 255));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush12);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush11);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush12);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush11);
        label_4->setPalette(palette2);
        QFont font1;
        font1.setPointSize(22);
        label_4->setFont(font1);
        clothingLabel = new QLabel(centralwidget);
        clothingLabel->setObjectName("clothingLabel");
        clothingLabel->setGeometry(QRect(10, 210, 821, 71));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush11);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush11);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush11);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush11);
        clothingLabel->setPalette(palette3);
        QFont font2;
        font2.setPointSize(16);
        clothingLabel->setFont(font2);
        genderGroupBox = new QGroupBox(centralwidget);
        genderGroupBox->setObjectName("genderGroupBox");
        genderGroupBox->setGeometry(QRect(10, 280, 271, 101));
        label_5 = new QLabel(genderGroupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 351, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush12);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush11);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush12);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush11);
        label_5->setPalette(palette4);
        label_5->setFont(font1);
        layoutWidget = new QWidget(genderGroupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 60, 241, 35));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButtonMale = new QRadioButton(layoutWidget);
        radioButtonMale->setObjectName("radioButtonMale");
        QPalette palette5;
        QBrush brush13(QColor(0, 0, 255, 255));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush13);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush13);
        radioButtonMale->setPalette(palette5);
        QFont font3;
        font3.setPointSize(12);
        radioButtonMale->setFont(font3);

        horizontalLayout_2->addWidget(radioButtonMale);

        radioButtonFemale = new QRadioButton(layoutWidget);
        radioButtonFemale->setObjectName("radioButtonFemale");
        QPalette palette6;
        QBrush brush14(QColor(255, 0, 127, 255));
        brush14.setStyle(Qt::BrushStyle::SolidPattern);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush14);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush14);
        radioButtonFemale->setPalette(palette6);
        radioButtonFemale->setFont(font3);

        horizontalLayout_2->addWidget(radioButtonFemale);

        styleGroupBox = new QGroupBox(centralwidget);
        styleGroupBox->setObjectName("styleGroupBox");
        styleGroupBox->setGeometry(QRect(300, 280, 491, 101));
        label_6 = new QLabel(styleGroupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(200, 10, 351, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush12);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush11);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush12);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush11);
        label_6->setPalette(palette7);
        label_6->setFont(font1);
        layoutWidget1 = new QWidget(styleGroupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 60, 432, 35));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        radioButtonBusiness = new QRadioButton(layoutWidget1);
        radioButtonBusiness->setObjectName("radioButtonBusiness");
        radioButtonBusiness->setFont(font3);

        horizontalLayout_6->addWidget(radioButtonBusiness);

        radioButtonSport = new QRadioButton(layoutWidget1);
        radioButtonSport->setObjectName("radioButtonSport");
        radioButtonSport->setFont(font3);

        horizontalLayout_6->addWidget(radioButtonSport);

        radioButtonCasual = new QRadioButton(layoutWidget1);
        radioButtonCasual->setObjectName("radioButtonCasual");
        radioButtonCasual->setFont(font3);

        horizontalLayout_6->addWidget(radioButtonCasual);

        clothingAdviceButton = new QPushButton(centralwidget);
        clothingAdviceButton->setObjectName("clothingAdviceButton");
        clothingAdviceButton->setGeometry(QRect(300, 400, 491, 41));
        QPalette palette8;
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush11);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush11);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush11);
        clothingAdviceButton->setPalette(palette8);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 400, 271, 41));
        QPalette palette9;
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush11);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush11);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush11);
        pushButton->setPalette(palette9);
        descLabel = new QLabel(centralwidget);
        descLabel->setObjectName("descLabel");
        descLabel->setGeometry(QRect(250, 40, 389, 40));
        descLabel->setFont(font);
        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(250, 60, 389, 87));
        statusLabel->setFont(font);
        statusLabel->setMouseTracking(false);
        tempLabel = new QLabel(centralwidget);
        tempLabel->setObjectName("tempLabel");
        tempLabel->setGeometry(QRect(10, 20, 389, 87));
        tempLabel->setFont(font);
        humidityLabel = new QLabel(centralwidget);
        humidityLabel->setObjectName("humidityLabel");
        humidityLabel->setGeometry(QRect(10, 70, 371, 61));
        humidityLabel->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        weatherIcon->raise();
        refreshButton->raise();
        cityLabel->raise();
        label_4->raise();
        clothingLabel->raise();
        genderGroupBox->raise();
        styleGroupBox->raise();
        clothingAdviceButton->raise();
        pushButton->raise();
        descLabel->raise();
        statusLabel->raise();
        tempLabel->raise();
        humidityLabel->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 804, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        cityLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\274\321\214", nullptr));
        weatherIcon->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        refreshButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\272\320\276\320\274\320\265\320\275\320\264\321\203\320\265\320\274\320\260\321\217 \320\276\320\264\320\265\320\266\320\264\320\260", nullptr));
        clothingLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        genderGroupBox->setTitle(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\222\320\260\321\210 \320\277\320\276\320\273", nullptr));
        radioButtonMale->setText(QCoreApplication::translate("MainWindow", "\320\234\321\203\320\266\321\201\320\272\320\276\320\271", nullptr));
        radioButtonFemale->setText(QCoreApplication::translate("MainWindow", "\320\226\320\265\320\275\321\201\320\272\320\270\320\271 ", nullptr));
        styleGroupBox->setTitle(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\270\320\273\321\214", nullptr));
        radioButtonBusiness->setText(QCoreApplication::translate("MainWindow", "\320\264\320\265\320\273\320\276\320\262\320\276\320\271", nullptr));
        radioButtonSport->setText(QCoreApplication::translate("MainWindow", "\321\201\320\277\320\276\321\200\321\202\320\270\320\262\320\275\321\213\320\271", nullptr));
        radioButtonCasual->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\320\262\321\201\320\265\320\264\320\275\320\265\320\262\320\275\321\213\320\271", nullptr));
        clothingAdviceButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\321\201\320\276\320\275\320\260\320\273\321\214\320\275\321\213\320\265 \321\200\320\265\320\272\320\276\320\274\320\265\320\275\320\264\320\260\321\206\320\270\320\270 \320\277\320\276 \320\276\320\264\320\265\320\266\320\264\320\265 \320\276\321\202 \320\277\320\276\320\263\320\276\320\264\321\213 \320\275\320\260 \321\203\320\273\320\270\321\206\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\261\321\200\320\260\321\202\321\214 \320\276\320\261\321\200\320\260\320\267", nullptr));
        descLabel->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\320\263\320\276\320\264\320\260", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "\320\262\321\200\320\265\320\274\321\217 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        tempLabel->setText(QCoreApplication::translate("MainWindow", "\320\263\321\200\320\260\320\264\321\203\321\201\321\213", nullptr));
        humidityLabel->setText(QCoreApplication::translate("MainWindow", "\320\262\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
