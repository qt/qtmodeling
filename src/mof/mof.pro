load(qt_build_config)

TARGET = QtMof
QT = wrappedobjects-private core-private xml

load(qt_module)

include(mof.pri)

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
