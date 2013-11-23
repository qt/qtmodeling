%modules = ( # path to module name map
    "QtModeling" => "$basedir/src/modeling",
    "QtModelingWidgets" => "$basedir/src/modelingwidgets",
    "QtMof" => "$basedir/src/mof",
    "QtUml" => "$basedir/src/uml",
    "QtDuse" => "$basedir/src/duse",
    "QtSADuseProfile" => "$basedir/src/saduseprofile",
);

%moduleheaders = ( # restrict the module headers to those found in relative path
);

%classnames = (
    "qtmodelingversion.h" => "QtModelingVersion",
    "qtmodelingglobal.h"  => "QtModelingGlobal",
    "qtmodelingnamespace.h"  => "QtModelingNamespace",
    "qtmodelingwidgetsversion.h" => "QtModelingWidgetsVersion",
    "qtmodelingwidgetsglobal.h"  => "QtModelingWidgetsGlobal",
    "qtmofversion.h" => "QtMofVersion",
    "qtmofglobal.h"  => "QtMofGlobal",
    "qtmofnamespace.h"  => "QtMofNamespace",
    "qtumlversion.h" => "QtUmlVersion",
    "qtumlglobal.h"  => "QtUmlGlobal",
    "qtumlnamespace.h"  => "QtUmlNamespace",
    "qtduseversion.h" => "QtDuseVersion",
    "qtduseglobal.h"  => "QtDuseGlobal",
    "qtdusenamespace.h"  => "QtDuseNamespace",
    "qtsaduseprofileversion.h" => "QtSADuseProfileVersion",
    "qtsaduseprofileglobal.h"  => "QtSADuseProfileGlobal",
    "qtsaduseprofilenamespace.h"  => "QtSADuseProfileNamespace",
);

%modulepris = (
    "QtModeling" => "$basedir/modules/qtmodeling.pri",
    "QtModelingWidgets" => "$basedir/modules/qtmodelingwidgets.pri",
    "QtMof" => "$basedir/modules/qtmof.pri",
    "QtUml" => "$basedir/modules/qtuml.pri",
    "QtDuse" => "$basedir/modules/qtduse.pri",
    "QtSADuseProfile" => "$basedir/modules/qtsaduseprofile.pri",
);

%dependencies = (
    "qtbase" => "refs/heads/stable",
    "qtscript" => "refs/heads/stable",
    "qtdeclarative" => "refs/heads/stable",
);
