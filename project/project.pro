QT       += core gui
QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fifthwindow.cpp \
    fourthwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    secondwindow.cpp \
    seventhwindow.cpp \
    sixthwindow.cpp \
    thirdwindow.cpp

HEADERS += \
    fifthwindow.h \
    fourthwindow.h \
    mainwindow.h \
    secondwindow.h \
    seventhwindow.h \
    sixthwindow.h \
    thirdwindow.h

FORMS += \
    fifthwindow.ui \
    fourthwindow.ui \
    mainwindow.ui \
    secondwindow.ui \
    seventhwindow.ui \
    sixthwindow.ui \
    thirdwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    foto.qrc
