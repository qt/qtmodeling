include(../duse-mt.pri)

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
