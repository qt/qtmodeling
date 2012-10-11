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
#include "qelement_p.h"
#include "qelement_p.h"

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

void QActivityPrivate::addPartition(const QActivityPartition *partition)
{
    this->partitions->insert(const_cast<QActivityPartition *>(partition));

    // Adjust subsetted property(ies)
    addGroup(partition);
}

void QActivityPrivate::removePartition(const QActivityPartition *partition)
{
    this->partitions->remove(const_cast<QActivityPartition *>(partition));

    // Adjust subsetted property(ies)
    removeGroup(partition);
}

void QActivityPrivate::addNode(const QActivityNode *node)
{
    this->nodes->insert(const_cast<QActivityNode *>(node));

    // Adjust subsetted property(ies)
    addOwnedElement(node);
}

void QActivityPrivate::removeNode(const QActivityNode *node)
{
    this->nodes->remove(const_cast<QActivityNode *>(node));

    // Adjust subsetted property(ies)
    removeOwnedElement(node);
}

void QActivityPrivate::addVariable(const QVariable *variable)
{
    this->variables->insert(const_cast<QVariable *>(variable));

    // Adjust subsetted property(ies)
    addOwnedMember(variable);
}

void QActivityPrivate::removeVariable(const QVariable *variable)
{
    this->variables->remove(const_cast<QVariable *>(variable));

    // Adjust subsetted property(ies)
    removeOwnedMember(variable);
}

void QActivityPrivate::addStructuredNode(const QStructuredActivityNode *structuredNode)
{
    this->structuredNodes->insert(const_cast<QStructuredActivityNode *>(structuredNode));

    // Adjust subsetted property(ies)
    addGroup(structuredNode);
    addNode(structuredNode);
}

void QActivityPrivate::removeStructuredNode(const QStructuredActivityNode *structuredNode)
{
    this->structuredNodes->remove(const_cast<QStructuredActivityNode *>(structuredNode));

    // Adjust subsetted property(ies)
    removeGroup(structuredNode);
    removeNode(structuredNode);
}

void QActivityPrivate::addGroup(const QActivityGroup *group)
{
    this->groups->insert(const_cast<QActivityGroup *>(group));

    // Adjust subsetted property(ies)
    addOwnedElement(group);
}

void QActivityPrivate::removeGroup(const QActivityGroup *group)
{
    this->groups->remove(const_cast<QActivityGroup *>(group));

    // Adjust subsetted property(ies)
    removeOwnedElement(group);
}

void QActivityPrivate::addEdge(const QActivityEdge *edge)
{
    this->edges->insert(const_cast<QActivityEdge *>(edge));

    // Adjust subsetted property(ies)
    addOwnedElement(edge);
}

void QActivityPrivate::removeEdge(const QActivityEdge *edge)
{
    this->edges->remove(const_cast<QActivityEdge *>(edge));

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
    d->setReadOnly(isReadOnly);
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
    d->setSingleExecution(isSingleExecution);
}

/*!
    Top-level partitions in the activity.
 */
const QSet<QActivityPartition *> *QActivity::partitions() const
{
    QTUML_D(const QActivity);
    return d->partitions;
}

void QActivity::addPartition(const QActivityPartition *partition)
{
    QTUML_D(QActivity);
    d->addPartition(const_cast<QActivityPartition *>(partition));
}

void QActivity::removePartition(const QActivityPartition *partition)
{
    QTUML_D(QActivity);
    d->removePartition(const_cast<QActivityPartition *>(partition));
}

/*!
    Nodes coordinated by the activity.
 */
const QSet<QActivityNode *> *QActivity::nodes() const
{
    QTUML_D(const QActivity);
    return d->nodes;
}

void QActivity::addNode(const QActivityNode *node)
{
    QTUML_D(QActivity);
    d->addNode(const_cast<QActivityNode *>(node));
}

void QActivity::removeNode(const QActivityNode *node)
{
    QTUML_D(QActivity);
    d->removeNode(const_cast<QActivityNode *>(node));
}

/*!
    Top-level variables in the activity.
 */
const QSet<QVariable *> *QActivity::variables() const
{
    QTUML_D(const QActivity);
    return d->variables;
}

void QActivity::addVariable(const QVariable *variable)
{
    QTUML_D(QActivity);
    d->addVariable(const_cast<QVariable *>(variable));
}

void QActivity::removeVariable(const QVariable *variable)
{
    QTUML_D(QActivity);
    d->removeVariable(const_cast<QVariable *>(variable));
}

/*!
    Top-level structured nodes in the activity.
 */
const QSet<QStructuredActivityNode *> *QActivity::structuredNodes() const
{
    QTUML_D(const QActivity);
    return d->structuredNodes;
}

void QActivity::addStructuredNode(const QStructuredActivityNode *structuredNode)
{
    QTUML_D(QActivity);
    d->addStructuredNode(const_cast<QStructuredActivityNode *>(structuredNode));
}

void QActivity::removeStructuredNode(const QStructuredActivityNode *structuredNode)
{
    QTUML_D(QActivity);
    d->removeStructuredNode(const_cast<QStructuredActivityNode *>(structuredNode));
}

/*!
    Top-level groups in the activity.
 */
const QSet<QActivityGroup *> *QActivity::groups() const
{
    QTUML_D(const QActivity);
    return d->groups;
}

void QActivity::addGroup(const QActivityGroup *group)
{
    QTUML_D(QActivity);
    d->addGroup(const_cast<QActivityGroup *>(group));
}

void QActivity::removeGroup(const QActivityGroup *group)
{
    QTUML_D(QActivity);
    d->removeGroup(const_cast<QActivityGroup *>(group));
}

/*!
    Edges expressing flow between nodes of the activity.
 */
const QSet<QActivityEdge *> *QActivity::edges() const
{
    QTUML_D(const QActivity);
    return d->edges;
}

void QActivity::addEdge(const QActivityEdge *edge)
{
    QTUML_D(QActivity);
    d->addEdge(const_cast<QActivityEdge *>(edge));
}

void QActivity::removeEdge(const QActivityEdge *edge)
{
    QTUML_D(QActivity);
    d->removeEdge(const_cast<QActivityEdge *>(edge));
}

#include "moc_qactivity.cpp"

QT_END_NAMESPACE_QTUML

