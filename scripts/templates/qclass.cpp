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
[%- IF class.findvalue("@isAbstract") != "true" %]

#include "private/q${namespace.lower}${className.lower}object_p.h"
[%- END -%]

[%- superclasses = [] -%]
[%- SET generalization = class.findnodes("generalization") -%]
[%- FOREACH superclass IN generalization -%]
[%- SET superclassName = superclass.findvalue("@general") -%]
[%- IF superclassName == "" -%][%- SET superclassName = superclass.findnodes("general").findvalue("@xmi:idref") -%][%- END -%]
[%- superclasses.push("${namespace}${superclassName}") -%]
[%- END %]
[% useNamespace = [] -%]
[%- forwards = [] -%]
[%- visitedClasses = [] -%]
[%- GENERATE_FWD_DECLARATIONS(class, visitedClasses, forwards, useNamespace, superclasses) -%]
[%- FOREACH forward = forwards.unique.sort %]
#include <${forward}>
[%- IF loop.last %]
[% END -%]
[%- END -%]

QT_BEGIN_NAMESPACE

/*!
    \class Q${namespace}${className}

    \inmodule Qt${namespace}
[%- IF class.findvalue("ownedComment/body/text()") != "" %]

    \brief ${class.findvalue("ownedComment/body/text()")}
[%- END %]
 */
Q${namespace}${className}::Q${namespace}${className}([%- IF class.findvalue("@isAbstract") != "true" %]bool createQModelingObject[% END %])
[%- SET found = "false" -%]
[%- FOREACH superclass IN generalization -%]
[%- SET superclassName = superclass.findvalue("@general") -%]
[%- IF superclassName == "" -%][%- SET superclassName = superclass.findnodes("general").findvalue("@xmi:idref") -%][%- END -%]
[%- IF xmi.findvalue("//packagedElement[(@xmi:type=\"uml:Class\" or @xmi:type=\"uml:Stereotype\") and @name=\"${superclassName}\"]/@isAbstract") != "true" -%]
        [%- IF found == "false" %] :
[% SET found = "true" -%]
        [%- ELSE %],
[% END -%]
    Q${namespace}${superclassName}(false)
[%- END -%]
[%- END -%]
[%- FOREACH attribute = class.findnodes("ownedAttribute[(@isDerived=\"false\" or not(@isDerived)) or (@isDerivedUnion and @isDerivedUnion=\"true\")]") -%]
    [%- SET defaultType = attribute.findvalue("defaultValue/@xmi:type") -%]
    [%- SET type = QT_TYPE(namespace, attribute) -%]
    [%- SET originalType = attribute.findvalue("@type") -%]
    [%- IF defaultType == "uml:LiteralBoolean" || defaultType == "uml:InstanceValue" || defaultType == "uml:LiteralInteger" || type.match('\*$') -%]
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
    _[% QT_ATTRIBUTE(attribute) %](Qt${namespace}::${defaultInstance.split("-").0}${defaultInstance.split("-").1.ucfirst})
        [%- ELSIF defaultType == "uml:LiteralInteger" -%]
            [%- SET defaultValue = attribute.findvalue("defaultValue/@value") -%]
            [%- IF defaultValue != "" -%]
    _[% QT_ATTRIBUTE(attribute) %](${defaultValue})
            [%- ELSE -%]
    _[% QT_ATTRIBUTE(attribute) %](0)
            [%- END -%]
        [%- ELSIF type.match('\*$') -%]
    _[% QT_ATTRIBUTE(attribute) %](0)
        [%- END -%]
    [%- ELSIF xmi.findvalue("//packagedElement[@xmi:id=\"${originalType}\"]/@xmi:type") == "uml:Enumeration" -%]
        [%- IF found == "false" %] :
[% SET found = "true" -%]
        [%- ELSE %],
[% END -%]
    _[% QT_ATTRIBUTE(attribute) %](Qt${namespace}::${originalType}None)
    [%- END -%]
[%- END %]
{
[%- IF class.findvalue("@isAbstract") != "true" %]
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new Q${namespace}${className}Object(this));
[%- END %]
}

QModelingElement *Q${namespace}${className}::clone() const
{
    Q${namespace}${className} *c = new Q${namespace}${className};
[%- visitedClasses = [] -%]
[%- redefinedProperties = [] -%]
[%- POPULATE_REDEFINED_PROPERTIES(class, visitedClasses, redefinedProperties) -%]
[%- visitedClasses = [] -%]
[%- GENERATE_CLONE(class, visitedClasses, redefinedProperties) %]
    return c;
}

[%- FOREACH attribute = class.findnodes("ownedAttribute") %]
[%- IF loop.first %]
// OWNED ATTRIBUTES

[%- END %]

[%- SET qtAttribute = QT_ATTRIBUTE(attribute) -%]
[%- SET qtType = QT_TYPE(namespace, attribute) -%]
[%- SET readOnly = attribute.findvalue("@isReadOnly") -%]
[%- SET derived = attribute.findvalue("@isDerived") -%]
[%- SET derivedUnion = attribute.findvalue("@isDerivedUnion") -%]
[%- SET association = attribute.findvalue("@association") -%]
[%- SET documentation = attribute.findvalue("ownedComment/body/text()") -%]
[%- IF documentation != "" -%]
/*!
    ${documentation}
 */
[%- END %]
[% IF qtType.match("QList|QSet") %]const [% END %]${qtType}Q${namespace}${className}::${PLURALFORM(qtAttribute, attribute)}() const
{
    // This is a [% IF readOnly == "" || readOnly == "false" %]read-write[% ELSE %]read-only[% END %][% IF derived == "true" %] derived[% END %][% IF derivedUnion == "true" %] union[% END %] [% IF association != "" %]association end[% ELSE %]property[% END %]

    [%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]
    qWarning("Q${namespace}${className}::${PLURALFORM(qtAttribute, attribute)}(): to be implemented (this is a derived [% IF association != "" %]association end[% ELSE %]property[% END %])");

    [%- IF qtType.match('\*$') %]
    return 0;
    [%- ELSE %]
    return ${qtType.trim}();
    [%- END %]
    [%- ELSE %]
    return _${PLURALFORM(qtAttribute, attribute)};
    [%- END %]
}

    [%- SET attributeName = attribute.findvalue("@name").ucfirst %]
        [%- IF attribute.findnodes("upperValue").findvalue("@value") == "*" %]
void Q${namespace}${className}::add${attributeName}(${qtType.remove("QSet<").remove("QList<").replace(">", "").replace('\* $', '*')}${qtAttribute})
{
    // This is a [% IF readOnly == "" || readOnly == "false" %]read-write[% ELSE %]read-only[% END %][% IF derived == "true" %] derived[% END %][% IF derivedUnion == "true" %] union[% END %] [% IF association != "" %]association end[% ELSE %]property[% END %]

    [%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]
    qWarning("Q${namespace}${className}::add${attributeName}(): to be implemented (this is a derived [% IF association != "" %]association end[% ELSE %]property[% END %])");
    Q_UNUSED(${qtAttribute});

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    [%- ELSE %]
    if (!_${PLURALFORM(qtAttribute, attribute)}.contains(${qtAttribute})) {
        _${PLURALFORM(qtAttribute, attribute)}.[% IF qtType.match("QList") %]append[% ELSE %]insert[% END %](${qtAttribute});
        [%- IF qtType.match('\*') %]
        if (${qtAttribute} && ${qtAttribute}->asQModelingObject() && this->asQModelingObject())
            QObject::connect(${qtAttribute}->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(remove${attributeName}(QObject *)));
            [%- IF attribute.findvalue("@aggregation") == "composite" %]
        ${qtAttribute}->asQModelingObject()->setParent(this->asQModelingObject());
            [%- END -%]
        [%- END %]
    [%- END %]
        [%- found = "false" -%]
        [%- FOREACH subsettedPropertyName = attribute.findvalue("@subsettedProperty").split(" ") -%]
            [%- SET subsettedProperty = xmi.findnodes("//packagedElement[(@xmi:type=\"uml:Class\" or @xmi:type=\"uml:Stereotype\") and @name=\"${subsettedPropertyName.split('-').0}\"]/ownedAttribute[@name=\"${subsettedPropertyName.split('-').1}\"]") -%]
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
        [%- found = "false" -%]
        [%- FOREACH redefinedPropertyName = attribute.findvalue("@redefinedProperty").split(" ") -%]
            [%- SET redefinedProperty = xmi.findnodes("//packagedElement[(@xmi:type=\"uml:Class\" or @xmi:type=\"uml:Stereotype\") and @name=\"${redefinedPropertyName.split('-').0}\"]/ownedAttribute[@name=\"${redefinedPropertyName.split('-').1}\"]") -%]
            [%- IF redefinedProperty.findvalue("@name") != "" -%]
                [%- IF found == "false" %]

        // Adjust redefined properties
                    [%- found = "true" -%]
                [%- END -%]
                    [%- IF redefinedProperty.findvalue("upperValue/@value") == "*" %]
        Q${namespace}${redefinedPropertyName.split('-').0}::add${redefinedPropertyName.split('-').1.ucfirst}(${qtAttribute});
                    [%- ELSE %]
        Q${namespace}${redefinedPropertyName.split('-').0}::set${redefinedPropertyName.split('-').1.remove('^is').ucfirst}(${qtAttribute});
                    [%- END -%]
            [%- END %]
        [%- END %]
        [%- IF association != "" -%]
        [%- found = "false" -%]
        [%- FOREACH memberEnd = xmi.findvalue("//packagedElement[(@xmi:type=\"uml:Association\" or @xmi:type=\"uml:Extension\") and @name=\"${association}\"]/@memberEnd").split(' ') -%]
            [%- NEXT IF memberEnd.split('-').0 == className && memberEnd.split('-').1 == attributeName.lcfirst -%]
            [%- SET oppositeProperty = xmi.findnodes("//packagedElement[(@xmi:type=\"uml:Class\" or @xmi:type=\"uml:Stereotype\") and @name=\"${memberEnd.split('-').0}\"]/ownedAttribute[@name=\"${memberEnd.split('-').1}\"]") -%]
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

void Q${namespace}${className}::remove${attributeName}(${qtType.remove("QSet<").remove("QList<").replace(">", "").replace('\* $', '*')}${qtAttribute})
{
    // This is a [% IF readOnly == "" || readOnly == "false" %]read-write[% ELSE %]read-only[% END %][% IF derived == "true" %] derived[% END %][% IF derivedUnion == "true" %] union[% END %] [% IF association != "" %]association end[% ELSE %]property[% END %]

    [%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]
    qWarning("Q${namespace}${className}::remove${attributeName}(): to be implemented (this is a derived [% IF association != "" %]association end[% ELSE %]property[% END %])");
    Q_UNUSED(${qtAttribute});

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    [%- ELSE %]
    if (_${PLURALFORM(qtAttribute, attribute)}.contains(${qtAttribute})) {
        _${PLURALFORM(qtAttribute, attribute)}.[% IF qtType.match("QList") %]removeAll[% ELSE %]remove[% END %](${qtAttribute});
        [%- IF attribute.findvalue("@aggregation") == "composite" %]
        if (${qtAttribute}->asQModelingObject())
            ${qtAttribute}->asQModelingObject()->setParent(0);
        [%- END -%]
    [%- END %]
        [%- found = "false" -%]
        [%- FOREACH subsettedPropertyName = attribute.findvalue("@subsettedProperty").split(" ") -%]
            [%- SET subsettedProperty = xmi.findnodes("//packagedElement[(@xmi:type=\"uml:Class\" or @xmi:type=\"uml:Stereotype\") and @name=\"${subsettedPropertyName.split('-').0}\"]/ownedAttribute[@name=\"${subsettedPropertyName.split('-').1}\"]") -%]
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
        [%- found = "false" -%]
        [%- FOREACH redefinedPropertyName = attribute.findvalue("@redefinedProperty").split(" ") -%]
            [%- SET redefinedProperty = xmi.findnodes("//packagedElement[(@xmi:type=\"uml:Class\" or @xmi:type=\"uml:Stereotype\") and @name=\"${redefinedPropertyName.split('-').0}\"]/ownedAttribute[@name=\"${redefinedPropertyName.split('-').1}\"]") -%]
            [%- IF redefinedProperty.findvalue("@name") != "" -%]
                [%- IF found == "false" %]

        // Adjust redefined properties
                    [%- found = "true" -%]
                [%- END -%]
                    [%- IF redefinedProperty.findvalue("upperValue/@value") == "*" %]
        Q${namespace}${redefinedPropertyName.split('-').0}::remove${redefinedPropertyName.split('-').1.ucfirst}(${qtAttribute});
                    [%- ELSE %]
        Q${namespace}${redefinedPropertyName.split('-').0}::set${redefinedPropertyName.split('-').1.remove('^is').ucfirst}(${qtAttribute});
                    [%- END -%]
            [%- END %]
        [%- END %]
        [%- IF association != "" -%]
        [%- found = "false" -%]
        [%- FOREACH memberEnd = xmi.findvalue("//packagedElement[(@xmi:type=\"uml:Association\" or @xmi:type=\"uml:Extension\") and @name=\"${association}\"]/@memberEnd").split(' ') -%]
            [%- NEXT IF memberEnd.split('-').0 == className && memberEnd.split('-').1 == attributeName.lcfirst -%]
            [%- SET oppositeProperty = xmi.findnodes("//packagedElement[(@xmi:type=\"uml:Class\" or @xmi:type=\"uml:Stereotype\") and @name=\"${memberEnd.split('-').0}\"]/ownedAttribute[@name=\"${memberEnd.split('-').1}\"]") -%]
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
void Q${namespace}${className}::set${attributeName.remove("^Is")}([% IF !qtType.match('\*$') %]${qtType.trim} [% ELSE %]${qtType}[% END %]${qtAttribute})
{
    // This is a [% IF readOnly == "" || readOnly == "false" %]read-write[% ELSE %]read-only[% END %][% IF derived == "true" %] derived[% END %][% IF derivedUnion == "true" %] union[% END %] [% IF association != "" %]association end[% ELSE %]property[% END %]

    [%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]
    qWarning("Q${namespace}${className}::set${attributeName.remove("^Is")}(): to be implemented (this is a derived [% IF association != "" %]association end[% ELSE %]property[% END %])");
    Q_UNUSED(${qtAttribute});

    if (false /* <derivedexclusion-criteria> */) {
    [%- ELSE %]
    if (_${PLURALFORM(qtAttribute, attribute)} != ${qtAttribute}) {
    [%- END %]
        [%- found = "false" -%]
        [%- FOREACH subsettedPropertyName = attribute.findvalue("@subsettedProperty").split(" ") -%]
            [%- SET subsettedProperty = xmi.findnodes("//packagedElement[(@xmi:type=\"uml:Class\" or @xmi:type=\"uml:Stereotype\") and @name=\"${subsettedPropertyName.split('-').0}\"]/ownedAttribute[@name=\"${subsettedPropertyName.split('-').1}\"]") -%]
            [%- IF subsettedProperty.findvalue("@name") != "" -%]
                [%- IF found == "false" %]
        // Adjust subsetted properties
                    [%- found = "true" -%]
                [%- END -%]
                    [%- IF subsettedProperty.findvalue("upperValue/@value") == "*" %]
        [% IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]// [% END %]remove${subsettedPropertyName.split('-').1.ucfirst}([%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]/* <derived-code> */[% ELSE %]_${PLURALFORM(qtAttribute, attribute)}[% END %]);
                    [%- END -%]
            [%- END %]
        [%- END %]
[%- IF found == "true" %]
[% END %]
        [%- found = "false" -%]
        [%- FOREACH redefinedPropertyName = attribute.findvalue("@redefinedProperty").split(" ") -%]
            [%- SET redefinedProperty = xmi.findnodes("//packagedElement[(@xmi:type=\"uml:Class\" or @xmi:type=\"uml:Stereotype\") and @name=\"${redefinedPropertyName.split('-').0}\"]/ownedAttribute[@name=\"${redefinedPropertyName.split('-').1}\"]") -%]
            [%- IF redefinedProperty.findvalue("@name") != "" -%]
                    [%- IF redefinedProperty.findvalue("upperValue/@value") == "*" %]
                [%- IF found == "false" %]
        // Adjust redefined properties
                    [%- found = "true" -%]
                [%- END -%]
        [% IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]// [% END %]Q${namespace}${redefinedPropertyName.split('-').0}::remove${redefinedPropertyName.split('-').1.ucfirst}([%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]/* <derived-code> */[% ELSE %]_${PLURALFORM(qtAttribute, attribute)}[% END %]);
                    [%- END -%]
            [%- END %]
        [%- END %]
[%- IF found == "true" %]
[% END %]
        [%- IF derived == "true" && (derivedUnion == "false" || derivedUnion == "") %]
        // <derived-code>
        [%- ELSE %]
        _${PLURALFORM(qtAttribute, attribute)} = ${qtAttribute};
[%- IF attribute.findvalue("defaultValue/@xmi:type") != "" %]
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("${attributeName.lcfirst}");
[%- END %]
            [%- IF qtType.match('\*') %]
        if (${qtAttribute} && ${qtAttribute}->asQModelingObject() && this->asQModelingObject())
            QObject::connect(${qtAttribute}->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(set${attributeName}()));
                [%- IF attribute.findvalue("@aggregation") == "composite" %]
        ${qtAttribute}->asQModelingObject()->setParent(this->asQModelingObject());
                [%- END -%]
            [%- END %]
        [%- END %]
        [%- found = "false" -%]
        [%- FOREACH subsettedPropertyName = attribute.findvalue("@subsettedProperty").split(" ") -%]
            [%- SET subsettedProperty = xmi.findnodes("//packagedElement[(@xmi:type=\"uml:Class\" or @xmi:type=\"uml:Stereotype\") and @name=\"${subsettedPropertyName.split('-').0}\"]/ownedAttribute[@name=\"${subsettedPropertyName.split('-').1}\"]") -%]
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
        [%- found = "false" -%]
        [%- FOREACH redefinedPropertyName = attribute.findvalue("@redefinedProperty").split(" ") -%]
            [%- SET redefinedProperty = xmi.findnodes("//packagedElement[(@xmi:type=\"uml:Class\" or @xmi:type=\"uml:Stereotype\") and @name=\"${redefinedPropertyName.split('-').0}\"]/ownedAttribute[@name=\"${redefinedPropertyName.split('-').1}\"]") -%]
            [%- IF redefinedProperty.findvalue("@name") != "" -%]
                [%- IF found == "false" %]

        // Adjust redefined properties
                    [%- found = "true" -%]
                [%- END -%]
                    [%- IF redefinedProperty.findvalue("upperValue/@value") == "*" %]
        if (${qtAttribute}) {
            Q${namespace}${redefinedPropertyName.split('-').0}::add${redefinedPropertyName.split('-').1.ucfirst}(${qtAttribute});
        }
                    [%- ELSE %]
        Q${namespace}${redefinedPropertyName.split('-').0}::set${redefinedPropertyName.split('-').1.remove('^is').ucfirst}(${qtAttribute});
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
[%- IF documentation != "" -%]
/*!
    ${documentation}
 */
[% END %]
[%- IF returnType != " " -%]${returnType}[%- ELSE -%]void [%- END -%]Q${namespace}${className}::[%- IF uml2qt_attribute.item(operationName) != "" -%]${uml2qt_attribute.item(operationName)}[%- ELSE -%]${operationName}[%- END -%](
    [%- SET parameters = operation.findnodes("ownedParameter[@direction!='return']") -%]
    [%- FOREACH parameter = parameters -%]
        [%- QT_TYPE(namespace, parameter) -%]
[%- SET parameterName = parameter.findvalue("@name") -%]
[%- IF uml2qt_attribute.item(parameterName) != "" -%]${uml2qt_attribute.item(parameterName)}[%- ELSE -%]${parameterName}[%- END -%]
        [%- IF !loop.last %], [% END -%]
    [%- END -%]
)[% IF operation.findvalue("@isQuery") == "true" %] const[% END %]
{
    qWarning("Q${namespace}${className}::${operationName}(): to be implemented (operation)");

    [%- FOREACH parameter = parameters -%]
    [%- SET parameterName = parameter.findvalue("@name") -%]
    [%- IF uml2qt_attribute.item(parameterName) != "" -%][%- SET parameterName = uml2qt_attribute.item(parameterName) -%][%- END %]
    Q_UNUSED(${parameterName});
    [%- END %]
    [%- IF returnType != " " -%]
    [%- IF returnType.match('\*$') %]
    return 0;
    [%- ELSE %]
    return ${returnType}();
    [%- END -%]
    [%- END %]
}

[%- END %]
QT_END_NAMESPACE

