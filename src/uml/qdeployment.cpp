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

#include "qdeployment.h"
#include "qdeployment_p.h"

#include <QtUml/QDeploymentSpecification>
#include <QtUml/QDeployedArtifact>
#include <QtUml/QDeploymentTarget>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QDeploymentPrivate::QDeploymentPrivate() :
    location(0)
{
}

QDeploymentPrivate::~QDeploymentPrivate()
{
}

/*!
    \class QDeployment

    \inmodule QtUml

    \brief A deployment is the allocation of an artifact or artifact instance to a deployment target.A component deployment is the deployment of one or more artifacts or artifact instances to a deployment target, optionally parameterized by a deployment specification. Examples are executables and configuration files.
 */

QDeployment::QDeployment(QWrappedObject *wrapper, QWrappedObject *parent) :
    QDependency(*new QDeploymentPrivate, wrapper, parent)
{
    setPropertyData();
}

QDeployment::QDeployment(QDeploymentPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QDependency(dd, wrapper, parent)
{
    setPropertyData();
}

QDeployment::~QDeployment()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QDeployment
// ---------------------------------------------------------------

/*!
    The DeployedTarget which is the target of a Deployment.
 */
QDeploymentTarget *QDeployment::location() const
{
    // This is a read-write association end

    Q_D(const QDeployment);
    return d->location;
}

void QDeployment::setLocation(QDeploymentTarget *location)
{
    // This is a read-write association end

    Q_D(QDeployment);
    if (d->location != location) {
        // Adjust opposite property
        if (d->location)
            d->location->removeDeployment(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDependency *>(this))->removeClient(qwrappedobject_cast<QNamedElement *>(d->location));

        d->location = location;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(location));
        if (location) {
            (qwrappedobject_cast<QDependency *>(this))->addClient(qwrappedobject_cast<QNamedElement *>(location));
        }

        // Adjust opposite property
        if (location)
            location->addDeployment(this);
    }
}

/*!
    The specification of properties that parameterize the deployment and execution of one or more Artifacts.
 */
QSet<QDeploymentSpecification *> QDeployment::configurations() const
{
    // This is a read-write association end

    Q_D(const QDeployment);
    return d->configurations;
}

void QDeployment::addConfiguration(QDeploymentSpecification *configuration)
{
    // This is a read-write association end

    Q_D(QDeployment);
    if (!d->configurations.contains(configuration)) {
        d->configurations.insert(configuration);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(configuration));

        // Adjust opposite property
        configuration->setDeployment(this);
    }
}

void QDeployment::removeConfiguration(QDeploymentSpecification *configuration)
{
    // This is a read-write association end

    Q_D(QDeployment);
    if (d->configurations.contains(configuration)) {
        d->configurations.remove(configuration);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(configuration));

        // Adjust opposite property
        configuration->setDeployment(0);
    }
}

/*!
    The Artifacts that are deployed onto a Node. This association specializes the supplier association.
 */
QSet<QDeployedArtifact *> QDeployment::deployedArtifacts() const
{
    // This is a read-write association end

    Q_D(const QDeployment);
    return d->deployedArtifacts;
}

void QDeployment::addDeployedArtifact(QDeployedArtifact *deployedArtifact)
{
    // This is a read-write association end

    Q_D(QDeployment);
    if (!d->deployedArtifacts.contains(deployedArtifact)) {
        d->deployedArtifacts.insert(deployedArtifact);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDependency *>(this))->addSupplier(qwrappedobject_cast<QNamedElement *>(deployedArtifact));
    }
}

void QDeployment::removeDeployedArtifact(QDeployedArtifact *deployedArtifact)
{
    // This is a read-write association end

    Q_D(QDeployment);
    if (d->deployedArtifacts.contains(deployedArtifact)) {
        d->deployedArtifacts.remove(deployedArtifact);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDependency *>(this))->removeSupplier(qwrappedobject_cast<QNamedElement *>(deployedArtifact));
    }
}

void QDeployment::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("location")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("location")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("location")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The DeployedTarget which is the target of a Deployment.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("location")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("location")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::owner QDependency::clients");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("location")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QDeploymentTarget::deployment");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("configurations")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("configurations")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("configurations")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specification of properties that parameterize the deployment and execution of one or more Artifacts.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("configurations")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("configurations")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("configurations")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QDeploymentSpecification::deployment");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("deployedArtifacts")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("deployedArtifacts")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("deployedArtifacts")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Artifacts that are deployed onto a Node. This association specializes the supplier association.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("deployedArtifacts")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("deployedArtifacts")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QDependency::suppliers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDeployment")][QString::fromLatin1("deployedArtifacts")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QDependency::setPropertyData();
}

// Overriden methods for subsetted properties

void QDeployment::addClient(QWrappedObjectPointer<QDeploymentTarget> location)
{
    setLocation(location);
}

void QDeployment::removeClient(QWrappedObjectPointer<QDeploymentTarget> location)
{
    Q_UNUSED(location);
    setLocation(0);
}

void QDeployment::addSupplier(QWrappedObjectPointer<QDeployedArtifact> deployedArtifact)
{
    addDeployedArtifact(deployedArtifact);
}

void QDeployment::removeSupplier(QWrappedObjectPointer<QDeployedArtifact> deployedArtifact)
{
    removeDeployedArtifact(deployedArtifact);
}

#include "moc_qdeployment.cpp"

QT_END_NAMESPACE_QTUML

