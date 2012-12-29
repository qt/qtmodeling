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
[%- MACRO HANDLESUBSETTEDPROPERTY(property, operation, singlevalued) BLOCK -%]
    [%- IF property.subsettedProperty != '' %]
    [%- found = 'false' -%]
    [%- FOREACH subsettedProperty IN property.subsettedProperty.split(' ') -%]
        [%- subsettedClass = subsettedProperty.split('-').0.replace('^', 'Q') -%]
        [%- IF classes.item(subsettedClass).attribute.item(subsettedProperty) -%]
        [%- subsettedPropertyItem = classes.item(subsettedClass).attribute.item(subsettedProperty) -%]
        [%- ELSE -%]
        [%- subsettedPropertyItem = classes.item(subsettedClass).associationend.item(subsettedProperty) -%]
        [%- END -%]
        [%- IF operation == 1 and subsettedPropertyItem.accessor.1 -%]
            [%- IF found == 'false' %]

        // Adjust subsetted property(ies)
            [%- found = 'true' -%]
            [%- END %]
        [%- IF property.accessor.size == 2 and subsettedPropertyItem.accessor.size > 2 %]
        if (${accessor.parameter.0.name}) {
        [%- END %]
            [%- IF property.isReadOnly == subsettedPropertyItem.isReadOnly %]
        [% IF property.accessor.size == 2 and subsettedPropertyItem.accessor.size > 2 %]    [% END %](qwrappedobject_cast<${subsettedClass}[% IF subsettedPropertyItem.isReadOnly == 'true' %]Private[% END %] *>(this))->${subsettedPropertyItem.accessor.1.name}(qwrappedobject_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>(${accessor.parameter.0.name}));
            [%- ELSIF property.isReadOnly == 'false' and subsettedPropertyItem.isReadOnly == 'true' %]
        [% IF property.accessor.size == 2 and subsettedPropertyItem.accessor.size > 2 %]    [% END %](qwrappedobject_cast<${subsettedClass}Private *>(d))->${subsettedPropertyItem.accessor.1.name}(qwrappedobject_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>(${accessor.parameter.0.name}));
            [%- ELSE %]
        [% IF property.accessor.size == 2 and subsettedPropertyItem.accessor.size > 2 %]    [% END %]Q_Q(${class.name});
        [% IF property.accessor.size == 2 and subsettedPropertyItem.accessor.size > 2 %]    [% END %]q->${subsettedClass}::${subsettedPropertyItem.accessor.1.name}(qwrappedobject_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>(${accessor.parameter.0.name}));
            [%- END %]
        [%- IF property.accessor.size == 2 and subsettedPropertyItem.accessor.size > 2 %]
        }
        [%- END %]
        [%- ELSE -%][%- IF operation == 2 and subsettedPropertyItem.accessor.2 -%]
            [%- IF found == 'false' -%]
            [%- IF singlevalued == 'false' %]

            [%- END %]
        // Adjust subsetted property(ies)
            [%- found = 'true' -%]
            [%- END %]
            [%- IF property.isReadOnly == 'true' and subsettedPropertyItem.isReadOnly == 'true' %]
        (qwrappedobject_cast<${subsettedClass}Private *>(this))->${subsettedPropertyItem.accessor.2.name}(qwrappedobject_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>([% IF singlevalued == 'true' %]this->[% END %]${accessor.parameter.0.name}));
            [%- ELSIF property.isReadOnly == 'false' and subsettedPropertyItem.isReadOnly == 'false' %]
        (qwrappedobject_cast<${subsettedClass} *>(this))->${subsettedPropertyItem.accessor.2.name}(qwrappedobject_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>([% IF singlevalued == 'true' %]d->[% END %]${accessor.parameter.0.name}));
            [%- ELSIF property.isReadOnly == 'false' and subsettedPropertyItem.isReadOnly == 'true' %]
        (qwrappedobject_cast<${subsettedClass}Private *>(d))->${subsettedPropertyItem.accessor.2.name}(qwrappedobject_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>([% IF singlevalued == 'true' %]d->[% END %]${accessor.parameter.0.name}));
            [%- ELSE %]
        Q_Q(${class.name});
        q->${subsettedClass}::${subsettedPropertyItem.accessor.2.name}(qwrappedobject_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>([% IF singlevalued == 'true' %]this->[% END %]${accessor.parameter.0.name}));
            [%- END %]
        [%- END -%]
        [%- END -%]
    [%- END -%]
    [%- IF found == 'true' and operation == 2 and singlevalued == 'true' %]

    [%- END -%]
    [%- END -%]
[%- END -%]
[%- MACRO HANDLEOPPOSITEEND(property, accessor, operation, singlevalued) BLOCK -%]
[%- IF property.oppositeEnd != '' -%]
[%- opposite = classes.item(property.oppositeEnd.split('-').0.replace('^', 'Q')).associationend.item(property.oppositeEnd) %]
        [%- IF singlevalued == 'false' or operation == 1 %]

        [%- END %]
        // Adjust opposite property
        [%- IF property.isReadOnly == 'true' and singlevalued == 'false' and not(operation == 2 and opposite.accessor.size <= 2) %]
        Q_Q(${class.name});
        [%- END %]
    [%- IF operation == 1 -%]
        [%- IF property.accessor.size == 2 and opposite.accessor.size > 2 %]
        if (${accessor.parameter.0.name})
        [%- END %]
        [%- IF opposite.isReadOnly == 'false' %]
        [% IF property.accessor.size == 2 and opposite.accessor.size > 2 %]    [% END %]${accessor.parameter.0.name}->${opposite.accessor.1.name}([% IF property.isReadOnly == 'true' %]q[% ELSE %]this[% END %]);
        [%- ELSE %]
        [% IF property.accessor.size == 2 and opposite.accessor.size > 2 %]    [% END %](qwrappedobject_cast<${accessor.parameter.0.type.replace(' \*$', '').replace('$', 'Private *')}>(${accessor.parameter.0.name}->d_func()))->${opposite.accessor.1.name}([% IF property.isReadOnly == 'true' %]q[% ELSE %]this[% END %]);
        [%- END -%]
    [%- ELSE -%][%- IF operation == 2 and opposite.accessor.size > 2 %]
        [%- IF opposite.isReadOnly == 'false' %]
        if ([% IF singlevalued == 'true' %][% IF property.isReadOnly == 'true' %]this[% ELSE %]d[% END %]->[% END %]${accessor.parameter.0.name})
            [% IF singlevalued == 'true' %][% IF property.isReadOnly == 'true' %]this[% ELSE %]d[% END %]->[% END %]${accessor.parameter.0.name}->${opposite.accessor.2.name}([% IF property.isReadOnly == 'true' %]q[% ELSE %]this[% END %]);
        [%- ELSE %]
        if ([% IF singlevalued == 'true' %][% IF property.isReadOnly == 'true' %]this[% ELSE %]d[% END %]->[% END %]${accessor.parameter.0.name})
            (qwrappedobject_cast<${accessor.parameter.0.type.replace(' \*$', '').replace('$', 'Private *')}>([% IF singlevalued == 'true' %][% IF property.isReadOnly == 'true' %]this[% ELSE %]d[% END %]->[% END %]${accessor.parameter.0.name}->d_func()))->${opposite.accessor.2.name}([% IF property.isReadOnly == 'true' %]q[% ELSE %]this[% END %]);
        [%- END %]
    [%- ELSIF singlevalued == 'false' %]
        [%- IF opposite.isReadOnly == 'false' %]
        ${accessor.parameter.0.name}->${opposite.accessor.1.name}(0);
        [%- ELSE %]
        (qwrappedobject_cast<${accessor.parameter.0.type.replace(' \*$', '').replace('$', 'Private *')}>(${accessor.parameter.0.name}->d_func()))->${opposite.accessor.1.name}(0);
        [%- END %]
    [%- END -%][%- END -%]
    [%- IF operation == 2 and singlevalued == 'true' %]

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
// ---------------------------------------------------------------
// ATTRIBUTES FROM [% IF recursive == 'true' %]AGGREGATED [% END %]${parent.name}
// ---------------------------------------------------------------
[% found = 'true' -%]
            [%- END -%]
            [%- IF (attribute.documentation) %]
/*!
    [% attribute.documentation %]
 */
            [%- END %]
            [%- FOREACH accessor IN attribute.accessor %]
${accessor.return}${class.name}::${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
[%- IF parent.name == class.name %]
    // This is a [% IF attribute.isReadOnly == 'true' %]read-only [% ELSE %]read-write [% END %][% IF attribute.isDerivedUnion == 'true' %]derived-union [% ELSE %][% IF attribute.isDerived == 'true' %]derived [% END %][% END %]attribute

[%- IF attribute.isDerived == 'false' or attribute.isDerivedUnion == 'true' %]
    [%- IF loop.first %]
    Q_D(const ${class.name});
    return d->${accessor.name};
    [%- ELSE %]
    Q_D(${class.name});
    [%- IF attribute.accessor.0.return.search('<') %]
    if ([% IF loop.count == 2 %]![% END %]d->${attribute.accessor.0.name}.contains(${accessor.parameter.0.name})) {
    [%- ELSE %]
    if (d->${attribute.accessor.0.name} != ${accessor.parameter.0.name}) {
    [%- END %]
        [%- IF attribute.isReadOnly == 'true' %]
        d->${accessor.name}(${accessor.parameter.0.name});
        [%- ELSE -%]
            [%- IF accessor.name.search('^set') %]
            [%- HANDLESUBSETTEDPROPERTY(attribute, 2, 'true') %]
        d->${accessor.parameter.0.name} = ${accessor.parameter.0.name};
            [%- HANDLESUBSETTEDPROPERTY(attribute, 1, 'true') -%]
            [%- END -%]
            [%- IF accessor.name.search('^add') %]
        d->${attribute.accessor.0.name}.[% IF attribute.accessor.0.return.search('QSet') %]insert[% ELSE %]append[% END %](${accessor.parameter.0.name});
[%- IF attribute.aggregation == 'composite' and attribute.accessor.0.return.search('<') and attribute.subsettedProperty == '' %]
        qTopLevelWrapper(${accessor.parameter.0.name})->setParent(qTopLevelWrapper(this));
[%- END %]
            [%- HANDLESUBSETTEDPROPERTY(attribute, 1, 'false') -%]
    [%- END -%]
            [%- IF accessor.name.search('^remove') %]
        d->${attribute.accessor.0.name}.[% IF attribute.accessor.0.return.search('QSet') %]remove[% ELSE %]removeAll[% END %](${accessor.parameter.0.name});
[%- IF attribute.aggregation == 'composite' and attribute.accessor.0.return.search('<') and attribute.subsettedProperty == '' %]
        qTopLevelWrapper(${accessor.parameter.0.name})->setParent(0);
[%- END %]
            [%- HANDLESUBSETTEDPROPERTY(attribute, 2, 'false') -%]
            [%- END -%]
        [%- END %]
    }
    [%- END -%]
[%- ELSE %]
    qWarning("${class.name}::${accessor.name}: to be implemented (this is a derived attribute)");
    [%- FOREACH parameter IN accessor.parameter %]
    Q_UNUSED(${parameter.name});
    [%- END %]

    [%- IF loop.first %]
    [%- IF accessor.return.search('\*$') %]
    return 0; // change to your derived return
    [%- ELSIF accessor.return != 'void ' %]
    return [% IF accessor.return.search('&') %]*(new [% END %]${accessor.return.remove(' $').remove('^const ').remove(' &$')}[% IF accessor.return.search('&') %])[% ELSE %]()[% END %]; // change here to your derived return
    [%- END -%]
    [%- ELSE %]
    [%- IF attribute.accessor.0.return.search('<') %]
    if (false) { // change to your derived [% IF loop.count == 2 %]inclusion[% ELSE %]exclusion[% END %] criteria
    [%- ELSE %]
    if (false) { // change to your derived change criteria
    [%- END %]
        [%- IF attribute.isReadOnly == 'true' %]
        // change to your derived code
        [%- ELSE -%]
            [%- IF accessor.name.search('^set') %]
            [%- HANDLESUBSETTEDPROPERTY(attribute, 2, 'true') %]
        // change to your derived code
            [%- HANDLESUBSETTEDPROPERTY(attribute, 1, 'true') -%]
            [%- END -%]
            [%- IF accessor.name.search('^add') %]
        // change to your derived code
            [%- HANDLESUBSETTEDPROPERTY(attribute, 1, 'false') -%]
    [%- END -%]
            [%- IF accessor.name.search('^remove') %]
        // change to your derived code
            [%- HANDLESUBSETTEDPROPERTY(attribute, 2, 'false') -%]
            [%- END -%]
        [%- END %]
    }
    [%- END -%]
[%- END %]
[%- ELSE %]
    [% IF accessor.return != 'void ' %]return [% END %](qwrappedobject_cast<[% IF accessor.constness == ' const' %]const [% END %]${parent.name} *>(this))->${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.name}[% IF !loop.last %], [% END %][%- END -%]);
[%- END %]
}

            [%- LAST IF attribute.isReadOnly == 'true' -%]
            [%- END -%]
            [%- IF attribute.defaultValue != '' and attribute.isReadOnly == 'false' %]
void ${class.name}::unset${attribute.accessor.0.name.ucfirst.replace('^Is', '')}()
{
    ${attribute.accessor.1.name}(${attribute.defaultValue});
}

            [%- END %]
        [%- END -%]
        [%- END -%]
        [%- found = 'false' -%]
        [%- FOREACH associationend IN parent.associationend.values -%]
        [%- IF redefinedProperties.grep(associationend.id).size == 0 -%]
            [%- IF found == 'false' %]
// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM [% IF recursive == 'true' %]AGGREGATED [% END %]${parent.name}
// ---------------------------------------------------------------
[% found = 'true' -%]
            [%- END -%]
            [%- IF (associationend.documentation) %]
/*!
    [% associationend.documentation %]
 */
            [%- END %]
            [%- FOREACH accessor IN associationend.accessor %]
${accessor.return}${class.name}::${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
[%- IF parent.name == class.name %]
    // This is a [% IF associationend.isReadOnly == 'true' %]read-only [% ELSE %]read-write [% END %][% IF associationend.isDerivedUnion == 'true' %]derived-union [% ELSE %][% IF associationend.isDerived == 'true' %]derived [% END %][% END %]association end

[%- IF associationend.isDerived == 'false' or associationend.isDerivedUnion == 'true' %]
    [%- IF loop.first %]
    Q_D(const ${class.name});
    return d->${accessor.name};
    [%- ELSE %]
    Q_D(${class.name});
    [%- IF associationend.accessor.0.return.search('<') %]
    if ([% IF loop.count == 2 %]![% END %]d->${associationend.accessor.0.name}.contains(${accessor.parameter.0.name})) {
    [%- ELSE %]
    if (d->${associationend.accessor.0.name} != ${accessor.parameter.0.name}) {
    [%- END %]
        [%- IF associationend.isReadOnly == 'true' %]
        d->${accessor.name}(${accessor.parameter.0.name});
        [%- ELSE -%]
            [%- IF accessor.name.search('^set') %]
            [%- HANDLEOPPOSITEEND(associationend, accessor, 2, 'true') %]
            [%- HANDLESUBSETTEDPROPERTY(associationend, 2, 'true') %]
        d->${accessor.parameter.0.name} = ${accessor.parameter.0.name};
            [%- HANDLESUBSETTEDPROPERTY(associationend, 1, 'true') -%]
            [%- HANDLEOPPOSITEEND(associationend, accessor, 1, 'true') %]
            [%- END -%]
            [%- IF accessor.name.search('^add') %]
        d->${associationend.accessor.0.name}.[% IF associationend.accessor.0.return.search('QSet') %]insert[% ELSE %]append[% END %](${accessor.parameter.0.name});
[%- IF associationend.aggregation == 'composite' and associationend.accessor.0.return.search('<') and associationend.subsettedProperty == '' %]
        qTopLevelWrapper(${accessor.parameter.0.name})->setParent(qTopLevelWrapper(this));
[%- END %]
            [%- HANDLESUBSETTEDPROPERTY(associationend, 1, 'false') -%]
            [%- HANDLEOPPOSITEEND(associationend, accessor, 1, 'false') -%]
            [%- END -%]
            [%- IF accessor.name.search('^remove') %]
        d->${associationend.accessor.0.name}.[% IF associationend.accessor.0.return.search('QSet') %]remove[% ELSE %]removeAll[% END %](${accessor.parameter.0.name});
[%- IF associationend.aggregation == 'composite' and associationend.accessor.0.return.search('<') and associationend.subsettedProperty == '' %]
        qTopLevelWrapper(${accessor.parameter.0.name})->setParent(0);
[%- END %]
            [%- HANDLESUBSETTEDPROPERTY(associationend, 2, 'false') -%]
            [%- HANDLEOPPOSITEEND(associationend, accessor, 2, 'false') -%]
            [%- END -%]
        [%- END %]
    [%- END %]
[%- ELSE %]
    qWarning("${class.name}::${accessor.name}: to be implemented (this is a derived associationend)");
    [%- FOREACH parameter IN accessor.parameter %]
    Q_UNUSED(${parameter.name});
    [%- END %]

    [%- IF loop.first %]
    [%- IF accessor.return.search('\*$') %]
    return 0; // change here to your derived return
    [%- ELSIF accessor.return != 'void ' %]
    return [% IF accessor.return.search('&') %]*(new [% END %]${accessor.return.remove(' $').remove('^const ').remove(' &$')}[% IF accessor.return.search('&') %])[% ELSE %]()[% END %]; // change here to your derived return
    [%- END -%]
    [%- ELSE %]
    [%- IF associationend.accessor.0.return.search('<') %]
    if (false) { // change to your derived [% IF loop.count == 2 %]inclusion[% ELSE %]exclusion[% END %] criteria
    [%- ELSE %]
    if (false) { // change to your derived change criteria
    [%- END %]
        [%- IF associationend.isReadOnly == 'true' %]
        // change to your derived code
        [%- ELSE -%]
            [%- IF accessor.name.search('^set') %]
            [%- HANDLEOPPOSITEEND(associationend, accessor, 2, 'true') %]
            [%- HANDLESUBSETTEDPROPERTY(associationend, 2, 'true') %]
        // change to your derived code
            [%- HANDLESUBSETTEDPROPERTY(associationend, 1, 'true') -%]
            [%- HANDLEOPPOSITEEND(associationend, accessor, 1, 'true') %]
            [%- END -%]
            [%- IF accessor.name.search('^add') %]
        // change to your derived code
            [%- HANDLESUBSETTEDPROPERTY(associationend, 1, 'false') -%]
            [%- HANDLEOPPOSITEEND(associationend, accessor, 1, 'false') -%]
            [%- END -%]
            [%- IF accessor.name.search('^remove') %]
        // change to your derived code
            [%- HANDLESUBSETTEDPROPERTY(associationend, 2, 'false') -%]
            [%- HANDLEOPPOSITEEND(associationend, accessor, 2, 'false') -%]
            [%- END -%]
        [%- END %]
    [%- END %]
[%- END %]
    [%- IF !loop.first %]
    }
    [%- END %]
[%- ELSE %]
    [% IF accessor.return != 'void ' %]return [% END %](qwrappedobject_cast<[% IF accessor.constness == ' const' %]const [% END %]${parent.name} *>(this))->${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.name}[% IF !loop.last %], [% END %][%- END -%]);
[%- END %]
}

            [%- LAST IF associationend.isReadOnly == 'true' -%]
            [%- END -%]
        [%- END -%]
        [%- IF associationend.defaultValue != '' and associationend.isReadOnly == 'false' %]
void ${class.name}::unset${associationend.accessor.0.name.ucfirst.replace('^Is', '')}()
{
    ${associationend.accessor.1.name}(${associationend.defaultValue});
}

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
** rights. These rights are described in the Nokia Qt LGPL Exception
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

#include "${class.name.lower}.h"
#include "${class.name.lower}_p.h"

[% oppositeReadOnlyClasses = [] -%]
[%- FOREACH associationend IN class.associationend.values -%]
[%- oppositeClass = associationend.oppositeEnd.split('-').0.replace('^', 'Q') -%]
[%- IF classes.item(oppositeClass).associationend.item(associationend.oppositeEnd).isReadOnly == 'true' and oppositeClass != class.name -%]
[%- oppositeReadOnlyClasses.push(oppositeClass.lower.replace('$', '_p.h')) -%]
[%- END -%]
[%- END -%]
[%- FOREACH oppositeReadOnlyClass IN oppositeReadOnlyClasses.unique -%]
#include "${oppositeReadOnlyClass}"
[% IF loop.last %]
[% END -%]
[%- END -%]
[%- found = 'false' -%]
[%- FOREACH forwarddecl IN class.forwarddecl -%]
[%- IF forwarddecl.content != class.name -%]
[%- found = 'true' -%]
#include <${forwarddecl.namespace}/${forwarddecl.content}>
[% END -%]
[%- END -%]
[%- IF found == 'true' -%]

[% END -%]
QT_BEGIN_NAMESPACE_${namespace.replace('/', '_').upper}

${class.name}Private::${class.name}Private()
[%- found = 'false' -%]
[%- FOREACH attribute IN class.attribute.values -%]
[%- IF attribute.isDerived == 'false' or attribute.isDerivedUnion == 'true' -%]
[%- IF attribute.accessor.0.return.search('\*$') -%]
[%- IF found == 'true' -%]
,
[% ELSE -%]
 :
    [%- found = 'true' %]
[% END -%]
    ${attribute.accessor.0.name}(0)
[%- ELSE -%]
[%- IF attribute.defaultValue != '' -%]
[%- IF found == 'true' -%]
,
[% ELSE -%]
 :
    [%- found = 'true' %]
[% END -%]
    ${attribute.accessor.0.name}(${attribute.defaultValue})
[%- END -%]
[%- END -%]
[%- END -%]
[%- END -%]
[%- FOREACH associationend IN class.associationend.values %]
[%- IF associationend.isDerived == 'false' or associationend.isDerivedUnion == 'true' -%]
[%- IF associationend.accessor.0.return.search('\*$') -%]
[%- IF found == 'true' -%]
,
[% ELSE -%]
 :
    [%- found = 'true' %]
[% END -%]
    ${associationend.accessor.0.name}(0)
[%- ELSE -%]
[%- IF associationend.defaultValue != '' -%]
[%- IF found == 'true' -%]
,
[% ELSE -%]
 :
    [%- found = 'true' %]
[% END -%]
    ${associationend.accessor.0.name}(${associationend.defaultValue})
[%- END -%]
[%- END -%]
[%- END -%]
[%- END %]
{
}

${class.name}Private::~${class.name}Private()
{
[% FOREACH attribute IN class.attribute.values -%]
[%- IF (attribute.isDerived == 'false' or attribute.isDerivedUnion == 'true') and attribute.aggregation == 'composite' and attribute.subsettedProperty == '' -%]
    [%- IF attribute.accessor.0.return.search('\*$') -%]
    delete ${attribute.accessor.0.name};

    [%- ELSIF attribute.accessor.0.return.search('> $') -%]
    qDeleteAll(${attribute.accessor.0.name});

    [%- END -%]
[%- END -%]
[%- END -%]
[%- FOREACH associationend IN class.associationend.values -%]
[%- IF (associationend.isDerived == 'false' or associationend.isDerivedUnion == 'true') and associationend.aggregation == 'composite' and associationend.subsettedProperty == '' -%]
    [%- IF associationend.accessor.0.return.search('\*$') -%]
    delete ${associationend.accessor.0.name};

    [%- ELSIF associationend.accessor.0.return.search('> $') -%]
    qDeleteAll(${associationend.accessor.0.name});

    [%- END -%]
[%- END -%]
[%- END -%]
}

[%- FOREACH attribute IN class.attribute.values -%]
[%- IF attribute.isReadOnly == 'true' and attribute.subsettedBy != '' -%]
[%- FOREACH accessor IN attribute.accessor -%]
[%- NEXT IF loop.first %]
${accessor.return}${class.name}Private::${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
    // This is a read-only [% IF attribute.isDerivedUnion == 'true' %]derived-union [% ELSE %][% IF attribute.isDerived == 'true' %]derived [% END %][% END %]attribute

[%- IF attribute.isDerived == 'false' or attribute.isDerivedUnion == 'true' %]
    [%- IF attribute.accessor.0.return.search('<') %]
    if ([% IF loop.count == 2 %]![% END %]this->${attribute.accessor.0.name}.contains(${accessor.parameter.0.name})) {
    [%- ELSE %]
    if (this->${attribute.accessor.0.name} != ${accessor.parameter.0.name}) {
    [%- END %]
    [%- IF accessor.name.search('^set') %]
    [%- HANDLESUBSETTEDPROPERTY(attribute, 2, 'true') %]
        this->${accessor.parameter.0.name} = ${accessor.parameter.0.name};
    [%- HANDLESUBSETTEDPROPERTY(attribute, 1, 'true') -%]
    [%- END -%]
    [%- IF accessor.name.search('^add') %]
        this->${attribute.accessor.0.name}.[% IF attribute.accessor.0.return.search('QSet') %]insert[% ELSE %]append[% END %](${accessor.parameter.0.name});
[%- IF attribute.aggregation == 'composite' and attribute.accessor.0.return.search('<') and attribute.subsettedProperty == '' %]
        Q_Q(${class.name});
        qTopLevelWrapper(${accessor.parameter.0.name})->setParent(qTopLevelWrapper(q));
[%- END %]
    [%- HANDLESUBSETTEDPROPERTY(attribute, 1, 'false') -%]
    [%- END -%]
    [%- IF accessor.name.search('^remove') %]
        this->${attribute.accessor.0.name}.[% IF attribute.accessor.0.return.search('QSet') %]remove[% ELSE %]removeAll[% END %](${accessor.parameter.0.name});
[%- IF attribute.aggregation == 'composite' and attribute.accessor.0.return.search('<') and attribute.subsettedProperty == '' %]
        qTopLevelWrapper(${accessor.parameter.0.name})->setParent(0);
[%- END %]
    [%- HANDLESUBSETTEDPROPERTY(attribute, 2, 'false') -%]
    [%- END -%]
    }
[%- ELSE %]
    qWarning("${class.name}::${accessor.name}: to be implemented (this is a derived attribute)");
    [%- FOREACH parameter IN accessor.parameter %]
    Q_UNUSED(${parameter.name});
    [%- END %]

    [%- IF attribute.accessor.0.return.search('<') %]
    if (false /* <derived-[% IF loop.count == 2 %]inclusion[% ELSE %]exclusion[% END %]-criteria> */) {
    [%- ELSE %]
    if (false /* <derived-change-criteria> */) {
    [%- END %]
    [%- IF accessor.name.search('^set') %]
    [%- HANDLESUBSETTEDPROPERTY(attribute, 2, 'true') %]
        // <derived-code>
    [%- HANDLESUBSETTEDPROPERTY(attribute, 1, 'true') -%]
    [%- END -%]
    [%- IF accessor.name.search('^add') %]
        // <derived-code>
    [%- HANDLESUBSETTEDPROPERTY(attribute, 1, 'false') -%]
    [%- END -%]
    [%- IF accessor.name.search('^remove') %]
        // <derived-code>
    [%- HANDLESUBSETTEDPROPERTY(attribute, 2, 'false') -%]
    [%- END -%]
    }
[%- END %]
}
[% END -%]
[%- END -%]
[%- END -%]

[%- FOREACH associationend IN class.associationend.values %]
[%- IF associationend.isReadOnly == 'true' and (associationend.subsettedBy != '' or associationend.oppositeEnd != '') -%]
[%- FOREACH accessor IN associationend.accessor -%]
[%- NEXT IF loop.first %]
${accessor.return}${class.name}Private::${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
    // This is a read-only [% IF associationend.isDerivedUnion == 'true' %]derived-union [% ELSE %][% IF associationend.isDerived == 'true' %]derived [% END %][% END %]association end

[%- IF associationend.isDerived == 'false' or associationend.isDerivedUnion == 'true' %]
    [%- IF associationend.accessor.0.return.search('<') %]
    if ([% IF loop.count == 2 %]![% END %]this->${associationend.accessor.0.name}.contains(${accessor.parameter.0.name})) {
    [%- ELSE %]
    if (this->${associationend.accessor.0.name} != ${accessor.parameter.0.name}) {
    [%- END -%]
    [%- IF accessor.name.search('^set') -%]
    [%- IF associationend.oppositeEnd != '' %]
        Q_Q(${class.name});
    [%- END %]
    [%- HANDLEOPPOSITEEND(associationend, accessor, 2, 'true') %]
    [%- HANDLESUBSETTEDPROPERTY(associationend, 2, 'true') %]
        this->${accessor.parameter.0.name} = ${accessor.parameter.0.name};
    [%- HANDLESUBSETTEDPROPERTY(associationend, 1, 'true') -%]
    [%- HANDLEOPPOSITEEND(associationend, accessor, 1, 'true') %]
    [%- END -%]
    [%- IF accessor.name.search('^add') %]
        this->${associationend.accessor.0.name}.[% IF associationend.accessor.0.return.search('QSet') %]insert[% ELSE %]append[% END %](${accessor.parameter.0.name});
[%- IF associationend.aggregation == 'composite' and associationend.accessor.0.return.search('<') and associationend.subsettedProperty == '' %]
        Q_Q(${class.name});
        qTopLevelWrapper(${accessor.parameter.0.name})->setParent(qTopLevelWrapper(q));
[%- END %]
    [%- HANDLESUBSETTEDPROPERTY(associationend, 1, 'false') -%]
    [%- HANDLEOPPOSITEEND(associationend, accessor, 1, 'false') -%]
    [%- END -%]
    [%- IF accessor.name.search('^remove') %]
        this->${associationend.accessor.0.name}.[% IF associationend.accessor.0.return.search('QSet') %]remove[% ELSE %]removeAll[% END %](${accessor.parameter.0.name});
[%- IF associationend.aggregation == 'composite' and associationend.accessor.0.return.search('<') and associationend.subsettedProperty == '' %]
        qTopLevelWrapper(${accessor.parameter.0.name})->setParent(0);
[%- END %]
    [%- HANDLESUBSETTEDPROPERTY(associationend, 2, 'false') -%]
    [%- HANDLEOPPOSITEEND(associationend, accessor, 2, 'false') -%]
    [%- END %]
    }
[%- ELSE %]
    qWarning("${class.name}::${accessor.name}: to be implemented (this is a derived associationend)");
    [%- FOREACH parameter IN accessor.parameter %]
    Q_UNUSED(${parameter.name});
    [%- END %]

    [%- IF associationend.accessor.0.return.search('<') %]
    if (false /* <derived[% IF loop.count == 2 %]inclusion[% ELSE %]exclusion[% END %]-criteria> */) {
    [%- ELSE %]
    if (false /* <derived-change-criteria> */) {
    [%- END %]
    [%- IF accessor.name.search('^set') %]
    [%- IF associationend.oppositeEnd != '' %]
        Q_Q(${class.name});
    [%- END %]
    [%- HANDLEOPPOSITEEND(associationend, accessor, 2, 'true') %]
    [%- HANDLESUBSETTEDPROPERTY(associationend, 2, 'true') %]
        // <derived-code>
    [%- HANDLESUBSETTEDPROPERTY(associationend, 1, 'true') -%]
    [%- HANDLEOPPOSITEEND(associationend, accessor, 1, 'true') %]
    [%- END -%]
    [%- IF accessor.name.search('^add') %]
        // <derived-code>
    [%- HANDLESUBSETTEDPROPERTY(associationend, 1, 'false') -%]
    [%- HANDLEOPPOSITEEND(associationend, accessor, 1, 'false') -%]
    [%- END -%]
    [%- IF accessor.name.search('^remove') %]
        // <derived-code>
    [%- HANDLESUBSETTEDPROPERTY(associationend, 2, 'false') -%]
    [%- HANDLEOPPOSITEEND(associationend, accessor, 2, 'false') -%]
    [%- END %]
    }
[%- END %]
}
[% END -%]
[%- END -%]
[%- END -%]

[%- IF class.documentation %]
/*!
    \class ${class.name}

    \inmodule [% namespace.split('/').0 %]

    \brief ${class.documentation}
 */
[%- END %]

${class.name}::${class.name}(QWrappedObject *parent, QWrappedObject *wrapper) :
[% IF class.superclass.size == 1-%]    ${class.superclass.0.name}[%- ELSE -%]    QWrappedObject[% END %](*new ${class.name}Private, parent, wrapper)
[%- IF class.superclass and class.superclass.size > 1 -%]
[%- FOREACH parentClass IN class.superclass -%]
,
    _wrapped${parentClass.name.replace('^Q', '')}(new ${parentClass.name}(this, this))
[%- END -%]
[%- END %]
{
}

${class.name}::${class.name}(${class.name}Private &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
[% IF class.superclass.size == 1-%]    ${class.superclass.0.name}(dd, parent, wrapper)[%- ELSE -%]    QWrappedObject(dd, parent, wrapper)[%- END -%]
[%- IF class.superclass and class.superclass.size > 1 -%]
[%- FOREACH parentClass IN class.superclass -%]
,
    _wrapped${parentClass.name.replace('^Q', '')}(new ${parentClass.name}(this, this))
[%- END -%]
[%- END %]
{
}

${class.name}::~${class.name}()
{
}

[%- IF class.superclass and class.superclass.size > 1 -%]
[%- GENERATEFUNCTIONS(class, 'true') -%]
[%- END -%]
[%- GENERATEFUNCTIONS(class, 'false') %]
[%- FOREACH operation IN class.operation %]
[%- IF (operation.documentation) %]
/*!
    [% operation.documentation %]
 */
[%- END %]
${operation.return}${class.name}::${operation.name}([%- FOREACH parameter IN operation.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${operation.constness}
{
    qWarning("${class.name}::${operation.name}: operation to be implemented");
    [%- FOREACH parameter IN operation.parameter %]
    Q_UNUSED(${parameter.name});
    [%- END %]
    [%- IF operation.return.search('\*$') %]

    return 0; // change here to your derived return
    [%- ELSIF operation.return != 'void ' %]

    return [% IF operation.return.search('&') %]*(new [% END %]${operation.return.remove(' $').remove('^const ').remove(' &$')}[% IF operation.return.search('&') %])[% ELSE %]()[% END %]; // change here to your derived return
    [%- END %]
}
[% END -%]

void ${class.name}::registerMetaTypes() const
{
[% FOREACH forwarddecl IN class.forwarddecl -%]
[%- IF forwarddecl.content != class.name -%]
    qRegisterMetaType<${forwarddecl.content} *>("${forwarddecl.content} *");
    qRegisterMetaType<QSet<${forwarddecl.content} *>>("QSet<${forwarddecl.content} *>");
    qRegisterMetaType<QList<${forwarddecl.content} *>>("QList<${forwarddecl.content} *>");

[% END -%]
[%- END -%]
    [% IF class.superclass.size == 1 %]${class.superclass.0.name.split('/').last}[% ELSE %]QWrappedObject[% END %]::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

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
${accessor.return}${class.name}::${accessor.name}([%- FOREACH parameter IN attribute.accessor.1.parameter -%]QWrappedObjectPointer<${parameter.type.remove(' \*$')}> ${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
[%- IF loop.count == 2 %]
    ${parameter.accessor.1.name}(${attribute.accessor.1.parameter.0.name});
[%- ELSE %]
    [%- IF attribute.accessor.2 %]
    ${attribute.accessor.2.name}(${attribute.accessor.1.parameter.0.name});
    [%- ELSE %]
    [%- FOREACH parameter IN attribute.accessor.1.parameter %]
    Q_UNUSED(${parameter.name});
    [%- END %]
    ${attribute.accessor.1.name}(0);
    [%- END -%]
[%- END %]
}

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
${accessor.return}${class.name}::${accessor.name}([%- FOREACH parameter IN associationend.accessor.1.parameter -%]QWrappedObjectPointer<${parameter.type.remove(' \*$')}> ${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
[%- IF loop.count == 2 %]
    ${associationend.accessor.1.name}(${associationend.accessor.1.parameter.0.name});
[%- ELSE -%]
    [%- IF associationend.accessor.2 %]
    ${associationend.accessor.2.name}(${associationend.accessor.1.parameter.0.name});
    [%- ELSE %]
    [%- FOREACH parameter IN associationend.accessor.1.parameter %]
    Q_UNUSED(${parameter.name});
    [%- END %]
    ${associationend.accessor.1.name}(0);
    [%- END -%]
[%- END %]
}

[%- END -%]
[%- END -%]
[%- END -%]
[%- END -%]
[%- END -%]
[%- END %]
#include "moc_${class.name.lower}.cpp"

QT_END_NAMESPACE_${namespace.replace('/', '_').upper}

