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

// Owned attributes

/*!
    Edges expressing flow between nodes of the activity.
 */
QSet<QUmlActivityEdge *> QUmlActivity::edge() const
{
    return QSet<QUmlActivityEdge *>();
}

void QUmlActivity::addEdge(QSet<QUmlActivityEdge *> edge)
{
    Q_UNUSED(edge);
}

void QUmlActivity::removeEdge(QSet<QUmlActivityEdge *> edge)
{
    Q_UNUSED(edge);
}

/*!
    Top-level groups in the activity.
 */
QSet<QUmlActivityGroup *> QUmlActivity::group() const
{
    return QSet<QUmlActivityGroup *>();
}

void QUmlActivity::addGroup(QSet<QUmlActivityGroup *> group)
{
    Q_UNUSED(group);
}

void QUmlActivity::removeGroup(QSet<QUmlActivityGroup *> group)
{
    Q_UNUSED(group);
}

/*!
    If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).
 */
bool QUmlActivity::isReadOnly() const
{
    return bool();
}

void QUmlActivity::setReadOnly(bool isReadOnly)
{
    Q_UNUSED(isReadOnly);
}

/*!
    If true, all invocations of the activity are handled by the same execution.
 */
bool QUmlActivity::isSingleExecution() const
{
    return bool();
}

void QUmlActivity::setSingleExecution(bool isSingleExecution)
{
    Q_UNUSED(isSingleExecution);
}

/*!
    Nodes coordinated by the activity.
 */
QSet<QUmlActivityNode *> QUmlActivity::node() const
{
    return QSet<QUmlActivityNode *>();
}

void QUmlActivity::addNode(QSet<QUmlActivityNode *> node)
{
    Q_UNUSED(node);
}

void QUmlActivity::removeNode(QSet<QUmlActivityNode *> node)
{
    Q_UNUSED(node);
}

/*!
    Top-level partitions in the activity.
 */
QSet<QUmlActivityPartition *> QUmlActivity::partition() const
{
    return QSet<QUmlActivityPartition *>();
}

void QUmlActivity::addPartition(QSet<QUmlActivityPartition *> partition)
{
    Q_UNUSED(partition);
}

void QUmlActivity::removePartition(QSet<QUmlActivityPartition *> partition)
{
    Q_UNUSED(partition);
}

/*!
    Top-level structured nodes in the activity.
 */
QSet<QUmlStructuredActivityNode *> QUmlActivity::structuredNode() const
{
    return QSet<QUmlStructuredActivityNode *>();
}

void QUmlActivity::addStructuredNode(QSet<QUmlStructuredActivityNode *> structuredNode)
{
    Q_UNUSED(structuredNode);
}

void QUmlActivity::removeStructuredNode(QSet<QUmlStructuredActivityNode *> structuredNode)
{
    Q_UNUSED(structuredNode);
}

/*!
    Top-level variables in the activity.
 */
QSet<QUmlVariable *> QUmlActivity::variable() const
{
    return QSet<QUmlVariable *>();
}

void QUmlActivity::addVariable(QSet<QUmlVariable *> variable)
{
    Q_UNUSED(variable);
}

void QUmlActivity::removeVariable(QSet<QUmlVariable *> variable)
{
    Q_UNUSED(variable);
}

QT_END_NAMESPACE

