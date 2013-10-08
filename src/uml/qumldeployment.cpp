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
    setClassForProperty();
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
 */
const QSet<QUmlDeploymentSpecification *> QUmlDeployment::configurations() const
{
    // This is a read-write association end

    return _configurations;
}

void QUmlDeployment::addConfiguration(QUmlDeploymentSpecification *configuration)
{
    // This is a read-write association end

    if (!_configurations.contains(configuration)) {
        _configurations.insert(configuration);
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

    if (_configurations.contains(configuration)) {
        _configurations.remove(configuration);
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
const QSet<QUmlDeployedArtifact *> QUmlDeployment::deployedArtifacts() const
{
    // This is a read-write association end

    return _deployedArtifacts;
}

void QUmlDeployment::addDeployedArtifact(QUmlDeployedArtifact *deployedArtifact)
{
    // This is a read-write association end

    if (!_deployedArtifacts.contains(deployedArtifact)) {
        _deployedArtifacts.insert(deployedArtifact);
        if (deployedArtifact && deployedArtifact->asQObject() && this->asQObject())
            QObject::connect(deployedArtifact->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeDeployedArtifact(QObject *)));

        // Adjust subsetted properties
        addSupplier(deployedArtifact);
    }
}

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

void QUmlDeployment::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owningTemplateParameter")] = QStringLiteral("QUmlParameterableElement");
    _classForProperty[QStringLiteral("templateParameter")] = QStringLiteral("QUmlParameterableElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlPackageableElement");
    _classForProperty[QStringLiteral("relatedElements")] = QStringLiteral("QUmlRelationship");
    _classForProperty[QStringLiteral("sources")] = QStringLiteral("QUmlDirectedRelationship");
    _classForProperty[QStringLiteral("targets")] = QStringLiteral("QUmlDirectedRelationship");
    _classForProperty[QStringLiteral("clients")] = QStringLiteral("QUmlDependency");
    _classForProperty[QStringLiteral("suppliers")] = QStringLiteral("QUmlDependency");
    _classForProperty[QStringLiteral("configurations")] = QStringLiteral("QUmlDeployment");
    _classForProperty[QStringLiteral("deployedArtifacts")] = QStringLiteral("QUmlDeployment");
    _classForProperty[QStringLiteral("location")] = QStringLiteral("QUmlDeployment");
}

void QUmlDeployment::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("configurations")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("configurations")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlDeployment");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("configurations")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("configurations")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("configurations")][QtModeling::DocumentationRole] = QStringLiteral("The specification of properties that parameterize the deployment and execution of one or more Artifacts.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("configurations")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("configurations")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("configurations")][QtModeling::OppositeEndRole] = QStringLiteral("DeploymentSpecification-deployment");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("deployedArtifacts")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("deployedArtifacts")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlDeployment");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("deployedArtifacts")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("deployedArtifacts")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("deployedArtifacts")][QtModeling::DocumentationRole] = QStringLiteral("The Artifacts that are deployed onto a Node. This association specializes the supplier association.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("deployedArtifacts")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("deployedArtifacts")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Dependency-supplier");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("deployedArtifacts")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("location")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("location")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlDeployment");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("location")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("location")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("location")][QtModeling::DocumentationRole] = QStringLiteral("The DeployedTarget which is the target of a Deployment.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("location")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("location")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner Dependency-client");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeployment")][QStringLiteral("location")][QtModeling::OppositeEndRole] = QStringLiteral("DeploymentTarget-deployment");

}

