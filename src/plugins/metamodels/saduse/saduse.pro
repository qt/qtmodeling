TARGET = qsadusemetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QSADuseMetaModelPlugin
load(qt_plugin)

QT += qml script saduse

HEADERS = qsadusemetamodelplugin.h \
          qsadusemetamodel.h

SOURCES = qsadusemetamodelplugin.cpp \
          qsadusemetamodel.cpp

OTHER_FILES += saduse.json
