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
#include "qdusedesigndimensionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtDuse/QDuseDesignDimension>
#include <QtDuse/QDuseDesignDimensionInstance>
#include <QtDuse/QDuseVariationPoint>
#include <QtUml/QUmlOpaqueExpression>

QT_BEGIN_NAMESPACE

QDuseDesignDimensionObject::QDuseDesignDimensionObject(QDuseDesignDimension *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [DesignDimension]

QString QDuseDesignDimensionObject::name() const
{
    return qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->name();
}

QObject *QDuseDesignDimensionObject::instanceSelectionRule() const
{
    if (!qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->instanceSelectionRule())
        return 0;
    else
        return qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->instanceSelectionRule()->asQModelingObject();
}

const QSet<QObject *> QDuseDesignDimensionObject::requiredPreviousEvaluations() const
{
    QSet<QObject *> set;
    foreach (QDuseDesignDimension *element, qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->requiredPreviousEvaluations())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QDuseDesignDimensionObject::variationPoints() const
{
    QList<QObject *> list;
    foreach (QDuseVariationPoint *element, qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->variationPoints())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QDuseDesignDimensionObject::designDimensionInstances() const
{
    QSet<QObject *> set;
    foreach (QDuseDesignDimensionInstance *element, qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->designDimensionInstances())
        set.insert(element->asQModelingObject());
    return set;
}

bool QDuseDesignDimensionObject::enabled() const
{
    return qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->enabled();
}

// SLOTS FOR OWNED ATTRIBUTES [DesignDimension]

void QDuseDesignDimensionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QDuseDesignDimensionObject::setInstanceSelectionRule(QObject *instanceSelectionRule)
{
    qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->setInstanceSelectionRule(qmodelingelementproperty_cast<QUmlOpaqueExpression *>(instanceSelectionRule));
    emit instanceSelectionRuleChanged(this->instanceSelectionRule());
}

void QDuseDesignDimensionObject::addRequiredPreviousEvaluation(QObject *requiredPreviousEvaluation)
{
    qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->addRequiredPreviousEvaluation(qmodelingelementproperty_cast<QDuseDesignDimension *>(requiredPreviousEvaluation));
    emit requiredPreviousEvaluationsChanged(this->requiredPreviousEvaluations());
}

void QDuseDesignDimensionObject::removeRequiredPreviousEvaluation(QObject *requiredPreviousEvaluation)
{
    qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->removeRequiredPreviousEvaluation(qmodelingelementproperty_cast<QDuseDesignDimension *>(requiredPreviousEvaluation));
    emit requiredPreviousEvaluationsChanged(this->requiredPreviousEvaluations());
}

void QDuseDesignDimensionObject::addVariationPoint(QObject *variationPoint)
{
    qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->addVariationPoint(qmodelingelementproperty_cast<QDuseVariationPoint *>(variationPoint));
    emit variationPointsChanged(this->variationPoints());
}

void QDuseDesignDimensionObject::removeVariationPoint(QObject *variationPoint)
{
    qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->removeVariationPoint(qmodelingelementproperty_cast<QDuseVariationPoint *>(variationPoint));
    emit variationPointsChanged(this->variationPoints());
}

void QDuseDesignDimensionObject::addDesignDimensionInstance(QObject *designDimensionInstance)
{
    qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->addDesignDimensionInstance(qmodelingelementproperty_cast<QDuseDesignDimensionInstance *>(designDimensionInstance));
    emit designDimensionInstancesChanged(this->designDimensionInstances());
}

void QDuseDesignDimensionObject::removeDesignDimensionInstance(QObject *designDimensionInstance)
{
    qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->removeDesignDimensionInstance(qmodelingelementproperty_cast<QDuseDesignDimensionInstance *>(designDimensionInstance));
    emit designDimensionInstancesChanged(this->designDimensionInstances());
}

void QDuseDesignDimensionObject::setEnabled(bool enabled)
{
    qmodelingelementproperty_cast<QDuseDesignDimension *>(this)->setEnabled(enabled);
    emit enabledChanged(this->enabled());
}


void QDuseDesignDimensionObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QDuseDesignDimension");
    d->groupProperties.insert(QStringLiteral("QDuseDesignDimension"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QDuseDesignDimension"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("instanceSelectionRule"))));
    d->groupProperties.insert(QStringLiteral("QDuseDesignDimension"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("requiredPreviousEvaluations"))));
    d->groupProperties.insert(QStringLiteral("QDuseDesignDimension"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("variationPoints"))));
    d->groupProperties.insert(QStringLiteral("QDuseDesignDimension"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("designDimensionInstances"))));
    d->groupProperties.insert(QStringLiteral("QDuseDesignDimension"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enabled"))));
}

void QDuseDesignDimensionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, name, PropertyClassRole, QStringLiteral("QDuseDesignDimension"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, name, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, name, DocumentationRole, QStringLiteral("The design dimension's name."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, instanceSelectionRule, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, instanceSelectionRule, PropertyClassRole, QStringLiteral("QDuseDesignDimension"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, instanceSelectionRule, PropertyTypeRole, QStringLiteral("QUmlOpaqueExpression *"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, instanceSelectionRule, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, instanceSelectionRule, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, instanceSelectionRule, DocumentationRole, QStringLiteral("The rule for detecting a specific locus of architectural decision related to this design dimension. Such rule relies on the accompanying UML profile for the specific application domain, in order to identify the decision loci."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, instanceSelectionRule, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, instanceSelectionRule, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, instanceSelectionRule, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, requiredPreviousEvaluations, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, requiredPreviousEvaluations, PropertyClassRole, QStringLiteral("QDuseDesignDimension"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, requiredPreviousEvaluations, PropertyTypeRole, QStringLiteral("QSet<QDuseDesignDimension *>"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, requiredPreviousEvaluations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, requiredPreviousEvaluations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, requiredPreviousEvaluations, DocumentationRole, QStringLiteral("The design dimensions that must be previously evaluated before this design dimension. Such dependency may be required in order to tackle dependent design dimensions and identify invalid design space locations."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, requiredPreviousEvaluations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, requiredPreviousEvaluations, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, requiredPreviousEvaluations, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, variationPoints, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, variationPoints, PropertyClassRole, QStringLiteral("QDuseDesignDimension"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, variationPoints, PropertyTypeRole, QStringLiteral("QList<QDuseVariationPoint *>"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, variationPoints, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, variationPoints, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, variationPoints, DocumentationRole, QStringLiteral("The design dimension's variation points (alternative solutions for the design dimension's concern)."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, variationPoints, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, variationPoints, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, variationPoints, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, designDimensionInstances, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, designDimensionInstances, PropertyClassRole, QStringLiteral("QDuseDesignDimension"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, designDimensionInstances, PropertyTypeRole, QStringLiteral("QSet<QDuseDesignDimensionInstance *>"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, designDimensionInstances, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, designDimensionInstances, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, designDimensionInstances, DocumentationRole, QStringLiteral("A specific design dimension instance created for a identified locus of architectural decision."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, designDimensionInstances, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, designDimensionInstances, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, designDimensionInstances, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, enabled, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, enabled, PropertyClassRole, QStringLiteral("QDuseDesignDimension"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, enabled, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, enabled, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, enabled, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, enabled, DocumentationRole, QStringLiteral("Indicates if the design dimension should be considered in automated architecture design."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, enabled, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, enabled, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignDimension, enabled, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

