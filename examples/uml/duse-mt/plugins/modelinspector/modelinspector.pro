#-------------------------------------------------
#
# Project created by QtCreator 2013-10-25T17:38:51
#
#-------------------------------------------------

QT       += core

TARGET = modelinspector
TEMPLATE = lib
CONFIG += plugin

DESTDIR = ../

SOURCES += modelinspectorplugin.cpp

HEADERS += modelinspectorplugin.h
OTHER_FILES += modelinspector.json

LIBS += -lduseinterfaces

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
