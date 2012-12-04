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
#include "qloopnode_p.h"

#include <QtUml/QOutputPin>
#include <QtUml/QExecutableNode>
#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QLoopNodePrivate::QLoopNodePrivate() :
    isTestedFirst(false),
    loopVariableInputs(new QList<QInputPin *>),
    decider(0),
    bodyOutputs(new QList<QOutputPin *>),
    loopVariables(new QList<QOutputPin *>),
    results(new QList<QOutputPin *>),
    setupParts(new QSet<QExecutableNode *>),
    bodyParts(new QSet<QExecutableNode *>),
    tests(new QSet<QExecutableNode *>)
{
}

QLoopNodePrivate::~QLoopNodePrivate()
{
    delete loopVariableInputs;
    delete bodyOutputs;
    delete loopVariables;
    delete results;
    delete setupParts;
    delete bodyParts;
    delete tests;
}

/*!
    \class QLoopNode

    \inmodule QtUml

    \brief A loop node is a structured activity node that represents a loop with setup, test, and body sections.
 */

QLoopNode::QLoopNode(QUmlObject *parent, QUmlObject *wrapper) :
    QStructuredActivityNode(*new QLoopNodePrivate, parent, wrapper)
{
}

QLoopNode::QLoopNode(QLoopNodePrivate &dd, QUmlObject *parent, QUmlObject *wrapper) :
    QStructuredActivityNode(dd, parent, wrapper)
{
}

QLoopNode::~QLoopNode()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QLoopNode
// ---------------------------------------------------------------

/*!
    If true, the test is performed before the first execution of the body. If false, the body is executed once before the test is performed.
 */
bool QLoopNode::isTestedFirst() const
{
    // This is a read-write attribute

    Q_D(const QLoopNode);
    return d->isTestedFirst;
}

void QLoopNode::setTestedFirst(bool isTestedFirst)
{
    // This is a read-write attribute

    Q_D(QLoopNode);
    if (d->isTestedFirst != isTestedFirst) {
        d->isTestedFirst = isTestedFirst;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QLoopNode
// ---------------------------------------------------------------

/*!
    A list of values that are moved into the loop variable pins before the first iteration of the loop.
 */
const QList<QInputPin *> *QLoopNode::loopVariableInputs() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->loopVariableInputs;
}

void QLoopNode::addLoopVariableInput(QInputPin *loopVariableInput)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->loopVariableInputs->contains(loopVariableInput)) {
        d->loopVariableInputs->append(loopVariableInput);
        quml_topLevelWrapper(loopVariableInput)->setParent(quml_topLevelWrapper(this));
    }
}

void QLoopNode::removeLoopVariableInput(QInputPin *loopVariableInput)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->loopVariableInputs->contains(loopVariableInput)) {
        d->loopVariableInputs->removeAll(loopVariableInput);
        quml_topLevelWrapper(loopVariableInput)->setParent(0);
    }
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether to execute the loop body.
 */
QOutputPin *QLoopNode::decider() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->decider;
}

void QLoopNode::setDecider(QOutputPin *decider)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->decider != decider) {
        d->decider = decider;
    }
}

/*!
    A list of output pins within the body fragment the values of which are moved to the loop variable pins after completion of execution of the body, before the next iteration of the loop begins or before the loop exits.
 */
const QList<QOutputPin *> *QLoopNode::bodyOutputs() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->bodyOutputs;
}

void QLoopNode::addBodyOutput(QOutputPin *bodyOutput)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->bodyOutputs->contains(bodyOutput)) {
        d->bodyOutputs->append(bodyOutput);
    }
}

void QLoopNode::removeBodyOutput(QOutputPin *bodyOutput)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->bodyOutputs->contains(bodyOutput)) {
        d->bodyOutputs->removeAll(bodyOutput);
    }
}

/*!
    A list of output pins that hold the values of the loop variables during an execution of the loop. When the test fails, the values are movied to the result pins of the loop.
 */
const QList<QOutputPin *> *QLoopNode::loopVariables() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->loopVariables;
}

void QLoopNode::addLoopVariable(QOutputPin *loopVariable)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->loopVariables->contains(loopVariable)) {
        d->loopVariables->append(loopVariable);
    }
}

void QLoopNode::removeLoopVariable(QOutputPin *loopVariable)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->loopVariables->contains(loopVariable)) {
        d->loopVariables->removeAll(loopVariable);
    }
}

/*!
    A list of output pins that constitute the data flow output of the entire loop.
 */
const QList<QOutputPin *> *QLoopNode::results() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->results;
}

void QLoopNode::addResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->results->contains(result)) {
        d->results->append(result);
        quml_topLevelWrapper(result)->setParent(quml_topLevelWrapper(this));
    }
}

void QLoopNode::removeResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->results->contains(result)) {
        d->results->removeAll(result);
        quml_topLevelWrapper(result)->setParent(0);
    }
}

/*!
    The set of nodes and edges that initialize values or perform other setup computations for the loop.
 */
const QSet<QExecutableNode *> *QLoopNode::setupParts() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->setupParts;
}

void QLoopNode::addSetupPart(QExecutableNode *setupPart)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->setupParts->contains(setupPart)) {
        d->setupParts->insert(setupPart);
    }
}

void QLoopNode::removeSetupPart(QExecutableNode *setupPart)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->setupParts->contains(setupPart)) {
        d->setupParts->remove(setupPart);
    }
}

/*!
    The set of nodes and edges that perform the repetitive computations of the loop. The body section is executed as long as the test section produces a true value.
 */
const QSet<QExecutableNode *> *QLoopNode::bodyParts() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->bodyParts;
}

void QLoopNode::addBodyPart(QExecutableNode *bodyPart)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->bodyParts->contains(bodyPart)) {
        d->bodyParts->insert(bodyPart);
    }
}

void QLoopNode::removeBodyPart(QExecutableNode *bodyPart)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->bodyParts->contains(bodyPart)) {
        d->bodyParts->remove(bodyPart);
    }
}

/*!
    The set of nodes, edges, and designated value that compute a Boolean value to determine if another execution of the body will be performed.
 */
const QSet<QExecutableNode *> *QLoopNode::tests() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->tests;
}

void QLoopNode::addTest(QExecutableNode *test)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->tests->contains(test)) {
        d->tests->insert(test);
    }
}

void QLoopNode::removeTest(QExecutableNode *test)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->tests->contains(test)) {
        d->tests->remove(test);
    }
}

#include "moc_qloopnode.cpp"

QT_END_NAMESPACE_QTUML

