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

TARGET = $$DUSEMT_PLUGIN_NAME

include(../duse-mt.pri)

LIBS += -L$$DUSEMT_LIBRARY_PATH

isEmpty(PROVIDER) {
    PROVIDER = QtProject
} else {
    LIBS += -L$$DUSEMT_PLUGIN_PATH/QtProject
}

DESTDIR = $$DUSEMT_PLUGIN_PATH/$$PROVIDER
LIBS += -L$$DESTDIR

macx {
    !isEmpty(TIGER_COMPAT_MODE) {
        QMAKE_LFLAGS_SONAME = -Wl,-install_name,@executable_path/../PlugIns/
    } else {
        QMAKE_LFLAGS_SONAME = -Wl,-install_name,@rpath/PlugIns/
        QMAKE_LFLAGS += -Wl,-rpath,@loader_path/../,-rpath,@executable_path/../
    }
} else:linux-* {
    #do the rpath by hand since it's not possible to use ORIGIN in QMAKE_RPATHDIR
    # this expands to $ORIGIN (after qmake and make), it does NOT read a qmake var
    QMAKE_RPATHDIR += \$\$ORIGIN
    QMAKE_RPATHDIR += \$\$ORIGIN/..
    QMAKE_RPATHDIR += \$\$ORIGIN/../..
    DUSEMT_PLUGIN_RPATH = $$join(QMAKE_RPATHDIR, ":")

    QMAKE_LFLAGS += -Wl,-z,origin \'-Wl,-rpath,$${DUSEMT_PLUGIN_RPATH}\'
    QMAKE_RPATHDIR =
}

TEMPLATE = lib
CONFIG += plugin plugin_with_soname

TARGET = $$qtLibraryName($$TARGET)
