TARGET = qumlmetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QUmlMetaModelPlugin
load(qt_plugin)

QT += modeling uml

HEADERS = qumlmetamodelplugin.h

SOURCES = qumlmetamodelplugin.cpp

xmi.files = UML.xmi PrimitiveTypes.xmi
xmi.path = $${target.path}

INSTALLS += xmi

OTHER_FILES += uml.json
