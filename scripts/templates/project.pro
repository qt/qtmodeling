load(qt_build_config)

TARGET = QtUml
QT = core-private

load(qt_module)

[%- FOREACH namespace IN namespaces %]
include(${namespace.path}/${namespace.path.replace('/','-').lower}.pri)
[%- END %]

HEADERS += [%- GET '$$PUBLIC_HEADERS' -%]
