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
[%- superclasses = [] %]
[% useNamespace = [] -%]
[%- forwards = [] -%]
[%- visitedClasses = [] -%]
[%- GENERATE_FWD_DECLARATIONS(class, visitedClasses, forwards, useNamespace, superclasses) -%]
[%- FOREACH forward = forwards.unique.sort -%]
#include <${forward}>
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
[%- visitedClasses = [] -%]
[%- SET_PROPERTY_DATA(class, visitedClasses, redefinedProperties) %]
}

QT_END_NAMESPACE

