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

#include "qdeploymenttarget.h"
#include "qdeploymenttarget_p.h"

#include <QtUml/QPackageableElement>
#include <QtUml/QDeployment>

QT_BEGIN_NAMESPACE_QTUML

QDeploymentTargetPrivate::QDeploymentTargetPrivate() :
    deployments(new QSet<QDeployment *>)
{
}

QDeploymentTargetPrivate::~QDeploymentTargetPrivate()
{
    delete deployments;
}

/*!
    \class QDeploymentTarget

    \inmodule QtUml

    \brief A deployment target is the location for a deployed artifact.
 */

QDeploymentTarget::QDeploymentTarget(QUmlObject *parent, QUmlObject *wrapper) :
    QNamedElement(*new QDeploymentTargetPrivate, parent, wrapper)
{
}

QDeploymentTarget::QDeploymentTarget(QDeploymentTargetPrivate &dd, QUmlObject *parent, QUmlObject *wrapper) :
    QNamedElement(dd, parent, wrapper)
{
}

QDeploymentTarget::~QDeploymentTarget()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QDeploymentTarget
// ---------------------------------------------------------------

/*!
    The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
 */
const QSet<QPackageableElement *> *QDeploymentTarget::deployedElements() const
{
    // This is a read-only derived association end

    qWarning("QDeploymentTarget::deployedElements: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The set of Deployments for a DeploymentTarget.
 */
const QSet<QDeployment *> *QDeploymentTarget::deployments() const
{
    // This is a read-write association end

    Q_D(const QDeploymentTarget);
    return d->deployments;
}

void QDeploymentTarget::addDeployment(QDeployment *deployment)
{
    // This is a read-write association end

    Q_D(QDeploymentTarget);
    if (!d->deployments->contains(deployment)) {
        d->deployments->insert(deployment);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QElementPrivate *>(d))->addOwnedElement(qumlobject_cast<QElement *>(deployment));
        (qumlobject_cast<QNamedElement *>(this))->addClientDependency(qumlobject_cast<QDependency *>(deployment));

        // Adjust opposite property
        deployment->setLocation(this);
    }
}

void QDeploymentTarget::removeDeployment(QDeployment *deployment)
{
    // This is a read-write association end

    Q_D(QDeploymentTarget);
    if (d->deployments->contains(deployment)) {
        d->deployments->remove(deployment);
        deployment->setParent(0);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QElementPrivate *>(d))->removeOwnedElement(qumlobject_cast<QElement *>(deployment));
        (qumlobject_cast<QNamedElement *>(this))->removeClientDependency(qumlobject_cast<QDependency *>(deployment));

        // Adjust opposite property
        deployment->setLocation(0);
    }
}

// Overriden methods for subsetted properties

void QDeploymentTarget::addClientDependency(QUmlPointer<QDeployment> deployment)
{
    addDeployment(deployment);
}

void QDeploymentTarget::removeClientDependency(QUmlPointer<QDeployment> deployment)
{
    removeDeployment(deployment);
}

#include "moc_qdeploymenttarget.cpp"

QT_END_NAMESPACE_QTUML

