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

QT_BEGIN_NAMESPACE_QTUML

class QClausePrivate
{
public:
    explicit QClausePrivate();
    virtual ~QClausePrivate();

    QSet<QExecutableNode *> *bodies;
    QList<QOutputPin *> *bodyOutputs;
    QOutputPin *decider;
    QSet<QClause *> *predecessorClauses;
    QSet<QClause *> *successorClauses;
    QSet<QExecutableNode *> *tests;
};

QClausePrivate::QClausePrivate() :
    bodies(new QSet<QExecutableNode *>),
    bodyOutputs(new QList<QOutputPin *>),
    predecessorClauses(new QSet<QClause *>),
    successorClauses(new QSet<QClause *>),
    tests(new QSet<QExecutableNode *>)
{
}

QClausePrivate::~QClausePrivate()
{
    delete bodies;
    delete bodyOutputs;
    delete predecessorClauses;
    delete successorClauses;
    delete tests;
}

/*!
    \class QClause

    \inmodule QtUml

    \brief A clause is an element that represents a single branch of a conditional construct, including a test and a body section. The body section is executed only if (but not necessarily if) the test section evaluates true.
 */

QClause::QClause(QObject *parent)
    : QObject(parent), d_ptr(new QClausePrivate)
{
}

QClause::~QClause()
{
    delete d_ptr;
}

/*!
    A nested activity fragment that is executed if the test evaluates to true and the clause is chosen over any concurrent clauses that also evaluate to true.
 */
const QSet<QExecutableNode *> *QClause::bodies() const
{
    return d_ptr->bodies;
}

void QClause::addBody(const QExecutableNode *body)
{
    d_ptr->bodies->insert(const_cast<QExecutableNode *>(body));
}

void QClause::removeBody(const QExecutableNode *body)
{
    d_ptr->bodies->remove(const_cast<QExecutableNode *>(body));
}

/*!
    A list of output pins within the body fragment whose values are moved to the result pins of the containing conditional node after execution of the clause body.
 */
const QList<QOutputPin *> *QClause::bodyOutputs() const
{
    return d_ptr->bodyOutputs;
}

void QClause::addBodyOutput(const QOutputPin *bodyOutput)
{
    d_ptr->bodyOutputs->append(const_cast<QOutputPin *>(bodyOutput));
}

void QClause::removeBodyOutput(const QOutputPin *bodyOutput)
{
    d_ptr->bodyOutputs->removeAll(const_cast<QOutputPin *>(bodyOutput));
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether the body should be executed.
 */
QOutputPin *QClause::decider() const
{
    return d_ptr->decider;
}

void QClause::setDecider(const QOutputPin *decider)
{
    d_ptr->decider = const_cast<QOutputPin *>(decider);
}

/*!
    A set of clauses whose tests must all evaluate false before the current clause can be tested.
 */
const QSet<QClause *> *QClause::predecessorClauses() const
{
    return d_ptr->predecessorClauses;
}

void QClause::addPredecessorClause(const QClause *predecessorClause)
{
    d_ptr->predecessorClauses->insert(const_cast<QClause *>(predecessorClause));
}

void QClause::removePredecessorClause(const QClause *predecessorClause)
{
    d_ptr->predecessorClauses->remove(const_cast<QClause *>(predecessorClause));
}

/*!
    A set of clauses which may not be tested unless the current clause tests false.
 */
const QSet<QClause *> *QClause::successorClauses() const
{
    return d_ptr->successorClauses;
}

void QClause::addSuccessorClause(const QClause *successorClause)
{
    d_ptr->successorClauses->insert(const_cast<QClause *>(successorClause));
}

void QClause::removeSuccessorClause(const QClause *successorClause)
{
    d_ptr->successorClauses->remove(const_cast<QClause *>(successorClause));
}

/*!
    A nested activity fragment with a designated output pin that specifies the result of the test.
 */
const QSet<QExecutableNode *> *QClause::tests() const
{
    return d_ptr->tests;
}

void QClause::addTest(const QExecutableNode *test)
{
    d_ptr->tests->insert(const_cast<QExecutableNode *>(test));
}

void QClause::removeTest(const QExecutableNode *test)
{
    d_ptr->tests->remove(const_cast<QExecutableNode *>(test));
}

#include "moc_qclause.cpp"

QT_END_NAMESPACE_QTUML

