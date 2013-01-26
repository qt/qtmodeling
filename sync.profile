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
    "qtwrappedobjectswidgetsversion.h" => "QtWrappedObjectsWidgetsVersion",
    "qtwrappedobjectswidgetsglobal.h"  => "QtWrappedObjectsWidgetsGlobal",
    "qtmofversion.h" => "QtMofVersion",
    "qtmofglobal.h"  => "QtMofGlobal",
    "qtumlversion.h" => "QtUmlVersion",
    "qtumlglobal.h"  => "QtUmlGlobal",
    "qtumlnamespace.h"  => "QtUmlNamespace",
    "qtmofnamespace.h"  => "QtMofNamespace",
    "qtwrappedobjectsnamespace.h"  => "QtWrappedObjectsNamespace",
);

%modulepris = (
    "QtWrappedObjects" => "$basedir/modules/qtwrappedobjects.pri",
    "QtWrappedObjectsWidgets" => "$basedir/modules/qtwrappedobjectswidgets.pri",
    "QtMof" => "$basedir/modules/qtmof.pri",
    "QtUml" => "$basedir/modules/qtuml.pri",
);

%dependencies = (
    "qtbase" => "refs/heads/master",
);
