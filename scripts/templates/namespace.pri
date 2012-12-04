PUBLIC_HEADERS +=
    ${namespace.path}/qtumlglobal.h
    ${namespace.path}/qumlobject.h
    ${namespace.path}/qumlpointer.h
    [%- IF namespace.item('enumeration') -%][% ' \\' %]
    ${namespace.path}/${namespace.path.split('/').0.lower}enumerations.h
    [%- END %]
[%- FOREACH class IN namespace.class.values -%][% ' \\' %]
    ${namespace.path}/${class.name.lower}.h
[%- END %]

PRIVATE_HEADERS +=
    ${namespace.path}/qumlobject_p.h
[%- FOREACH class IN namespace.class.values -%][% ' \\' %]
    ${namespace.path}/${class.name.lower}_p.h
[%- END %]

SOURCES +=
    ${namespace.path}/qumlobject.cpp
    [%- IF namespace.item('enumeration') -%][% ' \\' %]
    ${namespace.path}/${namespace.path.split('/').0.lower}enumerations.cpp
    [%- END -%]
[%- FOREACH class IN namespace.class.values -%][% ' \\' %]
    ${namespace.path}/${class.name.lower}.cpp
[%- END %]
