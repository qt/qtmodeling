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

#include "qconditionalnode.h"
#include "qconditionalnode_p.h"
#include "qelement_p.h"

#include <QtUml/QClause>
#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QConditionalNodePrivate::QConditionalNodePrivate() :
    isAssured(false),
    isDeterminate(false),
    clauses(new QSet<QClause *>),
    results(new QList<QOutputPin *>)
{
}

QConditionalNodePrivate::~QConditionalNodePrivate()
{
    delete clauses;
    foreach (QOutputPin *outputpin, *results)
        delete outputpin;
    delete results;
}

void QConditionalNodePrivate::setAssured(bool isAssured)
{
    this->isAssured = isAssured;
}

void QConditionalNodePrivate::setDeterminate(bool isDeterminate)
{
    this->isDeterminate = isDeterminate;
}

void QConditionalNodePrivate::addClause(const QClause *clause)
{
    this->clauses->insert(const_cast<QClause *>(clause));

    // Adjust subsetted property(ies)
    addOwnedElement(clause);
}

void QConditionalNodePrivate::removeClause(const QClause *clause)
{
    this->clauses->remove(const_cast<QClause *>(clause));

    // Adjust subsetted property(ies)
    removeOwnedElement(clause);
}

void QConditionalNodePrivate::addResult(const QOutputPin *result)
{
    this->results->append(const_cast<QOutputPin *>(result));
}

void QConditionalNodePrivate::removeResult(const QOutputPin *result)
{
    this->results->removeAll(const_cast<QOutputPin *>(result));
}

/*!
    \class QConditionalNode

    \inmodule QtUml

    \brief A conditional node is a structured activity node that represents an exclusive choice among some number of alternatives.
 */

QConditionalNode::QConditionalNode(QObject *parent)
    : QStructuredActivityNode(false, parent)
{
    d_umlptr = new QConditionalNodePrivate;
}

QConditionalNode::QConditionalNode(bool createPimpl, QObject *parent)
    : QStructuredActivityNode(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QConditionalNodePrivate;
}

QConditionalNode::~QConditionalNode()
{
}

/*!
    If true, the modeler asserts that at least one test will succeed.
 */
bool QConditionalNode::isAssured() const
{
    QTUML_D(const QConditionalNode);
    return d->isAssured;
}

void QConditionalNode::setAssured(bool isAssured)
{
    QTUML_D(QConditionalNode);
    d->setAssured(isAssured);
}

/*!
    If true, the modeler asserts that at most one test will succeed.
 */
bool QConditionalNode::isDeterminate() const
{
    QTUML_D(const QConditionalNode);
    return d->isDeterminate;
}

void QConditionalNode::setDeterminate(bool isDeterminate)
{
    QTUML_D(QConditionalNode);
    d->setDeterminate(isDeterminate);
}

/*!
    Set of clauses composing the conditional.
 */
const QSet<QClause *> *QConditionalNode::clauses() const
{
    QTUML_D(const QConditionalNode);
    return d->clauses;
}

void QConditionalNode::addClause(const QClause *clause)
{
    QTUML_D(QConditionalNode);
    d->addClause(const_cast<QClause *>(clause));
}

void QConditionalNode::removeClause(const QClause *clause)
{
    QTUML_D(QConditionalNode);
    d->removeClause(const_cast<QClause *>(clause));
}

/*!
    A list of output pins that constitute the data flow outputs of the conditional.
 */
const QList<QOutputPin *> *QConditionalNode::results() const
{
    QTUML_D(const QConditionalNode);
    return d->results;
}

void QConditionalNode::addResult(const QOutputPin *result)
{
    QTUML_D(QConditionalNode);
    d->addResult(const_cast<QOutputPin *>(result));
}

void QConditionalNode::removeResult(const QOutputPin *result)
{
    QTUML_D(QConditionalNode);
    d->removeResult(const_cast<QOutputPin *>(result));
}

#include "moc_qconditionalnode.cpp"

QT_END_NAMESPACE_QTUML

