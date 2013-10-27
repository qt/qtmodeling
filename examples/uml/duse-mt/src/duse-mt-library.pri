QT       -= gui

include(../duse-mt.pri)

DESTDIR = $$DUSEMT_LIBRARY_PATH

include(rpath.pri)

TEMPLATE = lib
CONFIG += shared dll
