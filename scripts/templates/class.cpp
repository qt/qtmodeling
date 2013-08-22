[% USE xmi = XML.XPath("$xmi") -%]
[% SET class = xmi.findnodes("//packagedElement[@xmi:type='uml:Class' and @name='$className']") -%]
[% SET uml2qt = {
      "Boolean" = "bool", 
      "Integer" = "int",
      "String" = "QString",
      "Real" = "double"
   };
-%]
[%- MACRO QT_TYPE(namespace, attribute) BLOCK -%]
    [%- IF attribute.findnodes("upperValue").findvalue("@value") == "*" %]QList<[% END -%]
    [%- IF attribute.findvalue("@type") != "" -%]
Q${namespace}${attribute.findvalue("@type")} *
    [%- ELSE -%]
${uml2qt.item(attribute.findnodes("type").findvalue("@href").split("#").last)} 
    [%- END -%]
    [%- IF attribute.findnodes("upperValue").findvalue("@value") == "*" %]> [% END -%]
[%- END -%]
/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt${namespace} module of the Qt Toolkit.
**
** \$QT_BEGIN_LICENSE:LGPL\$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** \$QT_END_LICENSE\$
**
****************************************************************************/
#include "q${namespace.lower}${className.lower}.h"
[%- forwards = [] -%]
[%- FOREACH forward = class.findnodes("ownedAttribute[@type]") -%]
[%- IF forward.findvalue('@type') != className -%][%- forwards.push("Q${namespace}${forward.findvalue('@type')}") -%][%- END -%]
[%- END -%]
[%- FOREACH forward = forwards.unique.sort -%]
[%- IF loop.first %]
[% END %]
#include <Qt${namespace}/Q${namespace}${forward}>
[%- END %]

QT_BEGIN_NAMESPACE

Q${namespace}${className}::Q${namespace}${className}()
{
}
[%- FOREACH attribute = class.findnodes("ownedAttribute") %]
[%- IF loop.first %]

// Owned attributes
[%- END %]

[% QT_TYPE(namespace, attribute) -%]
Q${namespace}${className}::${attribute.findvalue("@name")}() const
{
}
    [%- IF attribute.findvalue("@isReadOnly") != "true" -%]
        [%- IF attribute.findnodes("upperValue").findvalue("@value") == "*" %]

void Q${namespace}${className}::add${attribute.findvalue("@name").ucfirst}([% QT_TYPE(namespace, attribute) %]${attribute.findvalue("@name")})
{
}

void Q${namespace}${className}::remove${attribute.findvalue("@name").ucfirst}([% QT_TYPE(namespace, attribute) %]${attribute.findvalue("@name")})
{
}
        [%- ELSE %]

void Q${namespace}${className}::set${attribute.findvalue("@name").ucfirst.remove("^Is")}([% QT_TYPE(namespace, attribute) %]${attribute.findvalue("@name")})
{
}
        [%- END %]
    [%- END %]
[%- END %]
[%- FOREACH operation = class.findnodes("ownedOperation") %]
[%- IF loop.first %]

// Operations
[%- END %]

[% QT_TYPE(namespace, operation.findnodes("ownedParameter[@direction='return']")) -%]
Q${namespace}${className}::${operation.findvalue("@name")}(
    [%- FOREACH parameter = operation.findnodes("ownedParameter[@direction!='return']") -%]
        [%- QT_TYPE(namespace, parameter) -%]
${parameter.findvalue("@name")}
        [%- IF !loop.last %], [% END -%]
    [%- END -%]
)[% IF operation.findvalue("@isQuery") == "true" %] const[% END %]
{
}
[%- END %]

QT_END_NAMESPACE

