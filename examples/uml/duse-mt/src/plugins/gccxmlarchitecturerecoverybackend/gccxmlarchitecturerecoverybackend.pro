#-------------------------------------------------
#
# Project created by QtCreator 2013-11-03T17:38:51
#
#-------------------------------------------------

include(../../duse-mt-plugin.pri)

QT += widgets gui

DEFINES += GCCXMLARCHITECTURERECOVERYBACKEND_LIBRARY

HEADERS += gccxmlarchitecturerecoverybackend_export.h \
    gccxmlarchitecturerecoverybackendplugin.h \
    xmlfilemanager.h \
    xmlfilereader.h

SOURCES += gccxmlarchitecturerecoverybackendplugin.cpp \
    xmlfilemanager.cpp \
    xmlfilereader.cpp

OTHER_FILES += gccxmlarchitecturerecoverybackend.json
