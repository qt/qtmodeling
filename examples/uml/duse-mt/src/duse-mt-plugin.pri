depfile = $$replace(_PRO_FILE_PWD_, ([^/]+$), \\1/\\1_dependencies.pri)
exists($$depfile) {
    include($$depfile)
    isEmpty(DUSEMT_PLUGIN_NAME): \
        error("$$basename(depfile) does not define DUSEMT_PLUGIN_NAME.")
} else {
    isEmpty(DUSEMT_PLUGIN_NAME): \
        error("DUSEMT_PLUGIN_NAME is empty. Maybe you meant to create $$basename(depfile)?")
}

QT -= gui

DUSEMT_LIB_DEPENDS += duseinterfaces

include(../duse-mt.pri)

TARGET = $$qtLibraryName($$DUSEMT_PLUGIN_NAME)

LIBS += -L$$DUSEMT_LIBRARY_PATH

isEmpty(PROVIDER) {
    PROVIDER = QtProject
} else {
    LIBS += -L$$DUSEMT_PLUGIN_PATH/QtProject
}

DESTDIR = $$DUSEMT_PLUGIN_PATH/$$PROVIDER
LIBS += -L$$DESTDIR

QMAKE_RPATHDIR += \$\$ORIGIN
QMAKE_RPATHDIR += \$\$ORIGIN/..
QMAKE_RPATHDIR += \$\$ORIGIN/../..
DUSEMT_PLUGIN_RPATH = $$join(QMAKE_RPATHDIR, ":")
QMAKE_LFLAGS += -Wl,-z,origin \'-Wl,-rpath,$${DUSEMT_PLUGIN_RPATH}\'
QMAKE_RPATHDIR =

TEMPLATE = lib
CONFIG += plugin plugin_with_soname
