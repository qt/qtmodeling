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
#include "qdusedesignspace.h"
#include "qdusedesignspace_p.h"

#include <QtDuse/QDuseDesignDimension>
#include <QtDuse/QDuseQualityMetric>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

#include <QtQml/QQmlContext>

QT_BEGIN_NAMESPACE

QDuseDesignSpacePrivate::QDuseDesignSpacePrivate()
{
}

QDuseDesignSpacePrivate::~QDuseDesignSpacePrivate()
{
}

/*!
    \class QDuseDesignSpace

    \inmodule QtDuse

    \brief A design space entails the design dimensions (degrees of freedom) and quality metrics for a particular application domain.
 */

QDuseDesignSpace::QDuseDesignSpace(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QDuseDesignSpacePrivate, wrapper, parent)
{
    setPropertyData();
}

QDuseDesignSpace::QDuseDesignSpace(QDuseDesignSpacePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent)
{
    setPropertyData();
}

QDuseDesignSpace::~QDuseDesignSpace()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QDuseDesignSpace
// ---------------------------------------------------------------

/*!
    The design space's name.
 */
QString QDuseDesignSpace::name() const
{
    // This is a read-write attribute

    Q_D(const QDuseDesignSpace);
    return d->name;
}

void QDuseDesignSpace::setName(QString name)
{
    // This is a read-write attribute

    Q_D(QDuseDesignSpace);
    if (d->name != name) {
        d->name = name;
    }
}

/*!
    The design dimensions (degrees of freedom) of the design space.
 */
QList<QDuseDesignDimension *> QDuseDesignSpace::designDimensions() const
{
    // This is a read-write attribute

    Q_D(const QDuseDesignSpace);
    return d->designDimensions;
}

void QDuseDesignSpace::addDesignDimension(QDuseDesignDimension *designDimension)
{
    // This is a read-write attribute

    Q_D(QDuseDesignSpace);
    if (!d->designDimensions.contains(designDimension)) {
        d->designDimensions.append(designDimension);
        qTopLevelWrapper(designDimension)->setParent(qTopLevelWrapper(this));
    }
}

void QDuseDesignSpace::removeDesignDimension(QDuseDesignDimension *designDimension)
{
    // This is a read-write attribute

    Q_D(QDuseDesignSpace);
    if (d->designDimensions.contains(designDimension)) {
        d->designDimensions.removeAll(designDimension);
        qTopLevelWrapper(designDimension)->setParent(0);
    }
}

/*!
    The quality metrics defined for the design space.
 */
QSet<QDuseQualityMetric *> QDuseDesignSpace::qualityMetrics() const
{
    // This is a read-write attribute

    Q_D(const QDuseDesignSpace);
    return d->qualityMetrics;
}

void QDuseDesignSpace::addQualityMetric(QDuseQualityMetric *qualityMetric)
{
    // This is a read-write attribute

    Q_D(QDuseDesignSpace);
    if (!d->qualityMetrics.contains(qualityMetric)) {
        d->qualityMetrics.insert(qualityMetric);
        qTopLevelWrapper(qualityMetric)->setParent(qTopLevelWrapper(this));
    }
}

void QDuseDesignSpace::removeQualityMetric(QDuseQualityMetric *qualityMetric)
{
    // This is a read-write attribute

    Q_D(QDuseDesignSpace);
    if (d->qualityMetrics.contains(qualityMetric)) {
        d->qualityMetrics.remove(qualityMetric);
        qTopLevelWrapper(qualityMetric)->setParent(0);
    }
}

void QDuseDesignSpace::setQmlContextProperties(QQmlContext *qmlContext)
{
    QVariantList metricList;
    foreach (QDuseQualityMetric *metric, qualityMetrics())
        metricList << qVariantFromValue(metric);
    qmlContext->setContextProperty(QString::fromLatin1("metrics"), metricList);
}

void QDuseDesignSpace::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("name")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("name")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("name")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The design space's name.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("name")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("name")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("name")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("designDimensions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("designDimensions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("designDimensions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The design dimensions (degrees of freedom) of the design space.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("designDimensions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("designDimensions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("designDimensions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("qualityMetrics")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("qualityMetrics")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("qualityMetrics")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The quality metrics defined for the design space.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("qualityMetrics")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("qualityMetrics")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseDesignSpace")][QString::fromLatin1("qualityMetrics")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qdusedesignspace.cpp"

