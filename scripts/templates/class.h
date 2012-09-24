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

#include <QtUml/QtUmlGlobal>

[%- IF class.item('qtumlinclude') %]
// QtUml includes
[%- FOREACH include IN class.qtumlinclude %]
#include <${include}>
[%- END %]
[% END -%]

// Base class includes
[%- IF class.item('superclassinclude') -%]
[%- FOREACH include IN class.superclassinclude %]
#include <${include}>
[%- END %]
[% ELSE %]
#include <QtCore/QObject>
[% END -%]

[%- IF class.item('qtinclude') %]
// Qt includes
[%- FOREACH include IN class.qtinclude %]
#include <${include}>
[%- END %]
[% END -%]

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_${namespace.replace('/', '_').upper}

QT_MODULE(QtUml)

class ${class.name}Private;

[%- FOREACH forwarddecl IN class.forwarddecl %]
class ${forwarddecl};
[%- END %]

class Q_UML_EXPORT ${class.name} : public QObject
{
    Q_OBJECT

    [%- FOREACH attribute IN class.attribute -%]
        [%- IF attribute.accessor.size == 1 %]
    Q_PROPERTY(${attribute.accessor.0.return}[%- IF attribute.accessor.0.return.substr(attribute.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${attribute.accessor.0.name} READ ${attribute.accessor.0.name})
        [%- ELSE %]
    Q_PROPERTY(${attribute.accessor.0.return}[%- IF attribute.accessor.0.return.substr(attribute.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${attribute.accessor.0.name} READ ${attribute.accessor.0.name} WRITE ${attribute.accessor.1.name})
        [%- END -%]
    [%- END -%]
    [%- FOREACH associationend IN class.associationend -%]
        [%- IF associationend.accessor.size == 1 %]
    Q_PROPERTY(${associationend.accessor.0.return}[%- IF associationend.accessor.0.return.substr(associationend.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${associationend.accessor.0.name} READ ${associationend.accessor.0.name})
        [%- ELSE %]
    Q_PROPERTY(${associationend.accessor.0.return}[%- IF associationend.accessor.0.return.substr(associationend.accessor.0.return.length - 1, 1) == '*' -%] [% END -%]${associationend.accessor.0.name} READ ${associationend.accessor.0.name} WRITE ${associationend.accessor.1.name})
        [%- END -%]
    [%- END %]

public:
    explicit ${class.name}(QObject *parent = 0);
    virtual ~${class.name}();
    [%- IF class.item('attribute') %]

    // Attributes (except those derived && !derivedUnion)
    [%- FOREACH attribute IN class.attribute -%]
    [%- FOREACH accessor IN attribute.accessor %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness};
    [%- END -%]
    [%- END %]
    [%- END %]
    [%- IF class.item('associationend') %]

    // Association-ends (except those derived && !derivedUnion)
    [%- FOREACH associationend IN class.associationend -%]
    [%- FOREACH accessor IN associationend.accessor %]
    ${accessor.return}${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness};
    [%- END -%]
    [%- END %]
    [%- END %]
    [%- IF class.item('operation') %]

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    [%- FOREACH operation IN class.operation %]
    ${operation.return}${operation.name}([%- FOREACH parameter IN operation.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${operation.constness};
    [%- END %]
    [%- END %]

private:
    Q_DISABLE_COPY(${class.name})
    Q_DECLARE_PRIVATE(${class.name})
};

QT_END_NAMESPACE_UML_${namespace.replace('/', '_').upper}

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_${namespace.replace('/', '_').upper}(${class.name}) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_${namespace.replace('/', '_').upper}(${class.name}) *> *)

QT_END_HEADER

#endif // ${namespace.replace('/', '_').upper}_${class.name.upper}_H

