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
#ifndef QT${namespace.upper}NAMESPACE_H
#define QT${namespace.upper}NAMESPACE_H

#include <Qt${namespace}/Qt${namespace}Global>

#include <QtCore/QObject>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(Qt${namespace})

class Q_${namespace.upper}_EXPORT Qt${namespace} : public QObject
{
    Q_OBJECT

[%- SET enumerations = xmi.findnodes("//uml:Package/packagedElement[@xmi:type=\"uml:Enumeration\"]") -%]
[% FOREACH enumeration IN enumerations -%]
    Q_ENUMS(${enumeration.findvalue("@name")})
[% END %]
public:
[%- FOREACH enumeration IN enumerations %]
    [%- SET enumerationName = enumeration.findvalue("@name") %]
    enum ${enumerationName}
    {
        [%- FOREACH literal IN enumeration.findnodes("ownedLiteral") %]
        ${enumerationName.remove("Kind$").remove("Sort$")}${literal.findvalue("@name").ucfirst}[%- IF loop.first -%] = 0[%- END -%][%- IF !loop.last -%],[%- END -%]
        [%- END %]
    };
[%- END %]
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QT${namespace.upper}NAMESPACE_H

