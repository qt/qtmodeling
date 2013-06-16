TARGET = qmofmetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QMofMetaModelPlugin
load(qt_plugin)

QT += qml script mof

HEADERS = qmofmetamodelplugin.h \
          qmofmetamodel.h

SOURCES = qmofmetamodelplugin.cpp \
          qmofmetamodel.cpp

OTHER_FILES += mof.json
