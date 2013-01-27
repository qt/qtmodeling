include(../metamodelplugins.pri)

QT = mof

TARGET = qmofmetamodel

HEADERS = qmofmetamodelplugin.h

SOURCES = qmofmetamodelplugin.cpp

OTHER_FILES += mof.json

PLUGIN_CLASS_NAME = QMofMetaModelPlugin
