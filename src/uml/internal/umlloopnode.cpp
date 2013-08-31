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
#include "umlloopnode_p.h"

#include "private/umlexecutablenode_p.h"
#include "private/umlinputpin_p.h"
#include "private/umloutputpin_p.h"

UmlLoopNode::UmlLoopNode() :
    _decider(0),
    _isTestedFirst(false)
{
}

// OWNED ATTRIBUTES

const QList<UmlOutputPin *> UmlLoopNode::bodyOutput() const
{
    // This is a read-write association end

    return _bodyOutput;
}

void UmlLoopNode::addBodyOutput(UmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    if (!_bodyOutput.contains(bodyOutput)) {
        _bodyOutput.append(bodyOutput);
    }
}

void UmlLoopNode::removeBodyOutput(UmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    if (_bodyOutput.contains(bodyOutput)) {
        _bodyOutput.removeAll(bodyOutput);
    }
}

const QSet<UmlExecutableNode *> UmlLoopNode::bodyPart() const
{
    // This is a read-write association end

    return _bodyPart;
}

void UmlLoopNode::addBodyPart(UmlExecutableNode *bodyPart)
{
    // This is a read-write association end

    if (!_bodyPart.contains(bodyPart)) {
        _bodyPart.insert(bodyPart);
    }
}

void UmlLoopNode::removeBodyPart(UmlExecutableNode *bodyPart)
{
    // This is a read-write association end

    if (_bodyPart.contains(bodyPart)) {
        _bodyPart.remove(bodyPart);
    }
}

UmlOutputPin *UmlLoopNode::decider() const
{
    // This is a read-write association end

    return _decider;
}

void UmlLoopNode::setDecider(UmlOutputPin *decider)
{
    // This is a read-write association end

    if (_decider != decider) {
        _decider = decider;
    }
}

bool UmlLoopNode::isTestedFirst() const
{
    // This is a read-write property

    return _isTestedFirst;
}

void UmlLoopNode::setTestedFirst(bool isTestedFirst)
{
    // This is a read-write property

    if (_isTestedFirst != isTestedFirst) {
        _isTestedFirst = isTestedFirst;
    }
}

const QList<UmlOutputPin *> UmlLoopNode::loopVariable() const
{
    // This is a read-write association end

    return _loopVariable;
}

void UmlLoopNode::addLoopVariable(UmlOutputPin *loopVariable)
{
    // This is a read-write association end

    if (!_loopVariable.contains(loopVariable)) {
        _loopVariable.append(loopVariable);
    }
}

void UmlLoopNode::removeLoopVariable(UmlOutputPin *loopVariable)
{
    // This is a read-write association end

    if (_loopVariable.contains(loopVariable)) {
        _loopVariable.removeAll(loopVariable);
    }
}

const QList<UmlInputPin *> UmlLoopNode::loopVariableInput() const
{
    // This is a read-write association end

    return _loopVariableInput;
}

void UmlLoopNode::addLoopVariableInput(UmlInputPin *loopVariableInput)
{
    // This is a read-write association end

    if (!_loopVariableInput.contains(loopVariableInput)) {
        _loopVariableInput.append(loopVariableInput);
    }
}

void UmlLoopNode::removeLoopVariableInput(UmlInputPin *loopVariableInput)
{
    // This is a read-write association end

    if (_loopVariableInput.contains(loopVariableInput)) {
        _loopVariableInput.removeAll(loopVariableInput);
    }
}

const QList<UmlOutputPin *> UmlLoopNode::result() const
{
    // This is a read-write association end

    return _result;
}

void UmlLoopNode::addResult(UmlOutputPin *result)
{
    // This is a read-write association end

    if (!_result.contains(result)) {
        _result.append(result);
    }
}

void UmlLoopNode::removeResult(UmlOutputPin *result)
{
    // This is a read-write association end

    if (_result.contains(result)) {
        _result.removeAll(result);
    }
}

const QSet<UmlExecutableNode *> UmlLoopNode::setupPart() const
{
    // This is a read-write association end

    return _setupPart;
}

void UmlLoopNode::addSetupPart(UmlExecutableNode *setupPart)
{
    // This is a read-write association end

    if (!_setupPart.contains(setupPart)) {
        _setupPart.insert(setupPart);
    }
}

void UmlLoopNode::removeSetupPart(UmlExecutableNode *setupPart)
{
    // This is a read-write association end

    if (_setupPart.contains(setupPart)) {
        _setupPart.remove(setupPart);
    }
}

const QSet<UmlExecutableNode *> UmlLoopNode::test() const
{
    // This is a read-write association end

    return _test;
}

void UmlLoopNode::addTest(UmlExecutableNode *test)
{
    // This is a read-write association end

    if (!_test.contains(test)) {
        _test.insert(test);
    }
}

void UmlLoopNode::removeTest(UmlExecutableNode *test)
{
    // This is a read-write association end

    if (_test.contains(test)) {
        _test.remove(test);
    }
}

