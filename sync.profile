%modules = ( # path to module name map
    "QtWrappedObjects" => "$basedir/src/wrappedobjects",
    "QtWrappedObjectsWidgets" => "$basedir/src/wrappedobjectswidgets",
    "QtMof" => "$basedir/src/mof",
    "QtUml" => "$basedir/src/uml",
);

%moduleheaders = ( # restrict the module headers to those found in relative path
);

%classnames = (
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
);

%modulepris = (
    "QtWrappedObjects" => "$basedir/modules/qtwrappedobjects.pri",
    "QtWrappedObjectsWidgets" => "$basedir/modules/qtwrappedobjectswidgets.pri",
    "QtMof" => "$basedir/modules/qtmof.pri",
    "QtUml" => "$basedir/modules/qtuml.pri",
);

%dependencies = (
    "qtbase" => "refs/heads/stable",
);
