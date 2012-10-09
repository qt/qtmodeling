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

/*!
    \class QActivity

    \inmodule QtUml

    \brief An activity is the specification of parameterized behavior as the coordinated sequencing of subordinate units whose individual elements are actions.
 */

QActivity::QActivity(QObject *parent)
    : QBehavior(parent), d_ptr(new QActivityPrivate)
{
}

QActivity::~QActivity()
{
    delete d_ptr;
}

/*!
    If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).
 */
bool QActivity::isReadOnly() const
{
    return d_ptr->isReadOnly;
}

void QActivity::setReadOnly(bool isReadOnly)
{
    d_ptr->isReadOnly = isReadOnly;
}

/*!
    If true, all invocations of the activity are handled by the same execution.
 */
bool QActivity::isSingleExecution() const
{
    return d_ptr->isSingleExecution;
}

void QActivity::setSingleExecution(bool isSingleExecution)
{
    d_ptr->isSingleExecution = isSingleExecution;
}

/*!
    Top-level partitions in the activity.
 */
const QSet<QActivityPartition *> *QActivity::partitions() const
{
    return d_ptr->partitions;
}

void QActivity::addPartition(const QActivityPartition *partition)
{
    d_ptr->partitions->insert(const_cast<QActivityPartition *>(partition));
}

void QActivity::removePartition(const QActivityPartition *partition)
{
    d_ptr->partitions->remove(const_cast<QActivityPartition *>(partition));
}

/*!
    Nodes coordinated by the activity.
 */
const QSet<QActivityNode *> *QActivity::nodes() const
{
    return d_ptr->nodes;
}

void QActivity::addNode(const QActivityNode *node)
{
    d_ptr->nodes->insert(const_cast<QActivityNode *>(node));
}

void QActivity::removeNode(const QActivityNode *node)
{
    d_ptr->nodes->remove(const_cast<QActivityNode *>(node));
}

/*!
    Top-level variables in the activity.
 */
const QSet<QVariable *> *QActivity::variables() const
{
    return d_ptr->variables;
}

void QActivity::addVariable(const QVariable *variable)
{
    d_ptr->variables->insert(const_cast<QVariable *>(variable));
}

void QActivity::removeVariable(const QVariable *variable)
{
    d_ptr->variables->remove(const_cast<QVariable *>(variable));
}

/*!
    Top-level structured nodes in the activity.
 */
const QSet<QStructuredActivityNode *> *QActivity::structuredNodes() const
{
    return d_ptr->structuredNodes;
}

void QActivity::addStructuredNode(const QStructuredActivityNode *structuredNode)
{
    d_ptr->structuredNodes->insert(const_cast<QStructuredActivityNode *>(structuredNode));
}

void QActivity::removeStructuredNode(const QStructuredActivityNode *structuredNode)
{
    d_ptr->structuredNodes->remove(const_cast<QStructuredActivityNode *>(structuredNode));
}

/*!
    Top-level groups in the activity.
 */
const QSet<QActivityGroup *> *QActivity::groups() const
{
    return d_ptr->groups;
}

void QActivity::addGroup(const QActivityGroup *group)
{
    d_ptr->groups->insert(const_cast<QActivityGroup *>(group));
}

void QActivity::removeGroup(const QActivityGroup *group)
{
    d_ptr->groups->remove(const_cast<QActivityGroup *>(group));
}

/*!
    Edges expressing flow between nodes of the activity.
 */
const QSet<QActivityEdge *> *QActivity::edges() const
{
    return d_ptr->edges;
}

void QActivity::addEdge(const QActivityEdge *edge)
{
    d_ptr->edges->insert(const_cast<QActivityEdge *>(edge));
}

void QActivity::removeEdge(const QActivityEdge *edge)
{
    d_ptr->edges->remove(const_cast<QActivityEdge *>(edge));
}

#include "moc_qactivity.cpp"

QT_END_NAMESPACE_QTUML

