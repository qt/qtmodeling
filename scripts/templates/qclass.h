[%- PROCESS common.tmpl -%]
/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt${namespace} module of the Qt Toolkit.
**
** \$QT_BEGIN_LICENSE:LGPL\$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** \$QT_END_LICENSE\$
**
****************************************************************************/
#ifndef Q${namespace.upper}${className.upper}_H
#define Q${namespace.upper}${className.upper}_H

#include <Qt${namespace}/Qt${namespace}Global>

#include <QtCore/QObject>
#include "private/${namespace.lower}${className.lower}_p.h"

[%- SET useNamespace = 'false' -%]
[%- forwards = [] -%]
[%- FOREACH forward = class.findnodes("ownedAttribute[@type] | ownedOperation/ownedParameter[@type]") -%]
[%- SET forwardName = forward.findvalue('@type') -%]
[%- IF xmi.findnodes("//packagedElement[@xmi:type='uml:Enumeration' and @name='$forwardName']").findvalue("@name") != "" -%]
    [%- SET useNamespace = 'true' -%]
[%- ELSE -%]
[%- IF forwardName != className -%][%- forwards.push("Q${namespace}${forwardName}") -%][%- END -%]
[%- END -%]
[%- END -%]
[%- IF useNamespace == 'true' -%]
#include <Qt${namespace}/Qt${namespace}Namespace>
[% END %]
QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(Qt${namespace})
[% FOREACH forward = forwards.unique.sort %]
class ${forward};
[%- IF loop.last %]
[% END %]
[%- END -%]

class Q_${namespace.upper}_EXPORT Q${namespace}${className} : public QObject, public ${namespace}${className}
{
    Q_OBJECT
[%- SET attributes = class.findnodes("ownedAttribute") -%]
[%- FOREACH attribute IN attributes -%]
    [%- SET qtAttribute = QT_ATTRIBUTE(attribute) -%]
    [%- SET qtType = QT_TYPE(namespace, attribute, "false") %]
    [%- SET readOnly = attribute.findvalue("@isReadOnly") %]
    [%- SET upperValue = attribute.findvalue("upperValue/@value") -%]
    [%- SET attributeName = attribute.findvalue("@name").ucfirst %]
    Q_PROPERTY(${qtType.trim} ${qtAttribute} READ ${qtAttribute})
[%- END %]

public:
    [% IF class.findvalue("@isAbstract") == "true" %]Q_DECL_HIDDEN [% ELSE %]Q_INVOKABLE [% END %]explicit Q${namespace}${className}();
[%- FOREACH attribute IN attributes -%]
    [%- IF loop.first %]

    // Owned attributes
    [%- END -%]
    [%- SET qtAttribute = QT_ATTRIBUTE(attribute) -%]
    [%- SET qtType = QT_TYPE(namespace, attribute, "false") -%]
    [%- IF qtType.match("QList|QSet") %]
    Q_INVOKABLE const ${qtType}${qtAttribute}() const;
    [%- ELSIF qtType.match('\*$') %]
    Q_INVOKABLE ${qtType}${qtAttribute}() const;
    [%- ELSE %]
    Q_INVOKABLE ${qtType}${qtAttribute}() const;
    [%- END %]
    [%- SET readOnly = attribute.findvalue("@isReadOnly") %]
    [%- IF readOnly == "false" || readOnly == "" -%]
    [%- SET attributeName = attribute.findvalue("@name").ucfirst -%]
    [%- IF attribute.findnodes("upperValue").findvalue("@value") == "*" %]
    Q_INVOKABLE void add${attributeName}([% qtType.remove("QSet<").remove("QList<").replace(">", "").replace('\* $', '*').remove('^Q') %]${qtAttribute});
    Q_INVOKABLE void remove${attributeName}([% qtType.remove("QSet<").remove("QList<").replace(">", "").replace('\* $', '*').remove('^Q') %]${qtAttribute});
    [%- ELSE -%]
    [%- IF qtType.match('QList|QSet') %]
    Q_INVOKABLE void set${attributeName.remove("^Is")}(${qtType.remove('^Q')}${qtAttribute});
    [%- ELSIF qtType.match('\*$') %]
    Q_INVOKABLE void set${attributeName.remove("^Is")}(${qtType}${qtAttribute});
    [%- ELSE %]
    Q_INVOKABLE void set${attributeName.remove("^Is")}(${qtType}${qtAttribute});
    [%- END -%]
    [%- END -%]
    [%- END %]
    [%- IF loop.last %]
    [%- END %]
[%- END -%]
[%- FOREACH operation = class.findnodes("ownedOperation[@name != ../ownedAttribute[@isDerived='true']/@name]") -%]
[%- IF loop.first %]

    // Operations
[%- END %]
[% SET operationName = operation.findvalue("@name") -%]
    Q_INVOKABLE [% QT_TYPE(namespace, operation.findnodes("ownedParameter[@direction='return']"), "false") -%]
${operationName}(
    [%- FOREACH parameter = operation.findnodes("ownedParameter[@direction!='return']") -%]
        [%- QT_TYPE(namespace, parameter, "false") -%]
${parameter.findvalue("@name")}
        [%- IF !loop.last %], [% END -%]
    [%- END -%]
)[% IF operation.findvalue("@isQuery") == "true" %] const[% END %];
[%- END %]
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(Q${namespace}${className} *)
Q_DECLARE_METATYPE(QList<Q${namespace}${className} *> *)
Q_DECLARE_METATYPE(QSet<Q${namespace}${className} *> *)

QT_END_HEADER

#endif // Q${namespace.upper}${className.upper}_H

