isEmpty(DUSEMT_LIBRARY_BASENAME) {
    DUSEMT_LIBRARY_BASENAME = lib
}
DUSEMT_SOURCE_TREE = $$PWD
DUSEMT_LIBRARY_PATH = $$DUSEMT_SOURCE_TREE/$$DUSEMT_LIBRARY_BASENAME/duse-mt

INCLUDEPATH += \
    $$DUSEMT_SOURCE_TREE/src/libs \
    $$DUSEMT_SOURCE_TREE/src/plugins

DUSEMT_APP_TARGET   = duse-mt
DUSEMT_APP_PATH = $$DUSEMT_SOURCE_TREE/bin
DUSEMT_PLUGIN_PATH  = $$DUSEMT_LIBRARY_PATH/plugins

defineReplace(qtLibraryName) {
   unset(LIBRARY_NAME)
   LIBRARY_NAME = $$1
   CONFIG(debug, debug|release) {
      !debug_and_release|build_pass {
          mac:RET = $$member(LIBRARY_NAME, 0)_debug
              else:win32:RET = $$member(LIBRARY_NAME, 0)d
      }
   }
   isEmpty(RET):RET = $$LIBRARY_NAME
   return($$RET)
}

# recursively resolve plugin deps
done_plugins =
for(ever) {
    isEmpty(DUSEMT_PLUGIN_DEPENDS): \
        break()
    done_plugins += $$DUSEMT_PLUGIN_DEPENDS
    for(dep, DUSEMT_PLUGIN_DEPENDS) {
        include($$PWD/src/plugins/$$dep/$${dep}_dependencies.pri)
        LIBS += -l$$qtLibraryName($$DUSEMT_PLUGIN_NAME)
    }
    DUSEMT_PLUGIN_DEPENDS = $$unique(DUSEMT_PLUGIN_DEPENDS)
    DUSEMT_PLUGIN_DEPENDS -= $$unique(done_plugins)
}

# recursively resolve library deps
done_libs =
for(ever) {
    isEmpty(DUSEMT_LIB_DEPENDS): \
        break()
    done_libs += $$DUSEMT_LIB_DEPENDS
    for(dep, DUSEMT_LIB_DEPENDS) {
        include($$PWD/src/libs/$$dep/$${dep}_dependencies.pri)
        LIBS += -l$$qtLibraryName($$DUSEMT_LIB_NAME)
    }
    DUSEMT_LIB_DEPENDS = $$unique(DUSEMT_LIB_DEPENDS)
    DUSEMT_LIB_DEPENDS -= $$unique(done_libs)
}
