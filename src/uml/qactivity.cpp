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

#include "qactivity.h"
#include "qactivity_p.h"

#include <QtUml/QStructuredActivityNode>
#include <QtUml/QVariable>
#include <QtUml/QActivityPartition>
#include <QtUml/QActivityGroup>
#include <QtUml/QActivityEdge>
#include <QtUml/QActivityNode>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QActivityPrivate::QActivityPrivate() :
    isReadOnly(false),
    isSingleExecution(false)
{
}

QActivityPrivate::~QActivityPrivate()
{
}

/*!
    \class QActivity

    \inmodule QtUml

    \brief An activity is the specification of parameterized behavior as the coordinated sequencing of subordinate units whose individual elements are actions.
 */

QActivity::QActivity(QWrappedObject *wrapper, QWrappedObject *parent) :
    QBehavior(*new QActivityPrivate, wrapper, parent)
{
    setPropertyData();
}

QActivity::QActivity(QActivityPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QBehavior(dd, wrapper, parent)
{
    setPropertyData();
}

QActivity::~QActivity()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QActivity
// ---------------------------------------------------------------

/*!
    If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).
 */
bool QActivity::isReadOnly() const
{
    // This is a read-write attribute

    Q_D(const QActivity);
    return d->isReadOnly;
}

void QActivity::setReadOnly(bool isReadOnly)
{
    // This is a read-write attribute

    Q_D(QActivity);
    if (d->isReadOnly != isReadOnly) {
        d->isReadOnly = isReadOnly;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isReadOnly");
}

void QActivity::unsetReadOnly()
{
    setReadOnly(false);
    Q_D(QActivity);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isReadOnly"));
}

/*!
    If true, all invocations of the activity are handled by the same execution.
 */
bool QActivity::isSingleExecution() const
{
    // This is a read-write attribute

    Q_D(const QActivity);
    return d->isSingleExecution;
}

void QActivity::setSingleExecution(bool isSingleExecution)
{
    // This is a read-write attribute

    Q_D(QActivity);
    if (d->isSingleExecution != isSingleExecution) {
        d->isSingleExecution = isSingleExecution;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isSingleExecution");
}

void QActivity::unsetSingleExecution()
{
    setSingleExecution(false);
    Q_D(QActivity);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isSingleExecution"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QActivity
// ---------------------------------------------------------------

/*!
    Top-level partitions in the activity.
 */
QSet<QActivityPartition *> QActivity::partitions() const
{
    // This is a read-write association end

    Q_D(const QActivity);
    return d->partitions;
}

void QActivity::addPartition(QActivityPartition *partition)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (!d->partitions.contains(partition)) {
        d->partitions.insert(partition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivity *>(this))->addGroup(qwrappedobject_cast<QActivityGroup *>(partition));
    }
}

void QActivity::removePartition(QActivityPartition *partition)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (d->partitions.contains(partition)) {
        d->partitions.remove(partition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivity *>(this))->removeGroup(qwrappedobject_cast<QActivityGroup *>(partition));
    }
}

/*!
    Nodes coordinated by the activity.
 */
QSet<QActivityNode *> QActivity::nodes() const
{
    // This is a read-write association end

    Q_D(const QActivity);
    return d->nodes;
}

void QActivity::addNode(QActivityNode *node)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (!d->nodes.contains(node)) {
        d->nodes.insert(node);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(node));

        // Adjust opposite property
        node->setActivity(this);
    }
}

void QActivity::removeNode(QActivityNode *node)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (d->nodes.contains(node)) {
        d->nodes.remove(node);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(node));

        // Adjust opposite property
        node->setActivity(0);
    }
}

/*!
    Top-level variables in the activity.
 */
QSet<QVariable *> QActivity::variables() const
{
    // This is a read-write association end

    Q_D(const QActivity);
    return d->variables;
}

void QActivity::addVariable(QVariable *variable)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (!d->variables.contains(variable)) {
        d->variables.insert(variable);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(variable));

        // Adjust opposite property
        variable->setActivityScope(this);
    }
}

void QActivity::removeVariable(QVariable *variable)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (d->variables.contains(variable)) {
        d->variables.remove(variable);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(variable));

        // Adjust opposite property
        variable->setActivityScope(0);
    }
}

/*!
    Top-level structured nodes in the activity.
 */
QSet<QStructuredActivityNode *> QActivity::structuredNodes() const
{
    // This is a read-write association end

    Q_D(const QActivity);
    return d->structuredNodes;
}

void QActivity::addStructuredNode(QStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (!d->structuredNodes.contains(structuredNode)) {
        d->structuredNodes.insert(structuredNode);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivity *>(this))->addGroup(qwrappedobject_cast<QActivityGroup *>(structuredNode));
        (qwrappedobject_cast<QActivity *>(this))->addNode(qwrappedobject_cast<QActivityNode *>(structuredNode));

        // Adjust opposite property
        structuredNode->setActivity(this);
    }
}

void QActivity::removeStructuredNode(QStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (d->structuredNodes.contains(structuredNode)) {
        d->structuredNodes.remove(structuredNode);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivity *>(this))->removeGroup(qwrappedobject_cast<QActivityGroup *>(structuredNode));
        (qwrappedobject_cast<QActivity *>(this))->removeNode(qwrappedobject_cast<QActivityNode *>(structuredNode));

        // Adjust opposite property
        structuredNode->setActivity(0);
    }
}

/*!
    Top-level groups in the activity.
 */
QSet<QActivityGroup *> QActivity::groups() const
{
    // This is a read-write association end

    Q_D(const QActivity);
    return d->groups;
}

void QActivity::addGroup(QActivityGroup *group)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (!d->groups.contains(group)) {
        d->groups.insert(group);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(group));

        // Adjust opposite property
        group->setInActivity(this);
    }
}

void QActivity::removeGroup(QActivityGroup *group)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (d->groups.contains(group)) {
        d->groups.remove(group);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(group));

        // Adjust opposite property
        group->setInActivity(0);
    }
}

/*!
    Edges expressing flow between nodes of the activity.
 */
QSet<QActivityEdge *> QActivity::edges() const
{
    // This is a read-write association end

    Q_D(const QActivity);
    return d->edges;
}

void QActivity::addEdge(QActivityEdge *edge)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (!d->edges.contains(edge)) {
        d->edges.insert(edge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(edge));

        // Adjust opposite property
        edge->setActivity(this);
    }
}

void QActivity::removeEdge(QActivityEdge *edge)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (d->edges.contains(edge)) {
        d->edges.remove(edge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(edge));

        // Adjust opposite property
        edge->setActivity(0);
    }
}

void QActivity::registerMetaTypes() const
{
    qRegisterMetaType<QStructuredActivityNode *>("QStructuredActivityNode *");
    qRegisterMetaType<QSet<QStructuredActivityNode *>>("QSet<QStructuredActivityNode *>");
    qRegisterMetaType<QList<QStructuredActivityNode *>>("QList<QStructuredActivityNode *>");

    qRegisterMetaType<QVariable *>("QVariable *");
    qRegisterMetaType<QSet<QVariable *>>("QSet<QVariable *>");
    qRegisterMetaType<QList<QVariable *>>("QList<QVariable *>");

    qRegisterMetaType<QActivityPartition *>("QActivityPartition *");
    qRegisterMetaType<QSet<QActivityPartition *>>("QSet<QActivityPartition *>");
    qRegisterMetaType<QList<QActivityPartition *>>("QList<QActivityPartition *>");

    qRegisterMetaType<QActivityGroup *>("QActivityGroup *");
    qRegisterMetaType<QSet<QActivityGroup *>>("QSet<QActivityGroup *>");
    qRegisterMetaType<QList<QActivityGroup *>>("QList<QActivityGroup *>");

    qRegisterMetaType<QActivityEdge *>("QActivityEdge *");
    qRegisterMetaType<QSet<QActivityEdge *>>("QSet<QActivityEdge *>");
    qRegisterMetaType<QList<QActivityEdge *>>("QList<QActivityEdge *>");

    qRegisterMetaType<QActivityNode *>("QActivityNode *");
    qRegisterMetaType<QSet<QActivityNode *>>("QSet<QActivityNode *>");
    qRegisterMetaType<QList<QActivityNode *>>("QList<QActivityNode *>");

    QBehavior::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QActivity::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("isSingleExecution")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("isSingleExecution")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("isSingleExecution")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, all invocations of the activity are handled by the same execution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("isSingleExecution")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("isSingleExecution")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("isSingleExecution")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("partitions")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("partitions")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("partitions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Top-level partitions in the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("partitions")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("partitions")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QActivity::groups");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("partitions")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("nodes")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("nodes")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("nodes")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Nodes coordinated by the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("nodes")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("nodes")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("nodes")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityNode::activity");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("variables")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("variables")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("variables")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Top-level variables in the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("variables")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("variables")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("variables")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QVariable::activityScope");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("structuredNodes")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("structuredNodes")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("structuredNodes")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Top-level structured nodes in the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("structuredNodes")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("structuredNodes")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QActivity::groups QActivity::nodes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("structuredNodes")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QStructuredActivityNode::activity");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("groups")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("groups")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("groups")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Top-level groups in the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("groups")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("groups")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("groups")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityGroup::inActivity");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("edges")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("edges")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("edges")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Edges expressing flow between nodes of the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("edges")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("edges")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivity")][QString::fromLatin1("edges")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityEdge::activity");

    QBehavior::setPropertyData();
}

// Overriden methods for subsetted properties

void QActivity::addGroup(QWrappedObjectPointer<QActivityPartition> partition)
{
    addPartition(partition);
}

void QActivity::removeGroup(QWrappedObjectPointer<QActivityPartition> partition)
{
    removePartition(partition);
}

void QActivity::addGroup(QWrappedObjectPointer<QStructuredActivityNode> structuredNode)
{
    addStructuredNode(structuredNode);
}

void QActivity::removeGroup(QWrappedObjectPointer<QStructuredActivityNode> structuredNode)
{
    removeStructuredNode(structuredNode);
}

void QActivity::addNode(QWrappedObjectPointer<QStructuredActivityNode> structuredNode)
{
    addStructuredNode(structuredNode);
}

void QActivity::removeNode(QWrappedObjectPointer<QStructuredActivityNode> structuredNode)
{
    removeStructuredNode(structuredNode);
}

#include "moc_qactivity.cpp"

QT_END_NAMESPACE_QTUML

