%modules = ( # path to module name map
    "QtModeling" => "$basedir/src/modeling",
    "QtWrappedObjects" => "$basedir/src/wrappedobjects",
    "QtWrappedObjectsWidgets" => "$basedir/src/wrappedobjectswidgets",
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
    "qtwrappedobjectsversion.h" => "QtWrappedObjectsVersion",
    "qtwrappedobjectsglobal.h"  => "QtWrappedObjectsGlobal",
    "qtwrappedobjectsnamespace.h"  => "QtWrappedObjectsNamespace",
    "qtwrappedobjectswidgetsversion.h" => "QtWrappedObjectsWidgetsVersion",
    "qtwrappedobjectswidgetsglobal.h"  => "QtWrappedObjectsWidgetsGlobal",
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
    "QtWrappedObjects" => "$basedir/modules/qtwrappedobjects.pri",
    "QtWrappedObjectsWidgets" => "$basedir/modules/qtwrappedobjectswidgets.pri",
    "QtMof" => "$basedir/modules/qtmof.pri",
    "QtUml" => "$basedir/modules/qtuml.pri",
    "QtDuse" => "$basedir/modules/qtduse.pri",
    "QtSADuseProfile" => "$basedir/modules/qtsaduseprofile.pri",
);

%dependencies = (
    "qtbase" => "refs/heads/stable",
    "qtscript" => "refs/heads/stable",
);
