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
#include "qdusevariationpointobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtDuse/QDuseVariationPoint>
#include <QtDuse/QDuseModelChange>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlOpaqueExpression>

QT_BEGIN_NAMESPACE

QDuseVariationPointObject::QDuseVariationPointObject(QDuseVariationPoint *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [VariationPoint]

QString QDuseVariationPointObject::name() const
{
    return qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->name();
}

QString QDuseVariationPointObject::rationale() const
{
    return qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->rationale();
}

QObject *QDuseVariationPointObject::preChangeValidationRule() const
{
    if (!qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->preChangeValidationRule())
        return 0;
    else
        return qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->preChangeValidationRule()->asQModelingObject();
}

const QList<QObject *> QDuseVariationPointObject::modelChanges() const
{
    QList<QObject *> list;
    foreach (QDuseModelChange *element, qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->modelChanges())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QDuseVariationPointObject::addedElements() const
{
    QList<QObject *> list;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->addedElements())
        list.append(element->asQModelingObject());
    return list;
}

// SLOTS FOR OWNED ATTRIBUTES [VariationPoint]

void QDuseVariationPointObject::setName(QString name)
{
    qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QDuseVariationPointObject::setRationale(QString rationale)
{
    qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->setRationale(rationale);
    emit rationaleChanged(this->rationale());
}

void QDuseVariationPointObject::setPreChangeValidationRule(QObject *preChangeValidationRule)
{
    qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->setPreChangeValidationRule(qmodelingelementproperty_cast<QUmlOpaqueExpression *>(preChangeValidationRule));
    emit preChangeValidationRuleChanged(this->preChangeValidationRule());
}

void QDuseVariationPointObject::addModelChange(QObject *modelChange)
{
    qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->addModelChange(qmodelingelementproperty_cast<QDuseModelChange *>(modelChange));
    emit modelChangesChanged(this->modelChanges());
}

void QDuseVariationPointObject::removeModelChange(QObject *modelChange)
{
    qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->removeModelChange(qmodelingelementproperty_cast<QDuseModelChange *>(modelChange));
    emit modelChangesChanged(this->modelChanges());
}

void QDuseVariationPointObject::addAddedElement(QObject *addedElement)
{
    qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->addAddedElement(qmodelingelementproperty_cast<QUmlElement *>(addedElement));
    emit addedElementsChanged(this->addedElements());
}

void QDuseVariationPointObject::removeAddedElement(QObject *addedElement)
{
    qmodelingelementproperty_cast<QDuseVariationPoint *>(this)->removeAddedElement(qmodelingelementproperty_cast<QUmlElement *>(addedElement));
    emit addedElementsChanged(this->addedElements());
}


void QDuseVariationPointObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QDuseVariationPoint");
    d->groupProperties.insert(QStringLiteral("QDuseVariationPoint"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QDuseVariationPoint"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("rationale"))));
    d->groupProperties.insert(QStringLiteral("QDuseVariationPoint"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("preChangeValidationRule"))));
    d->groupProperties.insert(QStringLiteral("QDuseVariationPoint"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("modelChanges"))));
    d->groupProperties.insert(QStringLiteral("QDuseVariationPoint"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("addedElements"))));
}

void QDuseVariationPointObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, name, PropertyClassRole, QStringLiteral("QDuseVariationPoint"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, name, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, name, DocumentationRole, QStringLiteral("The variation point's name."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, rationale, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, rationale, PropertyClassRole, QStringLiteral("QDuseVariationPoint"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, rationale, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, rationale, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, rationale, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, rationale, DocumentationRole, QStringLiteral("The variation point's rationale."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, rationale, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, rationale, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, rationale, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, preChangeValidationRule, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, preChangeValidationRule, PropertyClassRole, QStringLiteral("QDuseVariationPoint"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, preChangeValidationRule, PropertyTypeRole, QStringLiteral("QUmlOpaqueExpression *"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, preChangeValidationRule, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, preChangeValidationRule, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, preChangeValidationRule, DocumentationRole, QStringLiteral("A set of rules which should be evaluated as true if design space locations containing such variation point are to be considered as valid ones."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, preChangeValidationRule, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, preChangeValidationRule, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, preChangeValidationRule, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, modelChanges, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, modelChanges, PropertyClassRole, QStringLiteral("QDuseVariationPoint"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, modelChanges, PropertyTypeRole, QStringLiteral("QList<QDuseModelChange *>"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, modelChanges, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, modelChanges, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, modelChanges, DocumentationRole, QStringLiteral("The architectural changes to be enacted as contributions arosen from this variation point. The complete set of architectural changes is the merge of architectural contributions from all involved variation points."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, modelChanges, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, modelChanges, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, modelChanges, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, addedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, addedElements, PropertyClassRole, QStringLiteral("QDuseVariationPoint"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, addedElements, PropertyTypeRole, QStringLiteral("QList<QUmlElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, addedElements, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, addedElements, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, addedElements, DocumentationRole, QStringLiteral("The architectural elements to be added as part of architecture redesign contribution arising from this variation point. The complete set of added architectural elements is the merge of architectural contributions from all involved variation points."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, addedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, addedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseVariationPoint, addedElements, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

