TARGET = qmofmetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QMofMetaModelPlugin
load(qt_plugin)

QT += modeling mof

HEADERS = qmofmetamodelplugin.h

SOURCES = qmofmetamodelplugin.cpp

xmi.files = MOF.xmi PrimitiveTypes.xmi
xmi.path = $$MODULE_BASE_OUTDIR/plugins/$$PLUGIN_TYPE

INSTALLS += xmi

OTHER_FILES += mof.json
