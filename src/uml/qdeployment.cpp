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
#include "qelement_p.h"
#include "qdependency_p.h"

#include <QtUml/QDeploymentSpecification>
#include <QtUml/QDeployedArtifact>
#include <QtUml/QDeploymentTarget>

QT_BEGIN_NAMESPACE_QTUML

QDeploymentPrivate::QDeploymentPrivate() :
    location(0),
    configurations(new QSet<QDeploymentSpecification *>),
    deployedArtifacts(new QSet<QDeployedArtifact *>)
{
}

QDeploymentPrivate::~QDeploymentPrivate()
{
    delete configurations;
    delete deployedArtifacts;
}

void QDeploymentPrivate::setLocation(QDeploymentTarget *location)
{
    // Adjust subsetted property(ies)
    removeClient(this->location);

    this->location = location;

    // Adjust subsetted property(ies)
    setOwner(location);
    addClient(location);
}

void QDeploymentPrivate::addConfiguration(QDeploymentSpecification *configuration)
{
    this->configurations->insert(configuration);

    // Adjust subsetted property(ies)
    addOwnedElement(configuration);
}

void QDeploymentPrivate::removeConfiguration(QDeploymentSpecification *configuration)
{
    this->configurations->remove(configuration);

    // Adjust subsetted property(ies)
    removeOwnedElement(configuration);
}

void QDeploymentPrivate::addDeployedArtifact(QDeployedArtifact *deployedArtifact)
{
    this->deployedArtifacts->insert(deployedArtifact);

    // Adjust subsetted property(ies)
    addSupplier(deployedArtifact);
}

void QDeploymentPrivate::removeDeployedArtifact(QDeployedArtifact *deployedArtifact)
{
    this->deployedArtifacts->remove(deployedArtifact);

    // Adjust subsetted property(ies)
    removeSupplier(deployedArtifact);
}

/*!
    \class QDeployment

    \inmodule QtUml

    \brief A deployment is the allocation of an artifact or artifact instance to a deployment target.A component deployment is the deployment of one or more artifacts or artifact instances to a deployment target, optionally parameterized by a deployment specification. Examples are executables and configuration files.
 */

QDeployment::QDeployment(QObject *parent)
    : QDependency(false, parent)
{
    d_umlptr = new QDeploymentPrivate;
}

QDeployment::QDeployment(bool createPimpl, QObject *parent)
    : QDependency(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QDeploymentPrivate;
}

QDeployment::~QDeployment()
{
}

/*!
    The DeployedTarget which is the target of a Deployment.
 */
QDeploymentTarget *QDeployment::location() const
{
    QTUML_D(const QDeployment);
    return d->location;
}

void QDeployment::setLocation(QDeploymentTarget *location)
{
    QTUML_D(QDeployment);
    if (d->location != location) {
        d->setLocation(location);

        // Adjust opposite property
        location->addDeployment(this);
    }
}

/*!
    The specification of properties that parameterize the deployment and execution of one or more Artifacts.
 */
const QSet<QDeploymentSpecification *> *QDeployment::configurations() const
{
    QTUML_D(const QDeployment);
    return d->configurations;
}

void QDeployment::addConfiguration(QDeploymentSpecification *configuration)
{
    QTUML_D(QDeployment);
    if (!d->configurations->contains(configuration)) {
        d->addConfiguration(configuration);

        // Adjust opposite property
        configuration->setDeployment(this);
    }
}

void QDeployment::removeConfiguration(QDeploymentSpecification *configuration)
{
    QTUML_D(QDeployment);
    if (d->configurations->contains(configuration)) {
        d->removeConfiguration(configuration);

        // Adjust opposite property
        configuration->setDeployment(0);
    }
}

/*!
    The Artifacts that are deployed onto a Node. This association specializes the supplier association.
 */
const QSet<QDeployedArtifact *> *QDeployment::deployedArtifacts() const
{
    QTUML_D(const QDeployment);
    return d->deployedArtifacts;
}

void QDeployment::addDeployedArtifact(QDeployedArtifact *deployedArtifact)
{
    QTUML_D(QDeployment);
    if (!d->deployedArtifacts->contains(deployedArtifact)) {
        d->addDeployedArtifact(deployedArtifact);
    }
}

void QDeployment::removeDeployedArtifact(QDeployedArtifact *deployedArtifact)
{
    QTUML_D(QDeployment);
    if (d->deployedArtifacts->contains(deployedArtifact)) {
        d->removeDeployedArtifact(deployedArtifact);
    }
}

#include "moc_qdeployment.cpp"

QT_END_NAMESPACE_QTUML

