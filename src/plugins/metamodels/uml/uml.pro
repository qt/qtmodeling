include(../metamodelplugins.pri)

QT += uml

TARGET = qumlmetamodel

HEADERS = qumlmetamodelplugin.h

SOURCES = qumlmetamodelplugin.cpp

OTHER_FILES += uml.json

PLUGIN_CLASS_NAME = QUmlMetaModelPlugin
