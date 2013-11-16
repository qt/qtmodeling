#-------------------------------------------------
#
# Project created by QtCreator 2013-10-25T17:38:51
#
#-------------------------------------------------

TARGET  = qtmodelingumlplugin
TARGETPATH = QtModeling/Uml

# Qml
QML_FILES = \
    UmlElement.qml \
    UmlSlot.qml \
    UmlClass.qml \
    UmlComponent.qml \
    UmlProperty.qml

# Images
QML_FILES += \
    images/resize-mark.png \

HEADERS += umlconcretesyntaxqmlplugin.h

SOURCES += umlconcretesyntaxqmlplugin.cpp

CONFIG += no_cxx_module
load(qml_plugin)
