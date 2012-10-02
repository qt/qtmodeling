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
//#include "qclause_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QClause

    \inmodule QtUml

    \brief A clause is an element that represents a single branch of a conditional construct, including a test and a body section. The body section is executed only if (but not necessarily if) the test section evaluates true.
 */

QClause::QClause(QObject *parent)
    : QObject(parent)
{
}

QClause::~QClause()
{
}

/*!
    A nested activity fragment that is executed if the test evaluates to true and the clause is chosen over any concurrent clauses that also evaluate to true.
 */
QList<QExecutableNode *> *QClause::body()
{
}

/*!
    A list of output pins within the body fragment whose values are moved to the result pins of the containing conditional node after execution of the clause body.
 */
QList<QOutputPin *> *QClause::bodyOutput()
{
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether the body should be executed.
 */
QOutputPin *QClause::decider() const
{
}

void QClause::setDecider(QOutputPin *decider)
{
}

/*!
    A set of clauses whose tests must all evaluate false before the current clause can be tested.
 */
QList<QClause *> *QClause::predecessorClause()
{
}

/*!
    A set of clauses which may not be tested unless the current clause tests false.
 */
QList<QClause *> *QClause::successorClause()
{
}

/*!
    A nested activity fragment with a designated output pin that specifies the result of the test.
 */
QList<QExecutableNode *> *QClause::test()
{
}

#include "moc_qclause.cpp"

QT_END_NAMESPACE_QTUML

