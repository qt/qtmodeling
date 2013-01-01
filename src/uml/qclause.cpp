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

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QClausePrivate::QClausePrivate() :
    decider(0)
{
}

QClausePrivate::~QClausePrivate()
{
}

/*!
    \class QClause

    \inmodule QtUml

    \brief A clause is an element that represents a single branch of a conditional construct, including a test and a body section. The body section is executed only if (but not necessarily if) the test section evaluates true.
 */

QClause::QClause(QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(*new QClausePrivate, parent, wrapper)
{
    setPropertyData();
}

QClause::QClause(QClausePrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(dd, parent, wrapper)
{
    setPropertyData();
}

QClause::~QClause()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QClause
// ---------------------------------------------------------------

/*!
    A set of clauses which may not be tested unless the current clause tests false.
 */
QSet<QClause *> QClause::successorClauses() const
{
    // This is a read-write association end

    Q_D(const QClause);
    return d->successorClauses;
}

void QClause::addSuccessorClause(QClause *successorClause)
{
    // This is a read-write association end

    Q_D(QClause);
    if (!d->successorClauses.contains(successorClause)) {
        d->successorClauses.insert(successorClause);

        // Adjust opposite property
        successorClause->addPredecessorClause(this);
    }
}

void QClause::removeSuccessorClause(QClause *successorClause)
{
    // This is a read-write association end

    Q_D(QClause);
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
QOutputPin *QClause::decider() const
{
    // This is a read-write association end

    Q_D(const QClause);
    return d->decider;
}

void QClause::setDecider(QOutputPin *decider)
{
    // This is a read-write association end

    Q_D(QClause);
    if (d->decider != decider) {
        d->decider = decider;
    }
}

/*!
    A set of clauses whose tests must all evaluate false before the current clause can be tested.
 */
QSet<QClause *> QClause::predecessorClauses() const
{
    // This is a read-write association end

    Q_D(const QClause);
    return d->predecessorClauses;
}

void QClause::addPredecessorClause(QClause *predecessorClause)
{
    // This is a read-write association end

    Q_D(QClause);
    if (!d->predecessorClauses.contains(predecessorClause)) {
        d->predecessorClauses.insert(predecessorClause);

        // Adjust opposite property
        predecessorClause->addSuccessorClause(this);
    }
}

void QClause::removePredecessorClause(QClause *predecessorClause)
{
    // This is a read-write association end

    Q_D(QClause);
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
QList<QOutputPin *> QClause::bodyOutputs() const
{
    // This is a read-write association end

    Q_D(const QClause);
    return d->bodyOutputs;
}

void QClause::addBodyOutput(QOutputPin *bodyOutput)
{
    // This is a read-write association end

    Q_D(QClause);
    if (!d->bodyOutputs.contains(bodyOutput)) {
        d->bodyOutputs.append(bodyOutput);
    }
}

void QClause::removeBodyOutput(QOutputPin *bodyOutput)
{
    // This is a read-write association end

    Q_D(QClause);
    if (d->bodyOutputs.contains(bodyOutput)) {
        d->bodyOutputs.removeAll(bodyOutput);
    }
}

/*!
    A nested activity fragment that is executed if the test evaluates to true and the clause is chosen over any concurrent clauses that also evaluate to true.
 */
QSet<QExecutableNode *> QClause::bodies() const
{
    // This is a read-write association end

    Q_D(const QClause);
    return d->bodies;
}

void QClause::addBody(QExecutableNode *body)
{
    // This is a read-write association end

    Q_D(QClause);
    if (!d->bodies.contains(body)) {
        d->bodies.insert(body);
    }
}

void QClause::removeBody(QExecutableNode *body)
{
    // This is a read-write association end

    Q_D(QClause);
    if (d->bodies.contains(body)) {
        d->bodies.remove(body);
    }
}

/*!
    A nested activity fragment with a designated output pin that specifies the result of the test.
 */
QSet<QExecutableNode *> QClause::tests() const
{
    // This is a read-write association end

    Q_D(const QClause);
    return d->tests;
}

void QClause::addTest(QExecutableNode *test)
{
    // This is a read-write association end

    Q_D(QClause);
    if (!d->tests.contains(test)) {
        d->tests.insert(test);
    }
}

void QClause::removeTest(QExecutableNode *test)
{
    // This is a read-write association end

    Q_D(QClause);
    if (d->tests.contains(test)) {
        d->tests.remove(test);
    }
}

void QClause::registerMetaTypes() const
{
    qRegisterMetaType<QExecutableNode *>("QExecutableNode *");
    qRegisterMetaType<QSet<QExecutableNode *>>("QSet<QExecutableNode *>");
    qRegisterMetaType<QList<QExecutableNode *>>("QList<QExecutableNode *>");

    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<QSet<QOutputPin *>>("QSet<QOutputPin *>");
    qRegisterMetaType<QList<QOutputPin *>>("QList<QOutputPin *>");

    QElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QClause::setPropertyData()
{

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClause")][QString::fromLatin1("successorClauses")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClause")][QString::fromLatin1("successorClauses")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A set of clauses which may not be tested unless the current clause tests false.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClause")][QString::fromLatin1("decider")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClause")][QString::fromLatin1("decider")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An output pin within the test fragment the value of which is examined after execution of the test to determine whether the body should be executed.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClause")][QString::fromLatin1("predecessorClauses")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClause")][QString::fromLatin1("predecessorClauses")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A set of clauses whose tests must all evaluate false before the current clause can be tested.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClause")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClause")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of output pins within the body fragment whose values are moved to the result pins of the containing conditional node after execution of the clause body.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClause")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClause")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A nested activity fragment that is executed if the test evaluates to true and the clause is chosen over any concurrent clauses that also evaluate to true.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClause")][QString::fromLatin1("tests")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClause")][QString::fromLatin1("tests")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A nested activity fragment with a designated output pin that specifies the result of the test.");

    QElement::setPropertyData();
}

#include "moc_qclause.cpp"

QT_END_NAMESPACE_QTUML

