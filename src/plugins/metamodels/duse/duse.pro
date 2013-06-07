TARGET = qdusemetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QDuseMetaModelPlugin
load(qt_plugin)

QT += duse

HEADERS = qdusemetamodelplugin.h

SOURCES = qdusemetamodelplugin.cpp

OTHER_FILES += duse.json
