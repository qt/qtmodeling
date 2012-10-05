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

QT_BEGIN_NAMESPACE_${namespace.replace('/', '_').upper}

class ${class.name}Private
{
public:
    explicit ${class.name}Private();
    virtual ~${class.name}Private();

[%- FOREACH attribute IN class.attribute %]
[%- IF (attribute.isDerived == "false" or attribute.isDerivedUnion == "true") %]
    ${attribute.accessor.0.return.remove('^const ')}${attribute.accessor.0.name};
[%- END -%]
[%- END -%]
[%- FOREACH associationend IN class.associationend %]
[%- IF (associationend.isDerived == "false" or associationend.isDerivedUnion == "true") %]
    ${associationend.accessor.0.return.remove('^const ')}${associationend.accessor.0.name};
[%- END -%]
[%- END -%]

};

${class.name}Private::${class.name}Private()
[%- found = 'false' -%]
[%- FOREACH attribute IN class.attribute %]
[%- IF ((attribute.isDerived == "false" or attribute.isDerivedUnion == "true") and attribute.accessor.0.return.search('<')) -%]
[%- IF found == 'true' -%]
,
[% ELSE -%]
 :
    [%- found = 'true' %]
[% END -%]
    ${attribute.accessor.0.name}(new ${attribute.accessor.0.return.remove(' \*$').remove('^const ')})
[%- END -%]
[%- END -%]
[%- FOREACH associationend IN class.associationend %]
[%- IF ((associationend.isDerived == "false" or associationend.isDerivedUnion == "true") and associationend.accessor.0.return.search('<')) -%]
[%- IF found == 'true' -%]
,
[% ELSE -%]
 :
    [%- found = 'true' %]
[% END -%]
    ${associationend.accessor.0.name}(new ${associationend.accessor.0.return.remove(' \*$').remove('^const ')})
[%- END -%]
[%- END %]
{
}

${class.name}Private::~${class.name}Private()
{
[% FOREACH attribute IN class.attribute %]
[%- IF ((attribute.isDerived == "false" or attribute.isDerivedUnion == "true") and attribute.accessor.0.return.search('<')) -%]
    delete ${attribute.accessor.0.name};

[%- END -%]
[%- END -%]
[%- FOREACH associationend IN class.associationend %]
[%- IF ((associationend.isDerived == "false" or associationend.isDerivedUnion == "true") and associationend.accessor.0.return.search('<')) -%]
    delete ${associationend.accessor.0.name};

[%- END -%]
[%- END -%]
}

[%- IF class.documentation %]
/*!
    \class ${class.name}

    \inmodule QtUml

    \brief ${class.documentation}
 */
[%- END %]

${class.name}::${class.name}([%- IF class.isAbstract == 'false' -%]QObject *parent[%- END -%])
[% GET '    : ' -%]
[%- IF class.isAbstract == 'false' -%]
[% IF class.superobject -%]${class.superobject.split('/').last}[%- ELSE -%]QObject[%- END -%](parent)[% GET ', ' -%]
[%- END %]d_ptr(new ${class.name}Private)
{
}

${class.name}::~${class.name}()
{
    delete d_ptr;
}

[%- FOREACH attribute IN class.attribute %]
[%- IF (attribute.documentation) %]
/*!
    [% attribute.documentation %]
 */
[%- END %]
[%- FOREACH accessor IN attribute.accessor %]
${accessor.return}${class.name}::${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
[%- IF attribute.isDerived == 'false' or attribute.isDerivedUnion == 'true' -%]
    [%- IF loop.first %]
    return d_ptr->${accessor.name};
    [%- ELSE -%]
        [%- IF accessor.name.search('^set') %]
    d_ptr->${accessor.parameter.0.name} = [% IF accessor.parameter.0.type.search('^const ') %]const_cast<${accessor.parameter.0.type.remove('^const ')}>([% END %]${accessor.parameter.0.name}[% IF accessor.parameter.0.type.search('^const ') %])[% END %];
        [%- END %]
        [%- IF accessor.name.search('^add') %]
    d_ptr->${attribute.accessor.0.name}->[% IF attribute.accessor.0.return.search('QSet') %]insert[% ELSE %]append[% END %]([% IF accessor.parameter.0.type.search('^const ') %]const_cast<${accessor.parameter.0.type.remove('^const ')}>([% END %]${accessor.parameter.0.name}[% IF accessor.parameter.0.type.search('^const ') %])[% END %]);
        [%- END %]
        [%- IF accessor.name.search('^remove') %]
    d_ptr->${attribute.accessor.0.name}->[% IF attribute.accessor.0.return.search('QSet') %]remove[% ELSE %]removeAll[% END %]([% IF accessor.parameter.0.type.search('^const ') %]const_cast<${accessor.parameter.0.type.remove('^const ')}>([% END %]${accessor.parameter.0.name}[% IF accessor.parameter.0.type.search('^const ') %])[% END %]);
        [%- END %]
    [%- END %]
[%- ELSE %]
    qWarning("To be implemented (this is a derived attribute)");
[%- END %]
}
[% END -%]
[%- END -%]

[%- FOREACH associationend IN class.associationend %]
[%- IF (associationend.documentation) %]
/*!
    [% associationend.documentation %]
 */
[%- END %]
[%- FOREACH accessor IN associationend.accessor %]
${accessor.return}${class.name}::${accessor.name}([%- FOREACH parameter IN accessor.parameter -%]${parameter.type}${parameter.name}[% IF !loop.last %], [% END %][%- END -%])${accessor.constness}
{
[%- IF associationend.isDerived == 'false' or associationend.isDerivedUnion == 'true' -%]
    [%- IF loop.first %]
    return d_ptr->${accessor.name};
    [%- ELSE -%]
        [%- IF accessor.name.search('^set') %]
    d_ptr->${accessor.parameter.0.name} = [% IF accessor.parameter.0.type.search('^const ') %]const_cast<${accessor.parameter.0.type.remove('^const ')}>([% END %]${accessor.parameter.0.name}[% IF accessor.parameter.0.type.search('^const ') %])[% END %];
        [%- END %]
        [%- IF accessor.name.search('^add') %]
    d_ptr->${associationend.accessor.0.name}->[% IF associationend.accessor.0.return.search('QSet') %]insert[% ELSE %]append[% END %]([% IF accessor.parameter.0.type.search('^const ') %]const_cast<${accessor.parameter.0.type.remove('^const ')}>([% END %]${accessor.parameter.0.name}[% IF accessor.parameter.0.type.search('^const ') %])[% END %]);
        [%- END %]
        [%- IF accessor.name.search('^remove') %]
    d_ptr->${associationend.accessor.0.name}->[% IF associationend.accessor.0.return.search('QSet') %]remove[% ELSE %]removeAll[% END %]([% IF accessor.parameter.0.type.search('^const ') %]const_cast<${accessor.parameter.0.type.remove('^const ')}>([% END %]${accessor.parameter.0.name}[% IF accessor.parameter.0.type.search('^const ') %])[% END %]);
        [%- END %]
    [%- END %]
[%- ELSE %]
    qWarning("To be implemented (this is a derived associationend)");
[%- END %]
}
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
    qWarning("To be implemented");
}
[% END -%]
[%- IF class.isAbstract == 'false' %]
#include "moc_${class.name.lower}.cpp"
[% END %]
QT_END_NAMESPACE_${namespace.replace('/', '_').upper}

