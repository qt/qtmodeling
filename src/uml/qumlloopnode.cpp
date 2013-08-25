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
#include "qumlloopnode.h"
#include "qumlloopnode_p.h"

#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

QUmlLoopNodePrivate::QUmlLoopNodePrivate() :
    decider(0),
    isTestedFirst(false)
{
}

/*!
    \class QUmlLoopNode

    \inmodule QtUml

    \brief A loop node is a structured activity node that represents a loop with setup, test, and body sections.
 */

QUmlLoopNode::QUmlLoopNode(bool create_d_ptr) :
    QUmlStructuredActivityNode(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlLoopNodePrivate);
}

// Owned attributes

/*!
    A list of output pins within the body fragment the values of which are moved to the loop variable pins after completion of execution of the body, before the next iteration of the loop begins or before the loop exits.
 */
QList<QUmlOutputPin *> QUmlLoopNode::bodyOutput() const
{
    return QList<QUmlOutputPin *>();
}

void QUmlLoopNode::addBodyOutput(QList<QUmlOutputPin *> bodyOutput)
{
    Q_UNUSED(bodyOutput);
}

void QUmlLoopNode::removeBodyOutput(QList<QUmlOutputPin *> bodyOutput)
{
    Q_UNUSED(bodyOutput);
}

/*!
    The set of nodes and edges that perform the repetitive computations of the loop. The body section is executed as long as the test section produces a true value.
 */
QSet<QUmlExecutableNode *> QUmlLoopNode::bodyPart() const
{
    return QSet<QUmlExecutableNode *>();
}

void QUmlLoopNode::addBodyPart(QSet<QUmlExecutableNode *> bodyPart)
{
    Q_UNUSED(bodyPart);
}

void QUmlLoopNode::removeBodyPart(QSet<QUmlExecutableNode *> bodyPart)
{
    Q_UNUSED(bodyPart);
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether to execute the loop body.
 */
QUmlOutputPin *QUmlLoopNode::decider() const
{
    return 0;
}

void QUmlLoopNode::setDecider(QUmlOutputPin *decider)
{
    Q_UNUSED(decider);
}

/*!
    If true, the test is performed before the first execution of the body. If false, the body is executed once before the test is performed.
 */
bool QUmlLoopNode::isTestedFirst() const
{
    return bool();
}

void QUmlLoopNode::setTestedFirst(bool isTestedFirst)
{
    Q_UNUSED(isTestedFirst);
}

/*!
    A list of output pins that hold the values of the loop variables during an execution of the loop. When the test fails, the values are movied to the result pins of the loop.
 */
QList<QUmlOutputPin *> QUmlLoopNode::loopVariable() const
{
    return QList<QUmlOutputPin *>();
}

void QUmlLoopNode::addLoopVariable(QList<QUmlOutputPin *> loopVariable)
{
    Q_UNUSED(loopVariable);
}

void QUmlLoopNode::removeLoopVariable(QList<QUmlOutputPin *> loopVariable)
{
    Q_UNUSED(loopVariable);
}

/*!
    A list of values that are moved into the loop variable pins before the first iteration of the loop.
 */
QList<QUmlInputPin *> QUmlLoopNode::loopVariableInput() const
{
    return QList<QUmlInputPin *>();
}

void QUmlLoopNode::addLoopVariableInput(QList<QUmlInputPin *> loopVariableInput)
{
    Q_UNUSED(loopVariableInput);
}

void QUmlLoopNode::removeLoopVariableInput(QList<QUmlInputPin *> loopVariableInput)
{
    Q_UNUSED(loopVariableInput);
}

/*!
    A list of output pins that constitute the data flow output of the entire loop.
 */
QList<QUmlOutputPin *> QUmlLoopNode::result() const
{
    return QList<QUmlOutputPin *>();
}

void QUmlLoopNode::addResult(QList<QUmlOutputPin *> result)
{
    Q_UNUSED(result);
}

void QUmlLoopNode::removeResult(QList<QUmlOutputPin *> result)
{
    Q_UNUSED(result);
}

/*!
    The set of nodes and edges that initialize values or perform other setup computations for the loop.
 */
QSet<QUmlExecutableNode *> QUmlLoopNode::setupPart() const
{
    return QSet<QUmlExecutableNode *>();
}

void QUmlLoopNode::addSetupPart(QSet<QUmlExecutableNode *> setupPart)
{
    Q_UNUSED(setupPart);
}

void QUmlLoopNode::removeSetupPart(QSet<QUmlExecutableNode *> setupPart)
{
    Q_UNUSED(setupPart);
}

/*!
    The set of nodes, edges, and designated value that compute a Boolean value to determine if another execution of the body will be performed.
 */
QSet<QUmlExecutableNode *> QUmlLoopNode::test() const
{
    return QSet<QUmlExecutableNode *>();
}

void QUmlLoopNode::addTest(QSet<QUmlExecutableNode *> test)
{
    Q_UNUSED(test);
}

void QUmlLoopNode::removeTest(QSet<QUmlExecutableNode *> test)
{
    Q_UNUSED(test);
}

QT_END_NAMESPACE

