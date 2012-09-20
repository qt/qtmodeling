load(qt_build_config)

TARGET = QtUml
QT = core-private

load(qt_module)

PUBLIC_HEADERS += \
    qtumlglobal.h \
    ${currentPackage.replace('::', '/')}/qtenumeration.h
[%- FOREACH class IN classes -%]
    [%- IF class.value.item('xmi:type') == 'uml:Class' -%][% ' \\' %]
    ${currentPackage.replace('::', '/')}/q${class.key.lower}.h
    [%- END -%]
[%- END %]

SOURCES += \
    ${currentPackage.replace('::', '/')}/qtenumeration.cpp
[%- FOREACH class IN classes -%]
    [%- IF class.value.item('xmi:type') == 'uml:Class' -%][% ' \\' %]
    ${currentPackage.replace('::', '/')}/q${class.key.lower}.cpp
    [%- END -%]
[%- END %]

HEADERS += $$PUBLIC_HEADERS
