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

#include "qdeploymentspecification.h"
#include "qdeploymentspecification_p.h"

#include <QtUml/QDeployment>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QDeploymentSpecificationPrivate::QDeploymentSpecificationPrivate() :
    deployment(0)
{
}

QDeploymentSpecificationPrivate::~QDeploymentSpecificationPrivate()
{
}

/*!
    \class QDeploymentSpecification

    \inmodule QtUml

    \brief A deployment specification specifies a set of properties that determine execution parameters of a component artifact that is deployed on a node. A deployment specification can be aimed at a specific type of container. An artifact that reifies or implements deployment specification properties is a deployment descriptor.
 */

QDeploymentSpecification::QDeploymentSpecification(QWrappedObject *parent, QWrappedObject *wrapper) :
    QArtifact(*new QDeploymentSpecificationPrivate, parent, wrapper)
{
    setPropertyData();
}

QDeploymentSpecification::QDeploymentSpecification(QDeploymentSpecificationPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QArtifact(dd, parent, wrapper)
{
    setPropertyData();
}

QDeploymentSpecification::~QDeploymentSpecification()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QDeploymentSpecification
// ---------------------------------------------------------------

/*!
    The location where an Artifact is deployed onto a Node. This is typically a 'directory' or 'memory address'.
 */
QString QDeploymentSpecification::deploymentLocation() const
{
    // This is a read-write attribute

    Q_D(const QDeploymentSpecification);
    return d->deploymentLocation;
}

void QDeploymentSpecification::setDeploymentLocation(QString deploymentLocation)
{
    // This is a read-write attribute

    Q_D(QDeploymentSpecification);
    if (d->deploymentLocation != deploymentLocation) {
        d->deploymentLocation = deploymentLocation;
    }
}

/*!
    The location where a component Artifact executes. This may be a local or remote location.
 */
QString QDeploymentSpecification::executionLocation() const
{
    // This is a read-write attribute

    Q_D(const QDeploymentSpecification);
    return d->executionLocation;
}

void QDeploymentSpecification::setExecutionLocation(QString executionLocation)
{
    // This is a read-write attribute

    Q_D(QDeploymentSpecification);
    if (d->executionLocation != executionLocation) {
        d->executionLocation = executionLocation;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QDeploymentSpecification
// ---------------------------------------------------------------

/*!
    The deployment with which the DeploymentSpecification is associated.
 */
QDeployment *QDeploymentSpecification::deployment() const
{
    // This is a read-write association end

    Q_D(const QDeploymentSpecification);
    return d->deployment;
}

void QDeploymentSpecification::setDeployment(QDeployment *deployment)
{
    // This is a read-write association end

    Q_D(QDeploymentSpecification);
    if (d->deployment != deployment) {
        // Adjust opposite property
        if (d->deployment)
            d->deployment->removeConfiguration(this);

        d->deployment = deployment;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(deployment));

        // Adjust opposite property
        if (deployment)
            deployment->addConfiguration(this);
    }
}

void QDeploymentSpecification::registerMetaTypes() const
{
    qRegisterMetaType<QDeployment *>("QDeployment *");
    qRegisterMetaType<QSet<QDeployment *>>("QSet<QDeployment *>");
    qRegisterMetaType<QList<QDeployment *>>("QList<QDeployment *>");

    QArtifact::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QDeploymentSpecification::setPropertyData()
{

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeploymentSpecification")][QString::fromLatin1("deploymentLocation")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeploymentSpecification")][QString::fromLatin1("deploymentLocation")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The location where an Artifact is deployed onto a Node. This is typically a 'directory' or 'memory address'.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeploymentSpecification")][QString::fromLatin1("executionLocation")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeploymentSpecification")][QString::fromLatin1("executionLocation")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The location where a component Artifact executes. This may be a local or remote location.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeploymentSpecification")][QString::fromLatin1("deployment")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeploymentSpecification")][QString::fromLatin1("deployment")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The deployment with which the DeploymentSpecification is associated.");

    QArtifact::setPropertyData();
}

#include "moc_qdeploymentspecification.cpp"

QT_END_NAMESPACE_QTUML

