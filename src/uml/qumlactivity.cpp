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

#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlVariable>

QT_BEGIN_NAMESPACE

QUmlActivityPrivate::QUmlActivityPrivate() :
    isReadOnly(false),
    isSingleExecution(false)
{
}

/*!
    \class QUmlActivity

    \inmodule QtUml

    \brief An activity is the specification of parameterized behavior as the coordinated sequencing of subordinate units whose individual elements are actions.
 */

QUmlActivity::QUmlActivity(bool create_d_ptr) :
    QUmlBehavior(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlActivityPrivate);
}

// OWNED ATTRIBUTES

/*!
    Edges expressing flow between nodes of the activity.
 */
QSet<QUmlActivityEdge *> QUmlActivity::edge() const
{
    // This is a read-write association end

    QM_D(const QUmlActivity);
    return d->edge;
}

void QUmlActivity::addEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    QM_D(QUmlActivity);
    if (!d->edge.contains(edge)) {
        d->edge.insert(edge);
    }
}

void QUmlActivity::removeEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    QM_D(QUmlActivity);
    if (d->edge.contains(edge)) {
        d->edge.remove(edge);
    }
}

/*!
    Top-level groups in the activity.
 */
QSet<QUmlActivityGroup *> QUmlActivity::group() const
{
    // This is a read-write association end

    QM_D(const QUmlActivity);
    return d->group;
}

void QUmlActivity::addGroup(QUmlActivityGroup *group)
{
    // This is a read-write association end

    QM_D(QUmlActivity);
    if (!d->group.contains(group)) {
        d->group.insert(group);
    }
}

void QUmlActivity::removeGroup(QUmlActivityGroup *group)
{
    // This is a read-write association end

    QM_D(QUmlActivity);
    if (d->group.contains(group)) {
        d->group.remove(group);
    }
}

/*!
    If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).
 */
bool QUmlActivity::isReadOnly() const
{
    // This is a read-write property

    QM_D(const QUmlActivity);
    return d->isReadOnly;
}

void QUmlActivity::setReadOnly(bool isReadOnly)
{
    // This is a read-write property

    QM_D(QUmlActivity);
    if (d->isReadOnly != isReadOnly) {
        d->isReadOnly = isReadOnly;
    }
}

/*!
    If true, all invocations of the activity are handled by the same execution.
 */
bool QUmlActivity::isSingleExecution() const
{
    // This is a read-write property

    QM_D(const QUmlActivity);
    return d->isSingleExecution;
}

void QUmlActivity::setSingleExecution(bool isSingleExecution)
{
    // This is a read-write property

    QM_D(QUmlActivity);
    if (d->isSingleExecution != isSingleExecution) {
        d->isSingleExecution = isSingleExecution;
    }
}

/*!
    Nodes coordinated by the activity.
 */
QSet<QUmlActivityNode *> QUmlActivity::node() const
{
    // This is a read-write association end

    QM_D(const QUmlActivity);
    return d->node;
}

void QUmlActivity::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    QM_D(QUmlActivity);
    if (!d->node.contains(node)) {
        d->node.insert(node);
    }
}

void QUmlActivity::removeNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    QM_D(QUmlActivity);
    if (d->node.contains(node)) {
        d->node.remove(node);
    }
}

/*!
    Top-level partitions in the activity.
 */
QSet<QUmlActivityPartition *> QUmlActivity::partition() const
{
    // This is a read-write association end

    QM_D(const QUmlActivity);
    return d->partition;
}

void QUmlActivity::addPartition(QUmlActivityPartition *partition)
{
    // This is a read-write association end

    QM_D(QUmlActivity);
    if (!d->partition.contains(partition)) {
        d->partition.insert(partition);
    }
}

void QUmlActivity::removePartition(QUmlActivityPartition *partition)
{
    // This is a read-write association end

    QM_D(QUmlActivity);
    if (d->partition.contains(partition)) {
        d->partition.remove(partition);
    }
}

/*!
    Top-level structured nodes in the activity.
 */
QSet<QUmlStructuredActivityNode *> QUmlActivity::structuredNode() const
{
    // This is a read-write association end

    QM_D(const QUmlActivity);
    return d->structuredNode;
}

void QUmlActivity::addStructuredNode(QUmlStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    QM_D(QUmlActivity);
    if (!d->structuredNode.contains(structuredNode)) {
        d->structuredNode.insert(structuredNode);
    }
}

void QUmlActivity::removeStructuredNode(QUmlStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    QM_D(QUmlActivity);
    if (d->structuredNode.contains(structuredNode)) {
        d->structuredNode.remove(structuredNode);
    }
}

/*!
    Top-level variables in the activity.
 */
QSet<QUmlVariable *> QUmlActivity::variable() const
{
    // This is a read-write association end

    QM_D(const QUmlActivity);
    return d->variable;
}

void QUmlActivity::addVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    QM_D(QUmlActivity);
    if (!d->variable.contains(variable)) {
        d->variable.insert(variable);
    }
}

void QUmlActivity::removeVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    QM_D(QUmlActivity);
    if (d->variable.contains(variable)) {
        d->variable.remove(variable);
    }
}

QT_END_NAMESPACE

