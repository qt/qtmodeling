TARGET = qsaduseprofilemetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QSADuseProfileMetaModelPlugin
load(qt_plugin)

QT += modeling saduseprofile

HEADERS = qsaduseprofilemetamodelplugin.h

SOURCES = qsaduseprofilemetamodelplugin.cpp

xmi.files = SADuseProfile.xmi
xmi.path = $$MODULE_BASE_OUTDIR/plugins/$$PLUGIN_TYPE

INSTALLS += xmi

OTHER_FILES += saduseprofile.json
