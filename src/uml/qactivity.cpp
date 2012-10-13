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
#include "qelement_p.h"
#include "qnamespace_p.h"

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

void QActivityPrivate::setReadOnly(bool isReadOnly)
{
    this->isReadOnly = isReadOnly;
}

void QActivityPrivate::setSingleExecution(bool isSingleExecution)
{
    this->isSingleExecution = isSingleExecution;
}

void QActivityPrivate::addPartition(QActivityPartition *partition)
{
    this->partitions->insert(partition);

    // Adjust subsetted property(ies)
    addGroup(partition);
}

void QActivityPrivate::removePartition(QActivityPartition *partition)
{
    this->partitions->remove(partition);

    // Adjust subsetted property(ies)
    removeGroup(partition);
}

void QActivityPrivate::addNode(QActivityNode *node)
{
    this->nodes->insert(node);

    // Adjust subsetted property(ies)
    addOwnedElement(node);
}

void QActivityPrivate::removeNode(QActivityNode *node)
{
    this->nodes->remove(node);

    // Adjust subsetted property(ies)
    removeOwnedElement(node);
}

void QActivityPrivate::addVariable(QVariable *variable)
{
    this->variables->insert(variable);

    // Adjust subsetted property(ies)
    addOwnedMember(variable);
}

void QActivityPrivate::removeVariable(QVariable *variable)
{
    this->variables->remove(variable);

    // Adjust subsetted property(ies)
    removeOwnedMember(variable);
}

void QActivityPrivate::addStructuredNode(QStructuredActivityNode *structuredNode)
{
    this->structuredNodes->insert(structuredNode);

    // Adjust subsetted property(ies)
    addGroup(structuredNode);
    addNode(structuredNode);
}

void QActivityPrivate::removeStructuredNode(QStructuredActivityNode *structuredNode)
{
    this->structuredNodes->remove(structuredNode);

    // Adjust subsetted property(ies)
    removeGroup(structuredNode);
    removeNode(structuredNode);
}

void QActivityPrivate::addGroup(QActivityGroup *group)
{
    this->groups->insert(group);

    // Adjust subsetted property(ies)
    addOwnedElement(group);
}

void QActivityPrivate::removeGroup(QActivityGroup *group)
{
    this->groups->remove(group);

    // Adjust subsetted property(ies)
    removeOwnedElement(group);
}

void QActivityPrivate::addEdge(QActivityEdge *edge)
{
    this->edges->insert(edge);

    // Adjust subsetted property(ies)
    addOwnedElement(edge);
}

void QActivityPrivate::removeEdge(QActivityEdge *edge)
{
    this->edges->remove(edge);

    // Adjust subsetted property(ies)
    removeOwnedElement(edge);
}

/*!
    \class QActivity

    \inmodule QtUml

    \brief An activity is the specification of parameterized behavior as the coordinated sequencing of subordinate units whose individual elements are actions.
 */

QActivity::QActivity(QObject *parent)
    : QBehavior(false, parent)
{
    d_umlptr = new QActivityPrivate;
}

QActivity::QActivity(bool createPimpl, QObject *parent)
    : QBehavior(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QActivityPrivate;
}

QActivity::~QActivity()
{
}

/*!
    If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).
 */
bool QActivity::isReadOnly() const
{
    QTUML_D(const QActivity);
    return d->isReadOnly;
}

void QActivity::setReadOnly(bool isReadOnly)
{
    QTUML_D(QActivity);
    if (d->isReadOnly != isReadOnly) {
        d->setReadOnly(isReadOnly);
    }
}

/*!
    If true, all invocations of the activity are handled by the same execution.
 */
bool QActivity::isSingleExecution() const
{
    QTUML_D(const QActivity);
    return d->isSingleExecution;
}

void QActivity::setSingleExecution(bool isSingleExecution)
{
    QTUML_D(QActivity);
    if (d->isSingleExecution != isSingleExecution) {
        d->setSingleExecution(isSingleExecution);
    }
}

/*!
    Top-level partitions in the activity.
 */
const QSet<QActivityPartition *> *QActivity::partitions() const
{
    QTUML_D(const QActivity);
    return d->partitions;
}

void QActivity::addPartition(QActivityPartition *partition)
{
    QTUML_D(QActivity);
    if (!d->partitions->contains(partition)) {
        d->addPartition(partition);
    }
}

void QActivity::removePartition(QActivityPartition *partition)
{
    QTUML_D(QActivity);
    if (d->partitions->contains(partition)) {
        d->removePartition(partition);
    }
}

/*!
    Nodes coordinated by the activity.
 */
const QSet<QActivityNode *> *QActivity::nodes() const
{
    QTUML_D(const QActivity);
    return d->nodes;
}

void QActivity::addNode(QActivityNode *node)
{
    QTUML_D(QActivity);
    if (!d->nodes->contains(node)) {
        d->addNode(node);

        // Adjust opposite property
        node->setActivity(this);
    }
}

void QActivity::removeNode(QActivityNode *node)
{
    QTUML_D(QActivity);
    if (d->nodes->contains(node)) {
        d->removeNode(node);

        // Adjust opposite property
        node->setActivity(0);
    }
}

/*!
    Top-level variables in the activity.
 */
const QSet<QVariable *> *QActivity::variables() const
{
    QTUML_D(const QActivity);
    return d->variables;
}

void QActivity::addVariable(QVariable *variable)
{
    QTUML_D(QActivity);
    if (!d->variables->contains(variable)) {
        d->addVariable(variable);

        // Adjust opposite property
        variable->setActivityScope(this);
    }
}

void QActivity::removeVariable(QVariable *variable)
{
    QTUML_D(QActivity);
    if (d->variables->contains(variable)) {
        d->removeVariable(variable);

        // Adjust opposite property
        variable->setActivityScope(0);
    }
}

/*!
    Top-level structured nodes in the activity.
 */
const QSet<QStructuredActivityNode *> *QActivity::structuredNodes() const
{
    QTUML_D(const QActivity);
    return d->structuredNodes;
}

void QActivity::addStructuredNode(QStructuredActivityNode *structuredNode)
{
    QTUML_D(QActivity);
    if (!d->structuredNodes->contains(structuredNode)) {
        d->addStructuredNode(structuredNode);

        // Adjust opposite property
        structuredNode->setActivity(this);
    }
}

void QActivity::removeStructuredNode(QStructuredActivityNode *structuredNode)
{
    QTUML_D(QActivity);
    if (d->structuredNodes->contains(structuredNode)) {
        d->removeStructuredNode(structuredNode);

        // Adjust opposite property
        structuredNode->setActivity(0);
    }
}

/*!
    Top-level groups in the activity.
 */
const QSet<QActivityGroup *> *QActivity::groups() const
{
    QTUML_D(const QActivity);
    return d->groups;
}

void QActivity::addGroup(QActivityGroup *group)
{
    QTUML_D(QActivity);
    if (!d->groups->contains(group)) {
        d->addGroup(group);

        // Adjust opposite property
        group->setInActivity(this);
    }
}

void QActivity::removeGroup(QActivityGroup *group)
{
    QTUML_D(QActivity);
    if (d->groups->contains(group)) {
        d->removeGroup(group);

        // Adjust opposite property
        group->setInActivity(0);
    }
}

/*!
    Edges expressing flow between nodes of the activity.
 */
const QSet<QActivityEdge *> *QActivity::edges() const
{
    QTUML_D(const QActivity);
    return d->edges;
}

void QActivity::addEdge(QActivityEdge *edge)
{
    QTUML_D(QActivity);
    if (!d->edges->contains(edge)) {
        d->addEdge(edge);

        // Adjust opposite property
        edge->setActivity(this);
    }
}

void QActivity::removeEdge(QActivityEdge *edge)
{
    QTUML_D(QActivity);
    if (d->edges->contains(edge)) {
        d->removeEdge(edge);

        // Adjust opposite property
        edge->setActivity(0);
    }
}

#include "moc_qactivity.cpp"

QT_END_NAMESPACE_QTUML

