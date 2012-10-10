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
#include "qelement_p.h"
#include "qnamedelement_p.h"

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
   
void QDeploymentTargetPrivate::addDeployment(const QDeployment *deployment) 
{   
    this->deployments->insert(const_cast<QDeployment *>(deployment)); 

    // Adjust subsetted property(ies)
    addOwnedElement(deployment);
    addClientDependency(deployment); 
}
 
void QDeploymentTargetPrivate::removeDeployment(const QDeployment *deployment) 
{    
    this->deployments->remove(const_cast<QDeployment *>(deployment)); 

    // Adjust subsetted property(ies)
    removeOwnedElement(deployment);
    removeClientDependency(deployment);
}

/*!
    \class QDeploymentTarget

    \inmodule QtUml

    \brief A deployment target is the location for a deployed artifact.
 */

QDeploymentTarget::QDeploymentTarget()
{
    d_umlptr = new QDeploymentTargetPrivate;
}

QDeploymentTarget::~QDeploymentTarget()
{
}

/*!
    The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
 */
const QSet<QPackageableElement *> *QDeploymentTarget::deployedElements() const
{
    qWarning("QDeploymentTarget::deployedElements: to be implemented (this is a derived associationend)");
}

/*!
    The set of Deployments for a DeploymentTarget.
 */
const QSet<QDeployment *> *QDeploymentTarget::deployments() const
{
    Q_D(const QDeploymentTarget);
    return d->deployments;
}

void QDeploymentTarget::addDeployment(const QDeployment *deployment)
{
    Q_D(QDeploymentTarget);
    d->addDeployment(const_cast<QDeployment *>(deployment));
}

void QDeploymentTarget::removeDeployment(const QDeployment *deployment)
{
    Q_D(QDeploymentTarget);
    d->removeDeployment(const_cast<QDeployment *>(deployment));
}

QT_END_NAMESPACE_QTUML

