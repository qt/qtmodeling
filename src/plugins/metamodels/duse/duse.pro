TARGET = qdusemetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QDuseMetaModelPlugin
load(qt_plugin)

QT += qml script duse

HEADERS = qdusemetamodelplugin.h \
          qdusemetamodel.h

SOURCES = qdusemetamodelplugin.cpp \
          qdusemetamodel.cpp

OTHER_FILES += duse.json
