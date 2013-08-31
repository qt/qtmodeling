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
#include "umlclause_p.h"

#include "private/umlexecutablenode_p.h"
#include "private/umloutputpin_p.h"

UmlClause::UmlClause() :
    _decider(0)
{
}

// OWNED ATTRIBUTES

const QSet<UmlExecutableNode *> UmlClause::body() const
{
    // This is a read-write association end

    return _body;
}

void UmlClause::addBody(UmlExecutableNode *body)
{
    // This is a read-write association end

    if (!_body.contains(body)) {
        _body.insert(body);
    }
}

void UmlClause::removeBody(UmlExecutableNode *body)
{
    // This is a read-write association end

    if (_body.contains(body)) {
        _body.remove(body);
    }
}

const QList<UmlOutputPin *> UmlClause::bodyOutput() const
{
    // This is a read-write association end

    return _bodyOutput;
}

void UmlClause::addBodyOutput(UmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    if (!_bodyOutput.contains(bodyOutput)) {
        _bodyOutput.append(bodyOutput);
    }
}

void UmlClause::removeBodyOutput(UmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    if (_bodyOutput.contains(bodyOutput)) {
        _bodyOutput.removeAll(bodyOutput);
    }
}

UmlOutputPin *UmlClause::decider() const
{
    // This is a read-write association end

    return _decider;
}

void UmlClause::setDecider(UmlOutputPin *decider)
{
    // This is a read-write association end

    if (_decider != decider) {
        _decider = decider;
    }
}

const QSet<UmlClause *> UmlClause::predecessorClause() const
{
    // This is a read-write association end

    return _predecessorClause;
}

void UmlClause::addPredecessorClause(UmlClause *predecessorClause)
{
    // This is a read-write association end

    if (!_predecessorClause.contains(predecessorClause)) {
        _predecessorClause.insert(predecessorClause);
    }
}

void UmlClause::removePredecessorClause(UmlClause *predecessorClause)
{
    // This is a read-write association end

    if (_predecessorClause.contains(predecessorClause)) {
        _predecessorClause.remove(predecessorClause);
    }
}

const QSet<UmlClause *> UmlClause::successorClause() const
{
    // This is a read-write association end

    return _successorClause;
}

void UmlClause::addSuccessorClause(UmlClause *successorClause)
{
    // This is a read-write association end

    if (!_successorClause.contains(successorClause)) {
        _successorClause.insert(successorClause);
    }
}

void UmlClause::removeSuccessorClause(UmlClause *successorClause)
{
    // This is a read-write association end

    if (_successorClause.contains(successorClause)) {
        _successorClause.remove(successorClause);
    }
}

const QSet<UmlExecutableNode *> UmlClause::test() const
{
    // This is a read-write association end

    return _test;
}

void UmlClause::addTest(UmlExecutableNode *test)
{
    // This is a read-write association end

    if (!_test.contains(test)) {
        _test.insert(test);
    }
}

void UmlClause::removeTest(UmlExecutableNode *test)
{
    // This is a read-write association end

    if (_test.contains(test)) {
        _test.remove(test);
    }
}

