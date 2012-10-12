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

#include "qclause.h"
#include "qclause_p.h"

#include <QtUml/QExecutableNode>
#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QClausePrivate::QClausePrivate() :
    successorClauses(new QSet<QClause *>),
    decider(0),
    predecessorClauses(new QSet<QClause *>),
    bodyOutputs(new QList<QOutputPin *>),
    bodies(new QSet<QExecutableNode *>),
    tests(new QSet<QExecutableNode *>)
{
}

QClausePrivate::~QClausePrivate()
{
    delete successorClauses;
    delete predecessorClauses;
    delete bodyOutputs;
    delete bodies;
    delete tests;
}

void QClausePrivate::addSuccessorClause(QClause *successorClause)
{
    this->successorClauses->insert(successorClause);
}

void QClausePrivate::removeSuccessorClause(QClause *successorClause)
{
    this->successorClauses->remove(successorClause);
}

void QClausePrivate::setDecider(QOutputPin *decider)
{
    this->decider = decider;
}

void QClausePrivate::addPredecessorClause(QClause *predecessorClause)
{
    this->predecessorClauses->insert(predecessorClause);
}

void QClausePrivate::removePredecessorClause(QClause *predecessorClause)
{
    this->predecessorClauses->remove(predecessorClause);
}

void QClausePrivate::addBodyOutput(QOutputPin *bodyOutput)
{
    this->bodyOutputs->append(bodyOutput);
}

void QClausePrivate::removeBodyOutput(QOutputPin *bodyOutput)
{
    this->bodyOutputs->removeAll(bodyOutput);
}

void QClausePrivate::addBody(QExecutableNode *body)
{
    this->bodies->insert(body);
}

void QClausePrivate::removeBody(QExecutableNode *body)
{
    this->bodies->remove(body);
}

void QClausePrivate::addTest(QExecutableNode *test)
{
    this->tests->insert(test);
}

void QClausePrivate::removeTest(QExecutableNode *test)
{
    this->tests->remove(test);
}

/*!
    \class QClause

    \inmodule QtUml

    \brief A clause is an element that represents a single branch of a conditional construct, including a test and a body section. The body section is executed only if (but not necessarily if) the test section evaluates true.
 */

QClause::QClause(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QClausePrivate;
}

QClause::QClause(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QClausePrivate;
}

QClause::~QClause()
{
}

/*!
    A set of clauses which may not be tested unless the current clause tests false.
 */
const QSet<QClause *> *QClause::successorClauses() const
{
    QTUML_D(const QClause);
    return d->successorClauses;
}

void QClause::addSuccessorClause(QClause *successorClause)
{
    QTUML_D(QClause);
    if (!d->successorClauses->contains(successorClause)) {
        d->addSuccessorClause(successorClause);

        // Adjust opposite property
        successorClause->addPredecessorClause(this);
    }
}

void QClause::removeSuccessorClause(QClause *successorClause)
{
    QTUML_D(QClause);
    if (d->successorClauses->contains(successorClause)) {
        d->removeSuccessorClause(successorClause);

        // Adjust opposite property
        successorClause->removePredecessorClause(this);
    }
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether the body should be executed.
 */
QOutputPin *QClause::decider() const
{
    QTUML_D(const QClause);
    return d->decider;
}

void QClause::setDecider(QOutputPin *decider)
{
    QTUML_D(QClause);
    if (d->decider != decider) {
        d->setDecider(decider);
    }
}

/*!
    A set of clauses whose tests must all evaluate false before the current clause can be tested.
 */
const QSet<QClause *> *QClause::predecessorClauses() const
{
    QTUML_D(const QClause);
    return d->predecessorClauses;
}

void QClause::addPredecessorClause(QClause *predecessorClause)
{
    QTUML_D(QClause);
    if (!d->predecessorClauses->contains(predecessorClause)) {
        d->addPredecessorClause(predecessorClause);

        // Adjust opposite property
        predecessorClause->addSuccessorClause(this);
    }
}

void QClause::removePredecessorClause(QClause *predecessorClause)
{
    QTUML_D(QClause);
    if (d->predecessorClauses->contains(predecessorClause)) {
        d->removePredecessorClause(predecessorClause);

        // Adjust opposite property
        predecessorClause->removeSuccessorClause(this);
    }
}

/*!
    A list of output pins within the body fragment whose values are moved to the result pins of the containing conditional node after execution of the clause body.
 */
const QList<QOutputPin *> *QClause::bodyOutputs() const
{
    QTUML_D(const QClause);
    return d->bodyOutputs;
}

void QClause::addBodyOutput(QOutputPin *bodyOutput)
{
    QTUML_D(QClause);
    if (!d->bodyOutputs->contains(bodyOutput)) {
        d->addBodyOutput(bodyOutput);
    }
}

void QClause::removeBodyOutput(QOutputPin *bodyOutput)
{
    QTUML_D(QClause);
    if (d->bodyOutputs->contains(bodyOutput)) {
        d->removeBodyOutput(bodyOutput);
    }
}

/*!
    A nested activity fragment that is executed if the test evaluates to true and the clause is chosen over any concurrent clauses that also evaluate to true.
 */
const QSet<QExecutableNode *> *QClause::bodies() const
{
    QTUML_D(const QClause);
    return d->bodies;
}

void QClause::addBody(QExecutableNode *body)
{
    QTUML_D(QClause);
    if (!d->bodies->contains(body)) {
        d->addBody(body);
    }
}

void QClause::removeBody(QExecutableNode *body)
{
    QTUML_D(QClause);
    if (d->bodies->contains(body)) {
        d->removeBody(body);
    }
}

/*!
    A nested activity fragment with a designated output pin that specifies the result of the test.
 */
const QSet<QExecutableNode *> *QClause::tests() const
{
    QTUML_D(const QClause);
    return d->tests;
}

void QClause::addTest(QExecutableNode *test)
{
    QTUML_D(QClause);
    if (!d->tests->contains(test)) {
        d->addTest(test);
    }
}

void QClause::removeTest(QExecutableNode *test)
{
    QTUML_D(QClause);
    if (d->tests->contains(test)) {
        d->removeTest(test);
    }
}

#include "moc_qclause.cpp"

QT_END_NAMESPACE_QTUML

