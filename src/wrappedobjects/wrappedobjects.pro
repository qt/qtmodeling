load(qt_build_config)

TARGET = QtWrappedObjects
QT = core-private

load(qt_module)

PUBLIC_HEADERS += \
    qtwrappedobjectsglobal.h \
    qwrappedobject.h \
    qmetawrappedobject.h \
    qwrappedobjectpointer.h

PRIVATE_HEADERS += \
    qwrappedobject_p.h \
    qmetawrappedobject_p.h

SOURCES += \
    qwrappedobject.cpp \
    qmetawrappedobject.cpp

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
