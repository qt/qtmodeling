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

#include "qumldeployment.h"
#include "qumldeployment_p.h"

#include <QtUml/QUmlDeploymentSpecification>
#include <QtUml/QUmlDeployedArtifact>
#include <QtUml/QUmlDeploymentTarget>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlDeploymentPrivate::QUmlDeploymentPrivate() :
    location(0)
{
}

QUmlDeploymentPrivate::~QUmlDeploymentPrivate()
{
}

/*!
    \class QUmlDeployment

    \inmodule QtUml

    \brief A deployment is the allocation of an artifact or artifact instance to a deployment target.A component deployment is the deployment of one or more artifacts or artifact instances to a deployment target, optionally parameterized by a deployment specification. Examples are executables and configuration files.
 */

QUmlDeployment::QUmlDeployment(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDependency(*new QUmlDeploymentPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlDeployment::QUmlDeployment(QUmlDeploymentPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDependency(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlDeployment::~QUmlDeployment()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlDeployment
// ---------------------------------------------------------------

/*!
    The DeployedTarget which is the target of a Deployment.
 */
QUmlDeploymentTarget *QUmlDeployment::location() const
{
    // This is a read-write association end

    Q_D(const QUmlDeployment);
    return d->location;
}

void QUmlDeployment::setLocation(QUmlDeploymentTarget *location)
{
    // This is a read-write association end

    Q_D(QUmlDeployment);
    if (d->location != location) {
        // Adjust opposite property
        if (d->location)
            d->location->removeDeployment(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDependency *>(this))->removeClient(qwrappedobject_cast<QUmlNamedElement *>(d->location));

        d->location = location;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(location));
        if (location) {
            (qwrappedobject_cast<QUmlDependency *>(this))->addClient(qwrappedobject_cast<QUmlNamedElement *>(location));
        }

        // Adjust opposite property
        if (location)
            location->addDeployment(this);
    }
}

/*!
    The specification of properties that parameterize the deployment and execution of one or more Artifacts.
 */
QSet<QUmlDeploymentSpecification *> QUmlDeployment::configurations() const
{
    // This is a read-write association end

    Q_D(const QUmlDeployment);
    return d->configurations;
}

void QUmlDeployment::addConfiguration(QUmlDeploymentSpecification *configuration)
{
    // This is a read-write association end

    Q_D(QUmlDeployment);
    if (!d->configurations.contains(configuration)) {
        d->configurations.insert(configuration);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(configuration));

        // Adjust opposite property
        configuration->setDeployment(this);
    }
}

void QUmlDeployment::removeConfiguration(QUmlDeploymentSpecification *configuration)
{
    // This is a read-write association end

    Q_D(QUmlDeployment);
    if (d->configurations.contains(configuration)) {
        d->configurations.remove(configuration);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(configuration));

        // Adjust opposite property
        configuration->setDeployment(0);
    }
}

/*!
    The Artifacts that are deployed onto a Node. This association specializes the supplier association.
 */
QSet<QUmlDeployedArtifact *> QUmlDeployment::deployedArtifacts() const
{
    // This is a read-write association end

    Q_D(const QUmlDeployment);
    return d->deployedArtifacts;
}

void QUmlDeployment::addDeployedArtifact(QUmlDeployedArtifact *deployedArtifact)
{
    // This is a read-write association end

    Q_D(QUmlDeployment);
    if (!d->deployedArtifacts.contains(deployedArtifact)) {
        d->deployedArtifacts.insert(deployedArtifact);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDependency *>(this))->addSupplier(qwrappedobject_cast<QUmlNamedElement *>(deployedArtifact));
    }
}

void QUmlDeployment::removeDeployedArtifact(QUmlDeployedArtifact *deployedArtifact)
{
    // This is a read-write association end

    Q_D(QUmlDeployment);
    if (d->deployedArtifacts.contains(deployedArtifact)) {
        d->deployedArtifacts.remove(deployedArtifact);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDependency *>(this))->removeSupplier(qwrappedobject_cast<QUmlNamedElement *>(deployedArtifact));
    }
}

void QUmlDeployment::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("location")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("location")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("location")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The DeployedTarget which is the target of a Deployment.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("location")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("location")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner QUmlDependency::clients");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("location")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlDeploymentTarget::deployment");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("configurations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("configurations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("configurations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specification of properties that parameterize the deployment and execution of one or more Artifacts.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("configurations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("configurations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("configurations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlDeploymentSpecification::deployment");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("deployedArtifacts")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("deployedArtifacts")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("deployedArtifacts")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Artifacts that are deployed onto a Node. This association specializes the supplier association.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("deployedArtifacts")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("deployedArtifacts")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDependency::suppliers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDeployment")][QString::fromLatin1("deployedArtifacts")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlDependency::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlDeployment::addClient(QWrappedObjectPointer<QUmlDeploymentTarget> location)
{
    setLocation(location);
}

void QUmlDeployment::removeClient(QWrappedObjectPointer<QUmlDeploymentTarget> location)
{
    Q_UNUSED(location);
    setLocation(0);
}

void QUmlDeployment::addSupplier(QWrappedObjectPointer<QUmlDeployedArtifact> deployedArtifact)
{
    addDeployedArtifact(deployedArtifact);
}

void QUmlDeployment::removeSupplier(QWrappedObjectPointer<QUmlDeployedArtifact> deployedArtifact)
{
    removeDeployedArtifact(deployedArtifact);
}

QT_END_NAMESPACE

#include "moc_qumldeployment.cpp"

