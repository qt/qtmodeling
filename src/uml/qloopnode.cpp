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

#include "qloopnode.h"
//#include "qloopnode_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QLoopNode

    \inmodule QtUml

    \brief A loop node is a structured activity node that represents a loop with setup, test, and body sections.
 */

QLoopNode::QLoopNode(QObject *parent)
    : QStructuredActivityNode(parent)
{
}

QLoopNode::~QLoopNode()
{
}

/*!
    If true, the test is performed before the first execution of the body. If false, the body is executed once before the test is performed.
 */
bool QLoopNode::isTestedFirst() const
{
}

void QLoopNode::setTestedFirst(bool isTestedFirst)
{
}

/*!
    A list of output pins within the body fragment the values of which are moved to the loop variable pins after completion of execution of the body, before the next iteration of the loop begins or before the loop exits.
 */
QList<QOutputPin *> *QLoopNode::bodyOutput()
{
}

/*!
    The set of nodes and edges that perform the repetitive computations of the loop. The body section is executed as long as the test section produces a true value.
 */
QList<QExecutableNode *> *QLoopNode::bodyPart()
{
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether to execute the loop body.
 */
QOutputPin *QLoopNode::decider() const
{
}

void QLoopNode::setDecider(QOutputPin *decider)
{
}

/*!
    A list of output pins that hold the values of the loop variables during an execution of the loop. When the test fails, the values are movied to the result pins of the loop.
 */
QList<QOutputPin *> *QLoopNode::loopVariable()
{
}

/*!
    A list of values that are moved into the loop variable pins before the first iteration of the loop.
 */
QList<QInputPin *> *QLoopNode::loopVariableInput()
{
}

/*!
    A list of output pins that constitute the data flow output of the entire loop.
 */
QList<QOutputPin *> *QLoopNode::result()
{
}

/*!
    The set of nodes and edges that initialize values or perform other setup computations for the loop.
 */
QList<QExecutableNode *> *QLoopNode::setupPart()
{
}

/*!
    The set of nodes, edges, and designated value that compute a Boolean value to determine if another execution of the body will be performed.
 */
QList<QExecutableNode *> *QLoopNode::test()
{
}

#include "moc_qloopnode.cpp"

QT_END_NAMESPACE_QTUML

