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

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

/*!
    \class UmlClause

    \inmodule QtUml

    \brief A clause is an element that represents a single branch of a conditional construct, including a test and a body section. The body section is executed only if (but not necessarily if) the test section evaluates true.
 */

QUmlClause::QUmlClause(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlClause::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlClause::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlClause::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [Clause]

/*!
    A nested activity fragment that is executed if the test evaluates to true and the clause is chosen over any concurrent clauses that also evaluate to true.
 */
const QSet<QUmlExecutableNode *> QUmlClause::body() const
{
    return *(reinterpret_cast<const QSet<QUmlExecutableNode *> *>(&_body));
}

/*!
    A list of output pins within the body fragment whose values are moved to the result pins of the containing conditional node after execution of the clause body.
 */
const QList<QUmlOutputPin *> QUmlClause::bodyOutput() const
{
    return *(reinterpret_cast<const QList<QUmlOutputPin *> *>(&_bodyOutput));
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether the body should be executed.
 */
QUmlOutputPin *QUmlClause::decider() const
{
    return reinterpret_cast<QUmlOutputPin *>(_decider);
}

/*!
    A set of clauses whose tests must all evaluate false before the current clause can be tested.
 */
const QSet<QUmlClause *> QUmlClause::predecessorClause() const
{
    return *(reinterpret_cast<const QSet<QUmlClause *> *>(&_predecessorClause));
}

/*!
    A set of clauses which may not be tested unless the current clause tests false.
 */
const QSet<QUmlClause *> QUmlClause::successorClause() const
{
    return *(reinterpret_cast<const QSet<QUmlClause *> *>(&_successorClause));
}

/*!
    A nested activity fragment with a designated output pin that specifies the result of the test.
 */
const QSet<QUmlExecutableNode *> QUmlClause::test() const
{
    return *(reinterpret_cast<const QSet<QUmlExecutableNode *> *>(&_test));
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlClause::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlClause::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlClause::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlClause::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [Clause]

void QUmlClause::addBody(UmlExecutableNode *body)
{
    UmlClause::addBody(body);
}

void QUmlClause::removeBody(UmlExecutableNode *body)
{
    UmlClause::removeBody(body);
}

void QUmlClause::addBodyOutput(UmlOutputPin *bodyOutput)
{
    UmlClause::addBodyOutput(bodyOutput);
}

void QUmlClause::removeBodyOutput(UmlOutputPin *bodyOutput)
{
    UmlClause::removeBodyOutput(bodyOutput);
}

void QUmlClause::setDecider(QUmlOutputPin *decider)
{
    UmlClause::setDecider(decider);
}

void QUmlClause::addPredecessorClause(UmlClause *predecessorClause)
{
    UmlClause::addPredecessorClause(predecessorClause);
}

void QUmlClause::removePredecessorClause(UmlClause *predecessorClause)
{
    UmlClause::removePredecessorClause(predecessorClause);
}

void QUmlClause::addSuccessorClause(UmlClause *successorClause)
{
    UmlClause::addSuccessorClause(successorClause);
}

void QUmlClause::removeSuccessorClause(UmlClause *successorClause)
{
    UmlClause::removeSuccessorClause(successorClause);
}

void QUmlClause::addTest(UmlExecutableNode *test)
{
    UmlClause::addTest(test);
}

void QUmlClause::removeTest(UmlExecutableNode *test)
{
    UmlClause::removeTest(test);
}

QT_END_NAMESPACE

