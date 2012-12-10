%modules = ( # path to module name map
    "QtWrappedObjects" => "$basedir/src/wrappedobjects",
    "QtMof" => "$basedir/src/mof",
    "QtUml" => "$basedir/src/uml",
);

%moduleheaders = ( # restrict the module headers to those found in relative path
);

%classnames = (
    "qtwrappedobjectsversion.h" => "QtWrappedObjectsVersion",
    "qtwrappedobjectsglobal.h"  => "QtWrappedObjectsGlobal",
    "qtmofversion.h" => "QtMofVersion",
    "qtmofglobal.h"  => "QtMofGlobal",
    "qtumlversion.h" => "QtUmlVersion",
    "qtumlglobal.h"  => "QtUmlGlobal",
    "qtumlenumerations.h"  => "QtUmlEnumerations",
    "qtmofenumerations.h"  => "QtMofEnumerations",
);

%modulepris = (
    "QtWrappedObjects" => "$basedir/modules/qtwrappedobjects.pri",
    "QtMof" => "$basedir/modules/qtmof.pri",
    "QtUml" => "$basedir/modules/qtuml.pri",
);

%dependencies = (
    "qtbase" => "refs/heads/master",
);
