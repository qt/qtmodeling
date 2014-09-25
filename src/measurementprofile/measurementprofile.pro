load(qt_build_config)

TARGET = QtMeasurementProfile
QT = core-private modeling-private uml

QMAKE_DOCS = $$PWD/doc/qtmeasurementprofile.qdocconf

load(qt_module)

include(measurementprofile.pri)

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
