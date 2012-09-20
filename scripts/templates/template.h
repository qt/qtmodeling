[%- PROCESS 'macros.tpl' -%]
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
#ifndef ${currentPackage.replace('::', '_').upper}_Q${className.upper}_H
#define ${currentPackage.replace('::', '_').upper}_Q${className.upper}_H

#include <QtUml/QtUmlGlobal>

[%- IF !classData.generalization %]
#include <QtCore/QObject>
[%- ELSE -%]
    [%- FOREACH superclass = classData.generalization %]
#include <QtUml/${unqualifiedType(superclass.general)}>
    [%- END -%]
[%- END %]

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_${currentPackage.replace('::', '_').upper}

QT_MODULE(QtUml)

class Q${className}Private;
[% GENERATEINCLUDES %]

class Q_UML_EXPORT Q${className} : [%- IF !classData.generalization -%]virtual QObject[%- ELSE -%][% FOREACH superclass = classData.generalization %]public ${unqualifiedType(superclass.general, 0, 0)}[% IF !loop.last %], [% END %][% END %][% END %]
{
    Q_OBJECT
    [% GENERATEPROPERTIES(0) -%]
    [% GENERATEPROPERTIES(1) %]

public:
    explicit Q${className}(QObject *parent = 0);
    virtual ~Q${className}();

    // Attributes (except those derived && !derivedUnion)
    [% GENERATEACCESSORS(0, 1) %]

    // Association-ends (except those derived && !derivedUnion)
    [% GENERATEACCESSORS(1, 1) %]

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    [% GENERATEOPERATIONS(1) %]

private:
    Q_DISABLE_COPY(Q${className})
    Q_DECLARE_PRIVATE(Q${className})
};

QT_END_NAMESPACE_UML_${currentPackage.replace('::', '_').upper}

Q_DECLARE_METATYPE(QList<QT_NAMESPACE_UML::${currentPackage}::Q${className} *> *)

QT_END_HEADER

#endif // ${currentPackage.replace('::', '_').upper}_Q${className.upper}_H

