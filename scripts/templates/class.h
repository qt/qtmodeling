[%- MACRO REDEFINEDPROPERTIES(class, redefinedProperties) BLOCK -%]
    [%- FOREACH attribute IN class.attribute.values -%]
        [%- IF attribute.redefinedProperty != '' -%]
            [%- FOREACH redefinedProperty IN attribute.redefinedProperty.split(' ') -%]
                [%- redefinedProperties.push(redefinedProperty) -%]
            [%- END -%]
        [%- END -%]
    [%- END -%]
    [%- FOREACH associationend IN class.associationend.values -%]
        [%- IF associationend.redefinedProperty != '' -%]
            [%- FOREACH redefinedProperty IN associationend.redefinedProperty.split(' ') -%]
                [%- redefinedProperties.push(redefinedProperty) -%]
            [%- END -%]
        [%- END -%]
    [%- END -%]
[%- END -%]
[%- MACRO PARENTSOF(class, parents, redefinedProperties) BLOCK -%]
    [%- IF class.isAbstract == 'true' -%]
        [%- FOREACH superclass IN class.superclass %]
            [%- PARENTSOF(classes.item(superclass.include.split('/').last), parents, redefinedProperties) -%]
        [%- END %]
        [%- parents.push(class) -%]
        [%- REDEFINEDPROPERTIES(class, redefinedProperties) -%]
    [%- END %]
[%- END -%]
[%- MACRO GENERATEPROPERTIES(class) BLOCK -%]
    [%- parents = [] -%]
    [%- redefinedProperties = [] -%]
    [%- FOREACH superclass IN class.superclass %]
        [%- PARENTSOF(classes.item(superclass.include.split('/').last), parents, redefinedProperties) -%]
    [%- END %]
    [%- parents.push(class) -%]
    [%- REDEFINEDPROPERTIES(class, redefinedProperties) -%]
    [%- FOREACH parent IN parents.unique -%]
    [%- IF parent.attribute.values or parent.associationend.values %]
    // From ${parent.name}
        [%- FOREACH attribute IN parent.attribute.values -%]
        [%- IF redefinedProperties.grep(attribute.id).size == 0 -%]
            [%- IF attribute.isReadOnly == 'true' or attribute.accessor.size == 3 %]
    Q_PROPERTY(${attribute.accessor.0.return}[%- IF attribute.accessor.0.return.substr(attribute.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${attribute.accessor.0.name} READ ${attribute.accessor.0.name})
            [%- ELSE %]
    Q_PROPERTY(${attribute.accessor.0.return}[%- IF attribute.accessor.0.return.substr(attribute.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${attribute.accessor.0.name} READ ${attribute.accessor.0.name} WRITE ${attribute.accessor.1.name})
            [%- END -%]
        [%- END -%]
        [%- END -%]
        [%- FOREACH associationend IN parent.associationend.values -%]
        [%- IF redefinedProperties.grep(associationend.id).size == 0 -%]
            [%- IF associationend.isReadOnly == 'true' or associationend.accessor.size == 3 %]
    Q_PROPERTY(${associationend.accessor.0.return}[%- IF associationend.accessor.0.return.substr(associationend.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${associationend.accessor.0.name} READ ${associationend.accessor.0.name})
            [%- ELSE %]
    Q_PROPERTY(${associationend.accessor.0.return}[%- IF associationend.accessor.0.return.substr(associationend.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${associationend.accessor.0.name} READ ${associationend.accessor.0.name} WRITE ${associationend.accessor.1.name})
            [%- END -%]
        [%- END %]
        [%- END %]

    [%- END -%]
    [%- END -%]
[%- END -%]
/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the [% namespace.split('/').0 %] module of the Qt Toolkit.
**
** [% GET '$QT_BEGIN_LICENSE:LGPL$' %]
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia  LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** [% GET '$QT_END_LICENSE$' %]
**
****************************************************************************/
#ifndef ${namespace.replace('/', '_').upper}_${class.name.upper}_H
#define ${namespace.replace('/', '_').upper}_${class.name.upper}_H

#include <[% namespace.split('/').0 %]/[% namespace.split('/').0 %]Global>
[%- IF class.item('qtumlinclude') %]

// [% namespace.split('/').0 %] includes
[%- FOREACH include IN class.qtumlinclude -%]

#include <${include}>
[%- END -%]
[%- END -%]
[%- IF class.item('superclass') %]

// Base class includes
[%- FOREACH superclass IN class.superclass -%]

#include <${superclass.include}>
[%- END -%]
[%- END -%]
[%- IF class.item('qtinclude') %]

// Qt includes
[%- FOREACH include IN class.qtinclude -%]

#include <${include}>
[%- END -%]
[%- END -%]

[%- IF not(class.superclass) %]

#define QTUML_D(Class) Class##Private * const d = dynamic_cast<Class##Private *>(d_umlptr);
#define QTUML_Q(Class) Class * const q = dynamic_cast<Class *>(q_umlptr);
[%- END -%]


QT_BEGIN_HEADER
[%- currentNamespace = '' -%]
[%- FOREACH forwarddecl IN class.forwarddecl %]
    [%- IF forwarddecl.namespace != namespace.replace('/', '::') %]
        [%- IF forwarddecl.namespace != currentNamespace %]
            [%- IF currentNamespace != '' %]
QT_END_NAMESPACE_${currentNamespace.replace('::', '_').upper}
            [%- END -%]

QT_BEGIN_NAMESPACE_${forwarddecl.namespace.replace('::', '_').upper}
            [%- currentNamespace = forwarddecl.namespace -%]
        [%- END -%]

class ${forwarddecl.content};
    [%- END -%]
[%- END %]
[%- IF currentNamespace != '' %]
QT_END_NAMESPACE_${currentNamespace.replace('::', '_').upper}

[%- END %]

QT_BEGIN_NAMESPACE_${namespace.replace('/', '_').upper}

QT_MODULE([% namespace.split('/').0 %])

[%- IF not(class.superclass) %]
class ${class.name}Private;
[% END %]
[%- found = 'false' -%]
[%- FOREACH forwarddecl IN class.forwarddecl -%]
[%- IF forwarddecl.namespace == namespace.replace('/', '::') and forwarddecl.content != class.name -%]
[%- IF found == 'false' %]

[%- found = 'true' -%]
[%- END -%]
class ${forwarddecl.content};

[%- END %]
[%- END -%]

class Q_[% namespace.split('/').0.substr(2).upper %]_EXPORT ${class.name}[%- IF class.superclass -%] : [% END -%][% FOREACH superclass = class.superclass %]public ${superclass.name.split('/').last}[% IF !loop.last %], [% END %][% END %]
{
[%- IF class.isAbstract == 'false' %]
    Q_OBJECT

    [%- GENERATEPROPERTIES(class) -%]
[% END %]
    Q_DISABLE_COPY(${class.name})

public:
    [%- IF class.isAbstract == 'false' %]
    explicit ${class.name}(QObject *parent = 0);
    [%- END%]
    virtual ~${class.name}();
    [%- IF class.item('attribute') %]

    // Attributes
    [%- FOREACH attribute IN class.attribute.values -%]
    [%- FOREACH accessor IN attribute.accessor %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness};
    [%- LAST IF attribute.isReadOnly == 'true' -%]
    [%- END -%]
    [%- END -%]
    [%- END %]
    [%- IF class.item('associationend') %]

    // Association-ends
    [%- FOREACH associationend IN class.associationend.values -%]
    [%- FOREACH accessor IN associationend.accessor %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness};
    [%- LAST IF associationend.isReadOnly == 'true' -%]
    [%- END -%]
    [%- END -%]
    [%- END %]
    [%- IF class.item('operation') %]

    // Operations
    [%- FOREACH operation IN class.operation %]
    ${operation.return}${operation.name}([%- FOREACH parameter IN operation.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${operation.constness};
    [%- END %]
    [%- END %]
    [%- found = 'false' -%]
    [%- IF class.item('attribute') %]
    [%- FOREACH attribute IN class.attribute.values -%]
    [%- IF attribute.isReadOnly == 'false' -%]
    [%- FOREACH subsettedProperty IN attribute.subsettedProperty.split(' ') %]
    [%- IF classes.item(subsettedProperty.split('-').0.replace('^', 'Q')).attribute.item(subsettedProperty) -%]
        [%- property = classes.item(subsettedProperty.split('-').0.replace('^', 'Q')).attribute.item(subsettedProperty) -%]
    [%- ELSE -%]
        [%- property = classes.item(subsettedProperty.split('-').0.replace('^', 'Q')).associationend.item(subsettedProperty) -%]
    [%- END -%]
    [%- IF property.isReadOnly == 'false' && attribute.accessor.1.parameter.0.type != property.accessor.1.parameter.0.type -%]
    [%- IF found == 'false' -%]
    [%- found = 'true' %]

    // Overriden methods for subsetted properties
    [%- END -%]
    [%- FOREACH accessor IN property.accessor -%]
    [%- NEXT IF loop.first %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN attribute.accessor.1.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness};
    [%- END -%]
    [%- END -%]
    [%- END -%]
    [%- END -%]
    [%- END -%]
    [%- END %]
    [%- IF class.item('associationend') %]
    [%- FOREACH associationend IN class.associationend.values -%]
    [%- IF associationend.isReadOnly == 'false' -%]
    [%- FOREACH subsettedProperty IN associationend.subsettedProperty.split(' ') %]
    [%- IF classes.item(subsettedProperty.split('-').0.replace('^', 'Q')).attribute.item(subsettedProperty) -%]
        [%- property = classes.item(subsettedProperty.split('-').0.replace('^', 'Q')).attribute.item(subsettedProperty) -%]
    [%- ELSE -%]
        [%- property = classes.item(subsettedProperty.split('-').0.replace('^', 'Q')).associationend.item(subsettedProperty) -%]
    [%- END -%]
    [%- IF property.isReadOnly == 'false' && associationend.accessor.1.parameter.0.type != property.accessor.1.parameter.0.type -%]
    [%- IF found == 'false' -%]
    [%- found = 'true' %]

    // Overriden methods for subsetted properties
    [%- END -%]
    [%- FOREACH accessor IN property.accessor -%]
    [%- NEXT IF loop.first %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN associationend.accessor.1.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness};
    [%- END -%]
    [%- END -%]
    [%- END -%]
    [%- END -%]
    [%- END -%]
    [%- END %]
[%- IF not(class.superclass) -%]
[%- friendClasses = [] -%]
[%- FOREACH friendClass IN classes.values -%]
[%- FOREACH associationend IN friendClass.associationend.values -%]
[%- IF classes.item(associationend.oppositeEnd.split('-').0.replace('^', 'Q')).associationend.item(associationend.oppositeEnd).isReadOnly == 'true' -%]
[%- IF associationend.isReadOnly == 'true' -%]
[%- modifiedFriendClass = friendClass.name.replace('$', 'Private') -%]
[%- ELSE -%]
[%- modifiedFriendClass = friendClass.name -%]
[%- END -%]
[%- IF modifiedFriendClass.name != class.name -%]
[%- friendClasses.push(modifiedFriendClass) -%]
[%- END -%]
[%- END -%]
[%- END -%]
[%- END -%]
[%- END -%]
[%- FOREACH friendClass IN friendClasses.unique.sort -%]
    [%- IF loop.first %]

    // Classes which access read-only opposite properties should be friend
    [%- END %]
    friend class ${friendClass};
[%- END %]
[%- IF class.isAbstract == 'true' %]

protected:
    explicit ${class.name}();
[%- ELSE %]

protected:
    explicit ${class.name}(bool createPimpl, QObject *parent = 0);
[%- END %]
[%- IF not(class.superclass) %]

protected:
    ${class.name}Private *d_umlptr;
[%- END %]
};

QT_END_NAMESPACE_${namespace.replace('/', '_').upper}
[%- IF class.isAbstract == 'false' %]

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_${namespace.split('/').0.upper}(${class.name}) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_${namespace.split('/').0.upper}(${class.name}) *> *)
[%- END %]

QT_END_HEADER

#endif // ${namespace.replace('/', '_').upper}_${class.name.upper}_H

