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

QT_BEGIN_NAMESPACE_QTUML

QActivityPrivate::QActivityPrivate() :
    isReadOnly(false),
    isSingleExecution(false),
    partitions(new QSet<QActivityPartition *>),
    nodes(new QSet<QActivityNode *>),
    variables(new QSet<QVariable *>),
    structuredNodes(new QSet<QStructuredActivityNode *>),
    groups(new QSet<QActivityGroup *>),
    edges(new QSet<QActivityEdge *>)
{
}

QActivityPrivate::~QActivityPrivate()
{
    delete partitions;
    delete nodes;
    delete variables;
    delete structuredNodes;
    delete groups;
    delete edges;
}

/*!
    \class QActivity

    \inmodule QtUml

    \brief An activity is the specification of parameterized behavior as the coordinated sequencing of subordinate units whose individual elements are actions.
 */

QActivity::QActivity(QObject *parent) :
    QBehavior(*new QActivityPrivate, parent)
{
}

QActivity::QActivity(QActivityPrivate &dd, QObject *parent) :
    QBehavior(dd, parent)
{
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
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QActivity
// ---------------------------------------------------------------

/*!
    Top-level partitions in the activity.
 */
const QSet<QActivityPartition *> *QActivity::partitions() const
{
    // This is a read-write association end

    Q_D(const QActivity);
    return d->partitions;
}

void QActivity::addPartition(QActivityPartition *partition)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (!d->partitions->contains(partition)) {
        d->partitions->insert(partition);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QActivity *>(this))->addGroup(qtuml_object_cast<QActivityGroup *>(partition));
    }
}

void QActivity::removePartition(QActivityPartition *partition)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (d->partitions->contains(partition)) {
        d->partitions->remove(partition);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QActivity *>(this))->removeGroup(qtuml_object_cast<QActivityGroup *>(partition));
    }
}

/*!
    Nodes coordinated by the activity.
 */
const QSet<QActivityNode *> *QActivity::nodes() const
{
    // This is a read-write association end

    Q_D(const QActivity);
    return d->nodes;
}

void QActivity::addNode(QActivityNode *node)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (!d->nodes->contains(node)) {
        d->nodes->insert(node);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->addOwnedElement(qtuml_object_cast<QElement *>(node));

        // Adjust opposite property
        node->setActivity(this);
    }
}

void QActivity::removeNode(QActivityNode *node)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (d->nodes->contains(node)) {
        d->nodes->remove(node);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->removeOwnedElement(qtuml_object_cast<QElement *>(node));

        // Adjust opposite property
        node->setActivity(0);
    }
}

/*!
    Top-level variables in the activity.
 */
const QSet<QVariable *> *QActivity::variables() const
{
    // This is a read-write association end

    Q_D(const QActivity);
    return d->variables;
}

void QActivity::addVariable(QVariable *variable)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (!d->variables->contains(variable)) {
        d->variables->insert(variable);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->addOwnedMember(qtuml_object_cast<QNamedElement *>(variable));

        // Adjust opposite property
        variable->setActivityScope(this);
    }
}

void QActivity::removeVariable(QVariable *variable)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (d->variables->contains(variable)) {
        d->variables->remove(variable);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->removeOwnedMember(qtuml_object_cast<QNamedElement *>(variable));

        // Adjust opposite property
        variable->setActivityScope(0);
    }
}

/*!
    Top-level structured nodes in the activity.
 */
const QSet<QStructuredActivityNode *> *QActivity::structuredNodes() const
{
    // This is a read-write association end

    Q_D(const QActivity);
    return d->structuredNodes;
}

void QActivity::addStructuredNode(QStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (!d->structuredNodes->contains(structuredNode)) {
        d->structuredNodes->insert(structuredNode);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QActivity *>(this))->addGroup(qtuml_object_cast<QActivityGroup *>(structuredNode));
        (qtuml_object_cast<QActivity *>(this))->addNode(qtuml_object_cast<QActivityNode *>(structuredNode));

        // Adjust opposite property
        structuredNode->setActivity(this);
    }
}

void QActivity::removeStructuredNode(QStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (d->structuredNodes->contains(structuredNode)) {
        d->structuredNodes->remove(structuredNode);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QActivity *>(this))->removeGroup(qtuml_object_cast<QActivityGroup *>(structuredNode));
        (qtuml_object_cast<QActivity *>(this))->removeNode(qtuml_object_cast<QActivityNode *>(structuredNode));

        // Adjust opposite property
        structuredNode->setActivity(0);
    }
}

/*!
    Top-level groups in the activity.
 */
const QSet<QActivityGroup *> *QActivity::groups() const
{
    // This is a read-write association end

    Q_D(const QActivity);
    return d->groups;
}

void QActivity::addGroup(QActivityGroup *group)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (!d->groups->contains(group)) {
        d->groups->insert(group);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->addOwnedElement(qtuml_object_cast<QElement *>(group));

        // Adjust opposite property
        group->setInActivity(this);
    }
}

void QActivity::removeGroup(QActivityGroup *group)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (d->groups->contains(group)) {
        d->groups->remove(group);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->removeOwnedElement(qtuml_object_cast<QElement *>(group));

        // Adjust opposite property
        group->setInActivity(0);
    }
}

/*!
    Edges expressing flow between nodes of the activity.
 */
const QSet<QActivityEdge *> *QActivity::edges() const
{
    // This is a read-write association end

    Q_D(const QActivity);
    return d->edges;
}

void QActivity::addEdge(QActivityEdge *edge)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (!d->edges->contains(edge)) {
        d->edges->insert(edge);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->addOwnedElement(qtuml_object_cast<QElement *>(edge));

        // Adjust opposite property
        edge->setActivity(this);
    }
}

void QActivity::removeEdge(QActivityEdge *edge)
{
    // This is a read-write association end

    Q_D(QActivity);
    if (d->edges->contains(edge)) {
        d->edges->remove(edge);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->removeOwnedElement(qtuml_object_cast<QElement *>(edge));

        // Adjust opposite property
        edge->setActivity(0);
    }
}

// Overriden methods for subsetted properties

void QActivity::addGroup(QActivityPartition *partition)
{
    addPartition(partition);
}

void QActivity::removeGroup(QActivityPartition *partition)
{
    removePartition(partition);
}

void QActivity::addGroup(QStructuredActivityNode *structuredNode)
{
    addStructuredNode(structuredNode);
}

void QActivity::removeGroup(QStructuredActivityNode *structuredNode)
{
    removeStructuredNode(structuredNode);
}

void QActivity::addNode(QStructuredActivityNode *structuredNode)
{
    addStructuredNode(structuredNode);
}

void QActivity::removeNode(QStructuredActivityNode *structuredNode)
{
    removeStructuredNode(structuredNode);
}

#include "moc_qactivity.cpp"

QT_END_NAMESPACE_QTUML

