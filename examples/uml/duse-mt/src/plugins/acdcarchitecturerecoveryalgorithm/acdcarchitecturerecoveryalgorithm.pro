#-------------------------------------------------
#
# Project created by QtCreator 2014-08-13T04:20:30
#
#-------------------------------------------------

include(../../duse-mt-plugin.pri)

QT -= widgets gui

DEFINES += ACDCARCHITECTURERECOVERYALGORITHM_LIBRARY

HEADERS += \
    acdcarchitecturerecoveryalgorithm_export.h \
    acdcarchitecturerecoveryalgorithmplugin.h \
    dependencyrelationstreemanager.h \
    subgraphdominatorpattern.h

SOURCES += \
    acdcarchitecturerecoveryalgorithmplugin.cpp \
    dependencyrelationstreemanager.cpp \
    subgraphdominatorpattern.cpp

OTHER_FILES += acdcarchitecturerecoveryalgorithm.json
