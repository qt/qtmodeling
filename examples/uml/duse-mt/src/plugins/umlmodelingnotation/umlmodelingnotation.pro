#-------------------------------------------------
#
# Project created by QtCreator 2014-08-14T03:21:41
#
#-------------------------------------------------

include(../../duse-mt-plugin.pri)

QT -= widgets gui
QT += modeling uml

DEFINES += UMLMODELINGNOTATION_LIBRARY

HEADERS += \
    umlmodelingnotation_export.h \
    umlmodelingnotationplugin.h

SOURCES += \
    umlmodelingnotationplugin.cpp

OTHER_FILES += umlmodelingnotation.json
