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
//#include "qdeploymentspecification_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QDeploymentSpecification

    \inmodule QtUml

    \brief A deployment specification specifies a set of properties that determine execution parameters of a component artifact that is deployed on a node. A deployment specification can be aimed at a specific type of container. An artifact that reifies or implements deployment specification properties is a deployment descriptor.
 */

QDeploymentSpecification::QDeploymentSpecification(QObject *parent)
    : QArtifact(parent)
{
}

QDeploymentSpecification::~QDeploymentSpecification()
{
}

/*!
    The location where an Artifact is deployed onto a Node. This is typically a 'directory' or 'memory address'.
 */
QString QDeploymentSpecification::deploymentLocation() const
{
}

void QDeploymentSpecification::setDeploymentLocation(QString deploymentLocation)
{
}

/*!
    The location where a component Artifact executes. This may be a local or remote location.
 */
QString QDeploymentSpecification::executionLocation() const
{
}

void QDeploymentSpecification::setExecutionLocation(QString executionLocation)
{
}

/*!
    The deployment with which the DeploymentSpecification is associated.
 */
QDeployment *QDeploymentSpecification::deployment() const
{
}

void QDeploymentSpecification::setDeployment(const QDeployment *deployment)
{
}

#include "moc_qdeploymentspecification.cpp"

QT_END_NAMESPACE_QTUML

