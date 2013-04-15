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
#include "qumlnode.h"
#include "qumlnode_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlNodePrivate::QUmlNodePrivate()
{
}

QUmlNodePrivate::~QUmlNodePrivate()
{
}

/*!
    \class QUmlNode

    \inmodule QtUml

    \brief A node is computational resource upon which artifacts may be deployed for execution. Nodes can be interconnected through communication paths to define network structures.
 */

QUmlNode::QUmlNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlNodePrivate, wrapper, parent),
    _wrappedUmlClass(new QUmlClass(this)),
    _wrappedUmlDeploymentTarget(new QUmlDeploymentTarget(this))
{
    setPropertyData();
}

QUmlNode::QUmlNode(QUmlNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlClass(new QUmlClass(this)),
    _wrappedUmlDeploymentTarget(new QUmlDeploymentTarget(this))
{
    setPropertyData();
}

QUmlNode::~QUmlNode()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlNode::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlNode::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlNode::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlNode::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlNode::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlNode::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlNode::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlNode::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlNode::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlNode::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlNode::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlNode::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlNode::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlNode::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlNode::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlNode::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlDeploymentTarget
// ---------------------------------------------------------------

/*!
    The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
 */
QSet<QUmlPackageableElement *> QUmlNode::deployedElements() const
{
    return (qwrappedobject_cast<const QUmlDeploymentTarget *>(this))->deployedElements();
}

/*!
    The set of Deployments for a DeploymentTarget.
 */
QSet<QUmlDeployment *> QUmlNode::deployments() const
{
    return (qwrappedobject_cast<const QUmlDeploymentTarget *>(this))->deployments();
}

void QUmlNode::addDeployment(QUmlDeployment *deployment)
{
    (qwrappedobject_cast<QUmlDeploymentTarget *>(this))->addDeployment(deployment);
}

void QUmlNode::removeDeployment(QUmlDeployment *deployment)
{
    (qwrappedobject_cast<QUmlDeploymentTarget *>(this))->removeDeployment(deployment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlNode
// ---------------------------------------------------------------

/*!
    The Nodes that are defined (nested) within the Node.
 */
QSet<QUmlNode *> QUmlNode::nestedNodes() const
{
    // This is a read-write association end

    Q_D(const QUmlNode);
    return d->nestedNodes;
}

void QUmlNode::addNestedNode(QUmlNode *nestedNode)
{
    // This is a read-write association end

    Q_D(QUmlNode);
    if (!d->nestedNodes.contains(nestedNode)) {
        d->nestedNodes.insert(nestedNode);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(nestedNode));
    }
}

void QUmlNode::removeNestedNode(QUmlNode *nestedNode)
{
    // This is a read-write association end

    Q_D(QUmlNode);
    if (d->nestedNodes.contains(nestedNode)) {
        d->nestedNodes.remove(nestedNode);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(nestedNode));
    }
}

void QUmlNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNode")][QString::fromLatin1("nestedNodes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNode")][QString::fromLatin1("nestedNodes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNode")][QString::fromLatin1("nestedNodes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Nodes that are defined (nested) within the Node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNode")][QString::fromLatin1("nestedNodes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNode")][QString::fromLatin1("nestedNodes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNode")][QString::fromLatin1("nestedNodes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlnode.cpp"

