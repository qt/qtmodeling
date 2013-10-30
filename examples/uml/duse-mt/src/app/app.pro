#-------------------------------------------------
#
# Project created by QtCreator 2012-10-26T12:43:33
#
#-------------------------------------------------

#QT = modelingwidgets script quick quick-private qml duse
QT = widgets modelingwidgets script quick quick-private qml

include(../../duse-mt.pri)

TEMPLATE = app
TARGET = $$DUSEMT_APP_TARGET
DESTDIR = $$DUSEMT_APP_PATH

include(../rpath.pri)

LIBS *= -lduseinterfaces

SOURCES += main.cpp \
    shell/core.cpp \
    shell/uicontroller.cpp \
    shell/projectcontroller.cpp \
    shell/plugincontroller.cpp \
    shell/mainwindow.cpp

HEADERS  += \
    shell/core.h \
    shell/uicontroller.h \
    shell/projectcontroller.h \
    shell/plugincontroller.h \
    shell/mainwindow.h

FORMS    += mainwindow.ui \
            aboutplugins.ui \
    newmodel.ui \
    aboutdusemt.ui

RESOURCES += \
    duse-mt.qrc
