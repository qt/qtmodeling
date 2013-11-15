include($$replace(_PRO_FILE_PWD_, ([^/]+$), \\1/\\1_dependencies.pri))

QT -= gui

include(../duse-mt.pri)

TARGET = $$qtLibraryName($$DUSEMT_LIB_NAME)

DESTDIR = $$DUSEMT_LIBRARY_PATH

include(rpath.pri)

TEMPLATE = lib
CONFIG += shared dll
