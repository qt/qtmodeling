QMAKE_RPATHDIR += \$\$ORIGIN
QMAKE_RPATHDIR += \$\$ORIGIN/..
QMAKE_RPATHDIR += \$\$ORIGIN/../$$DUSEMT_LIBRARY_BASENAME/duse-mt
DUSEMT_PLUGIN_RPATH = $$join(QMAKE_RPATHDIR, ":")

QMAKE_LFLAGS += -Wl,-z,origin \'-Wl,-rpath,$${DUSEMT_PLUGIN_RPATH}\'
QMAKE_RPATHDIR =
