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

[% superclasses = [] -%]
[%- SET generalization = class.findnodes("generalization") -%]
[%- FOREACH superclass IN generalization -%]
[%- SET superclassName = superclass.findvalue("@general") -%]
#include <Qt${namespace}/Q${namespace}${superclassName}>
[% superclasses.push("${namespace}${superclassName}") -%]
[%- IF loop.last %]
[% END -%]
[%- END -%]
[%- IF superclasses.size == 0 -%]
#include <QtModeling/QModelingElement>

[% END -%]
[% SET useNamespace = 'false' -%]
[%- forwards = [] -%]
[%- visitedClasses = [] -%]
[%- GENERATE_FWD_DECLARATIONS(class, visitedClasses, forwards, useNamespace, superclasses, "false") -%]
[%- IF useNamespace == 'true' %]
#include <Qt${namespace}/Qt${namespace}Namespace>
[% END -%]
QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(Qt${namespace})

[%- FOREACH forward = forwards.unique.sort %]
class ${forward};
[%- IF loop.last %]
[% END %]
[%- END -%]

class Q_${namespace.upper}_EXPORT Q${namespace}${className} : 
[%- FOREACH superclass IN generalization -%]
public Q${namespace}${superclass.findvalue("@general")}
[%- IF !loop.last %], [% END -%]
[%- END -%]
[%- IF superclasses.size == 0 -%]
public QModelingElement
[%- END %]
{
public:
[%- IF class.findvalue("@isAbstract") != "true" %]
    explicit Q${namespace}${className}(bool createQModelingObject = true);

[%- END %]
    [% IF class.findvalue("@isAbstract") == "true" %]Q_DECL_HIDDEN [% END %]virtual QModelingElement *clone() const;
[% FOREACH attribute = class.findnodes("ownedAttribute") -%]
    [%- IF loop.first %]
    // Owned attributes
    [%- END -%]
    [%- SET qtAttribute = QT_ATTRIBUTE(attribute) -%]
    [%- SET readOnly = attribute.findvalue("@isReadOnly") -%]
    [%- SET qtType = QT_TYPE(namespace, attribute) %]
    [% IF qtType.match("QList|QSet") %]const [% END %]${qtType}${PLURALFORM(qtAttribute, attribute)}() const;
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
[%- SET qtType = QT_TYPE(namespace, operation.findnodes("ownedParameter[@direction='return']")) -%]
[%- IF qtType != " " -%]
    ${qtType}
[%- ELSE -%]
    void 
[%- END -%]
${operationName}(
    [%- FOREACH parameter = operation.findnodes("ownedParameter[@direction!='return']") -%]
        [%- SET qtType = QT_TYPE(namespace, parameter) -%]
        [%- IF qtType != " " -%]
        [%- qtType -%]
        [%- ELSE -%]
        [%- END -%]
${parameter.findvalue("@name")}
        [%- IF !loop.last %], [% END -%]
    [%- END -%]
)[% IF operation.findvalue("@isQuery") == "true" %] const[% END %];
[%- END %]

protected:
[%- IF class.findvalue("@isAbstract") == "true" %]
    explicit Q${namespace}${className}();
[% END -%]
[%- FOREACH attribute = class.findnodes("ownedAttribute[(@isDerived=\"false\" or not(@isDerived)) or (@isDerivedUnion and @isDerivedUnion=\"true\")]") %]
    [% QT_TYPE(namespace, attribute) -%]_[%- PLURALFORM(QT_ATTRIBUTE(attribute), attribute) %];
[%- END %]
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(Q${namespace}${className}) *)

QT_END_HEADER

#endif // Q${namespace.upper}${className.upper}_H

