load(qt_build_config)

TARGET = QtWrappedObjectsWidgets
QT = wrappedobjects gui

QMAKE_DOCS = $$PWD/doc/qtwrappedobjectswidgets.qdocconf

load(qt_module)

PUBLIC_HEADERS += \
    qtwrappedobjectswidgetsglobal.h \
    qwrappedobjectmodel.h \
    qwrappedobjectpropertymodel.h

#PRIVATE_HEADERS += \
#    qwrappedobject_p.h \
#    qmetawrappedobject_p.h

SOURCES += \
    qwrappedobjectmodel.cpp \
    qwrappedobjectpropertymodel.cpp

HEADERS += $$PUBLIC_HEADERS #$$PRIVATE_HEADERS
