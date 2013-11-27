TARGET = qsaduseprofilemetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QSADuseProfileMetaModelPlugin
load(qt_plugin)

QT += modeling saduseprofile

HEADERS = qsaduseprofilemetamodelplugin.h

SOURCES = qsaduseprofilemetamodelplugin.cpp

xmi.files = SADuseProfile.xmi
xmi.path = $${target.path}

INSTALLS += xmi

OTHER_FILES += saduseprofile.json
