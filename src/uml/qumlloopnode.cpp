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

#include "private/qumlloopnodeobject_p.h"

#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

/*!
    \class QUmlLoopNode

    \inmodule QtUml

    \brief A loop node is a structured activity node that represents a loop with setup, test, and body sections.
 */
QUmlLoopNode::QUmlLoopNode(bool createQObject) :
    QUmlStructuredActivityNode(false),
    _decider(0),
    _isTestedFirst(false)
{
    if (createQObject)
        _qObject = new QUmlLoopNodeObject(this);
}

QUmlLoopNode::~QUmlLoopNode()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

// OWNED ATTRIBUTES

/*!
    A list of output pins within the body fragment the values of which are moved to the loop variable pins after completion of execution of the body, before the next iteration of the loop begins or before the loop exits.
 */
const QList<QUmlOutputPin *> 
QUmlLoopNode::bodyOutput() const
{
    // This is a read-write association end

    return _bodyOutput;
}

void QUmlLoopNode::addBodyOutput(QUmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    if (!_bodyOutput.contains(bodyOutput)) {
        _bodyOutput.append(bodyOutput);
        if (bodyOutput->asQObject() && this->asQObject())
            QObject::connect(bodyOutput->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeBodyOutput(QObject *)));
    }
}

void QUmlLoopNode::removeBodyOutput(QUmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    if (_bodyOutput.contains(bodyOutput)) {
        _bodyOutput.removeAll(bodyOutput);
    }
}

/*!
    The set of nodes and edges that perform the repetitive computations of the loop. The body section is executed as long as the test section produces a true value.
 */
const QSet<QUmlExecutableNode *> 
QUmlLoopNode::bodyPart() const
{
    // This is a read-write association end

    return _bodyPart;
}

void QUmlLoopNode::addBodyPart(QUmlExecutableNode *bodyPart)
{
    // This is a read-write association end

    if (!_bodyPart.contains(bodyPart)) {
        _bodyPart.insert(bodyPart);
        if (bodyPart->asQObject() && this->asQObject())
            QObject::connect(bodyPart->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeBodyPart(QObject *)));
    }
}

void QUmlLoopNode::removeBodyPart(QUmlExecutableNode *bodyPart)
{
    // This is a read-write association end

    if (_bodyPart.contains(bodyPart)) {
        _bodyPart.remove(bodyPart);
    }
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether to execute the loop body.
 */
QUmlOutputPin *
QUmlLoopNode::decider() const
{
    // This is a read-write association end

    return _decider;
}

void QUmlLoopNode::setDecider(QUmlOutputPin *decider)
{
    // This is a read-write association end

    if (_decider != decider) {
        _decider = decider;
        if (decider->asQObject() && this->asQObject())
            QObject::connect(decider->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setDecider()));
    }
}

/*!
    If true, the test is performed before the first execution of the body. If false, the body is executed once before the test is performed.
 */
bool 
QUmlLoopNode::isTestedFirst() const
{
    // This is a read-write property

    return _isTestedFirst;
}

void QUmlLoopNode::setTestedFirst(bool isTestedFirst)
{
    // This is a read-write property

    if (_isTestedFirst != isTestedFirst) {
        _isTestedFirst = isTestedFirst;
    }
}

/*!
    A list of output pins that hold the values of the loop variables during an execution of the loop. When the test fails, the values are movied to the result pins of the loop.
 */
const QList<QUmlOutputPin *> 
QUmlLoopNode::loopVariable() const
{
    // This is a read-write association end

    return _loopVariable;
}

void QUmlLoopNode::addLoopVariable(QUmlOutputPin *loopVariable)
{
    // This is a read-write association end

    if (!_loopVariable.contains(loopVariable)) {
        _loopVariable.append(loopVariable);
        if (loopVariable->asQObject() && this->asQObject())
            QObject::connect(loopVariable->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeLoopVariable(QObject *)));
    }
}

void QUmlLoopNode::removeLoopVariable(QUmlOutputPin *loopVariable)
{
    // This is a read-write association end

    if (_loopVariable.contains(loopVariable)) {
        _loopVariable.removeAll(loopVariable);
    }
}

/*!
    A list of values that are moved into the loop variable pins before the first iteration of the loop.
 */
const QList<QUmlInputPin *> 
QUmlLoopNode::loopVariableInput() const
{
    // This is a read-write association end

    return _loopVariableInput;
}

void QUmlLoopNode::addLoopVariableInput(QUmlInputPin *loopVariableInput)
{
    // This is a read-write association end

    if (!_loopVariableInput.contains(loopVariableInput)) {
        _loopVariableInput.append(loopVariableInput);
        if (loopVariableInput->asQObject() && this->asQObject())
            QObject::connect(loopVariableInput->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeLoopVariableInput(QObject *)));
        loopVariableInput->asQObject()->setParent(this->asQObject());
    }
}

void QUmlLoopNode::removeLoopVariableInput(QUmlInputPin *loopVariableInput)
{
    // This is a read-write association end

    if (_loopVariableInput.contains(loopVariableInput)) {
        _loopVariableInput.removeAll(loopVariableInput);
        if (loopVariableInput->asQObject())
            loopVariableInput->asQObject()->setParent(0);
    }
}

/*!
    A list of output pins that constitute the data flow output of the entire loop.
 */
const QList<QUmlOutputPin *> 
QUmlLoopNode::result() const
{
    // This is a read-write association end

    return _result;
}

void QUmlLoopNode::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (!_result.contains(result)) {
        _result.append(result);
        if (result->asQObject() && this->asQObject())
            QObject::connect(result->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeResult(QObject *)));
        result->asQObject()->setParent(this->asQObject());
    }
}

void QUmlLoopNode::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (_result.contains(result)) {
        _result.removeAll(result);
        if (result->asQObject())
            result->asQObject()->setParent(0);
    }
}

/*!
    The set of nodes and edges that initialize values or perform other setup computations for the loop.
 */
const QSet<QUmlExecutableNode *> 
QUmlLoopNode::setupPart() const
{
    // This is a read-write association end

    return _setupPart;
}

void QUmlLoopNode::addSetupPart(QUmlExecutableNode *setupPart)
{
    // This is a read-write association end

    if (!_setupPart.contains(setupPart)) {
        _setupPart.insert(setupPart);
        if (setupPart->asQObject() && this->asQObject())
            QObject::connect(setupPart->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeSetupPart(QObject *)));
    }
}

void QUmlLoopNode::removeSetupPart(QUmlExecutableNode *setupPart)
{
    // This is a read-write association end

    if (_setupPart.contains(setupPart)) {
        _setupPart.remove(setupPart);
    }
}

/*!
    The set of nodes, edges, and designated value that compute a Boolean value to determine if another execution of the body will be performed.
 */
const QSet<QUmlExecutableNode *> 
QUmlLoopNode::test() const
{
    // This is a read-write association end

    return _test;
}

void QUmlLoopNode::addTest(QUmlExecutableNode *test)
{
    // This is a read-write association end

    if (!_test.contains(test)) {
        _test.insert(test);
        if (test->asQObject() && this->asQObject())
            QObject::connect(test->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeTest(QObject *)));
    }
}

void QUmlLoopNode::removeTest(QUmlExecutableNode *test)
{
    // This is a read-write association end

    if (_test.contains(test)) {
        _test.remove(test);
    }
}

