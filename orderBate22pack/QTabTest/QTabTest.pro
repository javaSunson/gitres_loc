#-------------------------------------------------
#
# Project created by QtCreator 2018-06-07T07:18:52
#
#-------------------------------------------------

QT       += core gui axcontainer
QT       += sql



greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTabTest
TEMPLATE = app


SOURCES += main.cpp\
    dialog.cpp \
    logindialog.cpp \
    mandialog.cpp \
    staticfiled.cpp \
    salelog.cpp \
    seatdialog.cpp \
    helpdialog.cpp

HEADERS  += \
    dialog.h \
    logindialog.h \
    changestyle.h \
    mandialog.h \
    staticfiled.h \
    salelog.h \
    seatdialog.h \
    helpdialog.h

FORMS    += \
    dialog.ui \
    logindialog.ui \
    mandialog.ui \
    salelog.ui \
    seatdialog.ui \
    helpdialog.ui

RC_ICONS = logo.ico

RESOURCES += \
    adminico.qrc
