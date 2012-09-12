%modules = ( # path to module name map
    "QtMof" => "$basedir/src/mof",
);

%moduleheaders = ( # restrict the module headers to those found in relative path
);

%classnames = (
    "qtmofversion.h" => "QtMofVersion",
);

%modulepris = (
    "QtMof" => "$basedir/modules/qtmof.pri",
);

%dependencies = (
    "qtbase" => "refs/heads/master",
);
