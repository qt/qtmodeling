/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtDuse module of the Qt Toolkit.
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
#include "qdusemodelchangeobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtDuse/QDuseModelChange>
#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlProperty>

QT_BEGIN_NAMESPACE

QDuseModelChangeObject::QDuseModelChangeObject(QDuseModelChange *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [ModelChange]

QObject *QDuseModelChangeObject::targetSelectionRule() const
{
    if (!qmodelingelementproperty_cast<QDuseModelChange *>(this)->targetSelectionRule())
        return 0;
    else
        return qmodelingelementproperty_cast<QDuseModelChange *>(this)->targetSelectionRule()->asQModelingObject();
}

QObject *QDuseModelChangeObject::valueSelectionRule() const
{
    if (!qmodelingelementproperty_cast<QDuseModelChange *>(this)->valueSelectionRule())
        return 0;
    else
        return qmodelingelementproperty_cast<QDuseModelChange *>(this)->valueSelectionRule()->asQModelingObject();
}

QObject *QDuseModelChangeObject::targetProperty() const
{
    if (!qmodelingelementproperty_cast<QDuseModelChange *>(this)->targetProperty())
        return 0;
    else
        return qmodelingelementproperty_cast<QDuseModelChange *>(this)->targetProperty()->asQModelingObject();
}

// SLOTS FOR OWNED ATTRIBUTES [ModelChange]

void QDuseModelChangeObject::setTargetSelectionRule(QObject *targetSelectionRule)
{
    qmodelingelementproperty_cast<QDuseModelChange *>(this)->setTargetSelectionRule(qmodelingelementproperty_cast<QUmlOpaqueExpression *>(targetSelectionRule));
    emit targetSelectionRuleChanged(this->targetSelectionRule());
}

void QDuseModelChangeObject::setValueSelectionRule(QObject *valueSelectionRule)
{
    qmodelingelementproperty_cast<QDuseModelChange *>(this)->setValueSelectionRule(qmodelingelementproperty_cast<QUmlOpaqueExpression *>(valueSelectionRule));
    emit valueSelectionRuleChanged(this->valueSelectionRule());
}

void QDuseModelChangeObject::setTargetProperty(QObject *targetProperty)
{
    qmodelingelementproperty_cast<QDuseModelChange *>(this)->setTargetProperty(qmodelingelementproperty_cast<QUmlProperty *>(targetProperty));
    emit targetPropertyChanged(this->targetProperty());
}


void QDuseModelChangeObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QDuseModelChange");
    d->groupProperties.insert(QStringLiteral("QDuseModelChange"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targetSelectionRule"))));
    d->groupProperties.insert(QStringLiteral("QDuseModelChange"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("valueSelectionRule"))));
    d->groupProperties.insert(QStringLiteral("QDuseModelChange"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targetProperty"))));
}

void QDuseModelChangeObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetSelectionRule, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetSelectionRule, PropertyClassRole, QStringLiteral("QDuseModelChange"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetSelectionRule, PropertyTypeRole, QStringLiteral("QUmlOpaqueExpression *"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetSelectionRule, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetSelectionRule, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetSelectionRule, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetSelectionRule, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetSelectionRule, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetSelectionRule, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, valueSelectionRule, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, valueSelectionRule, PropertyClassRole, QStringLiteral("QDuseModelChange"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, valueSelectionRule, PropertyTypeRole, QStringLiteral("QUmlOpaqueExpression *"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, valueSelectionRule, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, valueSelectionRule, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, valueSelectionRule, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, valueSelectionRule, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, valueSelectionRule, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, valueSelectionRule, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetProperty, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetProperty, PropertyClassRole, QStringLiteral("QDuseModelChange"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetProperty, PropertyTypeRole, QStringLiteral("QUmlProperty *"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetProperty, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetProperty, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetProperty, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetProperty, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetProperty, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseModelChange, targetProperty, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

