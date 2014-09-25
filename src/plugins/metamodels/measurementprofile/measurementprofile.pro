TARGET = qmeasurementprofilemetamodel

PLUGIN_TYPE = metamodels
PLUGIN_CLASS_NAME = QMeasurementProfileMetaModelPlugin
load(qt_plugin)

QT += modeling measurementprofile

HEADERS = qmeasurementprofilemetamodelplugin.h

SOURCES = qmeasurementprofilemetamodelplugin.cpp

xmi.files = MeasurementProfile.xmi
xmi.path = $${target.path}

INSTALLS += xmi

OTHER_FILES += measurementprofile.json
