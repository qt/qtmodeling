[% USE xmi = XML.XPath("$xmi") -%]
PUBLIC_HEADERS += 
[%- FOREACH class = xmi.findnodes('//packagedElement[@xmi:type=\'uml:Class\']') -%]
\
    q${namespace.lower}${class.findvalue('@name').lower}.h 
[%- END %]

PRIVATE_HEADERS += 
[%- FOREACH class = xmi.findnodes('//packagedElement[@xmi:type=\'uml:Class\']') -%]
\
    q${namespace.lower}${class.findvalue('@name').lower}_p.h 
[%- END %]

SOURCES += 
[%- FOREACH class = xmi.findnodes('//packagedElement[@xmi:type=\'uml:Class\']') -%]
\
    q${namespace.lower}${class.findvalue('@name').lower}.cpp 
[%- END %]
