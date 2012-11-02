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
        [% IF property.accessor.size == 2 and subsettedPropertyItem.accessor.size > 2 %]    [% END %]${subsettedClass}[% IF subsettedPropertyItem.isReadOnly == 'true' %]Private[% END %]::${subsettedPropertyItem.accessor.1.name}(dynamic_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>(${accessor.parameter.0.name}));
            [%- ELSIF property.isReadOnly == 'false' and subsettedPropertyItem.isReadOnly == 'true' %]
        [% IF property.accessor.size == 2 and subsettedPropertyItem.accessor.size > 2 %]    [% END %]d->${subsettedClass}Private::${subsettedPropertyItem.accessor.1.name}(dynamic_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>(${accessor.parameter.0.name}));
            [%- ELSE %]
        [% IF property.accessor.size == 2 and subsettedPropertyItem.accessor.size > 2 %]    [% END %]Q_Q(${class.name});
        [% IF property.accessor.size == 2 and subsettedPropertyItem.accessor.size > 2 %]    [% END %]q->${subsettedClass}::${subsettedPropertyItem.accessor.1.name}(dynamic_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>(${accessor.parameter.0.name}));
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
        ${subsettedClass}Private::${subsettedPropertyItem.accessor.2.name}(dynamic_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>([% IF singlevalued == 'true' %]this->[% END %]${accessor.parameter.0.name}));
            [%- ELSIF property.isReadOnly == 'false' and subsettedPropertyItem.isReadOnly == 'false' %]
        ${subsettedClass}::${subsettedPropertyItem.accessor.2.name}(dynamic_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>([% IF singlevalued == 'true' %]d->[% END %]${accessor.parameter.0.name}));
            [%- ELSIF property.isReadOnly == 'false' and subsettedPropertyItem.isReadOnly == 'true' %]
        d->${subsettedClass}Private::${subsettedPropertyItem.accessor.2.name}(dynamic_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>([% IF singlevalued == 'true' %]d->[% END %]${accessor.parameter.0.name}));
            [%- ELSE %]
        Q_Q(${class.name});
        q->${subsettedClass}::${subsettedPropertyItem.accessor.2.name}(dynamic_cast<${subsettedPropertyItem.accessor.1.parameter.0.type}>([% IF singlevalued == 'true' %]this->[% END %]${accessor.parameter.0.name}));
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
        [%- IF property.isReadOnly == 'true' and singlevalued == 'false' %]
        Q_Q(${class.name});
        [%- END %]
    [%- IF operation == 1 -%]
        [%- IF property.accessor.size == 2 and opposite.accessor.size > 2 %]
        if (${accessor.parameter.0.name})
        [%- END %]
        [%- IF opposite.isReadOnly == 'false' %]
        [% IF property.accessor.size == 2 and opposite.accessor.size > 2 %]    [% END %]${accessor.parameter.0.name}->${opposite.accessor.1.name}([% IF property.isReadOnly == 'true' %]q[% ELSE %]this[% END %]);
        [%- ELSE %]
        [% IF property.accessor.size == 2 and opposite.accessor.size > 2 %]    [% END %](dynamic_cast<${accessor.parameter.0.type.replace(' \*$', '').replace('$', 'Private *')}>(${accessor.parameter.0.name}->d_ptr))->${opposite.accessor.1.name}([% IF property.isReadOnly == 'true' %]q[% ELSE %]this[% END %]);
        [%- END -%]
    [%- ELSE -%][%- IF operation == 2 and opposite.accessor.size > 2 %]
        [%- IF opposite.isReadOnly == 'false' %]
        if ([% IF singlevalued == 'true' %][% IF property.isReadOnly == 'true' %]this[% ELSE %]d[% END %]->[% END %]${accessor.parameter.0.name})
            [% IF singlevalued == 'true' %][% IF property.isReadOnly == 'true' %]this[% ELSE %]d[% END %]->[% END %]${accessor.parameter.0.name}->${opposite.accessor.2.name}([% IF property.isReadOnly == 'true' %]q[% ELSE %]this[% END %]);
        [%- ELSE %]
        if ([% IF singlevalued == 'true' %][% IF property.isReadOnly == 'true' %]this[% ELSE %]d[% END %]->[% END %]${accessor.parameter.0.name})
            (dynamic_cast<${accessor.parameter.0.type.replace(' \*$', '').replace('$', 'Private *')}>([% IF singlevalued == 'true' %][% IF property.isReadOnly == 'true' %]this[% ELSE %]d[% END %]->[% END %]${accessor.parameter.0.name}->d_ptr))->${opposite.accessor.2.name}([% IF property.isReadOnly == 'true' %]q[% ELSE %]this[% END %]);
        [%- END %]
    [%- ELSIF singlevalued == 'false' %]
        [%- IF opposite.isReadOnly == 'false' %]
        ${accessor.parameter.0.name}->${opposite.accessor.1.name}(0);
        [%- ELSE %]
        (dynamic_cast<${accessor.parameter.0.type.replace(' \*$', '').replace('$', 'Private *')}>(${accessor.parameter.0.name}->d_ptr))->${opposite.accessor.1.name}(0);
        [%- END %]
    [%- END -%][%- END -%]
    [%- IF operation == 2 and singlevalued == 'true' %]

    [%- END -%]
[%- END -%]
[%- END -%]
/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
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

[%- oppositeReadOnlyClasses = [] -%]
[%- FOREACH associationend IN class.associationend.values -%]
[%- oppositeClass = associationend.oppositeEnd.split('-').0.replace('^', 'Q') -%]
[%- IF classes.item(oppositeClass).associationend.item(associationend.oppositeEnd).isReadOnly == 'true' and oppositeClass != class.name -%]
[%- oppositeReadOnlyClasses.push(oppositeClass.lower.replace('$', '_p.h')) -%]
[%- END -%]
[%- END -%]
[%- FOREACH oppositeReadOnlyClass IN oppositeReadOnlyClasses.unique -%]
#include "${oppositeReadOnlyClass}"

[%- END %]
[%- FOREACH forwarddecl IN class.forwarddecl -%]
[%- IF forwarddecl.content != class.name -%]

#include <${forwarddecl.namespace}/${forwarddecl.content}>
[%- END -%]
[%- END %]

QT_BEGIN_NAMESPACE_${namespace.replace('/', '_').upper}

${class.name}Private::${class.name}Private()
[%- found = 'false' -%]
[%- FOREACH attribute IN class.attribute.values %]
[%- IF attribute.isDerived == 'false' or attribute.isDerivedUnion == 'true' -%]
[%- IF attribute.accessor.0.return.search('<') -%]
[%- IF found == 'true' -%]
,
[% ELSE -%]
 :
    [%- found = 'true' %]
[% END -%]
    ${attribute.accessor.0.name}(new ${attribute.accessor.0.return.remove(' \*$').remove('^const ')})
[%- ELSE -%]
[%- IF attribute.accessor.0.return.search('\*') -%]
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
[%- END -%]
[%- FOREACH associationend IN class.associationend.values %]
[%- IF associationend.isDerived == 'false' or associationend.isDerivedUnion == 'true' -%]
[%- IF associationend.accessor.0.return.search('<') -%]
[%- IF found == 'true' -%]
,
[% ELSE -%]
 :
    [%- found = 'true' %]
[% END -%]
    ${associationend.accessor.0.name}(new ${associationend.accessor.0.return.remove(' \*$').remove('^const ')})
[%- ELSE -%]
[%- IF associationend.accessor.0.return.search('\*') -%]
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
[%- END -%]
[%- END %]
{
}

${class.name}Private::~${class.name}Private()
{
[% FOREACH attribute IN class.attribute.values -%]
[%- IF attribute.aggregation == 'composite' and attribute.accessor.0.return.search('<') and attribute.subsettedProperty == '' -%]
    foreach (${attribute.accessor.1.parameter.0.type.remove('^const ')}${attribute.accessor.1.parameter.0.type.remove('^Q').remove('\*').trim.lower}, *${attribute.accessor.0.name})
        delete ${attribute.accessor.1.parameter.0.type.remove('^Q').remove('\*').trim.lower};

[%- END -%]
[%- IF ((attribute.isDerived == 'false' or attribute.isDerivedUnion == 'true') and attribute.accessor.0.return.search('<')) or (attribute.accessor.0.return.search('\*$') and attribute.aggregation == 'composite' and attribute.subsettedProperty == '') -%]
    delete ${attribute.accessor.0.name};

[%- END -%]
[%- END -%]
[%- FOREACH associationend IN class.associationend.values -%]
[%- IF associationend.aggregation == 'composite' and associationend.accessor.0.return.search('<') and associationend.subsettedProperty == '' -%]
    foreach (${associationend.accessor.1.parameter.0.type.remove('^const ')}${associationend.accessor.1.parameter.0.type.remove('^Q').remove('\*').trim.lower}, *${associationend.accessor.0.name})
        delete ${associationend.accessor.1.parameter.0.type.remove('^Q').remove('\*').trim.lower};

[%- END -%]
[%- IF ((associationend.isDerived == 'false' or associationend.isDerivedUnion == 'true') and associationend.accessor.0.return.search('<')) or (associationend.accessor.0.return.search('\*$') and associationend.aggregation == 'composite' and associationend.subsettedProperty == '') -%]
    delete ${associationend.accessor.0.name};

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
    if ([% IF loop.count == 2 %]![% END %]this->${attribute.accessor.0.name}->contains(${accessor.parameter.0.name})) {
    [%- ELSE %]
    if (this->${attribute.accessor.0.name} != ${accessor.parameter.0.name}) {
    [%- END %]
    [%- IF accessor.name.search('^set') %]
    [%- HANDLESUBSETTEDPROPERTY(attribute, 2, 'true') %]
        this->${accessor.parameter.0.name} = ${accessor.parameter.0.name};
    [%- HANDLESUBSETTEDPROPERTY(attribute, 1, 'true') -%]
    [%- END -%]
    [%- IF accessor.name.search('^add') %]
        this->${attribute.accessor.0.name}->[% IF attribute.accessor.0.return.search('QSet') %]insert[% ELSE %]append[% END %](${accessor.parameter.0.name});
    [%- HANDLESUBSETTEDPROPERTY(attribute, 1, 'false') -%]
    [%- END -%]
    [%- IF accessor.name.search('^remove') %]
        this->${attribute.accessor.0.name}->[% IF attribute.accessor.0.return.search('QSet') %]remove[% ELSE %]removeAll[% END %](${accessor.parameter.0.name});
    [%- HANDLESUBSETTEDPROPERTY(attribute, 2, 'false') -%]
    [%- END -%]
    }
[%- ELSE %]
    qWarning("${class.name}::${accessor.name}: to be implemented (this is a derived attribute)");

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
    if ([% IF loop.count == 2 %]![% END %]this->${associationend.accessor.0.name}->contains(${accessor.parameter.0.name})) {
    [%- ELSE %]
    if (this->${associationend.accessor.0.name} != ${accessor.parameter.0.name}) {
    [%- END -%]
    [%- IF accessor.name.search('^set') -%]
    [%- IF associationend.oppositeEnd != '' %]
        Q_Q(${class.name})
    [%- END %]
    [%- HANDLEOPPOSITEEND(associationend, accessor, 2, 'true') %]
    [%- HANDLESUBSETTEDPROPERTY(associationend, 2, 'true') %]
        this->${accessor.parameter.0.name} = ${accessor.parameter.0.name};
    [%- HANDLESUBSETTEDPROPERTY(associationend, 1, 'true') -%]
    [%- HANDLEOPPOSITEEND(associationend, accessor, 1, 'true') %]
    [%- END -%]
    [%- IF accessor.name.search('^add') %]
        this->${associationend.accessor.0.name}->[% IF associationend.accessor.0.return.search('QSet') %]insert[% ELSE %]append[% END %](${accessor.parameter.0.name});
    [%- HANDLESUBSETTEDPROPERTY(associationend, 1, 'false') -%]
    [%- HANDLEOPPOSITEEND(associationend, accessor, 1, 'false') -%]
    [%- END -%]
    [%- IF accessor.name.search('^remove') %]
        this->${associationend.accessor.0.name}->[% IF associationend.accessor.0.return.search('QSet') %]remove[% ELSE %]removeAll[% END %](${accessor.parameter.0.name});
    [%- HANDLESUBSETTEDPROPERTY(associationend, 2, 'false') -%]
    [%- HANDLEOPPOSITEEND(associationend, accessor, 2, 'false') -%]
    [%- END %]
    }
[%- ELSE %]
    qWarning("${class.name}::${accessor.name}: to be implemented (this is a derived associationend)");

    [%- IF associationend.accessor.0.return.search('<') %]
    if (false /* <derived[% IF loop.count == 2 %]inclusion[% ELSE %]exclusion[% END %]-criteria> */) {
    [%- ELSE %]
    if (false /* <derived-change-criteria> */) {
    [%- END %]
    [%- IF accessor.name.search('^set') %]
    [%- IF associationend.oppositeEnd != '' %]
        Q_Q(${class.name})
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

    \inmodule QtUml

    \brief ${class.documentation}
 */
[%- END %]

${class.name}::${class.name}(QObject *parent) :
[% IF class.superclass.size == 1-%]    ${class.superclass.0.name}[%- ELSE -%]    QObject[% END %](*new ${class.name}Private, parent)
[%- IF class.superclass and class.superclass.size > 1 -%]
[%- FOREACH parentClass IN class.superclass -%]
,
    _wrapped${parentClass.name.replace('^Q', '')}(new ${parentClass.name}(this))
[%- END -%]
[%- END %]
{
}

${class.name}::${class.name}(${class.name}Private &dd, QObject *parent) :
[% IF class.superclass.size == 1-%]    ${class.superclass.0.name}(dd, parent)[%- ELSE -%]    QObject(dd, parent)[%- END -%]
[%- IF class.superclass and class.superclass.size > 1 -%]
[%- FOREACH parentClass IN class.superclass -%]
,
    _wrapped${parentClass.name.replace('^Q', '')}(new ${parentClass.name}(this))
[%- END -%]
[%- END %]
{
}

${class.name}::~${class.name}()
{
[%- IF not(class.superclass) %]
    delete d_ptr;
[%- END %]
}

[%- FOREACH attribute IN class.attribute.values %]
[%- IF (attribute.documentation) %]
/*!
    [% attribute.documentation %]
 */
[%- END %]
[%- FOREACH accessor IN attribute.accessor %]
${accessor.return}${class.name}::${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
    // This is a [% IF attribute.isReadOnly == 'true' %]read-only [% ELSE %]read-write [% END %][% IF attribute.isDerivedUnion == 'true' %]derived-union [% ELSE %][% IF attribute.isDerived == 'true' %]derived [% END %][% END %]attribute

[%- IF attribute.isDerived == 'false' or attribute.isDerivedUnion == 'true' %]
    [%- IF loop.first %]
    Q_D(const ${class.name});
    return d->${accessor.name};
    [%- ELSE %]
    Q_D(${class.name});
    [%- IF attribute.accessor.0.return.search('<') %]
    if ([% IF loop.count == 2 %]![% END %]d->${attribute.accessor.0.name}->contains(${accessor.parameter.0.name})) {
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
        d->${attribute.accessor.0.name}->[% IF attribute.accessor.0.return.search('QSet') %]insert[% ELSE %]append[% END %](${accessor.parameter.0.name});
            [%- HANDLESUBSETTEDPROPERTY(attribute, 1, 'false') -%]
    [%- END -%]
            [%- IF accessor.name.search('^remove') %]
        d->${attribute.accessor.0.name}->[% IF attribute.accessor.0.return.search('QSet') %]remove[% ELSE %]removeAll[% END %](${accessor.parameter.0.name});
            [%- HANDLESUBSETTEDPROPERTY(attribute, 2, 'false') -%]
            [%- END -%]
        [%- END %]
    }
    [%- END -%]
[%- ELSE %]
    qWarning("${class.name}::${accessor.name}: to be implemented (this is a derived attribute)");

    [%- IF loop.first %]
    //Q_D(const ${class.name});
    //return <derived-return>;
    [%- ELSE %]
    //Q_D(${class.name});
    [%- IF attribute.accessor.0.return.search('<') %]
    if (false /* <derived-[% IF loop.count == 2 %]inclusion[% ELSE %]exclusion[% END %]-criteria> */) {
    [%- ELSE %]
    if (false /* <derived-change-criteria> */) {
    [%- END %]
        [%- IF attribute.isReadOnly == 'true' %]
        // <derived-code>
        [%- ELSE -%]
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
        [%- END %]
    }
    [%- END -%]
[%- END %]
}
[% LAST IF attribute.isReadOnly == 'true' -%]
[% END -%]
[%- END -%]

[%- FOREACH associationend IN class.associationend.values %]
[%- IF (associationend.documentation) %]
/*!
    [% associationend.documentation %]
 */
[%- END %]
[%- FOREACH accessor IN associationend.accessor %]
${accessor.return}${class.name}::${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
    // This is a [% IF associationend.isReadOnly == 'true' %]read-only [% ELSE %]read-write [% END %][% IF associationend.isDerivedUnion == 'true' %]derived-union [% ELSE %][% IF associationend.isDerived == 'true' %]derived [% END %][% END %]association end

[%- IF associationend.isDerived == 'false' or associationend.isDerivedUnion == 'true' %]
    [%- IF loop.first %]
    Q_D(const ${class.name});
    return d->${accessor.name};
    [%- ELSE %]
    Q_D(${class.name});
    [%- IF associationend.accessor.0.return.search('<') %]
    if ([% IF loop.count == 2 %]![% END %]d->${associationend.accessor.0.name}->contains(${accessor.parameter.0.name})) {
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
        d->${associationend.accessor.0.name}->[% IF associationend.accessor.0.return.search('QSet') %]insert[% ELSE %]append[% END %](${accessor.parameter.0.name});
            [%- HANDLESUBSETTEDPROPERTY(associationend, 1, 'false') -%]
            [%- HANDLEOPPOSITEEND(associationend, accessor, 1, 'false') -%]
            [%- END -%]
            [%- IF accessor.name.search('^remove') %]
        d->${associationend.accessor.0.name}->[% IF associationend.accessor.0.return.search('QSet') %]remove[% ELSE %]removeAll[% END %](${accessor.parameter.0.name});
            [%- HANDLESUBSETTEDPROPERTY(associationend, 2, 'false') -%]
            [%- HANDLEOPPOSITEEND(associationend, accessor, 2, 'false') -%]
            [%- END -%]
        [%- END %]
    [%- END %]
[%- ELSE %]
    qWarning("${class.name}::${accessor.name}: to be implemented (this is a derived associationend)");

    [%- IF loop.first %]
    //Q_D(const ${class.name});
    //return <derived-return>;
    [%- ELSE %]
    //Q_D(${class.name});
    [%- IF associationend.accessor.0.return.search('<') %]
    if (false /* <derived-[% IF loop.count == 2 %]inclusion[% ELSE %]exclusion[% END %]-criteria> */) {
    [%- ELSE %]
    if (false /* <derived-change-criteria */) {
    [%- END %]
        [%- IF associationend.isReadOnly == 'true' %]
        // <derived-code>
        [%- ELSE -%]
            [%- IF accessor.name.search('^set') %]
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
            [%- END -%]
        [%- END %]
    [%- END %]
[%- END %]
    [%- IF !loop.first %]
    }
    [%- END %]
}
[% LAST IF associationend.isReadOnly == 'true' -%]
[% END -%]
[%- END -%]

[%- FOREACH operation IN class.operation %]
[%- IF (operation.documentation) %]
/*!
    [% operation.documentation %]
 */
[%- END %]
${operation.return}${class.name}::${operation.name}([%- FOREACH parameter IN operation.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${operation.constness}
{
    qWarning("${class.name}::${operation.name}: operation to be implemented");
}
[% END -%]
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
${accessor.return}${class.name}::${accessor.name}([%- FOREACH parameter IN attribute.accessor.1.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
[%- IF loop.count == 2 %]
    ${parameter.accessor.1.name}(${attribute.accessor.1.parameter.0.name});
[%- ELSE %]
    ${parameter.accessor.2.name}(${attribute.accessor.1.parameter.0.name});
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
${accessor.return}${class.name}::${accessor.name}([%- FOREACH parameter IN associationend.accessor.1.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
[%- IF loop.count == 2 %]
    ${associationend.accessor.1.name}(${associationend.accessor.1.parameter.0.name});
[%- ELSE -%]
    [%- IF associationend.accessor.2 %]
    ${associationend.accessor.2.name}(${associationend.accessor.1.parameter.0.name});
    [%- ELSE %]
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
[%- IF class.isAbstract == 'false' %]
#include "moc_${class.name.lower}.cpp"
[% END %]
QT_END_NAMESPACE_${namespace.replace('/', '_').upper}

