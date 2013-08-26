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
[%- superclasses = [] -%]
[%- SET generalization = class.findnodes("generalization") -%]
[%- FOREACH superclass IN generalization -%]
[%- superclasses.push("Q${namespace}${superclass.findvalue('@general')}") -%]
[%- END -%]
[%- forwards = [] -%]
[%- FOREACH forward = class.findnodes("ownedAttribute[@type] | ownedOperation/ownedParameter[@type]") -%]
[%- SET forwardName = forward.findvalue('@type') -%]
[%- IF xmi.findnodes("//packagedElement[@xmi:type='uml:Enumeration' and @name='$forwardName']").findvalue("@name") == "" -%]
[%- IF forwardName != className && superclasses.grep("^Q${namespace}${forwardName}\$").size == 0 -%][%- forwards.push("Q${namespace}${forwardName}") -%][%- END -%]
[%- END -%]
[%- END -%]
[%- FOREACH forward = forwards.unique.sort -%]
[%- IF loop.first %]
[% END %]
#include <Qt${namespace}/${forward}>
[%- END %]

QT_BEGIN_NAMESPACE

/*!
    \class Q${namespace}${className}

    \inmodule Qt${namespace}

    \brief ${class.findvalue("ownedComment/body/text()")}
 */

Q${namespace}${className}::Q${namespace}${className}()
[%- SET found = "false" -%]
[%- FOREACH attribute = class.findnodes("ownedAttribute[(@isDerived=\"false\" or not(@isDerived)) or (@isDerivedUnion and @isDerivedUnion=\"true\")]") -%]
    [%- SET defaultType = attribute.findvalue("defaultValue/@xmi:type") -%]
    [%- SET type = QT_TYPE(namespace, attribute) -%]
    [%- IF defaultType == "uml:LiteralBoolean" || defaultType == "uml:InstanceValue" || defaultType == "uml:LiteralInteger" || defaultType == "uml:LiteralUnlimitedNatural" || type.match('\*$') -%]
        [%- IF found == "false" %] :
[% SET found = "true" -%]
        [%- ELSE %],
[% END -%]
    [%- IF defaultType == "uml:LiteralBoolean" -%]
        [%- SET defaultValue = attribute.findvalue("defaultValue/@value") -%]
        [%- IF defaultValue != "" -%]
    _[% QT_ATTRIBUTE(attribute) %](${defaultValue})
        [%- ELSE -%]
    _[% QT_ATTRIBUTE(attribute) %](false)
        [%- END -%]
    [%- ELSIF defaultType == "uml:InstanceValue" -%]
        [%- SET defaultInstance = attribute.findvalue("defaultValue/@instance") -%]
    _[% QT_ATTRIBUTE(attribute) %](Qt${namespace}::${defaultInstance.split("-").0.remove("Kind$").remove("Sort$")}${defaultInstance.split("-").1.ucfirst})
    [%- ELSIF defaultType == "uml:LiteralInteger" -%]
        [%- SET defaultValue = attribute.findvalue("defaultValue/@value") -%]
        [%- IF defaultValue != "" -%]
    _[% QT_ATTRIBUTE(attribute) %](${defaultValue})
        [%- ELSE -%]
    _[% QT_ATTRIBUTE(attribute) %](0)
        [%- END -%]
    [%- ELSIF defaultType == "uml:LiteralUnlimitedNatural" -%]
        [%- SET defaultValue = attribute.findvalue("defaultValue/@value") -%]
        [%- IF defaultValue != "" -%]
    _[% QT_ATTRIBUTE(attribute) %](${defaultValue})
        [%- ELSE -%]
    _[% QT_ATTRIBUTE(attribute) %](0)
        [%- END -%]
    [%- ELSIF type.match('\*$') -%]
    _[% QT_ATTRIBUTE(attribute) %](0)
    [%- END -%]
    [%- END -%]
[%- END %]
{
}
[%- FOREACH attribute = class.findnodes("ownedAttribute") %]
[%- IF loop.first %]

// OWNED ATTRIBUTES
[%- END %]

[%- SET documentation = attribute.findvalue("ownedComment/body/text()") -%]
[%- IF documentation != "" %]
/*!
    ${documentation}
 */
[%- END %]
[% QT_TYPE(namespace, attribute) -%]
[%- SET qtAttribute = QT_ATTRIBUTE(attribute) -%]
[%- SET readOnly = attribute.findvalue("@isReadOnly") -%]
[%- SET derived = attribute.findvalue("@isDerived") -%]
[%- SET derivedUnion = attribute.findvalue("@isDerivedUnion") -%]
[%- SET association = attribute.findvalue("@association") -%]
Q${namespace}${className}::${qtAttribute}() const
{
    // This is a [% IF readOnly == "" || readOnly == "false" %]read-write[% ELSE %]read-only[% END %][% IF derived == "true" %] derived[% END %][% IF derivedUnion == "true" %] union[% END %] [% IF association != "" %]association end[% ELSE %]property[% END %]

    [%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]
    qWarning("Q${namespace}${className}::${qtAttribute}(): to be implemented (this is a derived [% IF association != "" %]association end[% ELSE %]property[% END %])");

    [%- IF QT_TYPE(namespace, attribute).match('\*$') %]
    return 0;
    [%- ELSE %]
    return ${QT_TYPE(namespace, attribute).trim}();
    [%- END %]
    [%- ELSE %]
    return _${qtAttribute};
    [%- END %]
}
    [%- SET attributeName = attribute.findvalue("@name").ucfirst %]
        [%- IF attribute.findnodes("upperValue").findvalue("@value") == "*" %]

void Q${namespace}${className}::add${attributeName}(${QT_TYPE(namespace, attribute).remove("QSet<").remove("QList<").replace("> ", " ").replace('\* $', '*')}${qtAttribute})
{
    // This is a [% IF readOnly == "" || readOnly == "false" %]read-write[% ELSE %]read-only[% END %][% IF derived == "true" %] derived[% END %][% IF derivedUnion == "true" %] union[% END %] [% IF association != "" %]association end[% ELSE %]property[% END %]

    [%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]
    qWarning("Q${namespace}${className}::${qtAttribute}(): to be implemented (this is a derived [% IF association != "" %]association end[% ELSE %]property[% END %])");
    Q_UNUSED(${qtAttribute});

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    [%- ELSE %]
    if (!_${qtAttribute}.contains(${qtAttribute})) {
        _${qtAttribute}.[% IF QT_TYPE(namespace, attribute).match("QList") %]append[% ELSE %]insert[% END %](${qtAttribute});
    [%- END %]
        [%- found = "false" -%]
        [%- FOREACH subsettedPropertyName = attribute.findvalue("@subsettedProperty").split(" ") -%]
            [%- SET subsettedProperty = xmi.findnodes("//packagedElement[@xmi:type=\"uml:Class\" and @name=\"${subsettedPropertyName.split('-').0}\"]/ownedAttribute[@name=\"${subsettedPropertyName.split('-').1}\"]") -%]
            [%- IF subsettedProperty.findvalue("@name") != "" -%]
                [%- IF found == "false" %]

        // Adjust subsetted properties
                    [%- found = "true" -%]
                [%- END -%]
                    [%- IF subsettedProperty.findvalue("upperValue/@value") == "*" %]
        add${subsettedPropertyName.split('-').1.ucfirst}(${qtAttribute});
                    [%- ELSE %]
        set${subsettedPropertyName.split('-').1.ucfirst}(${qtAttribute});
                    [%- END -%]
            [%- END %]
        [%- END %]
        [%- IF association != "" -%]
        [%- found = "false" -%]
        [%- FOREACH memberEnd = xmi.findvalue("//packagedElement[@xmi:type=\"uml:Association\" and @name=\"${association}\"]/@memberEnd").split(' ') -%]
            [%- NEXT IF memberEnd.split('-').0 == className -%]
            [%- SET oppositeProperty = xmi.findnodes("//packagedElement[@xmi:type=\"uml:Class\" and @name=\"${memberEnd.split('-').0}\"]/ownedAttribute[@name=\"${memberEnd.split('-').1}\"]") -%]
            [%- IF oppositeProperty.findvalue("@name") != "" -%]
                [%- IF found == "false" %]

        // Adjust opposite properties
                    [%- found = "true" -%]
                [%- END %]
        if (${qtAttribute}) {
                    [%- IF oppositeProperty.findvalue("upperValue/@value") == "*" %]
            ${qtAttribute}->add${memberEnd.split('-').1.ucfirst}(this);
                    [%- ELSE %]
            ${qtAttribute}->set${memberEnd.split('-').1.ucfirst}(this);
                    [%- END %]
        }
            [%- END %]
        [%- END %]
        [%- END %]
    }
}

void Q${namespace}${className}::remove${attributeName}(${QT_TYPE(namespace, attribute).remove("QSet<").remove("QList<").replace("> ", " ").replace('\* $', '*')}${qtAttribute})
{
    // This is a [% IF readOnly == "" || readOnly == "false" %]read-write[% ELSE %]read-only[% END %][% IF derived == "true" %] derived[% END %][% IF derivedUnion == "true" %] union[% END %] [% IF association != "" %]association end[% ELSE %]property[% END %]

    [%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]
    qWarning("Q${namespace}${className}::${qtAttribute}(): to be implemented (this is a derived [% IF association != "" %]association end[% ELSE %]property[% END %])");
    Q_UNUSED(${qtAttribute});

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    [%- ELSE %]
    if (_${qtAttribute}.contains(${qtAttribute})) {
        _${qtAttribute}.[% IF QT_TYPE(namespace, attribute).match("QList") %]removeAll[% ELSE %]remove[% END %](${qtAttribute});
    [%- END %]
        [%- found = "false" -%]
        [%- FOREACH subsettedPropertyName = attribute.findvalue("@subsettedProperty").split(" ") -%]
            [%- SET subsettedProperty = xmi.findnodes("//packagedElement[@xmi:type=\"uml:Class\" and @name=\"${subsettedPropertyName.split('-').0}\"]/ownedAttribute[@name=\"${subsettedPropertyName.split('-').1}\"]") -%]
            [%- IF subsettedProperty.findvalue("@name") != "" -%]
                [%- IF found == "false" %]

        // Adjust subsetted properties
                    [%- found = "true" -%]
                [%- END -%]
                    [%- IF subsettedProperty.findvalue("upperValue/@value") == "*" %]
        remove${subsettedPropertyName.split('-').1.ucfirst}(${qtAttribute});
                    [%- ELSE %]
        set${subsettedPropertyName.split('-').1.ucfirst}(${qtAttribute});
                    [%- END -%]
            [%- END %]
        [%- END %]
        [%- IF association != "" -%]
        [%- found = "false" -%]
        [%- FOREACH memberEnd = xmi.findvalue("//packagedElement[@xmi:type=\"uml:Association\" and @name=\"${association}\"]/@memberEnd").split(' ') -%]
            [%- NEXT IF memberEnd.split('-').0 == className -%]
            [%- SET oppositeProperty = xmi.findnodes("//packagedElement[@xmi:type=\"uml:Class\" and @name=\"${memberEnd.split('-').0}\"]/ownedAttribute[@name=\"${memberEnd.split('-').1}\"]") -%]
            [%- IF oppositeProperty.findvalue("@name") != "" -%]
                [%- IF found == "false" %]

        // Adjust opposite properties
                    [%- found = "true" -%]
                [%- END %]
        if (${qtAttribute}) {
                    [%- IF oppositeProperty.findvalue("upperValue/@value") == "*" %]
            ${qtAttribute}->remove${memberEnd.split('-').1.ucfirst}(this);
                    [%- ELSE %]
            ${qtAttribute}->set${memberEnd.split('-').1.ucfirst}(0);
                    [%- END %]
        }
            [%- END %]
        [%- END %]
        [%- END %]
    }
}
        [%- ELSE %]

void Q${namespace}${className}::set${attributeName.remove("^Is")}(${QT_TYPE(namespace, attribute)}${qtAttribute})
{
    // This is a [% IF readOnly == "" || readOnly == "false" %]read-write[% ELSE %]read-only[% END %][% IF derived == "true" %] derived[% END %][% IF derivedUnion == "true" %] union[% END %] [% IF association != "" %]association end[% ELSE %]property[% END %]

    [%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]
    qWarning("Q${namespace}${className}::${qtAttribute}(): to be implemented (this is a derived [% IF association != "" %]association end[% ELSE %]property[% END %])");
    Q_UNUSED(${qtAttribute});

    if (false /* <derivedexclusion-criteria> */) {
    [%- ELSE %]
    if (_${qtAttribute} != ${qtAttribute}) {
    [%- END %]
        [%- found = "false" -%]
        [%- FOREACH subsettedPropertyName = attribute.findvalue("@subsettedProperty").split(" ") -%]
            [%- SET subsettedProperty = xmi.findnodes("//packagedElement[@xmi:type=\"uml:Class\" and @name=\"${subsettedPropertyName.split('-').0}\"]/ownedAttribute[@name=\"${subsettedPropertyName.split('-').1}\"]") -%]
            [%- IF subsettedProperty.findvalue("@name") != "" -%]
                [%- IF found == "false" %]
        // Adjust subsetted properties
                    [%- found = "true" -%]
                [%- END -%]
                    [%- IF subsettedProperty.findvalue("upperValue/@value") == "*" %]
        [% IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]// [% END %]remove${subsettedPropertyName.split('-').1.ucfirst}([%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]/* <derived-code> */[% ELSE %]_${qtAttribute}[% END %]);
                    [%- END -%]
            [%- END %]
        [%- END %]
[%- IF found == "true" %]
[% END %]
        [%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]
        // <derived-code>
        [%- ELSE %]
        _${qtAttribute} = ${qtAttribute};
        [%- END %]
        [%- found = "false" -%]
        [%- FOREACH subsettedPropertyName = attribute.findvalue("@subsettedProperty").split(" ") -%]
            [%- SET subsettedProperty = xmi.findnodes("//packagedElement[@xmi:type=\"uml:Class\" and @name=\"${subsettedPropertyName.split('-').0}\"]/ownedAttribute[@name=\"${subsettedPropertyName.split('-').1}\"]") -%]
            [%- IF subsettedProperty.findvalue("@name") != "" -%]
                [%- IF found == "false" %]

        // Adjust subsetted properties
                    [%- found = "true" -%]
                [%- END -%]
                    [%- IF subsettedProperty.findvalue("upperValue/@value") == "*" %]
        if (${qtAttribute}) {
            add${subsettedPropertyName.split('-').1.ucfirst}(${qtAttribute});
        }
                    [%- ELSE %]
        set${subsettedPropertyName.split('-').1.ucfirst}(${qtAttribute});
                    [%- END -%]
            [%- END %]
        [%- END %]
    }
}
    [%- END %]
[%- END %]
[%- FOREACH operation = class.findnodes("ownedOperation[@name != ../ownedAttribute[@isDerived='true']/@name]") -%]
[%- IF loop.first %]

// OPERATIONS
[%- END %]
[%- SET operationName = operation.findvalue("@name") -%]

[%- SET returnType = QT_TYPE(namespace, operation.findnodes("ownedParameter[@direction='return']")) %]

[%- SET documentation = operation.findvalue("ownedComment/body/text()") -%]
[%- IF documentation != "" %]
/*!
    ${documentation}
 */
[%- END %]
${returnType}Q${namespace}${className}::${operationName}(
    [%- SET parameters = operation.findnodes("ownedParameter[@direction!='return']") -%]
    [%- FOREACH parameter = parameters -%]
        [%- QT_TYPE(namespace, parameter) -%]
${parameter.findvalue("@name")}
        [%- IF !loop.last %], [% END -%]
    [%- END -%]
)[% IF operation.findvalue("@isQuery") == "true" %] const[% END %]
{
    [%- FOREACH parameter = parameters %]
    Q_UNUSED(${parameter.findvalue("@name")});
    [%- END %]
    [%- IF returnType.match('\*$') %]
    return 0;
    [%- ELSE %]
    return ${returnType}();
    [%- END %]
}
[%- END %]

QT_END_NAMESPACE

