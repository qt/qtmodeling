TARGET = qumlmetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QUmlMetaModelPlugin
load(qt_plugin)

QT += qml script uml

HEADERS = qumlmetamodelplugin.h \
          qumlmetamodel.h

SOURCES = qumlmetamodelplugin.cpp \
          qumlmetamodel.cpp

OTHER_FILES += uml.json
