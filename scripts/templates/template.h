[%- MACRO unqualifiedType(string)
          IF string.0.defined -%]
              [%- GET string.0.href.split('#').last.split('-').last.ucfirst -%]
          [%- ELSE -%]
              [%- GET string.split('#').last.split('-').last.ucfirst -%]
          [%- END -%]
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
#ifndef CLASSES_KERNEL_Q${className.upper}_H
#define CLASSES_KERNEL_Q${className.upper}_H

[% FOREACH superclass = classData.generalization -%]
#include <QtUml/Q${unqualifiedType(superclass.general)}>
[% END -%]

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class Q${className}Private;

class Q_UML_EXPORT Q${className} : [% FOREACH superclass = classData.generalization %]public Q${unqualifiedType(superclass.general)}[% IF !loop.last %], [% END %][% END %]
{
    Q_OBJECT
    [%- FOREACH property = classData.ownedAttribute -%]
        [%- IF property.upperValue.0.value == '*' -%]
            [%- IF !property.association %]
                [%-IF property.isReadyOnly != 'false' %]
    Q_PROPERTY(QList<Q${unqualifiedType(property.type)} *> READ ${property.name} WRITE set${property.name.ucfirst})
                [% ELSE %]
    Q_PROPERTY(QList<Q${unqualifiedType(property.type)} *> READ ${property.name})
                [% END %]
            [%- ELSE %]
    Q_PROPERTY(QList<Q${unqualifiedType(property.type)} *> READ ${property.name})
            [%- END -%]
        [%- ELSE -%]
            [%- IF !property.association %]
    Q_PROPERTY(Q${unqualifiedType(property.type)} READ ${property.name} WRITE set${property.name.ucfirst})
            [%- ELSE %]
    Q_PROPERTY(Q${unqualifiedType(property.type)} READ ${property.name})
            [%- END -%]
        [%- END -%]
    [% END %]

public:
    explicit Q${className}(QObject *parent = 0);
    virtual ~Q${className}();

    // Attributes
    [% FOREACH property = classData.ownedAttribute -%]
        [%- IF !property.association.defined %]
            [%- IF property.upperValue.0.value == '*' %]
                [%-IF property.isReadyOnly != 'false' %]
    QList<Q${unqualifiedType(property.type)} *> &${property.name}();
                [% ELSE %]
    const QList<Q${unqualifiedType(property.type)} *> &${property.name}();
                [% END -%]
            [% ELSE %]
    const Q${unqualifiedType(property.type)} &${property.name}() const;
                [%-IF property.isReadyOnly != 'false' %]
    void set${property.name.ucfirst}(const Q${unqualifiedType(property.type)} &${property.name});
                [% END %]
            [%- END %]
        [%- END %]
    [%- END -%]

    // Association-ends
    [% FOREACH property = classData.ownedAttribute -%]
        [%- IF property.association.defined %]
            [%- IF property.upperValue.0.value == '*' %]
                [%-IF property.isReadyOnly != 'false' %]
    QList<Q${unqualifiedType(property.type)} *> &${property.name}();
                [% ELSE %]
    const QList<Q${unqualifiedType(property.type)} *> &${property.name}() const;
                [% END -%]
            [% ELSE %]
    const Q${unqualifiedType(property.type)} &${property.name}() const;
                [%-IF property.isReadyOnly != 'false' %]
    void set${property.name.ucfirst}(const Q${unqualifiedType(property.type)} &${property.name});
                [% END %]
            [%- END %]
        [%- END %]
    [%- END -%]

    // Operations

private:
    Q_DISABLE_COPY(Q${className})
    Q_DECLARE_PRIVATE(Q${className})
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

QT_END_HEADER

#endif // CLASSES_KERNEL_Q${className.upper}_H

