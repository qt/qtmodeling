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
#include "qumlclause.h"

#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlClause

    \inmodule QtUml

    \brief A clause is an element that represents a single branch of a conditional construct, including a test and a body section. The body section is executed only if (but not necessarily if) the test section evaluates true.
 */

QUmlClause::QUmlClause() :
    _decider(0)
{
}

// OWNED ATTRIBUTES

/*!
    A nested activity fragment that is executed if the test evaluates to true and the clause is chosen over any concurrent clauses that also evaluate to true.
 */
QSet<QUmlExecutableNode *> QUmlClause::body() const
{
    // This is a read-write association end

    return _body;
}

void QUmlClause::addBody(QUmlExecutableNode *body)
{
    // This is a read-write association end

    if (!_body.contains(body)) {
        _body.insert(body);
    }
}

void QUmlClause::removeBody(QUmlExecutableNode *body)
{
    // This is a read-write association end

    if (_body.contains(body)) {
        _body.remove(body);
    }
}

/*!
    A list of output pins within the body fragment whose values are moved to the result pins of the containing conditional node after execution of the clause body.
 */
QList<QUmlOutputPin *> QUmlClause::bodyOutput() const
{
    // This is a read-write association end

    return _bodyOutput;
}

void QUmlClause::addBodyOutput(QUmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    if (!_bodyOutput.contains(bodyOutput)) {
        _bodyOutput.append(bodyOutput);
    }
}

void QUmlClause::removeBodyOutput(QUmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    if (_bodyOutput.contains(bodyOutput)) {
        _bodyOutput.removeAll(bodyOutput);
    }
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether the body should be executed.
 */
QUmlOutputPin *QUmlClause::decider() const
{
    // This is a read-write association end

    return _decider;
}

void QUmlClause::setDecider(QUmlOutputPin *decider)
{
    // This is a read-write association end

    if (_decider != decider) {
        _decider = decider;
    }
}

/*!
    A set of clauses whose tests must all evaluate false before the current clause can be tested.
 */
QSet<QUmlClause *> QUmlClause::predecessorClause() const
{
    // This is a read-write association end

    return _predecessorClause;
}

void QUmlClause::addPredecessorClause(QUmlClause *predecessorClause)
{
    // This is a read-write association end

    if (!_predecessorClause.contains(predecessorClause)) {
        _predecessorClause.insert(predecessorClause);
    }
}

void QUmlClause::removePredecessorClause(QUmlClause *predecessorClause)
{
    // This is a read-write association end

    if (_predecessorClause.contains(predecessorClause)) {
        _predecessorClause.remove(predecessorClause);
    }
}

/*!
    A set of clauses which may not be tested unless the current clause tests false.
 */
QSet<QUmlClause *> QUmlClause::successorClause() const
{
    // This is a read-write association end

    return _successorClause;
}

void QUmlClause::addSuccessorClause(QUmlClause *successorClause)
{
    // This is a read-write association end

    if (!_successorClause.contains(successorClause)) {
        _successorClause.insert(successorClause);
    }
}

void QUmlClause::removeSuccessorClause(QUmlClause *successorClause)
{
    // This is a read-write association end

    if (_successorClause.contains(successorClause)) {
        _successorClause.remove(successorClause);
    }
}

/*!
    A nested activity fragment with a designated output pin that specifies the result of the test.
 */
QSet<QUmlExecutableNode *> QUmlClause::test() const
{
    // This is a read-write association end

    return _test;
}

void QUmlClause::addTest(QUmlExecutableNode *test)
{
    // This is a read-write association end

    if (!_test.contains(test)) {
        _test.insert(test);
    }
}

void QUmlClause::removeTest(QUmlExecutableNode *test)
{
    // This is a read-write association end

    if (_test.contains(test)) {
        _test.remove(test);
    }
}

QT_END_NAMESPACE

