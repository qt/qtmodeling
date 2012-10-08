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
    delete results;
}

/*!
    \class QConditionalNode

    \inmodule QtUml

    \brief A conditional node is a structured activity node that represents an exclusive choice among some number of alternatives.
 */

QConditionalNode::QConditionalNode(QObject *parent)
    : QStructuredActivityNode(parent), d_ptr(new QConditionalNodePrivate)
{
}

QConditionalNode::~QConditionalNode()
{
    delete d_ptr;
}

/*!
    If true, the modeler asserts that at least one test will succeed.
 */
bool QConditionalNode::isAssured() const
{
    return d_ptr->isAssured;
}

void QConditionalNode::setAssured(bool isAssured)
{
    d_ptr->isAssured = isAssured;
}

/*!
    If true, the modeler asserts that at most one test will succeed.
 */
bool QConditionalNode::isDeterminate() const
{
    return d_ptr->isDeterminate;
}

void QConditionalNode::setDeterminate(bool isDeterminate)
{
    d_ptr->isDeterminate = isDeterminate;
}

/*!
    Set of clauses composing the conditional.
 */
const QSet<QClause *> *QConditionalNode::clauses() const
{
    return d_ptr->clauses;
}

void QConditionalNode::addClause(const QClause *clause)
{
    d_ptr->clauses->insert(const_cast<QClause *>(clause));
    // Adjust subsetted property(ies)
    QElement::d_ptr->ownedElements->insert(const_cast<QClause *>(clause));
}

void QConditionalNode::removeClause(const QClause *clause)
{
    d_ptr->clauses->remove(const_cast<QClause *>(clause));
    // Adjust subsetted property(ies)
    QElement::d_ptr->ownedElements->remove(const_cast<QClause *>(clause));
}

/*!
    A list of output pins that constitute the data flow outputs of the conditional.
 */
const QList<QOutputPin *> *QConditionalNode::results() const
{
    return d_ptr->results;
}

void QConditionalNode::addResult(const QOutputPin *result)
{
    d_ptr->results->append(const_cast<QOutputPin *>(result));
}

void QConditionalNode::removeResult(const QOutputPin *result)
{
    d_ptr->results->removeAll(const_cast<QOutputPin *>(result));
}

#include "moc_qconditionalnode.cpp"

QT_END_NAMESPACE_QTUML

