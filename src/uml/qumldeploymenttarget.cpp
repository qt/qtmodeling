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

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlStringExpression>

/*!
    \class QUmlDeploymentTarget

    \inmodule QtUml

    \brief A deployment target is the location for a deployed artifact.
 */
QUmlDeploymentTarget::QUmlDeploymentTarget()
{
    setPropertyData();
}

QUmlDeploymentTarget::~QUmlDeploymentTarget()
{
}

QModelingObject *QUmlDeploymentTarget::clone() const
{
    QUmlDeploymentTarget *c = new QUmlDeploymentTarget;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlDeployment *element, deployments())
        c->addDeployment(dynamic_cast<QUmlDeployment *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
 */
const QSet<QUmlPackageableElement *> QUmlDeploymentTarget::deployedElements() const
{
    // This is a read-only derived association end

    qWarning("UmlDeploymentTarget::deployedElements(): to be implemented (this is a derived association end)");

    return QSet<QUmlPackageableElement *>();
}

void QUmlDeploymentTarget::addDeployedElement(QUmlPackageableElement *deployedElement)
{
    // This is a read-only derived association end

    qWarning("UmlDeploymentTarget::addDeployedElement(): to be implemented (this is a derived association end)");
    Q_UNUSED(deployedElement);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlDeploymentTarget::removeDeployedElement(QUmlPackageableElement *deployedElement)
{
    // This is a read-only derived association end

    qWarning("UmlDeploymentTarget::removeDeployedElement(): to be implemented (this is a derived association end)");
    Q_UNUSED(deployedElement);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The set of Deployments for a DeploymentTarget.
 */
const QSet<QUmlDeployment *> QUmlDeploymentTarget::deployments() const
{
    // This is a read-write association end

    return _deployments;
}

void QUmlDeploymentTarget::addDeployment(QUmlDeployment *deployment)
{
    // This is a read-write association end

    if (!_deployments.contains(deployment)) {
        _deployments.insert(deployment);
        if (deployment && deployment->asQObject() && this->asQObject())
            QObject::connect(deployment->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeDeployment(QObject *)));
        deployment->asQObject()->setParent(this->asQObject());

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

    if (_deployments.contains(deployment)) {
        _deployments.remove(deployment);
        if (deployment->asQObject())
            deployment->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(deployment);
        removeClientDependency(deployment);

        // Adjust opposite properties
        if (deployment) {
            deployment->setLocation(0);
        }
    }
}

void QUmlDeploymentTarget::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployedElement")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployedElement")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlDeploymentTarget");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployedElement")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployedElement")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployedElement")][QtModeling::DocumentationRole] = QStringLiteral("The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployedElement")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployedElement")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployedElement")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployment")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployment")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlDeploymentTarget");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployment")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployment")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployment")][QtModeling::DocumentationRole] = QStringLiteral("The set of Deployments for a DeploymentTarget.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployment")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployment")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement NamedElement-clientDependency");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDeploymentTarget")][QStringLiteral("deployment")][QtModeling::OppositeEndRole] = QStringLiteral("Deployment-location");

}

