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
#include "qumlactivity.h"
#include "qumlactivity_p.h"

#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlVariable>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlActivityPrivate::QUmlActivityPrivate() :
    isReadOnly(false),
    isSingleExecution(false)
{
}

QUmlActivityPrivate::~QUmlActivityPrivate()
{
}

/*!
    \class QUmlActivity

    \inmodule QtUml

    \brief An activity is the specification of parameterized behavior as the coordinated sequencing of subordinate units whose individual elements are actions.
 */

QUmlActivity::QUmlActivity(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlBehavior(*new QUmlActivityPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlActivity::QUmlActivity(QUmlActivityPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlBehavior(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlActivity::~QUmlActivity()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlActivity
// ---------------------------------------------------------------

/*!
    If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).
 */
bool QUmlActivity::isReadOnly() const
{
    // This is a read-write attribute

    Q_D(const QUmlActivity);
    return d->isReadOnly;
}

void QUmlActivity::setReadOnly(bool isReadOnly)
{
    // This is a read-write attribute

    Q_D(QUmlActivity);
    if (d->isReadOnly != isReadOnly) {
        d->isReadOnly = isReadOnly;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isReadOnly");
}

void QUmlActivity::unsetReadOnly()
{
    setReadOnly(false);
    Q_D(QUmlActivity);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isReadOnly"));
}

/*!
    If true, all invocations of the activity are handled by the same execution.
 */
bool QUmlActivity::isSingleExecution() const
{
    // This is a read-write attribute

    Q_D(const QUmlActivity);
    return d->isSingleExecution;
}

void QUmlActivity::setSingleExecution(bool isSingleExecution)
{
    // This is a read-write attribute

    Q_D(QUmlActivity);
    if (d->isSingleExecution != isSingleExecution) {
        d->isSingleExecution = isSingleExecution;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isSingleExecution");
}

void QUmlActivity::unsetSingleExecution()
{
    setSingleExecution(false);
    Q_D(QUmlActivity);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isSingleExecution"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlActivity
// ---------------------------------------------------------------

/*!
    Top-level partitions in the activity.
 */
QSet<QUmlActivityPartition *> QUmlActivity::partitions() const
{
    // This is a read-write association end

    Q_D(const QUmlActivity);
    return d->partitions;
}

void QUmlActivity::addPartition(QUmlActivityPartition *partition)
{
    // This is a read-write association end

    Q_D(QUmlActivity);
    if (!d->partitions.contains(partition)) {
        d->partitions.insert(partition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivity *>(this))->addGroup(qwrappedobject_cast<QUmlActivityGroup *>(partition));
    }
}

void QUmlActivity::removePartition(QUmlActivityPartition *partition)
{
    // This is a read-write association end

    Q_D(QUmlActivity);
    if (d->partitions.contains(partition)) {
        d->partitions.remove(partition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivity *>(this))->removeGroup(qwrappedobject_cast<QUmlActivityGroup *>(partition));
    }
}

/*!
    Nodes coordinated by the activity.
 */
QSet<QUmlActivityNode *> QUmlActivity::nodes() const
{
    // This is a read-write association end

    Q_D(const QUmlActivity);
    return d->nodes;
}

void QUmlActivity::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    Q_D(QUmlActivity);
    if (!d->nodes.contains(node)) {
        d->nodes.insert(node);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(node));

        // Adjust opposite property
        node->setActivity(this);
    }
}

void QUmlActivity::removeNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    Q_D(QUmlActivity);
    if (d->nodes.contains(node)) {
        d->nodes.remove(node);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(node));

        // Adjust opposite property
        node->setActivity(0);
    }
}

/*!
    Top-level variables in the activity.
 */
QSet<QUmlVariable *> QUmlActivity::variables() const
{
    // This is a read-write association end

    Q_D(const QUmlActivity);
    return d->variables;
}

void QUmlActivity::addVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    Q_D(QUmlActivity);
    if (!d->variables.contains(variable)) {
        d->variables.insert(variable);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(variable));

        // Adjust opposite property
        variable->setActivityScope(this);
    }
}

void QUmlActivity::removeVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    Q_D(QUmlActivity);
    if (d->variables.contains(variable)) {
        d->variables.remove(variable);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(variable));

        // Adjust opposite property
        variable->setActivityScope(0);
    }
}

/*!
    Top-level structured nodes in the activity.
 */
QSet<QUmlStructuredActivityNode *> QUmlActivity::structuredNodes() const
{
    // This is a read-write association end

    Q_D(const QUmlActivity);
    return d->structuredNodes;
}

void QUmlActivity::addStructuredNode(QUmlStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    Q_D(QUmlActivity);
    if (!d->structuredNodes.contains(structuredNode)) {
        d->structuredNodes.insert(structuredNode);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivity *>(this))->addGroup(qwrappedobject_cast<QUmlActivityGroup *>(structuredNode));
        (qwrappedobject_cast<QUmlActivity *>(this))->addNode(qwrappedobject_cast<QUmlActivityNode *>(structuredNode));

        // Adjust opposite property
        structuredNode->setActivity(this);
    }
}

void QUmlActivity::removeStructuredNode(QUmlStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    Q_D(QUmlActivity);
    if (d->structuredNodes.contains(structuredNode)) {
        d->structuredNodes.remove(structuredNode);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivity *>(this))->removeGroup(qwrappedobject_cast<QUmlActivityGroup *>(structuredNode));
        (qwrappedobject_cast<QUmlActivity *>(this))->removeNode(qwrappedobject_cast<QUmlActivityNode *>(structuredNode));

        // Adjust opposite property
        structuredNode->setActivity(0);
    }
}

/*!
    Top-level groups in the activity.
 */
QSet<QUmlActivityGroup *> QUmlActivity::groups() const
{
    // This is a read-write association end

    Q_D(const QUmlActivity);
    return d->groups;
}

void QUmlActivity::addGroup(QUmlActivityGroup *group)
{
    // This is a read-write association end

    Q_D(QUmlActivity);
    if (!d->groups.contains(group)) {
        d->groups.insert(group);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(group));

        // Adjust opposite property
        group->setInActivity(this);
    }
}

void QUmlActivity::removeGroup(QUmlActivityGroup *group)
{
    // This is a read-write association end

    Q_D(QUmlActivity);
    if (d->groups.contains(group)) {
        d->groups.remove(group);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(group));

        // Adjust opposite property
        group->setInActivity(0);
    }
}

/*!
    Edges expressing flow between nodes of the activity.
 */
QSet<QUmlActivityEdge *> QUmlActivity::edges() const
{
    // This is a read-write association end

    Q_D(const QUmlActivity);
    return d->edges;
}

void QUmlActivity::addEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    Q_D(QUmlActivity);
    if (!d->edges.contains(edge)) {
        d->edges.insert(edge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(edge));

        // Adjust opposite property
        edge->setActivity(this);
    }
}

void QUmlActivity::removeEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    Q_D(QUmlActivity);
    if (d->edges.contains(edge)) {
        d->edges.remove(edge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(edge));

        // Adjust opposite property
        edge->setActivity(0);
    }
}

void QUmlActivity::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("isSingleExecution")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("isSingleExecution")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("isSingleExecution")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, all invocations of the activity are handled by the same execution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("isSingleExecution")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("isSingleExecution")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("isSingleExecution")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("partitions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("partitions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("partitions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Top-level partitions in the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("partitions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("partitions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivity::groups");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("partitions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("nodes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("nodes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("nodes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Nodes coordinated by the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("nodes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("nodes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("nodes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityNode::activity");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("variables")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("variables")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("variables")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Top-level variables in the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("variables")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("variables")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("variables")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlVariable::activityScope");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("structuredNodes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("structuredNodes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("structuredNodes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Top-level structured nodes in the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("structuredNodes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("structuredNodes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivity::groups QUmlActivity::nodes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("structuredNodes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlStructuredActivityNode::activity");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("groups")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("groups")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("groups")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Top-level groups in the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("groups")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("groups")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("groups")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityGroup::inActivity");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("edges")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("edges")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("edges")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Edges expressing flow between nodes of the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("edges")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("edges")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivity")][QString::fromLatin1("edges")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityEdge::activity");

    QUmlBehavior::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlActivity::addGroup(QWrappedObjectPointer<QUmlActivityPartition> partition)
{
    addPartition(partition);
}

void QUmlActivity::removeGroup(QWrappedObjectPointer<QUmlActivityPartition> partition)
{
    removePartition(partition);
}

void QUmlActivity::addGroup(QWrappedObjectPointer<QUmlStructuredActivityNode> structuredNode)
{
    addStructuredNode(structuredNode);
}

void QUmlActivity::removeGroup(QWrappedObjectPointer<QUmlStructuredActivityNode> structuredNode)
{
    removeStructuredNode(structuredNode);
}

void QUmlActivity::addNode(QWrappedObjectPointer<QUmlStructuredActivityNode> structuredNode)
{
    addStructuredNode(structuredNode);
}

void QUmlActivity::removeNode(QWrappedObjectPointer<QUmlStructuredActivityNode> structuredNode)
{
    removeStructuredNode(structuredNode);
}

QT_END_NAMESPACE

#include "moc_qumlactivity.cpp"

