load(qt_build_config)

TARGET = Qt${namespace}
QT = core modeling-private

QMAKE_DOCS = [%- GET '$$PWD' -%]/doc/qt${namespace.lower}.qdocconf

load(qt_module)

include(${namespace.lower}.pri)