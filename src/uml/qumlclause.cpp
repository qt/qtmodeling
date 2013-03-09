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

#include "qumlclause.h"
#include "qumlclause_p.h"

#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlClausePrivate::QUmlClausePrivate() :
    decider(0)
{
}

QUmlClausePrivate::~QUmlClausePrivate()
{
}

/*!
    \class QUmlClause

    \inmodule QtUml

    \brief A clause is an element that represents a single branch of a conditional construct, including a test and a body section. The body section is executed only if (but not necessarily if) the test section evaluates true.
 */

QUmlClause::QUmlClause(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(*new QUmlClausePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlClause::QUmlClause(QUmlClausePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlClause::~QUmlClause()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlClause
// ---------------------------------------------------------------

/*!
    A set of clauses which may not be tested unless the current clause tests false.
 */
QSet<QUmlClause *> QUmlClause::successorClauses() const
{
    // This is a read-write association end

    Q_D(const QUmlClause);
    return d->successorClauses;
}

void QUmlClause::addSuccessorClause(QUmlClause *successorClause)
{
    // This is a read-write association end

    Q_D(QUmlClause);
    if (!d->successorClauses.contains(successorClause)) {
        d->successorClauses.insert(successorClause);

        // Adjust opposite property
        successorClause->addPredecessorClause(this);
    }
}

void QUmlClause::removeSuccessorClause(QUmlClause *successorClause)
{
    // This is a read-write association end

    Q_D(QUmlClause);
    if (d->successorClauses.contains(successorClause)) {
        d->successorClauses.remove(successorClause);

        // Adjust opposite property
        if (successorClause)
            successorClause->removePredecessorClause(this);
    }
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether the body should be executed.
 */
QUmlOutputPin *QUmlClause::decider() const
{
    // This is a read-write association end

    Q_D(const QUmlClause);
    return d->decider;
}

void QUmlClause::setDecider(QUmlOutputPin *decider)
{
    // This is a read-write association end

    Q_D(QUmlClause);
    if (d->decider != decider) {
        d->decider = decider;
    }
}

/*!
    A set of clauses whose tests must all evaluate false before the current clause can be tested.
 */
QSet<QUmlClause *> QUmlClause::predecessorClauses() const
{
    // This is a read-write association end

    Q_D(const QUmlClause);
    return d->predecessorClauses;
}

void QUmlClause::addPredecessorClause(QUmlClause *predecessorClause)
{
    // This is a read-write association end

    Q_D(QUmlClause);
    if (!d->predecessorClauses.contains(predecessorClause)) {
        d->predecessorClauses.insert(predecessorClause);

        // Adjust opposite property
        predecessorClause->addSuccessorClause(this);
    }
}

void QUmlClause::removePredecessorClause(QUmlClause *predecessorClause)
{
    // This is a read-write association end

    Q_D(QUmlClause);
    if (d->predecessorClauses.contains(predecessorClause)) {
        d->predecessorClauses.remove(predecessorClause);

        // Adjust opposite property
        if (predecessorClause)
            predecessorClause->removeSuccessorClause(this);
    }
}

/*!
    A list of output pins within the body fragment whose values are moved to the result pins of the containing conditional node after execution of the clause body.
 */
QList<QUmlOutputPin *> QUmlClause::bodyOutputs() const
{
    // This is a read-write association end

    Q_D(const QUmlClause);
    return d->bodyOutputs;
}

void QUmlClause::addBodyOutput(QUmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    Q_D(QUmlClause);
    if (!d->bodyOutputs.contains(bodyOutput)) {
        d->bodyOutputs.append(bodyOutput);
    }
}

void QUmlClause::removeBodyOutput(QUmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    Q_D(QUmlClause);
    if (d->bodyOutputs.contains(bodyOutput)) {
        d->bodyOutputs.removeAll(bodyOutput);
    }
}

/*!
    A nested activity fragment that is executed if the test evaluates to true and the clause is chosen over any concurrent clauses that also evaluate to true.
 */
QSet<QUmlExecutableNode *> QUmlClause::bodies() const
{
    // This is a read-write association end

    Q_D(const QUmlClause);
    return d->bodies;
}

void QUmlClause::addBody(QUmlExecutableNode *body)
{
    // This is a read-write association end

    Q_D(QUmlClause);
    if (!d->bodies.contains(body)) {
        d->bodies.insert(body);
    }
}

void QUmlClause::removeBody(QUmlExecutableNode *body)
{
    // This is a read-write association end

    Q_D(QUmlClause);
    if (d->bodies.contains(body)) {
        d->bodies.remove(body);
    }
}

/*!
    A nested activity fragment with a designated output pin that specifies the result of the test.
 */
QSet<QUmlExecutableNode *> QUmlClause::tests() const
{
    // This is a read-write association end

    Q_D(const QUmlClause);
    return d->tests;
}

void QUmlClause::addTest(QUmlExecutableNode *test)
{
    // This is a read-write association end

    Q_D(QUmlClause);
    if (!d->tests.contains(test)) {
        d->tests.insert(test);
    }
}

void QUmlClause::removeTest(QUmlExecutableNode *test)
{
    // This is a read-write association end

    Q_D(QUmlClause);
    if (d->tests.contains(test)) {
        d->tests.remove(test);
    }
}

void QUmlClause::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("successorClauses")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("successorClauses")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("successorClauses")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A set of clauses which may not be tested unless the current clause tests false.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("successorClauses")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("successorClauses")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("successorClauses")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlClause::predecessorClause");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("decider")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("decider")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("decider")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An output pin within the test fragment the value of which is examined after execution of the test to determine whether the body should be executed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("decider")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("decider")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("decider")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("predecessorClauses")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("predecessorClauses")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("predecessorClauses")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A set of clauses whose tests must all evaluate false before the current clause can be tested.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("predecessorClauses")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("predecessorClauses")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("predecessorClauses")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlClause::successorClause");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of output pins within the body fragment whose values are moved to the result pins of the containing conditional node after execution of the clause body.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("bodies")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("bodies")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("bodies")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A nested activity fragment that is executed if the test evaluates to true and the clause is chosen over any concurrent clauses that also evaluate to true.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("bodies")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("bodies")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("bodies")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("tests")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("tests")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("tests")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A nested activity fragment with a designated output pin that specifies the result of the test.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("tests")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("tests")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClause")][QString::fromLatin1("tests")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlclause.cpp"

