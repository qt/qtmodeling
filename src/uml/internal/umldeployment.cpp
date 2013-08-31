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
#include "umldeployment_p.h"

#include "private/umldeployedartifact_p.h"
#include "private/umldeploymentspecification_p.h"
#include "private/umldeploymenttarget_p.h"

UmlDeployment::UmlDeployment() :
    _location(0)
{
}

// OWNED ATTRIBUTES

const QSet<UmlDeploymentSpecification *> UmlDeployment::configuration() const
{
    // This is a read-write association end

    return _configuration;
}

void UmlDeployment::addConfiguration(UmlDeploymentSpecification *configuration)
{
    // This is a read-write association end

    if (!_configuration.contains(configuration)) {
        _configuration.insert(configuration);

        // Adjust subsetted properties
        addOwnedElement(configuration);

        // Adjust opposite properties
        if (configuration) {
            configuration->setDeployment(this);
        }
    }
}

void UmlDeployment::removeConfiguration(UmlDeploymentSpecification *configuration)
{
    // This is a read-write association end

    if (_configuration.contains(configuration)) {
        _configuration.remove(configuration);

        // Adjust subsetted properties
        removeOwnedElement(configuration);

        // Adjust opposite properties
        if (configuration) {
            configuration->setDeployment(0);
        }
    }
}

const QSet<UmlDeployedArtifact *> UmlDeployment::deployedArtifact() const
{
    // This is a read-write association end

    return _deployedArtifact;
}

void UmlDeployment::addDeployedArtifact(UmlDeployedArtifact *deployedArtifact)
{
    // This is a read-write association end

    if (!_deployedArtifact.contains(deployedArtifact)) {
        _deployedArtifact.insert(deployedArtifact);

        // Adjust subsetted properties
        addSupplier(deployedArtifact);
    }
}

void UmlDeployment::removeDeployedArtifact(UmlDeployedArtifact *deployedArtifact)
{
    // This is a read-write association end

    if (_deployedArtifact.contains(deployedArtifact)) {
        _deployedArtifact.remove(deployedArtifact);

        // Adjust subsetted properties
        removeSupplier(deployedArtifact);
    }
}

UmlDeploymentTarget *UmlDeployment::location() const
{
    // This is a read-write association end

    return _location;
}

void UmlDeployment::setLocation(UmlDeploymentTarget *location)
{
    // This is a read-write association end

    if (_location != location) {
        // Adjust subsetted properties
        removeClient(_location);

        _location = location;

        // Adjust subsetted properties
        setOwner(location);
        if (location) {
            addClient(location);
        }
    }
}

