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
#include <QtUml/QUmlDependency>
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
/*!
    \class QUmlDeployment

    \inmodule QtUml

    \brief A deployment is the allocation of an artifact or artifact instance to a deployment target.A component deployment is the deployment of one or more artifacts or artifact instances to a deployment target, optionally parameterized by a deployment specification. Examples are executables and configuration files.
 */
QUmlDeployment::QUmlDeployment(bool createQObject) :
    QUmlDependency(false),
    _location(0)
{
    if (createQObject)
        _qObject = new QUmlDeploymentObject(this);
    setPropertyData();
}

QUmlDeployment::~QUmlDeployment()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlDeployment::clone() const
{
    QUmlDeployment *c = new QUmlDeployment;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlNamedElement *element, client())
        c->addClient(dynamic_cast<QUmlNamedElement *>(element->clone()));
    foreach (QUmlNamedElement *element, supplier())
        c->addSupplier(dynamic_cast<QUmlNamedElement *>(element->clone()));
    foreach (QUmlDeploymentSpecification *element, configuration())
        c->addConfiguration(dynamic_cast<QUmlDeploymentSpecification *>(element->clone()));
    foreach (QUmlDeployedArtifact *element, deployedArtifact())
        c->addDeployedArtifact(dynamic_cast<QUmlDeployedArtifact *>(element->clone()));
    if (location())
        c->setLocation(dynamic_cast<QUmlDeploymentTarget *>(location()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The specification of properties that parameterize the deployment and execution of one or more Artifacts.
 */
const QSet<QUmlDeploymentSpecification *> QUmlDeployment::configuration() const
{
    // This is a read-write association end

    return _configuration;
}

void QUmlDeployment::addConfiguration(QUmlDeploymentSpecification *configuration)
{
    // This is a read-write association end

    if (!_configuration.contains(configuration)) {
        _configuration.insert(configuration);
        if (configuration && configuration->asQObject() && this->asQObject())
            QObject::connect(configuration->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeConfiguration(QObject *)));
        configuration->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(configuration);

        // Adjust opposite properties
        if (configuration) {
            configuration->setDeployment(this);
        }
    }
}

void QUmlDeployment::removeConfiguration(QUmlDeploymentSpecification *configuration)
{
    // This is a read-write association end

    if (_configuration.contains(configuration)) {
        _configuration.remove(configuration);
        if (configuration->asQObject())
            configuration->asQObject()->setParent(0);

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
 */
const QSet<QUmlDeployedArtifact *> QUmlDeployment::deployedArtifact() const
{
    // This is a read-write association end

    return _deployedArtifact;
}

void QUmlDeployment::addDeployedArtifact(QUmlDeployedArtifact *deployedArtifact)
{
    // This is a read-write association end

    if (!_deployedArtifact.contains(deployedArtifact)) {
        _deployedArtifact.insert(deployedArtifact);
        if (deployedArtifact && deployedArtifact->asQObject() && this->asQObject())
            QObject::connect(deployedArtifact->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeDeployedArtifact(QObject *)));

        // Adjust subsetted properties
        addSupplier(deployedArtifact);
    }
}

void QUmlDeployment::removeDeployedArtifact(QUmlDeployedArtifact *deployedArtifact)
{
    // This is a read-write association end

    if (_deployedArtifact.contains(deployedArtifact)) {
        _deployedArtifact.remove(deployedArtifact);

        // Adjust subsetted properties
        removeSupplier(deployedArtifact);
    }
}

/*!
    The DeployedTarget which is the target of a Deployment.
 */
QUmlDeploymentTarget *QUmlDeployment::location() const
{
    // This is a read-write association end

    return _location;
}

void QUmlDeployment::setLocation(QUmlDeploymentTarget *location)
{
    // This is a read-write association end

    if (_location != location) {
        // Adjust subsetted properties
        removeClient(_location);

        _location = location;
        if (location && location->asQObject() && this->asQObject())
            QObject::connect(location->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setLocation()));

        // Adjust subsetted properties
        setOwner(location);
        if (location) {
            addClient(location);
        }
    }
}

void QUmlDeployment::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("configuration")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("configuration")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("configuration")][QtModeling::DocumentationRole] = QStringLiteral("The specification of properties that parameterize the deployment and execution of one or more Artifacts.");
    QModelingObject::propertyDataHash[QStringLiteral("configuration")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("configuration")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("configuration")][QtModeling::OppositeEndRole] = QStringLiteral("DeploymentSpecification-deployment");

    QModelingObject::propertyDataHash[QStringLiteral("deployedArtifact")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("deployedArtifact")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("deployedArtifact")][QtModeling::DocumentationRole] = QStringLiteral("The Artifacts that are deployed onto a Node. This association specializes the supplier association.");
    QModelingObject::propertyDataHash[QStringLiteral("deployedArtifact")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("deployedArtifact")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Dependency-supplier");
    QModelingObject::propertyDataHash[QStringLiteral("deployedArtifact")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("location")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("location")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("location")][QtModeling::DocumentationRole] = QStringLiteral("The DeployedTarget which is the target of a Deployment.");
    QModelingObject::propertyDataHash[QStringLiteral("location")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("location")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner Dependency-client");
    QModelingObject::propertyDataHash[QStringLiteral("location")][QtModeling::OppositeEndRole] = QStringLiteral("DeploymentTarget-deployment");

}

