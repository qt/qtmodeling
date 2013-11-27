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
#include "qdusedesignspaceobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtDuse/QDuseDesignSpace>
#include <QtDuse/QDuseDesignDimension>
#include <QtDuse/QDuseQualityMetric>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlPackageImport>

QT_BEGIN_NAMESPACE

QDuseDesignSpaceObject::QDuseDesignSpaceObject(QDuseDesignSpace *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [DesignSpace]

const QSet<QObject *> QDuseDesignSpaceObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QDuseDesignSpaceObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

QString QDuseDesignSpaceObject::name() const
{
    return qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->name();
}

QString QDuseDesignSpaceObject::requiredProfile() const
{
    return qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->requiredProfile();
}

const QList<QObject *> QDuseDesignSpaceObject::designDimensions() const
{
    QList<QObject *> list;
    foreach (QDuseDesignDimension *element, qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->designDimensions())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QDuseDesignSpaceObject::qualityMetrics() const
{
    QSet<QObject *> set;
    foreach (QDuseQualityMetric *element, qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->qualityMetrics())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [DesignSpace]

void QDuseDesignSpaceObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
    emit elementImportsChanged(this->elementImports());
}

void QDuseDesignSpaceObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
    emit elementImportsChanged(this->elementImports());
}

void QDuseDesignSpaceObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
    emit packageImportsChanged(this->packageImports());
}

void QDuseDesignSpaceObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
    emit packageImportsChanged(this->packageImports());
}

void QDuseDesignSpaceObject::setName(QString name)
{
    qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QDuseDesignSpaceObject::setRequiredProfile(QString requiredProfile)
{
    qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->setRequiredProfile(requiredProfile);
    emit requiredProfileChanged(this->requiredProfile());
}

void QDuseDesignSpaceObject::addDesignDimension(QObject *designDimension)
{
    qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->addDesignDimension(qmodelingelementproperty_cast<QDuseDesignDimension *>(designDimension));
    emit designDimensionsChanged(this->designDimensions());
}

void QDuseDesignSpaceObject::removeDesignDimension(QObject *designDimension)
{
    qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->removeDesignDimension(qmodelingelementproperty_cast<QDuseDesignDimension *>(designDimension));
    emit designDimensionsChanged(this->designDimensions());
}

void QDuseDesignSpaceObject::addQualityMetric(QObject *qualityMetric)
{
    qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->addQualityMetric(qmodelingelementproperty_cast<QDuseQualityMetric *>(qualityMetric));
    emit qualityMetricsChanged(this->qualityMetrics());
}

void QDuseDesignSpaceObject::removeQualityMetric(QObject *qualityMetric)
{
    qmodelingelementproperty_cast<QDuseDesignSpace *>(this)->removeQualityMetric(qmodelingelementproperty_cast<QDuseQualityMetric *>(qualityMetric));
    emit qualityMetricsChanged(this->qualityMetrics());
}


void QDuseDesignSpaceObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QDuseDesignSpace");
    d->groupProperties.insert(QStringLiteral("QDuseDesignSpace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QDuseDesignSpace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));
    d->groupProperties.insert(QStringLiteral("QDuseDesignSpace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QDuseDesignSpace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("requiredProfile"))));
    d->groupProperties.insert(QStringLiteral("QDuseDesignSpace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("designDimensions"))));
    d->groupProperties.insert(QStringLiteral("QDuseDesignSpace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualityMetrics"))));
}

void QDuseDesignSpaceObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, elementImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, elementImports, PropertyClassRole, QStringLiteral("QDuseDesignSpace"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, elementImports, PropertyTypeRole, QStringLiteral("QSet<QUmlElementImport *>"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, elementImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, elementImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, elementImports, DocumentationRole, QStringLiteral("The elements imported by the design space."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, elementImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, elementImports, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, elementImports, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, packageImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, packageImports, PropertyClassRole, QStringLiteral("QDuseDesignSpace"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, packageImports, PropertyTypeRole, QStringLiteral("QSet<QUmlPackageImport *>"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, packageImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, packageImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, packageImports, DocumentationRole, QStringLiteral("The packages imported by the design space."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, packageImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, packageImports, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, packageImports, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, name, PropertyClassRole, QStringLiteral("QDuseDesignSpace"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, name, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, name, DocumentationRole, QStringLiteral("The design space name."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, requiredProfile, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, requiredProfile, PropertyClassRole, QStringLiteral("QDuseDesignSpace"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, requiredProfile, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, requiredProfile, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, requiredProfile, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, requiredProfile, DocumentationRole, QStringLiteral("The profile required to be applied in models manipulated by the design space."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, requiredProfile, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, requiredProfile, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, requiredProfile, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, designDimensions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, designDimensions, PropertyClassRole, QStringLiteral("QDuseDesignSpace"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, designDimensions, PropertyTypeRole, QStringLiteral("QList<QDuseDesignDimension *>"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, designDimensions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, designDimensions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, designDimensions, DocumentationRole, QStringLiteral("The design dimensions (degrees of freedom) of the design space."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, designDimensions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, designDimensions, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, designDimensions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, qualityMetrics, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, qualityMetrics, PropertyClassRole, QStringLiteral("QDuseDesignSpace"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, qualityMetrics, PropertyTypeRole, QStringLiteral("QSet<QDuseQualityMetric *>"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, qualityMetrics, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, qualityMetrics, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, qualityMetrics, DocumentationRole, QStringLiteral("The quality metrics defined for the design space."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, qualityMetrics, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, qualityMetrics, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseDesignSpace, qualityMetrics, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

