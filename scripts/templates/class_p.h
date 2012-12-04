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
#ifndef ${namespace.replace('/', '_').upper}_${class.name.upper}_P_H
#define ${namespace.replace('/', '_').upper}_${class.name.upper}_P_H

// Base class includes
[%- IF !class.superclass || class.superclass.size > 1 -%]

#include "private/qumlobject_p.h"
[%- END -%]
[%- FOREACH superclass IN class.superclass -%]

#include "private/${superclass.name.lower}_p.h"
[%- END %]

#include "${namespace}/${class.name}"
[%- IF class.item('qtumlinclude') %]

// [% namespace.split('/').0 %] includes
[%- FOREACH include IN class.qtumlinclude -%]

#include "${include}"
[%- END -%]
[%- END -%]
[%- IF class.item('qtinclude') %]

// Qt includes
[%- FOREACH include IN class.qtinclude -%]

#include "${include}"
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
[%- foundPublic = 'false' -%]
[%- FOREACH forwarddecl IN class.forwarddecl -%]
[%- IF forwarddecl.namespace == namespace.replace('/', '::') -%]
[%- IF found == 'false' -%]

// Forward decls for function parameters
[% found = 'true' -%]
[%- END -%]
class ${forwarddecl.content};

[%- IF forwarddecl.content == class.name -%]
[%- foundPublic = 'true' -%]
[%- END -%]
[%- END -%]
[%- END -%]
[% IF class.isAbstract == 'false' and foundPublic == 'false' -%]
class ${class.name};

[%- END %]
class Q_[% namespace.split('/').0.substr(2).upper %]_EXPORT ${class.name}Private : [% IF class.superclass.size == 1 %]public ${class.superclass.0.name.split('/').last}Private[% ELSE %]public QUmlObjectPrivate[% END %]
{
    Q_DECLARE_PUBLIC(${class.name})

public:
    explicit ${class.name}Private();
    virtual ~${class.name}Private();

[%- FOREACH attribute IN class.attribute.values %]
[%- IF (attribute.isDerived == 'false' or attribute.isDerivedUnion == 'true') %]
    ${attribute.accessor.0.return.remove('^const ')}${attribute.accessor.0.name};
[%- END -%]
[%- END -%]
[%- FOREACH associationend IN class.associationend.values %]
[%- IF (associationend.isDerived == 'false' or associationend.isDerivedUnion == 'true') %]
    ${associationend.accessor.0.return.remove('^const ')}${associationend.accessor.0.name};
[%- END -%]
[%- END -%]
[%- IF class.item('attribute') -%]
[%- found = 'false' -%]
[%- FOREACH attribute IN class.attribute.values -%]
[%- IF attribute.isReadOnly == 'true' and attribute.subsettedBy != '' -%]
[%- IF found == 'false' -%]
[%- found = 'true' %]

    // Internal functions for read-only subsetted attributes
[%- END -%]
[%- FOREACH accessor IN attribute.accessor -%]
[%- NEXT IF loop.first %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END
 -%])${accessor.constness};
[%- END -%]
[%- END -%]
[%- END -%]
[%- END %]
[%- IF class.item('associationend') %]
[%- found = 'false' -%]
[%- FOREACH associationend IN class.associationend.values -%]
[%- IF associationend.isReadOnly == 'true' and (associationend.subsettedBy != '' or associationend.oppositeEnd != '') -%]
[%- IF found == 'false' -%]
[%- found = 'true' %]

    // Internal functions for read-only subsetted association ends
[%- END -%]
[%- FOREACH accessor IN associationend.accessor -%]
[%- NEXT IF loop.first %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END
 -%])${accessor.constness};
[%- END -%]
[%- END -%]
[%- END -%]
[%- END %]
};

QT_END_NAMESPACE_${namespace.replace('/', '_').upper}

QT_END_HEADER

#endif // ${namespace.replace('/', '_').upper}_${class.name.upper}_P_H

