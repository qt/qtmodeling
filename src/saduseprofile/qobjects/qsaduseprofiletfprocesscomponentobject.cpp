/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtSADuseProfile module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
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
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qsaduseprofiletfprocesscomponentobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtSADuseProfile/QSADuseProfileTFProcessComponent>
#include <QtUml/QUmlComponent>

QT_BEGIN_NAMESPACE

QSADuseProfileTFProcessComponentObject::QSADuseProfileTFProcessComponentObject(QSADuseProfileTFProcessComponent *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [ProcessComponent]

QObject *QSADuseProfileTFProcessComponentObject::base_Component() const
{
    if (!qmodelingelementproperty_cast<QSADuseProfileTFProcessComponent *>(this)->base_Component())
        return 0;
    else
        return qmodelingelementproperty_cast<QSADuseProfileTFProcessComponent *>(this)->base_Component()->asQModelingObject();
}

// OWNED ATTRIBUTES [TFProcessComponent]

QString QSADuseProfileTFProcessComponentObject::tfNum() const
{
    return qmodelingelementproperty_cast<QSADuseProfileTFProcessComponent *>(this)->tfNum();
}

QString QSADuseProfileTFProcessComponentObject::tfDen() const
{
    return qmodelingelementproperty_cast<QSADuseProfileTFProcessComponent *>(this)->tfDen();
}

// SLOTS FOR OWNED ATTRIBUTES [ProcessComponent]

void QSADuseProfileTFProcessComponentObject::setBase_Component(QObject *base_Component)
{
    qmodelingelementproperty_cast<QSADuseProfileTFProcessComponent *>(this)->setBase_Component(qmodelingelementproperty_cast<QUmlComponent *>(base_Component));
    emit base_ComponentChanged(this->base_Component());
}

// SLOTS FOR OWNED ATTRIBUTES [TFProcessComponent]

void QSADuseProfileTFProcessComponentObject::setTfNum(QString tfNum)
{
    qmodelingelementproperty_cast<QSADuseProfileTFProcessComponent *>(this)->setTfNum(tfNum);
    emit tfNumChanged(this->tfNum());
}

void QSADuseProfileTFProcessComponentObject::setTfDen(QString tfDen)
{
    qmodelingelementproperty_cast<QSADuseProfileTFProcessComponent *>(this)->setTfDen(tfDen);
    emit tfDenChanged(this->tfDen());
}


void QSADuseProfileTFProcessComponentObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QSADuseProfileProcessComponent");
    d->groupProperties.insert(QStringLiteral("QSADuseProfileProcessComponent"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("base_Component"))));

    d->propertyGroups << QStringLiteral("QSADuseProfileTFProcessComponent");
    d->groupProperties.insert(QStringLiteral("QSADuseProfileTFProcessComponent"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("tfNum"))));
    d->groupProperties.insert(QStringLiteral("QSADuseProfileTFProcessComponent"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("tfDen"))));
}

void QSADuseProfileTFProcessComponentObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileProcessComponent, base_Component, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileProcessComponent, base_Component, PropertyClassRole, QStringLiteral("QSADuseProfileProcessComponent"));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileProcessComponent, base_Component, PropertyTypeRole, QStringLiteral("QUmlComponent *"));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileProcessComponent, base_Component, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileProcessComponent, base_Component, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileProcessComponent, base_Component, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileProcessComponent, base_Component, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileProcessComponent, base_Component, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileProcessComponent, base_Component, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfNum, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfNum, PropertyClassRole, QStringLiteral("QSADuseProfileTFProcessComponent"));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfNum, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfNum, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfNum, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfNum, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfNum, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfNum, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfNum, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfDen, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfDen, PropertyClassRole, QStringLiteral("QSADuseProfileTFProcessComponent"));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfDen, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfDen, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfDen, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfDen, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfDen, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfDen, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileTFProcessComponent, tfDen, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

