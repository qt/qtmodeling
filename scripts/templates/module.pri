[% USE xmi = XML.XPath("$xmi") -%]
HEADERS += \
    qt${namespace.lower}global.h \
    qt${namespace.lower}namespace.h
[%- FOREACH class = xmi.findnodes('//packagedElement[@xmi:type=\'uml:Class\' or @xmi:type=\'uml:Stereotype\']') -%]
 \
    q${namespace.lower}${class.findvalue('@name').lower}.h
[%- END %]

PRIVATE_HEADERS +=
[%- FOREACH class = xmi.findnodes('//packagedElement[@xmi:type=\'uml:Class\' or @xmi:type=\'uml:Stereotype\']') -%]
[%- IF class.findvalue("@isAbstract") != "true" -%]
 \
    qobjects/q${namespace.lower}${class.findvalue('@name').lower}object_p.h
[%- END -%]
[%- END %]

SOURCES += \
    qt${namespace.lower}namespace.cpp
[%- FOREACH class = xmi.findnodes('//packagedElement[@xmi:type=\'uml:Class\' or @xmi:type=\'uml:Stereotype\']') -%]
[%- IF class.findvalue("@isAbstract") != "true" -%]
 \
    qobjects/q${namespace.lower}${class.findvalue('@name').lower}object.cpp
[%- END -%]
 \
    q${namespace.lower}${class.findvalue('@name').lower}.cpp
[%- END %]
