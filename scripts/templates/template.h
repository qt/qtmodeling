[%- MACRO convertType(type)
    SWITCH type -%]
    [%- CASE 'Boolean' -%]boolean
    [%- CASE 'Integer' -%]qint32
    [%- CASE 'Real' -%]qreal
    [%- CASE 'UnlimitedNatural' -%]qint32
    [%- CASE -%]Q${type}
    [%- END -%]
[%- MACRO handleModifiers(property, const, ref) BLOCK -%]
    [%- IF property.type.href.defined -%]
        [%- type = property.type.href -%]
    [%- ELSIF property.type.defined -%]
        [%- type = property.type -%]
    [%- ELSE -%]
        [%- type = property -%]
    [%- END -%]
    [%- convertedType = convertType(type.split('#').last.split('-').last.ucfirst) -%]
    [%- IF (property.upperValue.value != '*' || property.isReadOnly) && const -%]const [%- END -%]
    [%- IF property.upperValue.value == '*' -%]
        [%- GET 'QList<' -%]
    [%- END -%]
    [%- GET convertedType _ ' ' -%]
    [%- IF property.upperValue.value == '*' -%]
        [%- GET '*> ' -%]
    [%- END -%]
    [%- IF ref -%]&[%- END -%]
[%- END -%]
[%- MACRO unqualifiedType(property, const, ref)
          IF property.type.href.defined -%]
              [%- GET handleModifiers(property, const, ref) -%]
          [%- ELSIF property.type.defined -%]
              [%- GET handleModifiers(property, const, ref) -%]
          [%- ELSE -%]
              [%- GET convertType(property.split('#').last.split('-').last.ucfirst) -%]
          [%- END -%]
[%- MACRO GENERATEPROPERTIES(association)
    FOREACH property IN classData.ownedAttribute -%]
        [%- IF (property.value.association.defined && association) || (!property.value.association.defined && !association) %]
    Q_PROPERTY(${unqualifiedType(property.value, 0, 0)}${property.key} READ ${property.key}
            [%- IF property.value.isReadOnly != 'true' && property.value.upperValue.value != '*' %] WRITE set[%- IF property.key.substr(0, 2) == 'is' -%]${property.key.substr(2).ucfirst}[%- ELSE -%]${property.key.ucfirst}[%- END- %]
            [%- END -%])
        [%- END -%]
    [%- END -%]
[%- MACRO GENERATEACCESSORS(association)
    FOREACH property IN classData.ownedAttribute -%]
        [%- IF ((property.value.association.defined && association) || (!property.value.association.defined && !association)) && !(property.value.isDerived && !property.value.isDerivedUnion) %]
    ${unqualifiedType(property.value, 1, 1)}${property.key}()[%- IF property.value.isReadOnly && const -%]const [%- END -%];
            [%- IF property.value.isReadOnly != 'true' && property.value.upperValue.value != '*' %]
    void set[%- IF property.key.substr(0, 2) == 'is' -%]${property.key.substr(2).ucfirst}[%- ELSE -%]${property.key.ucfirst}[%- END- %](${unqualifiedType(property.value, 1, 1)}[%- IF property.key.substr(0, 2) == 'is' -%]${property.key.substr(2).lcfirst}[%- ELSE -%]${property.key}[%- END- %]);
            [%- END -%]
        [%- END -%]
    [%- END %]
[%- MACRO GENERATEOPERATIONS BLOCK -%]
    [%- FOREACH operation IN classData.ownedOperation -%]
        [%- return = void -%]
        [%- FOREACH parameter IN operation.value.ownedParameter -%]
            [%- IF parameter.value.direction == 'return' -%]
                [%- return = unqualifiedType(parameter.value, 1, 1) -%]
            [%- END -%]
        [%- END %]
    ${return}${operation.key}(
        [%- returnDelta = 1 -%]
        [%- FOREACH parameter IN operation.value.ownedParameter -%]
            [%- IF parameter.value.direction != 'return' -%]${unqualifiedType(parameter.value, 1, 1)}${parameter.key}
                [%- IF loop.count < loop.size - returnDelta -%], [%- END -%]
            [%- ELSE -%][%- returnDelta = 0 -%]
            [%- END -%]
        [%- END -%])[%- IF operation.value.isQuery -%] const[%- END -%];
    [%- END %]
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
#include <QtUml/${unqualifiedType(superclass.general)}>
[% END -%]

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class Q${className}Private;

class Q_UML_EXPORT Q${className} : [% FOREACH superclass = classData.generalization %]public ${unqualifiedType(superclass.general, 0, 0)}[% IF !loop.last %], [% END %][% END %]
{
    Q_OBJECT
    [% GENERATEPROPERTIES(0) -%]
    [% GENERATEPROPERTIES(1) %]

public:
    explicit Q${className}(QObject *parent = 0);
    virtual ~Q${className}();

    // Attributes (except those derived && !derivedUnion)
    [% GENERATEACCESSORS(0) %]

    // Association-ends (except those derived && !derivedUnion)
    [% GENERATEACCESSORS(1) %]

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    [% GENERATEOPERATIONS %]

private:
    Q_DISABLE_COPY(Q${className})
    Q_DECLARE_PRIVATE(Q${className})
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

QT_END_HEADER

#endif // CLASSES_KERNEL_Q${className.upper}_H

