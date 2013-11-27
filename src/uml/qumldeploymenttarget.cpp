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
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlDeploymentTarget

    \inmodule QtUml

    \brief A deployment target is the location for a deployed artifact.

    \b {QUmlDeploymentTarget is an abstract class.}
 */

/*!
    Creates a new QUmlDeploymentTarget.
*/
QUmlDeploymentTarget::QUmlDeploymentTarget()
{
}

/*!
    Destroys the QUmlDeploymentTarget.
 */
QUmlDeploymentTarget::~QUmlDeploymentTarget()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlDeploymentTarget.
*/
QModelingElement *QUmlDeploymentTarget::clone() const
{
    QUmlDeploymentTarget *c = new QUmlDeploymentTarget;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
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

    \b {This is a read-only derived property.}
 */
const QSet<QUmlPackageableElement *> QUmlDeploymentTarget::deployedElements() const
{
    // This is a read-only derived association end

    qWarning("QUmlDeploymentTarget::deployedElements(): to be implemented (this is a derived association end)");

    return QSet<QUmlPackageableElement *>();
}

/*!
    Adds \a deployedElement to deployedElements.

    \sa deployedElements(), removeDeployedElement()
 */
void QUmlDeploymentTarget::addDeployedElement(QUmlPackageableElement *deployedElement)
{
    // This is a read-only derived association end

    qWarning("QUmlDeploymentTarget::addDeployedElement(): to be implemented (this is a derived association end)");
    Q_UNUSED(deployedElement);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Removes \a deployedElement from deployedElements.

    \sa deployedElements(), addDeployedElement()
 */
void QUmlDeploymentTarget::removeDeployedElement(QUmlPackageableElement *deployedElement)
{
    // This is a read-only derived association end

    qWarning("QUmlDeploymentTarget::removeDeployedElement(): to be implemented (this is a derived association end)");
    Q_UNUSED(deployedElement);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The set of Deployments for a DeploymentTarget.

    \sa addDeployment(), removeDeployment()

    \b {Subsetted property(ies):} QUmlElement::ownedElements(), QUmlNamedElement::clientDependencies().

    \b {Opposite property(ies):} QUmlDeployment::location().
 */
const QSet<QUmlDeployment *> QUmlDeploymentTarget::deployments() const
{
    // This is a read-write association end

    return _deployments;
}

/*!
    Adds \a deployment to deployments.

    \sa deployments(), removeDeployment()
 */
void QUmlDeploymentTarget::addDeployment(QUmlDeployment *deployment)
{
    // This is a read-write association end

    if (!_deployments.contains(deployment)) {
        _deployments.insert(deployment);
        if (deployment && deployment->asQModelingObject() && this->asQModelingObject())
            QObject::connect(deployment->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeDeployment(QObject *)));
        deployment->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(deployment);
        addClientDependency(deployment);

        // Adjust opposite properties
        if (deployment) {
            deployment->setLocation(this);
        }
    }
}

/*!
    Removes \a deployment from deployments.

    \sa deployments(), addDeployment()
 */
void QUmlDeploymentTarget::removeDeployment(QUmlDeployment *deployment)
{
    // This is a read-write association end

    if (_deployments.contains(deployment)) {
        _deployments.remove(deployment);
        if (deployment->asQModelingObject())
            deployment->asQModelingObject()->setParent(0);

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

