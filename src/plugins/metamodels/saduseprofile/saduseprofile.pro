TARGET = qsaduseprofilemetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QSADuseMetaModelPlugin
load(qt_plugin)

QT += qml script saduseprofile

HEADERS = qsaduseprofilemetamodelplugin.h \
          qsaduseprofilemetamodel.h

SOURCES = qsaduseprofilemetamodelplugin.cpp \
          qsaduseprofilemetamodel.cpp

OTHER_FILES += saduseprofile.json
