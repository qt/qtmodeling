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

void QClausePrivate::addSuccessorClause(const QClause *successorClause)
{
    this->successorClauses->insert(const_cast<QClause *>(successorClause));
}

void QClausePrivate::removeSuccessorClause(const QClause *successorClause)
{
    this->successorClauses->remove(const_cast<QClause *>(successorClause));
}

void QClausePrivate::setDecider(const QOutputPin *decider)
{
    this->decider = const_cast<QOutputPin *>(decider);
}

void QClausePrivate::addPredecessorClause(const QClause *predecessorClause)
{
    this->predecessorClauses->insert(const_cast<QClause *>(predecessorClause));
}

void QClausePrivate::removePredecessorClause(const QClause *predecessorClause)
{
    this->predecessorClauses->remove(const_cast<QClause *>(predecessorClause));
}

void QClausePrivate::addBodyOutput(const QOutputPin *bodyOutput)
{
    this->bodyOutputs->append(const_cast<QOutputPin *>(bodyOutput));
}

void QClausePrivate::removeBodyOutput(const QOutputPin *bodyOutput)
{
    this->bodyOutputs->removeAll(const_cast<QOutputPin *>(bodyOutput));
}

void QClausePrivate::addBody(const QExecutableNode *body)
{
    this->bodies->insert(const_cast<QExecutableNode *>(body));
}

void QClausePrivate::removeBody(const QExecutableNode *body)
{
    this->bodies->remove(const_cast<QExecutableNode *>(body));
}

void QClausePrivate::addTest(const QExecutableNode *test)
{
    this->tests->insert(const_cast<QExecutableNode *>(test));
}

void QClausePrivate::removeTest(const QExecutableNode *test)
{
    this->tests->remove(const_cast<QExecutableNode *>(test));
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
    Q_D(const QClause);
    return d->successorClauses;
}

void QClause::addSuccessorClause(const QClause *successorClause)
{
    Q_D(QClause);
    d->addSuccessorClause(const_cast<QClause *>(successorClause));
}

void QClause::removeSuccessorClause(const QClause *successorClause)
{
    Q_D(QClause);
    d->removeSuccessorClause(const_cast<QClause *>(successorClause));
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether the body should be executed.
 */
QOutputPin *QClause::decider() const
{
    Q_D(const QClause);
    return d->decider;
}

void QClause::setDecider(const QOutputPin *decider)
{
    Q_D(QClause);
    d->setDecider(const_cast<QOutputPin *>(decider));
}

/*!
    A set of clauses whose tests must all evaluate false before the current clause can be tested.
 */
const QSet<QClause *> *QClause::predecessorClauses() const
{
    Q_D(const QClause);
    return d->predecessorClauses;
}

void QClause::addPredecessorClause(const QClause *predecessorClause)
{
    Q_D(QClause);
    d->addPredecessorClause(const_cast<QClause *>(predecessorClause));
}

void QClause::removePredecessorClause(const QClause *predecessorClause)
{
    Q_D(QClause);
    d->removePredecessorClause(const_cast<QClause *>(predecessorClause));
}

/*!
    A list of output pins within the body fragment whose values are moved to the result pins of the containing conditional node after execution of the clause body.
 */
const QList<QOutputPin *> *QClause::bodyOutputs() const
{
    Q_D(const QClause);
    return d->bodyOutputs;
}

void QClause::addBodyOutput(const QOutputPin *bodyOutput)
{
    Q_D(QClause);
    d->addBodyOutput(const_cast<QOutputPin *>(bodyOutput));
}

void QClause::removeBodyOutput(const QOutputPin *bodyOutput)
{
    Q_D(QClause);
    d->removeBodyOutput(const_cast<QOutputPin *>(bodyOutput));
}

/*!
    A nested activity fragment that is executed if the test evaluates to true and the clause is chosen over any concurrent clauses that also evaluate to true.
 */
const QSet<QExecutableNode *> *QClause::bodies() const
{
    Q_D(const QClause);
    return d->bodies;
}

void QClause::addBody(const QExecutableNode *body)
{
    Q_D(QClause);
    d->addBody(const_cast<QExecutableNode *>(body));
}

void QClause::removeBody(const QExecutableNode *body)
{
    Q_D(QClause);
    d->removeBody(const_cast<QExecutableNode *>(body));
}

/*!
    A nested activity fragment with a designated output pin that specifies the result of the test.
 */
const QSet<QExecutableNode *> *QClause::tests() const
{
    Q_D(const QClause);
    return d->tests;
}

void QClause::addTest(const QExecutableNode *test)
{
    Q_D(QClause);
    d->addTest(const_cast<QExecutableNode *>(test));
}

void QClause::removeTest(const QExecutableNode *test)
{
    Q_D(QClause);
    d->removeTest(const_cast<QExecutableNode *>(test));
}

#include "moc_qclause.cpp"

QT_END_NAMESPACE_QTUML

