#-------------------------------------------------
#
# Project created by QtCreator 2016-02-26T23:49:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TowerDefense
TEMPLATE = app


SOURCES += main.cpp\
    enemy.cpp \
    game.cpp

HEADERS  += \
    enemy.h \
    game.h

FORMS    += mainwindow.ui

RESOURCES += \
    myresources.qrc
