/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
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
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qumldeploymentspecification.h"
#include "qumldeploymentspecification_p.h"

#include <QtUml/QUmlDeployment>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlDeploymentSpecificationPrivate::QUmlDeploymentSpecificationPrivate() :
    deployment(0)
{
}

QUmlDeploymentSpecificationPrivate::~QUmlDeploymentSpecificationPrivate()
{
}

/*!
    \class QUmlDeploymentSpecification

    \inmodule QtUml

    \brief A deployment specification specifies a set of properties that determine execution parameters of a component artifact that is deployed on a node. A deployment specification can be aimed at a specific type of container. An artifact that reifies or implements deployment specification properties is a deployment descriptor.
 */

QUmlDeploymentSpecification::QUmlDeploymentSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlArtifact(*new QUmlDeploymentSpecificationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlDeploymentSpecification::QUmlDeploymentSpecification(QUmlDeploymentSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlArtifact(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlDeploymentSpecification::~QUmlDeploymentSpecification()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlDeploymentSpecification
// ---------------------------------------------------------------

/*!
    The location where an Artifact is deployed onto a Node. This is typically a 'directory' or 'memory address'.
 */
QString QUmlDeploymentSpecification::deploymentLocation() const
{
    // This is a read-write attribute

    Q_D(const QUmlDeploymentSpecification);
    return d->deploymentLocation;
}

void QUmlDeploymentSpecification::setDeploymentLocation(QString deploymentLocation)
{
    // This is a read-write attribute

    Q_D(QUmlDeploymentSpecification);
    if (d->deploymentLocation != deploymentLocation) {
        d->deploymentLocation = deploymentLocation;
    }
}

/*!
    The location where a component Artifact executes. This may be a local or remote location.
 */
QString QUmlDeploymentSpecification::executionLocation() const
{
    // This is a read-write attribute

    Q_D(const QUmlDeploymentSpecification);
    return d->executionLocation;
}

void QUmlDeploymentSpecification::setExecutionLocation(QString executionLocation)
{
    // This is a read-write attribute

    Q_D(QUmlDeploymentSpecification);
    if (d->executionLocation != executionLocation) {
        d->executionLocation = executionLocation;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlDeploymentSpecification
// ---------------------------------------------------------------

/*!
    The deployment with which the DeploymentSpecification is associated.
 */
QUmlDeployment *QUmlDeploymentSpecification::deployment() const
{
    // This is a read-write association end

    Q_D(const QUmlDeploymentSpecification);
    return d->deployment;
}

void QUmlDeploymentSpecification::setDeployment(QUmlDeployment *deployment)
{
    // This is a read-write association end

    Q_D(QUmlDeploymentSpecification);
    if (d->deployment != deployment) {
        // Adjust opposite property
        if (d->deployment)
            d->deployment->removeConfiguration(this);

        d->deployment = deployment;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(deployment));

        // Adjust opposite property
        if (deployment)
            deployment->addConfiguration(this);
    }
}

void QUmlDeploymentSpecification::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("deploymentLocation")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("deploymentLocation")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("deploymentLocation")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The location where an Artifact is deployed onto a Node. This is typically a 'directory' or 'memory address'.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("deploymentLocation")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("deploymentLocation")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("deploymentLocation")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("executionLocation")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("executionLocation")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("executionLocation")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The location where a component Artifact executes. This may be a local or remote location.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("executionLocation")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("executionLocation")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("executionLocation")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("deployment")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("deployment")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("deployment")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The deployment with which the DeploymentSpecification is associated.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("deployment")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("deployment")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeploymentSpecification")][QString::fromLatin1("deployment")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlDeployment::configuration");

    QUmlArtifact::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumldeploymentspecification.cpp"

