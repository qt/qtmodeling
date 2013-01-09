PUBLIC_HEADERS += \
    ${namespace.path}/${namespace.path.split('/').0.lower}global.h
    [%- IF namespace.item('enumeration') -%][% ' \\' %]
    ${namespace.path}/${namespace.path.split('/').0.lower}namespace.h
    [%- END %]
[%- FOREACH class IN namespace.class.values -%][% ' \\' %]
    ${namespace.path}/${class.name.lower}.h
[%- END %]

PRIVATE_HEADERS +=
[%- FOREACH class IN namespace.class.values -%][% ' \\' %]
    ${namespace.path}/${class.name.lower}_p.h
[%- END %]

SOURCES +=
    [%- IF namespace.item('enumeration') -%][% ' \\' %]
    ${namespace.path}/${namespace.path.split('/').0.lower}namespace.cpp
    [%- END -%]
[%- FOREACH class IN namespace.class.values -%][% ' \\' %]
    ${namespace.path}/${class.name.lower}.cpp
[%- END %]
