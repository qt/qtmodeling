[%- MACRO PARENTSOF(class, parents) BLOCK -%]
    [%- IF class.isAbstract == 'true' -%]
        [%- FOREACH superclass IN class.superclass %]
            [%- PARENTSOF(classes.item(superclass.include.split('/').last), parents) -%]
        [%- END %]
        [%- parents.push(class) -%]
    [%- END %]
[%- END -%]
[%- MACRO GENERATEPROPERTIES(class) BLOCK -%]
    [%- parents = [] -%]
    [%- FOREACH superclass IN class.superclass %]
        [%- PARENTSOF(classes.item(superclass.include.split('/').last), parents) -%]
    [%- END %]
    [%- parents.push(class) -%]
    [%- FOREACH parent IN parents.unique -%]
    [%- IF parent.attribute or parent.associationend %]
    // From ${parent.name}
        [%- FOREACH attribute IN parent.attribute -%]
            [%- IF attribute.accessor.size == 1 %]
    Q_PROPERTY(${attribute.accessor.0.return}[%- IF attribute.accessor.0.return.substr(attribute.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${attribute.accessor.0.name} READ ${attribute.accessor.0.name})
            [%- ELSE %]
    Q_PROPERTY(${attribute.accessor.0.return}[%- IF attribute.accessor.0.return.substr(attribute.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${attribute.accessor.0.name} READ ${attribute.accessor.0.name} WRITE ${attribute.accessor.1.name})
            [%- END -%]
        [%- END -%]
        [%- FOREACH associationend IN parent.associationend -%]
            [%- IF associationend.accessor.size == 1 %]
    Q_PROPERTY(${associationend.accessor.0.return}[%- IF associationend.accessor.0.return.substr(associationend.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${associationend.accessor.0.name} READ ${associationend.accessor.0.name})
            [%- ELSE %]
    Q_PROPERTY(${associationend.accessor.0.return}[%- IF associationend.accessor.0.return.substr(associationend.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${associationend.accessor.0.name} READ ${associationend.accessor.0.name} WRITE ${associationend.accessor.1.name})
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

[%- IF class.item('qtumlinclude') %]
// [% namespace.split('/').0 %] includes
[%- FOREACH include IN class.qtumlinclude %]
#include <${include}>
[%- END %]
[% END -%]

[%- IF class.item('superclass') -%]
// Base class includes
[%- FOREACH superclass IN class.superclass %]
#include <${superclass.include}>
[%- END %]
[%- END %]

[%- IF class.item('qtinclude') %]
// Qt includes
[%- FOREACH include IN class.qtinclude %]
#include <${include}>
[%- END %]
[% END -%]

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

[%- END -%]

QT_BEGIN_NAMESPACE_${namespace.replace('/', '_').upper}

QT_MODULE([% namespace.split('/').0 %])

class ${class.name}Private;

[%- FOREACH forwarddecl IN class.forwarddecl -%]
[%- IF forwarddecl.namespace == namespace.replace('/', '::') -%]
class ${forwarddecl.content};

[%- END -%]
[%- END -%]

class Q_[% namespace.split('/').0.substr(2).upper %]_EXPORT ${class.name}[%- IF class.superclass -%] : [% END -%][% FOREACH superclass = class.superclass %]public ${superclass.name.split('/').last}[% IF !loop.last %], [% END %][% END %]
{
[%- IF class.isAbstract == 'false' %]
    Q_OBJECT

    [%- GENERATEPROPERTIES(class) -%]
[% END %]
public:
    [%- IF class.isAbstract == 'false' %]
    explicit ${class.name}(QObject *parent = 0);
    [%- END%]
    virtual ~${class.name}();
    [%- IF class.item('attribute') %]

    // Attributes (except those derived && !derivedUnion)
    [%- FOREACH attribute IN class.attribute -%]
    [%- IF (attribute.isDerived == "false" or attribute.isDerivedUnion == "true") -%]
    [%- FOREACH accessor IN attribute.accessor %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness};
    [%- END -%]
    [%- END -%]
    [%- END %]
    [%- END %]
    [%- IF class.item('associationend') %]

    // Association-ends (except those derived && !derivedUnion)
    [%- FOREACH associationend IN class.associationend -%]
    [%- IF (associationend.isDerived == "false" or associationend.isDerivedUnion == "true") -%]
    [%- FOREACH accessor IN associationend.accessor %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness};
    [%- END -%]
    [%- END -%]
    [%- END %]
    [%- END %]
    [%- IF class.item('operation') %]

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    [%- FOREACH operation IN class.operation %]
    ${operation.return}${operation.name}([%- FOREACH parameter IN operation.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${operation.constness};
    [%- END %]
    [%- END %]
[%- IF class.isAbstract == 'true' %]

protected:
    explicit ${class.name}();
[%- END %]
[%- IF class.isAbstract == 'false' %]

private:
    Q_DISABLE_COPY(${class.name})
    Q_DECLARE_PRIVATE(${class.name})
[%- END %]
};

QT_END_NAMESPACE_${namespace.replace('/', '_').upper}
[%- IF class.isAbstract == 'false' %]

Q_DECLARE_METATYPE(QList<${namespace.replace('/', '::')}::${class.name} *>)
Q_DECLARE_METATYPE(QList<${namespace.replace('/', '::')}::${class.name} *> *)
[%- END %]

QT_END_HEADER

#endif // ${namespace.replace('/', '_').upper}_${class.name.upper}_H

