%modules = ( # path to module name map
    "QtMof" => "$basedir/src/mof",
    "QtUml" => "$basedir/src/uml",
);

%moduleheaders = ( # restrict the module headers to those found in relative path
);

%classnames = (
    "qtmofversion.h" => "QtMofVersion",
    "qtmofglobal.h"  => "QtMofGlobal",
    "qtumlversion.h" => "QtUmlVersion",
    "qtumlglobal.h"  => "QtUmlGlobal",
);

%modulepris = (
    "QtMof" => "$basedir/modules/qtmof.pri",
    "QtUml" => "$basedir/modules/qtuml.pri",
);

%dependencies = (
    "qtbase" => "refs/heads/master",
);
