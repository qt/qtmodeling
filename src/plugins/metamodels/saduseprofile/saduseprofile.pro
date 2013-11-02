TARGET = qsaduseprofilemetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QSADuseProfileMetaModelPlugin
load(qt_plugin)

QT += modeling saduseprofile

HEADERS = qsaduseprofilemetamodelplugin.h

SOURCES = qsaduseprofilemetamodelplugin.cpp

OTHER_FILES += saduseprofile.json
