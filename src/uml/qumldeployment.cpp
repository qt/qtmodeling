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
#include "qumldeployment.h"

#include <QtUml/QUmlDeployedArtifact>
#include <QtUml/QUmlDeploymentSpecification>
#include <QtUml/QUmlDeploymentTarget>

QT_BEGIN_NAMESPACE

QUmlDeployment::QUmlDeployment(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QSet<QUmlDeploymentSpecification *> QUmlDeployment::configuration() const
{
    return *(reinterpret_cast<const QSet<QUmlDeploymentSpecification *> *>(&_configuration));
}

void QUmlDeployment::addConfiguration(UmlDeploymentSpecification *configuration)
{
    UmlDeployment::addConfiguration(configuration);
}

void QUmlDeployment::removeConfiguration(UmlDeploymentSpecification *configuration)
{
    UmlDeployment::removeConfiguration(configuration);
}

const QSet<QUmlDeployedArtifact *> QUmlDeployment::deployedArtifact() const
{
    return *(reinterpret_cast<const QSet<QUmlDeployedArtifact *> *>(&_deployedArtifact));
}

void QUmlDeployment::addDeployedArtifact(UmlDeployedArtifact *deployedArtifact)
{
    UmlDeployment::addDeployedArtifact(deployedArtifact);
}

void QUmlDeployment::removeDeployedArtifact(UmlDeployedArtifact *deployedArtifact)
{
    UmlDeployment::removeDeployedArtifact(deployedArtifact);
}

QUmlDeploymentTarget *QUmlDeployment::location() const
{
    return reinterpret_cast<QUmlDeploymentTarget *>(_location);
}

void QUmlDeployment::setLocation(QUmlDeploymentTarget *location)
{
    UmlDeployment::setLocation(location);
}

QT_END_NAMESPACE

