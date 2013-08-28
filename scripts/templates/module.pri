[% USE xmi = XML.XPath("$xmi") -%]
HEADERS += \
    qt${namespace.lower}global.h \
    qt${namespace.lower}namespace.h
[%- FOREACH class = xmi.findnodes('//packagedElement[@xmi:type=\'uml:Class\']') -%]
 \
    q${namespace.lower}${class.findvalue('@name').lower}.h
[%- END %]

PRIVATE_HEADERS +=
[%- FOREACH class = xmi.findnodes('//packagedElement[@xmi:type=\'uml:Class\']') -%]
 \
    internal/${namespace.lower}${class.findvalue('@name').lower}_p.h
[%- END %]

SOURCES += \
    qt${namespace.lower}namespace.cpp
[%- FOREACH class = xmi.findnodes('//packagedElement[@xmi:type=\'uml:Class\']') -%]
 \
    internal/${namespace.lower}${class.findvalue('@name').lower}.cpp \
    q${namespace.lower}${class.findvalue('@name').lower}.cpp
[%- END %]
