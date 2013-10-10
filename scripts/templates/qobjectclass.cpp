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
#include "q${namespace.lower}${className.lower}object_p.h"
#include "private/qmodelingobject_p.h"

#include <Qt${namespace}/Q${namespace}${className}>
[% SET useNamespace = 'false' -%]
[%- forwards = [] -%]
[%- visitedClasses = [] -%]
[%- GENERATE_FWD_DECLARATIONS(class, visitedClasses, forwards, useNamespace) -%]
[%- FOREACH forward = forwards.unique.sort -%]
#include <Qt${namespace}/${forward}>
[% IF loop.last %]
[% END -%]
[%- END -%]
QT_BEGIN_NAMESPACE

Q${namespace}${className}Object::Q${namespace}${className}Object(Q${namespace}${className} *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

[%- IF class.findvalue("@isAbstract") != "true" %]
Q${namespace}${className}Object::~Q${namespace}${className}Object()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<Q${namespace}${className} *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

[%- END %]
[%- SET originalClassName = class.findvalue("@name") -%]
[%- visitedClasses = [] -%]
[%- redefinedProperties = [] -%]
[%- POPULATE_REDEFINED_PROPERTIES(class, visitedClasses, redefinedProperties) -%]
[%- visitedClasses = [] %]
[% GENERATE_CPP_ATTRIBUTES(originalClassName, class, visitedClasses, redefinedProperties) -%]
[%- visitedClasses = [] -%]
[%- redefinedOperations = [] -%]
[%- POPULATE_REDEFINED_OPERATIONS(class, visitedClasses, redefinedOperations) -%]
[%- visitedClasses = [] %]
[%- GENERATE_CPP_OPERATIONS(originalClassName, class, visitedClasses, redefinedOperations) -%]
[%- visitedClasses = [] %]
[%- GENERATE_CPP_SLOTS(originalClassName, class, visitedClasses, redefinedProperties) -%]

void Q${namespace}${className}Object::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));
[%- visitedClasses = [] -%]
[%- SET_GROUP_PROPERTIES(class, visitedClasses, redefinedProperties) %]
}

void Q${namespace}${className}Object::setPropertyData()
{
[%- FOREACH attribute = class.findnodes("ownedAttribute") -%]
[%- SET qtAttribute = QT_ATTRIBUTE(attribute) -%]
[%- SET association = attribute.findvalue("@association") -%]
[%- IF attribute.findvalue("@aggregation") == "composite" %]
    Q_DECLARE_METAPROPERTY_INFO(Q${namespace}${className}, ${PLURALFORM(qtAttribute, attribute)}, AggregationRole, QStringLiteral("composite"));
[%- ELSE %]
    Q_DECLARE_METAPROPERTY_INFO(Q${namespace}${className}, ${PLURALFORM(qtAttribute, attribute)}, AggregationRole, QStringLiteral("none"));
[%- END %]
    Q_DECLARE_METAPROPERTY_INFO(Q${namespace}${className}, ${PLURALFORM(qtAttribute, attribute)}, PropertyClassRole, QStringLiteral("Q${namespace}${className}"));
    Q_DECLARE_METAPROPERTY_INFO(Q${namespace}${className}, ${PLURALFORM(qtAttribute, attribute)}, IsDerivedRole, [% IF attribute.findvalue("@isDerived") == "true" %]true[% ELSE %]false[% END %]);
    Q_DECLARE_METAPROPERTY_INFO(Q${namespace}${className}, ${PLURALFORM(qtAttribute, attribute)}, IsDerivedUnionRole, [% IF attribute.findvalue("@isDerivedUnion") == "true" %]true[% ELSE %]false[% END %]);
    Q_DECLARE_METAPROPERTY_INFO(Q${namespace}${className}, ${PLURALFORM(qtAttribute, attribute)}, DocumentationRole, QStringLiteral("${attribute.findvalue("ownedComment/body/text()")}"));
    Q_DECLARE_METAPROPERTY_INFO(Q${namespace}${className}, ${PLURALFORM(qtAttribute, attribute)}, RedefinedPropertiesRole, QStringLiteral("${attribute.findvalue("@redefinedProperty")}"));
    Q_DECLARE_METAPROPERTY_INFO(Q${namespace}${className}, ${PLURALFORM(qtAttribute, attribute)}, SubsettedPropertiesRole, QStringLiteral("${attribute.findvalue("@subsettedProperty")}"));
    Q_DECLARE_METAPROPERTY_INFO(Q${namespace}${className}, ${PLURALFORM(qtAttribute, attribute)}, OppositeEndRole, QStringLiteral("
[%- IF association != "" -%]
[%- FOREACH memberEnd = xmi.findvalue("//packagedElement[@xmi:type=\"uml:Association\" and @name=\"${association}\"]/@memberEnd").split(' ') -%]
[%- NEXT IF memberEnd == className.replace('$', "-${attribute.findvalue(\"@name\")}") -%]
[%- SET oppositeProperty = xmi.findnodes("//packagedElement[@xmi:type=\"uml:Class\" and @name=\"${memberEnd.split('-').0}\"]/ownedAttribute[@name=\"${memberEnd.split('-').1}\"]") -%]
[%- IF oppositeProperty.findvalue("@name") != "" -%]${oppositeProperty.findvalue("@xmi:id")}[%- END -%]
[%- END -%]
[%- END -%]
"));

[%- END %]
}

QT_END_NAMESPACE

