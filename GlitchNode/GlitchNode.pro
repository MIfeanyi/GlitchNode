TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    Main.cpp


LIBS += -lsfml-graphics -lsfml-window -lsfml-system
INCLUDEPATH = usr/include

HEADERS += \
    Game.hpp
