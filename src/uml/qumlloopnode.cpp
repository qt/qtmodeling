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

#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

QUmlLoopNode::QUmlLoopNode(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QList<QUmlOutputPin *> QUmlLoopNode::bodyOutput() const
{
    return *(reinterpret_cast<const QList<QUmlOutputPin *> *>(&_bodyOutput));
}

void QUmlLoopNode::addBodyOutput(UmlOutputPin *bodyOutput)
{
    UmlLoopNode::addBodyOutput(bodyOutput);
}

void QUmlLoopNode::removeBodyOutput(UmlOutputPin *bodyOutput)
{
    UmlLoopNode::removeBodyOutput(bodyOutput);
}

const QSet<QUmlExecutableNode *> QUmlLoopNode::bodyPart() const
{
    return *(reinterpret_cast<const QSet<QUmlExecutableNode *> *>(&_bodyPart));
}

void QUmlLoopNode::addBodyPart(UmlExecutableNode *bodyPart)
{
    UmlLoopNode::addBodyPart(bodyPart);
}

void QUmlLoopNode::removeBodyPart(UmlExecutableNode *bodyPart)
{
    UmlLoopNode::removeBodyPart(bodyPart);
}

QUmlOutputPin *QUmlLoopNode::decider() const
{
    return reinterpret_cast<QUmlOutputPin *>(_decider);
}

void QUmlLoopNode::setDecider(QUmlOutputPin *decider)
{
    UmlLoopNode::setDecider(decider);
}

bool QUmlLoopNode::isTestedFirst() const
{
    return _isTestedFirst;
}

void QUmlLoopNode::setTestedFirst(bool isTestedFirst)
{
    UmlLoopNode::setTestedFirst(isTestedFirst);
}

const QList<QUmlOutputPin *> QUmlLoopNode::loopVariable() const
{
    return *(reinterpret_cast<const QList<QUmlOutputPin *> *>(&_loopVariable));
}

void QUmlLoopNode::addLoopVariable(UmlOutputPin *loopVariable)
{
    UmlLoopNode::addLoopVariable(loopVariable);
}

void QUmlLoopNode::removeLoopVariable(UmlOutputPin *loopVariable)
{
    UmlLoopNode::removeLoopVariable(loopVariable);
}

const QList<QUmlInputPin *> QUmlLoopNode::loopVariableInput() const
{
    return *(reinterpret_cast<const QList<QUmlInputPin *> *>(&_loopVariableInput));
}

void QUmlLoopNode::addLoopVariableInput(UmlInputPin *loopVariableInput)
{
    UmlLoopNode::addLoopVariableInput(loopVariableInput);
}

void QUmlLoopNode::removeLoopVariableInput(UmlInputPin *loopVariableInput)
{
    UmlLoopNode::removeLoopVariableInput(loopVariableInput);
}

const QList<QUmlOutputPin *> QUmlLoopNode::result() const
{
    return *(reinterpret_cast<const QList<QUmlOutputPin *> *>(&_result));
}

void QUmlLoopNode::addResult(UmlOutputPin *result)
{
    UmlLoopNode::addResult(result);
}

void QUmlLoopNode::removeResult(UmlOutputPin *result)
{
    UmlLoopNode::removeResult(result);
}

const QSet<QUmlExecutableNode *> QUmlLoopNode::setupPart() const
{
    return *(reinterpret_cast<const QSet<QUmlExecutableNode *> *>(&_setupPart));
}

void QUmlLoopNode::addSetupPart(UmlExecutableNode *setupPart)
{
    UmlLoopNode::addSetupPart(setupPart);
}

void QUmlLoopNode::removeSetupPart(UmlExecutableNode *setupPart)
{
    UmlLoopNode::removeSetupPart(setupPart);
}

const QSet<QUmlExecutableNode *> QUmlLoopNode::test() const
{
    return *(reinterpret_cast<const QSet<QUmlExecutableNode *> *>(&_test));
}

void QUmlLoopNode::addTest(UmlExecutableNode *test)
{
    UmlLoopNode::addTest(test);
}

void QUmlLoopNode::removeTest(UmlExecutableNode *test)
{
    UmlLoopNode::removeTest(test);
}

QT_END_NAMESPACE

