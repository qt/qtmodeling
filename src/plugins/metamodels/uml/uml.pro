TARGET = qumlmetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QUmlMetaModelPlugin
load(qt_plugin)

QT += uml

HEADERS = qumlmetamodelplugin.h

SOURCES = qumlmetamodelplugin.cpp

OTHER_FILES += uml.json
