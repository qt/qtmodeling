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
#include "qdusedesigndimension.h"
#include "qdusedesigndimension_p.h"

#include <QtDuse/QDuseVariationPoint>
#include <QtDuse/QDuseDesignDimensionInstance>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QDuseDesignDimensionPrivate::QDuseDesignDimensionPrivate()
{
}

QDuseDesignDimensionPrivate::~QDuseDesignDimensionPrivate()
{
}

/*!
    \class QDuseDesignDimension

    \inmodule QtDuse

    \brief A design dimension captures a specific degree of freedom when designing architectures in the given application domain. A design dimension entails a set of variation points which denote alternative solutions for such degree of freedom. Optionally, a variation point may define validation rules which should return a true value if that variation point is to be considered valid for the corresponding input model. A variation point may also specify a set of other variation points which should be previously evaluated, defining a sort of design dimension dependency.
 */

QDuseDesignDimension::QDuseDesignDimension(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QDuseDesignDimensionPrivate, wrapper, parent)
{
    setPropertyData();
}

QDuseDesignDimension::QDuseDesignDimension(QDuseDesignDimensionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent)
{
    setPropertyData();
}

QDuseDesignDimension::~QDuseDesignDimension()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QDuseDesignDimension
// ---------------------------------------------------------------

/*!
    The rule for detecting a specific locus of architectural decision related to this design dimension. Such rule relies on the accompanying UML profile for the specific application domain, in order to identify the decision loci.
 */
QString QDuseDesignDimension::instanceSelectionRule() const
{
    // This is a read-write attribute

    Q_D(const QDuseDesignDimension);
    return d->instanceSelectionRule;
}

void QDuseDesignDimension::setInstanceSelectionRule(QString instanceSelectionRule)
{
    // This is a read-write attribute

    Q_D(QDuseDesignDimension);
    if (d->instanceSelectionRule != instanceSelectionRule) {
        d->instanceSelectionRule = instanceSelectionRule;
    }
}

/*!
    The design dimension's variation points (alternative solutions for the design dimension's concern).
 */
QSet<QDuseVariationPoint *> QDuseDesignDimension::variationPoints() const
{
    // This is a read-write attribute

    Q_D(const QDuseDesignDimension);
    return d->variationPoints;
}

void QDuseDesignDimension::addVariationPoint(QDuseVariationPoint *variationPoint)
{
    // This is a read-write attribute

    Q_D(QDuseDesignDimension);
    if (!d->variationPoints.contains(variationPoint)) {
        d->variationPoints.insert(variationPoint);
        qTopLevelWrapper(variationPoint)->setParent(qTopLevelWrapper(this));
    }
}

void QDuseDesignDimension::removeVariationPoint(QDuseVariationPoint *variationPoint)
{
    // This is a read-write attribute

    Q_D(QDuseDesignDimension);
    if (d->variationPoints.contains(variationPoint)) {
        d->variationPoints.remove(variationPoint);
        qTopLevelWrapper(variationPoint)->setParent(0);
    }
}

/*!
    A specific design dimension instance created for a identified locus of architectural decision.
 */
QSet<QDuseDesignDimensionInstance *> QDuseDesignDimension::designDimensionInstances() const
{
    // This is a read-write attribute

    Q_D(const QDuseDesignDimension);
    return d->designDimensionInstances;
}

void QDuseDesignDimension::addDesignDimensionInstance(QDuseDesignDimensionInstance *designDimensionInstance)
{
    // This is a read-write attribute

    Q_D(QDuseDesignDimension);
    if (!d->designDimensionInstances.contains(designDimensionInstance)) {
        d->designDimensionInstances.insert(designDimensionInstance);
        qTopLevelWrapper(designDimensionInstance)->setParent(qTopLevelWrapper(this));
    }
}

void QDuseDesignDimension::removeDesignDimensionInstance(QDuseDesignDimensionInstance *designDimensionInstance)
{
    // This is a read-write attribute

    Q_D(QDuseDesignDimension);
    if (d->designDimensionInstances.contains(designDimensionInstance)) {
        d->designDimensionInstances.remove(designDimensionInstance);
        qTopLevelWrapper(designDimensionInstance)->setParent(0);
    }
}

/*!
    The design dimensions that must be previously evaluated before this design dimension. Such dependency may be required in order to tackle dependent design dimensions and identify invalid design space locations.
 */
QSet<QDuseDesignDimension *> QDuseDesignDimension::requiredPreviousEvaluations() const
{
    // This is a read-write attribute

    Q_D(const QDuseDesignDimension);
    return d->requiredPreviousEvaluations;
}

void QDuseDesignDimension::addRequiredPreviousEvaluation(QDuseDesignDimension *requiredPreviousEvaluation)
{
    // This is a read-write attribute

    Q_D(QDuseDesignDimension);
    if (!d->requiredPreviousEvaluations.contains(requiredPreviousEvaluation)) {
        d->requiredPreviousEvaluations.insert(requiredPreviousEvaluation);
    }
}

void QDuseDesignDimension::removeRequiredPreviousEvaluation(QDuseDesignDimension *requiredPreviousEvaluation)
{
    // This is a read-write attribute

    Q_D(QDuseDesignDimension);
    if (d->requiredPreviousEvaluations.contains(requiredPreviousEvaluation)) {
        d->requiredPreviousEvaluations.remove(requiredPreviousEvaluation);
    }
}

/*!
    The design dimension's name.
 */
QString QDuseDesignDimension::name() const
{
    // This is a read-write attribute

    Q_D(const QDuseDesignDimension);
    return d->name;
}

void QDuseDesignDimension::setName(QString name)
{
    // This is a read-write attribute

    Q_D(QDuseDesignDimension);
    if (d->name != name) {
        d->name = name;

        QWrappedObject *wrappedObject = this;
        while (wrappedObject->wrapper())
            wrappedObject = wrappedObject->wrapper();
        wrappedObject->setObjectName(name);
    }
}

void QDuseDesignDimension::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("instanceSelectionRule")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("instanceSelectionRule")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("instanceSelectionRule")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The rule for detecting a specific locus of architectural decision related to this design dimension. Such rule relies on the accompanying UML profile for the specific application domain, in order to identify the decision loci.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("instanceSelectionRule")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("instanceSelectionRule")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("instanceSelectionRule")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("variationPoints")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("variationPoints")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("variationPoints")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The design dimension's variation points (alternative solutions for the design dimension's concern).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("variationPoints")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("variationPoints")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("variationPoints")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("designDimensionInstances")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("designDimensionInstances")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("designDimensionInstances")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A specific design dimension instance created for a identified locus of architectural decision.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("designDimensionInstances")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("designDimensionInstances")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("designDimensionInstances")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("requiredPreviousEvaluations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("requiredPreviousEvaluations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("requiredPreviousEvaluations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The design dimensions that must be previously evaluated before this design dimension. Such dependency may be required in order to tackle dependent design dimensions and identify invalid design space locations.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("requiredPreviousEvaluations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("requiredPreviousEvaluations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("requiredPreviousEvaluations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("name")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("name")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("name")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The design dimension's name.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("name")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("name")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignDimension")][QString::fromLatin1("name")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qdusedesigndimension.cpp"

