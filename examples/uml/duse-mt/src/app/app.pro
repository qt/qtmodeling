#-------------------------------------------------
#
# Project created by QtCreator 2012-10-26T12:43:33
#
#-------------------------------------------------

QT += widgets modeling

DUSEMT_LIB_DEPENDS += \
    duseinterfaces

include(../../duse-mt.pri)

LIBS += -L$$DUSEMT_LIBRARY_PATH

TEMPLATE = app
TARGET = $$DUSEMT_APP_TARGET
DESTDIR = $$DUSEMT_APP_PATH

include(../rpath.pri)

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
