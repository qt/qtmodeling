PUBLIC_HEADERS +=
    [%- IF namespace.item('enumeration') -%][% ' \\' %]
    ${namespace.path}/qenumerations.h
    [%- END -%]
[%- FOREACH class IN namespace.class.values -%][% ' \\' %]
    ${namespace.path}/${class.name.lower}.h
[%- END %]

SOURCES +=
    [%- IF namespace.item('enumeration') -%][% ' \\' %]
    ${namespace.path}/qenumerations.cpp
    [%- END -%]
[%- FOREACH class IN namespace.class.values -%][% ' \\' %]
    ${namespace.path}/${class.name.lower}.cpp
[%- END %]
