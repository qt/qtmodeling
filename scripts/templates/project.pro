load(qt_build_config)

TARGET = [% namespace.split('/').0 %]
QT = wrappedobjects-private

load(qt_module)

[%- FOREACH namespace IN namespaces %]
include(${namespace.path.replace('/','-').lower}.pri)
[%- END %]

HEADERS += [%- GET '$$PUBLIC_HEADERS' -%] [% GET '$$PRIVATE_HEADERS' -%]
