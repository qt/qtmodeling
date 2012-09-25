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
//#include "${class.name.lower}_p.h"

QT_BEGIN_NAMESPACE_UML_${namespace.replace('/', '_').upper}

/*!
    \class ${class.name}

    \inmodule QtUml

    \brief ${class.documentation}
 */

${class.name}::${class.name}([%- IF class.isAbstract == 'false' -%]QObject *parent[%- END -%])
[%- IF class.isAbstract == 'false' %]
    : [%- IF class.superobject -%]${class.superobject.split('/').last}[%- ELSE -%]QObject[%- END -%](parent)
[%- END %]
{
}

${class.name}::~${class.name}()
{
}

[%- FOREACH attribute IN class.attribute %]
/*!
    [% attribute.documentation %]
 */
[%- FOREACH accessor IN attribute.accessor %]
${accessor.return}${class.name}::${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
}
[% END -%]
[%- END -%]

[%- FOREACH associationend IN class.associationend %]
/*!
    [% associationend.documentation %]
 */
[%- FOREACH accessor IN associationend.accessor %]
${accessor.return}${class.name}::${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
}
[% END -%]
[%- END -%]

[%- FOREACH operation IN class.operation %]
/*!
    [% operation.documentation %]
 */
${operation.return}${class.name}::${operation.name}([%- FOREACH parameter IN operation.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${operation.constness}
{
}
[% END -%]
[%- IF class.isAbstract == 'false' %]
#include "moc_${class.name.lower}.cpp"
[% END %]
QT_END_NAMESPACE_UML_${namespace.replace('/', '_').upper}

