#-------------------------------------------------
#
# Project created by QtCreator 2016-09-23T23:13:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestGame
TEMPLATE = app

CONFIG += c++11

INCLUDEPATH += F:\Documents\C++\SFML-2.4.0\include
DEPENDPATH += F:\Documents\C++\SFML-2.4.0\include

SOURCES += main.cpp \
    components/window.cpp \
    components/game.cpp \
    views/image.cpp \
    views/button.cpp \
    views/text.cpp \
    views/item.cpp

HEADERS  += \
    components/window.h \
    components/game.h \
    views/image.h \
    views/button.h \
    views/text.h \
    components/event.h \
    views/item.h

RESOURCES += \
    images.qrc
