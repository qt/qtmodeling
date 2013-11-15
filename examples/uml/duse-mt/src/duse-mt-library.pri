include($$replace(_PRO_FILE_PWD_, ([^/]+$), \\1/\\1_dependencies.pri))

QT -= gui

TARGET = $$DUSEMT_LIB_NAME

include(../duse-mt.pri)

TARGET = $$qtLibraryName($$TARGET)

DESTDIR = $$DUSEMT_LIBRARY_PATH

include(rpath.pri)

TEMPLATE = lib
CONFIG += shared dll
