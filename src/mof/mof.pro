load(qt_build_config)

TARGET = QtMof
QT = core-private

load(qt_module)

include(mof.pri)

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
