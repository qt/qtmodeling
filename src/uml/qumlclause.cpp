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

#include "private/qumlclauseobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlOutputPin>

/*!
    \class QUmlClause

    \inmodule QtUml

    \brief A clause is an element that represents a single branch of a conditional construct, including a test and a body section. The body section is executed only if (but not necessarily if) the test section evaluates true.
 */
QUmlClause::QUmlClause(bool createQModelingObject) :
    _decider(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlClauseObject(this));
}

QModelingElement *QUmlClause::clone() const
{
    QUmlClause *c = new QUmlClause;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlExecutableNode *element, bodies())
        c->addBody(dynamic_cast<QUmlExecutableNode *>(element->clone()));
    foreach (QUmlOutputPin *element, bodyOutputs())
        c->addBodyOutput(dynamic_cast<QUmlOutputPin *>(element->clone()));
    if (decider())
        c->setDecider(dynamic_cast<QUmlOutputPin *>(decider()->clone()));
    foreach (QUmlClause *element, predecessorClauses())
        c->addPredecessorClause(dynamic_cast<QUmlClause *>(element->clone()));
    foreach (QUmlClause *element, successorClauses())
        c->addSuccessorClause(dynamic_cast<QUmlClause *>(element->clone()));
    foreach (QUmlExecutableNode *element, tests())
        c->addTest(dynamic_cast<QUmlExecutableNode *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    A nested activity fragment that is executed if the test evaluates to true and the clause is chosen over any concurrent clauses that also evaluate to true.
 */
const QSet<QUmlExecutableNode *> QUmlClause::bodies() const
{
    // This is a read-write association end

    return _bodies;
}

void QUmlClause::addBody(QUmlExecutableNode *body)
{
    // This is a read-write association end

    if (!_bodies.contains(body)) {
        _bodies.insert(body);
        if (body && body->asQModelingObject() && this->asQModelingObject())
            QObject::connect(body->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeBody(QObject *)));
    }
}

void QUmlClause::removeBody(QUmlExecutableNode *body)
{
    // This is a read-write association end

    if (_bodies.contains(body)) {
        _bodies.remove(body);
    }
}

/*!
    A list of output pins within the body fragment whose values are moved to the result pins of the containing conditional node after execution of the clause body.
 */
const QList<QUmlOutputPin *> QUmlClause::bodyOutputs() const
{
    // This is a read-write association end

    return _bodyOutputs;
}

void QUmlClause::addBodyOutput(QUmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    if (!_bodyOutputs.contains(bodyOutput)) {
        _bodyOutputs.append(bodyOutput);
        if (bodyOutput && bodyOutput->asQModelingObject() && this->asQModelingObject())
            QObject::connect(bodyOutput->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeBodyOutput(QObject *)));
    }
}

void QUmlClause::removeBodyOutput(QUmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    if (_bodyOutputs.contains(bodyOutput)) {
        _bodyOutputs.removeAll(bodyOutput);
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
        if (decider && decider->asQModelingObject() && this->asQModelingObject())
            QObject::connect(decider->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setDecider()));
    }
}

/*!
    A set of clauses whose tests must all evaluate false before the current clause can be tested.
 */
const QSet<QUmlClause *> QUmlClause::predecessorClauses() const
{
    // This is a read-write association end

    return _predecessorClauses;
}

void QUmlClause::addPredecessorClause(QUmlClause *predecessorClause)
{
    // This is a read-write association end

    if (!_predecessorClauses.contains(predecessorClause)) {
        _predecessorClauses.insert(predecessorClause);
        if (predecessorClause && predecessorClause->asQModelingObject() && this->asQModelingObject())
            QObject::connect(predecessorClause->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removePredecessorClause(QObject *)));
    }
}

void QUmlClause::removePredecessorClause(QUmlClause *predecessorClause)
{
    // This is a read-write association end

    if (_predecessorClauses.contains(predecessorClause)) {
        _predecessorClauses.remove(predecessorClause);
    }
}

/*!
    A set of clauses which may not be tested unless the current clause tests false.
 */
const QSet<QUmlClause *> QUmlClause::successorClauses() const
{
    // This is a read-write association end

    return _successorClauses;
}

void QUmlClause::addSuccessorClause(QUmlClause *successorClause)
{
    // This is a read-write association end

    if (!_successorClauses.contains(successorClause)) {
        _successorClauses.insert(successorClause);
        if (successorClause && successorClause->asQModelingObject() && this->asQModelingObject())
            QObject::connect(successorClause->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeSuccessorClause(QObject *)));
    }
}

void QUmlClause::removeSuccessorClause(QUmlClause *successorClause)
{
    // This is a read-write association end

    if (_successorClauses.contains(successorClause)) {
        _successorClauses.remove(successorClause);
    }
}

/*!
    A nested activity fragment with a designated output pin that specifies the result of the test.
 */
const QSet<QUmlExecutableNode *> QUmlClause::tests() const
{
    // This is a read-write association end

    return _tests;
}

void QUmlClause::addTest(QUmlExecutableNode *test)
{
    // This is a read-write association end

    if (!_tests.contains(test)) {
        _tests.insert(test);
        if (test && test->asQModelingObject() && this->asQModelingObject())
            QObject::connect(test->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeTest(QObject *)));
    }
}

void QUmlClause::removeTest(QUmlExecutableNode *test)
{
    // This is a read-write association end

    if (_tests.contains(test)) {
        _tests.remove(test);
    }
}

