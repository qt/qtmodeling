[%- PROCESS common.tmpl -%]
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

[% forwards = [] -%]
[%- FOREACH forward = class.findnodes("ownedAttribute[@type] | ownedOperation/ownedParameter[@type]") -%]
[%- SET forwardName = forward.findvalue('@type') -%]
[%- IF xmi.findnodes("//packagedElement[@xmi:type='uml:Enumeration' and @name='$forwardName']").findvalue("@name") == "" -%]
[%- IF forwardName != className -%][%- forwards.push("Q${namespace}${forwardName}") -%][%- END -%]
[%- END -%]
[%- END -%]
[%- FOREACH forward = forwards.unique.sort -%]
#include <Qt${namespace}/${forward}>
[% IF loop.last %]
[% END -%]
[%- END -%]
QT_BEGIN_NAMESPACE

Q${namespace}${className}::Q${namespace}${className}(QObject *parent) :
    QObject(parent)
{
}

[%- FOREACH attribute = class.findnodes("ownedAttribute") -%]
    [%- IF loop.first %]
// Owned attributes
    [% END -%]
    [%- SET qtAttribute = QT_ATTRIBUTE(attribute) -%]
    [%- SET qtType = QT_TYPE(namespace, attribute, "false") -%]
    [%- SET derived = attribute.findvalue("@isDerived") -%]
    [%- SET derivedUnion = attribute.findvalue("@isDerivedUnion") %]
[% IF qtType.match("QList|QSet") %]const [% END %]${qtType}Q${namespace}${className}::${qtAttribute}() const
{
    [%- IF qtType.match("QList|QSet") %]
    [%- IF derived == "true" && (derivedUnion == "" || derivedUnion == "false") %]
    ${qtType}r;
    foreach (${qtType.remove("QList<").remove("QSet<").remove(">").trim.remove("^Q")}element, ${namespace}${className}::${qtAttribute}())
        r.[% IF qtType.match("QList") %]append[% ELSE %]insert[% END %](reinterpret_cast<${qtType.remove("QList<").remove("QSet<").remove(">").trim}>(element));
    return r;
    [%- ELSE %]
    return *(reinterpret_cast<const ${qtType.trim.remove(' \*$')} *>(&_${qtAttribute}));
    [%- END -%]
    [% ELSIF qtType.match('\*$') %]
    [%- IF derived == "true" && (derivedUnion == "" || derivedUnion == "false") %]
    return reinterpret_cast<${qtType.trim}>(${namespace}${className}::${qtAttribute}());
    [%- ELSE %]
    return reinterpret_cast<${qtType.trim}>(_${qtAttribute});
    [%- END -%]
    [% ELSE %]
    [%- IF derived == "true" && (derivedUnion == "" || derivedUnion == "false") %]
    return ${namespace}${className}::${qtAttribute}();
    [%- ELSE %]
    return _${qtAttribute};
    [%- END -%]
    [%- END %]
}

    [%- SET readOnly = attribute.findvalue("@isReadOnly") %]
    [%- IF readOnly == "false" || readOnly == "" -%]
    [%- SET attributeName = attribute.findvalue("@name").ucfirst -%]
    [%- IF attribute.findnodes("upperValue").findvalue("@value") == "*" -%]
    [%- IF qtType.remove("QSet<").remove("QList<").match('\*') %]
void Q${namespace}${className}::add${attributeName}([% qtType.remove("QSet<").remove("QList<").replace(">", "").replace('\* $', '*').remove('^Q') %]${qtAttribute})
    [%- ELSE %]
void Q${namespace}${className}::add${attributeName}(${qtType.remove("QSet<").remove("QList<").replace(">", "")} ${qtAttribute})
    [%- END %]
{
    ${namespace}${className}::add${attributeName}(${qtAttribute});
}

    [%- IF qtType.remove("QSet<").remove("QList<").match('\*') %]
void Q${namespace}${className}::remove${attributeName}([% qtType.remove("QSet<").remove("QList<").replace(">", "").replace('\* $', '*').remove('^Q') %]${qtAttribute})
    [%- ELSE %]
void Q${namespace}${className}::remove${attributeName}(${qtType.remove("QSet<").remove("QList<").replace(">", "")} ${qtAttribute})
    [%- END %]
{
    ${namespace}${className}::remove${attributeName}(${qtAttribute});
}

    [%- ELSE -%]
    [%- IF qtType.match('QList|QSet') %]
void Q${namespace}${className}::set${attributeName.remove("^Is")}(${qtType.remove('^Q')}${qtAttribute})
{
    ${namespace}${className}::set${attributeName.remove("^Is")}(${qtAttribute});
}
    [%- ELSIF qtType.match('\*$') %]
void Q${namespace}${className}::set${attributeName.remove("^Is")}(${qtType}${qtAttribute})
{
    ${namespace}${className}::set${attributeName.remove("^Is")}(${qtAttribute});
}
    [%- ELSE %]
void Q${namespace}${className}::set${attributeName.remove("^Is")}(${qtType}${qtAttribute})
{
    ${namespace}${className}::set${attributeName.remove("^Is")}(${qtAttribute});
}
[% END -%]
    [%- END -%]
    [%- END %]
    [%- IF loop.last %]
    [%- END %]
[%- END %]
[% FOREACH operation = class.findnodes("ownedOperation[@name != ../ownedAttribute[@isDerived='true']/@name]") -%]
[%- IF loop.first -%]
// Operations
[% END %]
[% SET operationName = operation.findvalue("@name") -%]
[%- SET return = QT_TYPE(namespace, operation.findnodes("ownedParameter[@direction='return']"), "false") -%]
[% return -%]
Q${namespace}${className}::${operationName}(
    [%- FOREACH parameter = operation.findnodes("ownedParameter[@direction!='return']") -%]
        [%- QT_TYPE(namespace, parameter, "false") -%]
${parameter.findvalue("@name")}
        [%- IF !loop.last %], [% END -%]
    [%- END -%]
)[% IF operation.findvalue("@isQuery") == "true" %] const[% END %]
{
    [%- IF return.match('\*$') || !return.match("QList|QSet") %]
    return [% IF return.match('\*$') %]reinterpret_cast<${return.trim}>([% END %]${namespace}${className}::${operationName}(
    [%- FOREACH parameter = operation.findnodes("ownedParameter[@direction!='return']") -%]
${parameter.findvalue("@name")}
        [%- IF !loop.last %], [% END -%]
    [%- END -%])[% IF return.match('\*$') %])[% END %];
    [%- ELSE %]
    ${return}r;
    foreach (${return.remove("QList<").remove("QSet<").remove(">").trim.remove("^Q")}element, ${namespace}${className}::${operationName}(
    [%- FOREACH parameter = operation.findnodes("ownedParameter[@direction!='return']") -%]
[%- qtType = QT_TYPE(namespace, parameter, "false") -%]
[%- IF qtType.match("QList|QSet") -%]
*(reinterpret_cast<${qtType.replace("<Q", "<")}*>(&${parameter.findvalue("@name")}))
[%- ELSE -%]
${parameter.findvalue("@name")}
[%- END -%]
        [%- IF !loop.last %], [% END -%]
    [%- END -%]))
        r.[% IF return.match("QList") %]append[% ELSE %]insert[% END %](reinterpret_cast<${return.remove("QList<").remove("QSet<").remove(">").trim}>(element));
    return r;
    [%- END %]
}

[%- IF loop.last %]
[% END -%]
[% END -%]
QT_END_NAMESPACE

