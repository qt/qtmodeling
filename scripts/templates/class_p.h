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

#include <[% namespace.split('/').0 %]/[% namespace.split('/').0 %]Global>
[%- IF class.item('qtumlinclude') %]

// [% namespace.split('/').0 %] includes
[%- FOREACH include IN class.qtumlinclude -%]

#include <${include}>
[%- END -%]
[%- END -%]
[%- IF class.item('superclass') %]

// Base class includes
[%- FOREACH superclass IN class.superclass %]
[%- IF superclass.include != 'QtCore/QObject' %]

#include "${superclass.include.split('/').last.lower}_p.h"
[%- END -%]
[%- END -%]
[%- END -%]
[%- IF class.item('qtinclude') %]

// Qt includes
[%- FOREACH include IN class.qtinclude -%]

#include <${include}>
[%- END -%]
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

[%- FOREACH forwarddecl IN class.forwarddecl -%]
[%- IF forwarddecl.namespace == namespace.replace('/', '::') -%]

class ${forwarddecl.content};
[%- END -%]
[%- END %]

class ${class.name}Private[%- IF class.superclass -%] : [% END -%][% FOREACH superclass = class.superclass %][% IF superclass.include != 'QtCore/QObject' %]public ${superclass.name.split('/').last}Private[% IF !loop.last %], [% END %][% END %][% END %]
{
public:
    explicit ${class.name}Private();
    virtual ~${class.name}Private();

[%- FOREACH attribute IN class.attribute.values %]
[%- IF (attribute.isDerived == "false" or attribute.isDerivedUnion == "true") %]
    ${attribute.accessor.0.return.remove('^const ')}${attribute.accessor.0.name};
[%- END -%]
[%- END -%]
[%- FOREACH associationend IN class.associationend.values %]
[%- IF (associationend.isDerived == "false" or associationend.isDerivedUnion == "true") %]
    ${associationend.accessor.0.return.remove('^const ')}${associationend.accessor.0.name};
[%- END -%]
[%- END -%]
[%- IF class.item('attribute') %]

    // Attributes
[%- FOREACH attribute IN class.attribute.values -%]
[%- FOREACH accessor IN attribute.accessor -%]
[%- NEXT IF loop.first %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END
 -%])${accessor.constness};
[%- END -%]
[%- END -%]
[%- END %]
[%- IF class.item('associationend') %]

    // Association-ends
[%- FOREACH associationend IN class.associationend.values -%]
[%- FOREACH accessor IN associationend.accessor -%]
[%- NEXT IF loop.first %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END
 -%])${accessor.constness};
[%- END -%]
[%- END -%]
[%- END %]
};

QT_END_NAMESPACE_${namespace.replace('/', '_').upper}

QT_END_HEADER

#endif // ${namespace.replace('/', '_').upper}_${class.name.upper}_P_H

