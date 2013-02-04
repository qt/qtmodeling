TARGET = qmofmetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QMofMetaModelPlugin
load(qt_plugin)

QT += mof

HEADERS = qmofmetamodelplugin.h

SOURCES = qmofmetamodelplugin.cpp

OTHER_FILES += mof.json
