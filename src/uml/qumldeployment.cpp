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

#include "private/qumldeploymentobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDeployedArtifact>
#include <QtUml/QUmlDeploymentSpecification>
#include <QtUml/QUmlDeploymentTarget>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlDeployment

    \inmodule QtUml

    \brief A deployment is the allocation of an artifact or artifact instance to a deployment target.A component deployment is the deployment of one or more artifacts or artifact instances to a deployment target, optionally parameterized by a deployment specification. Examples are executables and configuration files.
 */

/*!
    Creates a new QUmlDeployment. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlDeployment::QUmlDeployment(bool createQModelingObject) :
    QUmlDependency(false),
    _location(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlDeploymentObject(this));
}

/*!
    Returns a deep-copied clone of the QUmlDeployment.
*/
QModelingElement *QUmlDeployment::clone() const
{
    QUmlDeployment *c = new QUmlDeployment;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlNamedElement *element, clients())
        c->addClient(dynamic_cast<QUmlNamedElement *>(element->clone()));
    foreach (QUmlNamedElement *element, suppliers())
        c->addSupplier(dynamic_cast<QUmlNamedElement *>(element->clone()));
    foreach (QUmlDeploymentSpecification *element, configurations())
        c->addConfiguration(dynamic_cast<QUmlDeploymentSpecification *>(element->clone()));
    foreach (QUmlDeployedArtifact *element, deployedArtifacts())
        c->addDeployedArtifact(dynamic_cast<QUmlDeployedArtifact *>(element->clone()));
    if (location())
        c->setLocation(dynamic_cast<QUmlDeploymentTarget *>(location()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The specification of properties that parameterize the deployment and execution of one or more Artifacts.

    \sa addConfiguration(), removeConfiguration()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().

    \b {Opposite property(ies):} QUmlDeploymentSpecification::deployment().
 */
const QSet<QUmlDeploymentSpecification *> QUmlDeployment::configurations() const
{
    // This is a read-write association end

    return _configurations;
}

/*!
    Adds \a configuration to configurations.

    \sa configurations(), removeConfiguration()
 */
void QUmlDeployment::addConfiguration(QUmlDeploymentSpecification *configuration)
{
    // This is a read-write association end

    if (!_configurations.contains(configuration)) {
        _configurations.insert(configuration);
        if (configuration && configuration->asQModelingObject() && this->asQModelingObject())
            QObject::connect(configuration->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeConfiguration(QObject *)));
        configuration->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(configuration);

        // Adjust opposite properties
        if (configuration) {
            configuration->setDeployment(this);
        }
    }
}

/*!
    Removes \a configuration from configurations.

    \sa configurations(), addConfiguration()
 */
void QUmlDeployment::removeConfiguration(QUmlDeploymentSpecification *configuration)
{
    // This is a read-write association end

    if (_configurations.contains(configuration)) {
        _configurations.remove(configuration);
        if (configuration->asQModelingObject())
            configuration->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(configuration);

        // Adjust opposite properties
        if (configuration) {
            configuration->setDeployment(0);
        }
    }
}

/*!
    The Artifacts that are deployed onto a Node. This association specializes the supplier association.

    \sa addDeployedArtifact(), removeDeployedArtifact()

    \b {Subsetted property(ies):} QUmlDependency::suppliers().
 */
const QSet<QUmlDeployedArtifact *> QUmlDeployment::deployedArtifacts() const
{
    // This is a read-write association end

    return _deployedArtifacts;
}

/*!
    Adds \a deployedArtifact to deployedArtifacts.

    \sa deployedArtifacts(), removeDeployedArtifact()
 */
void QUmlDeployment::addDeployedArtifact(QUmlDeployedArtifact *deployedArtifact)
{
    // This is a read-write association end

    if (!_deployedArtifacts.contains(deployedArtifact)) {
        _deployedArtifacts.insert(deployedArtifact);
        if (deployedArtifact && deployedArtifact->asQModelingObject() && this->asQModelingObject())
            QObject::connect(deployedArtifact->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeDeployedArtifact(QObject *)));

        // Adjust subsetted properties
        addSupplier(deployedArtifact);
    }
}

/*!
    Removes \a deployedArtifact from deployedArtifacts.

    \sa deployedArtifacts(), addDeployedArtifact()
 */
void QUmlDeployment::removeDeployedArtifact(QUmlDeployedArtifact *deployedArtifact)
{
    // This is a read-write association end

    if (_deployedArtifacts.contains(deployedArtifact)) {
        _deployedArtifacts.remove(deployedArtifact);

        // Adjust subsetted properties
        removeSupplier(deployedArtifact);
    }
}

/*!
    The DeployedTarget which is the target of a Deployment.

    \b {Subsetted property(ies):} QUmlElement::owner(), QUmlDependency::clients().

    \b {Opposite property(ies):} QUmlDeploymentTarget::deployments().
 */
QUmlDeploymentTarget *QUmlDeployment::location() const
{
    // This is a read-write association end

    return _location;
}

/*!
    Adjusts location to \a location.
 */
void QUmlDeployment::setLocation(QUmlDeploymentTarget *location)
{
    // This is a read-write association end

    if (_location != location) {
        // Adjust subsetted properties
        removeClient(_location);

        _location = location;
        if (location && location->asQModelingObject() && this->asQModelingObject())
            QObject::connect(location->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setLocation()));

        // Adjust subsetted properties
        setOwner(location);
        if (location) {
            addClient(location);
        }
    }
}

QT_END_NAMESPACE

