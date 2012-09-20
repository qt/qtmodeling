load(qt_build_config)

TARGET = QtUml
QT = core-private

load(qt_module)

PUBLIC_HEADERS += \
    qtumlglobal.h
[%- FOREACH class IN classes -%]
    [%- IF !class.key.search('_') -%][% ' \\' %]
    ${currentPackage.replace('::', '/')}/q${class.key.lower}.h
    [%- END -%]
[%- END %]

SOURCES +=
[%- FOREACH class IN classes -%]
    [%- IF !class.key.search('_') -%][% ' \\' %]
    ${currentPackage.replace('::', '/')}/q${class.key.lower}.cpp
    [%- END -%]
[%- END %]

HEADERS += $$PUBLIC_HEADERS
