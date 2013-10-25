#-------------------------------------------------
#
# Project created by QtCreator 2013-10-25T14:53:58
#
#-------------------------------------------------

QT       -= gui

TARGET = duseinterfaces
TEMPLATE = lib

DEFINES += DUSEINTERFACES_LIBRARY

SOURCES += icore.cpp \
    iuicontroller.cpp \
    iplugin.cpp

HEADERS += icore.h\
        duseinterfaces_global.h \
    iuicontroller.h \
    iplugin.h

headers.files = $$HEADERS
headers.path  = /usr/include/DuSE/interfaces

INSTALLS += headers

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
