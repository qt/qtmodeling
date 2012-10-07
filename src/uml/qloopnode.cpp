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

#include <QtUml/QOutputPin>
#include <QtUml/QExecutableNode>
#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

class QLoopNodePrivate
{
public:
    explicit QLoopNodePrivate();
    virtual ~QLoopNodePrivate();

    bool isTestedFirst;
    QList<QOutputPin *> *bodyOutputs;
    QSet<QExecutableNode *> *bodyParts;
    QOutputPin *decider;
    QList<QOutputPin *> *loopVariables;
    QList<QInputPin *> *loopVariableInputs;
    QList<QOutputPin *> *results;
    QSet<QExecutableNode *> *setupParts;
    QSet<QExecutableNode *> *tests;
};

QLoopNodePrivate::QLoopNodePrivate() :
    isTestedFirst(false),
    bodyOutputs(new QList<QOutputPin *>),
    bodyParts(new QSet<QExecutableNode *>),
    decider(0),
    loopVariables(new QList<QOutputPin *>),
    loopVariableInputs(new QList<QInputPin *>),
    results(new QList<QOutputPin *>),
    setupParts(new QSet<QExecutableNode *>),
    tests(new QSet<QExecutableNode *>)
{
}

QLoopNodePrivate::~QLoopNodePrivate()
{
    delete bodyOutputs;
    delete bodyParts;
    delete loopVariables;
    delete loopVariableInputs;
    delete results;
    delete setupParts;
    delete tests;
}

/*!
    \class QLoopNode

    \inmodule QtUml

    \brief A loop node is a structured activity node that represents a loop with setup, test, and body sections.
 */

QLoopNode::QLoopNode(QObject *parent)
    : QStructuredActivityNode(parent), d_ptr(new QLoopNodePrivate)
{
}

QLoopNode::~QLoopNode()
{
    delete d_ptr;
}

/*!
    If true, the test is performed before the first execution of the body. If false, the body is executed once before the test is performed.
 */
bool QLoopNode::isTestedFirst() const
{
    return d_ptr->isTestedFirst;
}

void QLoopNode::setTestedFirst(bool isTestedFirst)
{
    d_ptr->isTestedFirst = isTestedFirst;
}

/*!
    A list of output pins within the body fragment the values of which are moved to the loop variable pins after completion of execution of the body, before the next iteration of the loop begins or before the loop exits.
 */
const QList<QOutputPin *> *QLoopNode::bodyOutputs() const
{
    return d_ptr->bodyOutputs;
}

void QLoopNode::addBodyOutput(const QOutputPin *bodyOutput)
{
    d_ptr->bodyOutputs->append(const_cast<QOutputPin *>(bodyOutput));
}

void QLoopNode::removeBodyOutput(const QOutputPin *bodyOutput)
{
    d_ptr->bodyOutputs->removeAll(const_cast<QOutputPin *>(bodyOutput));
}

/*!
    The set of nodes and edges that perform the repetitive computations of the loop. The body section is executed as long as the test section produces a true value.
 */
const QSet<QExecutableNode *> *QLoopNode::bodyParts() const
{
    return d_ptr->bodyParts;
}

void QLoopNode::addBodyPart(const QExecutableNode *bodyPart)
{
    d_ptr->bodyParts->insert(const_cast<QExecutableNode *>(bodyPart));
}

void QLoopNode::removeBodyPart(const QExecutableNode *bodyPart)
{
    d_ptr->bodyParts->remove(const_cast<QExecutableNode *>(bodyPart));
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether to execute the loop body.
 */
QOutputPin *QLoopNode::decider() const
{
    return d_ptr->decider;
}

void QLoopNode::setDecider(const QOutputPin *decider)
{
    d_ptr->decider = const_cast<QOutputPin *>(decider);
}

/*!
    A list of output pins that hold the values of the loop variables during an execution of the loop. When the test fails, the values are movied to the result pins of the loop.
 */
const QList<QOutputPin *> *QLoopNode::loopVariables() const
{
    return d_ptr->loopVariables;
}

void QLoopNode::addLoopVariable(const QOutputPin *loopVariable)
{
    d_ptr->loopVariables->append(const_cast<QOutputPin *>(loopVariable));
}

void QLoopNode::removeLoopVariable(const QOutputPin *loopVariable)
{
    d_ptr->loopVariables->removeAll(const_cast<QOutputPin *>(loopVariable));
}

/*!
    A list of values that are moved into the loop variable pins before the first iteration of the loop.
 */
const QList<QInputPin *> *QLoopNode::loopVariableInputs() const
{
    return d_ptr->loopVariableInputs;
}

void QLoopNode::addLoopVariableInput(const QInputPin *loopVariableInput)
{
    d_ptr->loopVariableInputs->append(const_cast<QInputPin *>(loopVariableInput));
}

void QLoopNode::removeLoopVariableInput(const QInputPin *loopVariableInput)
{
    d_ptr->loopVariableInputs->removeAll(const_cast<QInputPin *>(loopVariableInput));
}

/*!
    A list of output pins that constitute the data flow output of the entire loop.
 */
const QList<QOutputPin *> *QLoopNode::results() const
{
    return d_ptr->results;
}

void QLoopNode::addResult(const QOutputPin *result)
{
    d_ptr->results->append(const_cast<QOutputPin *>(result));
}

void QLoopNode::removeResult(const QOutputPin *result)
{
    d_ptr->results->removeAll(const_cast<QOutputPin *>(result));
}

/*!
    The set of nodes and edges that initialize values or perform other setup computations for the loop.
 */
const QSet<QExecutableNode *> *QLoopNode::setupParts() const
{
    return d_ptr->setupParts;
}

void QLoopNode::addSetupPart(const QExecutableNode *setupPart)
{
    d_ptr->setupParts->insert(const_cast<QExecutableNode *>(setupPart));
}

void QLoopNode::removeSetupPart(const QExecutableNode *setupPart)
{
    d_ptr->setupParts->remove(const_cast<QExecutableNode *>(setupPart));
}

/*!
    The set of nodes, edges, and designated value that compute a Boolean value to determine if another execution of the body will be performed.
 */
const QSet<QExecutableNode *> *QLoopNode::tests() const
{
    return d_ptr->tests;
}

void QLoopNode::addTest(const QExecutableNode *test)
{
    d_ptr->tests->insert(const_cast<QExecutableNode *>(test));
}

void QLoopNode::removeTest(const QExecutableNode *test)
{
    d_ptr->tests->remove(const_cast<QExecutableNode *>(test));
}

#include "moc_qloopnode.cpp"

QT_END_NAMESPACE_QTUML

