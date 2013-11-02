#-------------------------------------------------
#
# Project created by QtCreator 2013-10-25T17:38:51
#
#-------------------------------------------------

include(../../duse-mt-plugin.pri)

TARGETPATH = QtModeling/Uml

QML_FILES = \
    resize-mark.png \
    UmlElement.qml \
    UmlSlot.qml \
    UmlClass.qml \
    UmlComponent.qml \
    UmlProperty.qml

load(qml_module)

SOURCES += umlconcretesyntaxplugin.cpp

HEADERS += umlconcretesyntaxplugin.h

OTHER_FILES += umlconcretesyntax.json
