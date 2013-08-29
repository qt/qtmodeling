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
#ifndef ${namespace.upper}${className.upper}_H
#define ${namespace.upper}${className.upper}_H

#include <Qt${namespace}/Qt${namespace}Global>
[% superclasses = [] -%]
[%- SET generalization = class.findnodes("generalization") -%]
[%- FOREACH superclass IN generalization -%]
[% SET superclassName = superclass.findvalue("@general") %]
#include "private/${namespace.lower}${superclassName.lower}_p.h"
[%- superclasses.push("${namespace}${superclassName}") -%]
[%- IF loop.last %]
[% END -%]
[%- END -%]

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

[%- SET useNamespace = 'false' -%]
[%- forwards = [] -%]
[%- FOREACH forward = class.findnodes("ownedAttribute[@type] | ownedOperation/ownedParameter[@type]") -%]
[%- SET forwardName = forward.findvalue('@type') -%]
[%- IF xmi.findnodes("//packagedElement[@xmi:type='uml:Enumeration' and @name='$forwardName']").findvalue("@name") != "" -%]
    [%- SET useNamespace = 'true' -%]
[%- ELSE -%]
[%- IF forwardName != className && superclasses.grep("^${namespace}${forwardName}\$").size == 0 -%][%- forwards.push("${namespace}${forwardName}") -%][%- END -%]
[%- END -%]
[%- END -%]
[%- IF useNamespace == 'true' %]
#include <Qt${namespace}/Qt${namespace}Namespace>
[% END -%]
[%- FOREACH forward = forwards.unique.sort %]
class ${forward};
[%- IF loop.last %]
[% END %]
[%- END -%]

class Q_${namespace.upper}_EXPORT ${namespace}${className}
[%- FOREACH superclass IN generalization -%]
[%- IF loop.first -%] : [%- END -%]
public ${namespace}${superclass.findvalue("@general")}
[%- IF !loop.last %], [% END -%]
[%- END %]
{
public:
    Q_DECL_HIDDEN explicit ${namespace}${className}();
[%- FOREACH attribute = class.findnodes("ownedAttribute") -%]
    [%- IF loop.first %]

    // Owned attributes
    [%- END -%]
    [%- SET qtAttribute = QT_ATTRIBUTE(attribute) -%]
    [%- SET readOnly = attribute.findvalue("@isReadOnly") -%]
    [%- SET qtType = QT_TYPE(namespace, attribute) %]
    [% IF qtType.match("QList|QSet") %]const [% END %]${qtType}${qtAttribute}() const;
    [%- SET attributeName = attribute.findvalue("@name").ucfirst -%]
    [%- IF attribute.findnodes("upperValue").findvalue("@value") == "*" %]
    [% IF readOnly == "true" %]Q_DECL_HIDDEN [% END %]void add${attributeName}([% qtType.remove("QSet<").remove("QList<").replace("> ", " ").replace('\* $', '*') %]${qtAttribute});
    [% IF readOnly == "true" %]Q_DECL_HIDDEN [% END %]void remove${attributeName}([% qtType.remove("QSet<").remove("QList<").replace("> ", " ").replace('\* $', '*') %]${qtAttribute});
    [%- ELSE %]
    [% IF readOnly == "true" %]Q_DECL_HIDDEN [% END %]void set${attributeName.remove("^Is")}(${qtType}${qtAttribute});
    [%- END %]
    [%- IF loop.last %]
    [%- END %]
[%- END -%]
[%- FOREACH operation = class.findnodes("ownedOperation[@name != ../ownedAttribute[@isDerived='true']/@name]") -%]
[%- IF loop.first %]

    // Operations
[%- END %]
[% SET operationName = operation.findvalue("@name") -%]
    [% QT_TYPE(namespace, operation.findnodes("ownedParameter[@direction='return']")) -%]
${operationName}(
    [%- FOREACH parameter = operation.findnodes("ownedParameter[@direction!='return']") -%]
        [%- QT_TYPE(namespace, parameter) -%]
${parameter.findvalue("@name")}
        [%- IF !loop.last %], [% END -%]
    [%- END -%]
)[% IF operation.findvalue("@isQuery") == "true" %] const[% END %];
[%- END %]

protected:
[%- FOREACH attribute = class.findnodes("ownedAttribute[(@isDerived=\"false\" or not(@isDerived)) or (@isDerivedUnion and @isDerivedUnion=\"true\")]") %]
    [% QT_TYPE(namespace, attribute) -%]_[%- QT_ATTRIBUTE(attribute) %];
[%- END %]
};

#endif // ${namespace.upper}${className.upper}_H

