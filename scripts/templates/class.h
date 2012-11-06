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
        [%- contains = 'false' -%]
        [%- FOREACH parentClass IN parents -%]
            [%- IF parentClass.name == class.name -%]
                [%- contains = 'true' -%]
            [%- END -%]
        [%- END -%]
        [%- IF contains == 'false' -%]
            [%- parents.push(class) -%]
        [%- END -%]
        [%- REDEFINEDPROPERTIES(class, redefinedProperties) -%]
    [%- END %]
[%- END -%]
[%- MACRO GENERATEPROPERTIES(class, recursive) BLOCK -%]
    [%- parents = [] -%]
    [%- redefinedProperties = [] -%]
    [%- IF recursive == 'true' -%]
    [%- FOREACH superclass IN class.superclass %]
        [%- PARENTSOF(classes.item(superclass.include.split('/').last), parents, redefinedProperties) -%]
    [%- END -%]
    [%- END %]
    [%- IF recursive == 'false' -%]
    [%- parents.push(class) -%]
    [%- END -%]
    [%- REDEFINEDPROPERTIES(class, redefinedProperties) -%]
    [%- FOREACH parent IN parents.unique -%]
    [%- IF parent.attribute.values or parent.associationend.values -%]
        [%- found = 'false' -%]
        [%- FOREACH attribute IN parent.attribute.values -%]
        [%- IF redefinedProperties.grep(attribute.id).size == 0 -%]
            [%- IF found == 'false' %]

    // From [% IF recursive == 'true' %]aggregated [% END %]${parent.name}
            [%- found = 'true' -%]
            [%- END -%]
            [%- IF attribute.isReadOnly == 'true' or attribute.accessor.size == 3 %]
    Q_PROPERTY(${attribute.accessor.0.return}[%- IF attribute.accessor.0.return.substr(attribute.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${attribute.accessor.0.name} READ ${attribute.accessor.0.name}[% IF attribute.isDerived == 'true' and attribute.isDerivedUnion == 'false' %] STORED false[% END %])
            [%- ELSE %]
    Q_PROPERTY(${attribute.accessor.0.return}[%- IF attribute.accessor.0.return.substr(attribute.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${attribute.accessor.0.name} READ ${attribute.accessor.0.name} WRITE ${attribute.accessor.1.name}[% IF attribute.isDerived == 'true' and attribute.isDerivedUnion == 'false' %] STORED false[% END %])
            [%- END -%]
        [%- END -%]
        [%- END -%]
        [%- FOREACH associationend IN parent.associationend.values -%]
        [%- IF redefinedProperties.grep(associationend.id).size == 0 -%]
            [%- IF found == 'false' %]

    // From [% IF recursive == 'true' %]aggregated [% END %]${parent.name}
            [%- found = 'true' -%]
            [%- END -%]
            [%- IF associationend.isReadOnly == 'true' or associationend.accessor.size == 3 %]
    Q_PROPERTY(${associationend.accessor.0.return}[%- IF associationend.accessor.0.return.substr(associationend.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${associationend.accessor.0.name} READ ${associationend.accessor.0.name}[% IF associationend.isDerived == 'true' and associationend.isDerivedUnion == 'false' %] STORED false[% END %])
            [%- ELSE %]
    Q_PROPERTY(${associationend.accessor.0.return}[%- IF associationend.accessor.0.return.substr(associationend.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${associationend.accessor.0.name} READ ${associationend.accessor.0.name} WRITE ${associationend.accessor.1.name}[% IF associationend.isDerived == 'true' and associationend.isDerivedUnion == 'false' %] STORED false[% END %])
            [%- END -%]
        [%- END -%]
        [%- END %]
    [%- END -%]
    [%- END -%]
[%- END -%]
[%- MACRO GENERATEFUNCTIONS(class, recursive) BLOCK -%]
    [%- parents = [] -%]
    [%- redefinedProperties = [] -%]
    [%- IF recursive == 'true' -%]
    [%- FOREACH superclass IN class.superclass %]
        [%- PARENTSOF(classes.item(superclass.include.split('/').last), parents, redefinedProperties) -%]
    [%- END -%]
    [%- END %]
    [%- IF recursive == 'false' -%]
    [%- parents.push(class) -%]
    [%- END -%]
    [%- REDEFINEDPROPERTIES(class, redefinedProperties) -%]
    [%- FOREACH parent IN parents.unique -%]
    [%- IF parent.attribute.values or parent.associationend.values -%]
        [%- found = 'false' -%]
        [%- FOREACH attribute IN parent.attribute.values -%]
        [%- IF redefinedProperties.grep(attribute.id).size == 0 -%]
            [%- IF found == 'false' %]

    // Attributes from [% IF recursive == 'true' %]aggregated [% END %]${parent.name}
            [%- found = 'true' -%]
            [%- END -%]
            [%- FOREACH accessor IN attribute.accessor %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness};
            [%- LAST IF attribute.isReadOnly == 'true' -%]
            [%- END -%]
        [%- END -%]
        [%- END -%]
        [%- found = 'false' -%]
        [%- FOREACH associationend IN parent.associationend.values -%]
        [%- IF redefinedProperties.grep(associationend.id).size == 0 -%]
            [%- IF found == 'false' %]

    // Association ends from [% IF recursive == 'true' %]aggregated [% END %]${parent.name}
            [%- found = 'true' -%]
            [%- END -%]
            [%- FOREACH accessor IN associationend.accessor %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness};
            [%- LAST IF associationend.isReadOnly == 'true' -%]
            [%- END -%]
        [%- END -%]
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

// Base class includes
[%- IF !class.superclass || class.superclass.size > 1 %]
#include <QtCore/QObject>
[%- END -%]
[%- FOREACH superClass IN class.superclass %]
#include <${superClass.include}>
[%- END %]
[%- IF class.item('qtumlinclude') %]

// [% namespace.split('/').0 %] includes
[%- FOREACH include IN class.qtumlinclude -%]

#include <${include}>
[%- END -%]
[%- END %]
[%- IF class.item('qtinclude') %]

// Qt includes
[%- FOREACH include IN class.qtinclude -%]

#include <${include}>
[%- END -%]
[%- END %]

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

[%- found = 'false' -%]
[%- FOREACH forwarddecl IN class.forwarddecl -%]
[%- IF forwarddecl.namespace == namespace.replace('/', '::') and forwarddecl.content != class.name -%]
[%- IF found == 'false' -%]

// Forward decls for function parameters
[% found = 'true' -%]
[%- END -%]
class ${forwarddecl.content};

[%- END %]
[%- END -%]

class ${class.name}Private;

class Q_[% namespace.split('/').0.substr(2).upper %]_EXPORT ${class.name} : [% IF class.superclass.size == 1 %]public ${class.superclass.0.name.split('/').last}[% ELSE %]public QObject[% END %]
{
    Q_OBJECT
[%- IF class.superclass and class.superclass.size > 1 -%]
    [%- GENERATEPROPERTIES(class, 'true') -%]
[%- END -%]
    [%- GENERATEPROPERTIES(class, 'false') %]

    Q_DISABLE_COPY(${class.name})
    Q_DECLARE_PRIVATE(${class.name})

public:
    explicit ${class.name}(QObject *parent = 0);
    virtual ~${class.name}();
[%- IF class.superclass and class.superclass.size > 1 -%]
    [%- GENERATEFUNCTIONS(class, 'true') -%]
[%- END -%]
    [%- GENERATEFUNCTIONS(class, 'false') %]
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
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN attribute.accessor.1.parameter -%]QUmlPointer<${parameter.type.remove(' \*$')}> ${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness};
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
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN associationend.accessor.1.parameter -%]QUmlPointer<${parameter.type.remove(' \*$')}> ${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness};
    [%- END -%]
    [%- END -%]
    [%- END -%]
    [%- END -%]
    [%- END -%]
    [%- END %]
[%- friendClasses = [] -%]
[%- FOREACH friendClass IN classes.values -%]
[%- FOREACH associationend IN friendClass.associationend.values -%]
[%- IF classes.item(associationend.oppositeEnd.split('-').0.replace('^', 'Q')).name == class.name && class.associationend.item(associationend.oppositeEnd).isReadOnly == 'true' -%]
[%- IF associationend.isReadOnly == 'true' -%]
[%- modifiedFriendClass = friendClass.name.replace('$', 'Private') -%]
[%- ELSE -%]
[%- modifiedFriendClass = friendClass.name -%]
[%- END -%]
[%- IF friendClass.name != class.name -%]
[%- friendClasses.push(modifiedFriendClass) -%]
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

protected:
    explicit ${class.name}(${class.name}Private &dd, QObject *parent = 0);
[%- IF class.superclass and class.superclass.size > 1 %]

private:
    [%- FOREACH parentClass IN class.superclass %]
    ${parentClass.name} *_wrapped${parentClass.name.replace('^Q', '')};
    [%- END %]
[%- END %]
};

QT_END_NAMESPACE_${namespace.replace('/', '_').upper}

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_${namespace.split('/').0.upper}(${class.name}) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_${namespace.split('/').0.upper}(${class.name}) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_${namespace.split('/').0.upper}(${class.name}) *> *)

QT_END_HEADER

#endif // ${namespace.replace('/', '_').upper}_${class.name.upper}_H

