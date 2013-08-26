/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#include "qumldeploymenttarget.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlPackageableElement>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlDeploymentTarget

    \inmodule QtUml

    \brief A deployment target is the location for a deployed artifact.
 */

QUmlDeploymentTarget::QUmlDeploymentTarget()
{
    d_ptr->object.setProperty("deployedElement", QVariant::fromValue(QSet<QUmlPackageableElement *>()));
    d_ptr->object.setProperty("deployment", QVariant::fromValue(&_deployment));
}

// OWNED ATTRIBUTES

/*!
    The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
 */
QSet<QUmlPackageableElement *> QUmlDeploymentTarget::deployedElement() const
{
    // This is a read-only derived association end

    qWarning("QUmlDeploymentTarget::deployedElement(): to be implemented (this is a derived association end)");

    return QSet<QUmlPackageableElement *>();
}

void QUmlDeploymentTarget::addDeployedElement(QUmlPackageableElement *deployedElement)
{
    // This is a read-only derived association end

    qWarning("QUmlDeploymentTarget::deployedElement(): to be implemented (this is a derived association end)");
    Q_UNUSED(deployedElement);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlDeploymentTarget::removeDeployedElement(QUmlPackageableElement *deployedElement)
{
    // This is a read-only derived association end

    qWarning("QUmlDeploymentTarget::deployedElement(): to be implemented (this is a derived association end)");
    Q_UNUSED(deployedElement);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The set of Deployments for a DeploymentTarget.
 */
QSet<QUmlDeployment *> QUmlDeploymentTarget::deployment() const
{
    // This is a read-write association end

    return _deployment;
}

void QUmlDeploymentTarget::addDeployment(QUmlDeployment *deployment)
{
    // This is a read-write association end

    if (!_deployment.contains(deployment)) {
        _deployment.insert(deployment);

        // Adjust subsetted properties
        addOwnedElement(deployment);
        addClientDependency(deployment);

        // Adjust opposite properties
        if (deployment) {
            deployment->setLocation(this);
        }
    }
}

void QUmlDeploymentTarget::removeDeployment(QUmlDeployment *deployment)
{
    // This is a read-write association end

    if (_deployment.contains(deployment)) {
        _deployment.remove(deployment);

        // Adjust subsetted properties
        removeOwnedElement(deployment);
        removeClientDependency(deployment);

        // Adjust opposite properties
        if (deployment) {
            deployment->setLocation(0);
        }
    }
}

QT_END_NAMESPACE

