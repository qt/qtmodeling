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

#include "qnode.h"
#include "qnode_p.h"

QT_BEGIN_NAMESPACE_QTUML

QNodePrivate::QNodePrivate() :
    nestedNodes(new QSet<QNode *>)
{
}

QNodePrivate::~QNodePrivate()
{
    delete nestedNodes;
}

/*!
    \class QNode

    \inmodule QtUml

    \brief A node is computational resource upon which artifacts may be deployed for execution. Nodes can be interconnected through communication paths to define network structures.
 */

QNode::QNode(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(*new QNodePrivate, parent, wrapper),
    _wrappedClass(new QClass(this, this)),
    _wrappedDeploymentTarget(new QDeploymentTarget(this, this))
{
}

QNode::QNode(QNodePrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(dd, parent, wrapper),
    _wrappedClass(new QClass(this, this)),
    _wrappedDeploymentTarget(new QDeploymentTarget(this, this))
{
}

QNode::~QNode()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QNode::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QNode::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QNode::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QNode::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QNode::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QNode::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QNode::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QNode::visibility() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->visibility();
}

void QNode::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QNode::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QNode::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QNode::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QNode::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QNode::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QNode::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QNode::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QDeploymentTarget
// ---------------------------------------------------------------

/*!
    The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
 */
const QSet<QPackageableElement *> *QNode::deployedElements() const
{
    return (qwrappedobject_cast<const QDeploymentTarget *>(this))->deployedElements();
}

/*!
    The set of Deployments for a DeploymentTarget.
 */
const QSet<QDeployment *> *QNode::deployments() const
{
    return (qwrappedobject_cast<const QDeploymentTarget *>(this))->deployments();
}

void QNode::addDeployment(QDeployment *deployment)
{
    (qwrappedobject_cast<QDeploymentTarget *>(this))->addDeployment(deployment);
}

void QNode::removeDeployment(QDeployment *deployment)
{
    (qwrappedobject_cast<QDeploymentTarget *>(this))->removeDeployment(deployment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QNode
// ---------------------------------------------------------------

/*!
    The Nodes that are defined (nested) within the Node.
 */
const QSet<QNode *> *QNode::nestedNodes() const
{
    // This is a read-write association end

    Q_D(const QNode);
    return d->nestedNodes;
}

void QNode::addNestedNode(QNode *nestedNode)
{
    // This is a read-write association end

    Q_D(QNode);
    if (!d->nestedNodes->contains(nestedNode)) {
        d->nestedNodes->insert(nestedNode);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(nestedNode));
    }
}

void QNode::removeNestedNode(QNode *nestedNode)
{
    // This is a read-write association end

    Q_D(QNode);
    if (d->nestedNodes->contains(nestedNode)) {
        d->nestedNodes->remove(nestedNode);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(nestedNode));
    }
}

void QNode::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QNode) *>("QT_PREPEND_NAMESPACE_QTUML(QNode) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QNode) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QNode) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QNode) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QNode) *> *");
    qRegisterMetaType<QNode *>("QNode *");
    qRegisterMetaType<const QSet<QNode *> *>("const QSet<QNode *> *");
    qRegisterMetaType<const QList<QNode *> *>("const QList<QNode *> *");


    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qnode.cpp"

QT_END_NAMESPACE_QTUML

