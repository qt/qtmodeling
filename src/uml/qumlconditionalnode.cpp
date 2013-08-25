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
#include "qumlconditionalnode.h"
#include "qumlconditionalnode_p.h"

#include <QtUml/QUmlClause>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

QUmlConditionalNodePrivate::QUmlConditionalNodePrivate() :
    isAssured(false),
    isDeterminate(false)
{
}

/*!
    \class QUmlConditionalNode

    \inmodule QtUml

    \brief A conditional node is a structured activity node that represents an exclusive choice among some number of alternatives.
 */

QUmlConditionalNode::QUmlConditionalNode(bool create_d_ptr) :
    QUmlStructuredActivityNode(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlConditionalNodePrivate);
}

// OWNED ATTRIBUTES

/*!
    Set of clauses composing the conditional.
 */
QSet<QUmlClause *> QUmlConditionalNode::clause() const
{
    // This is a read-write association end

    QM_D(const QUmlConditionalNode);
    return d->clause;
}

void QUmlConditionalNode::addClause(QUmlClause *clause)
{
    // This is a read-write association end

    QM_D(QUmlConditionalNode);
    if (!d->clause.contains(clause)) {
        d->clause.insert(clause);
    }
}

void QUmlConditionalNode::removeClause(QUmlClause *clause)
{
    // This is a read-write association end

    QM_D(QUmlConditionalNode);
    if (d->clause.contains(clause)) {
        d->clause.remove(clause);
    }
}

/*!
    If true, the modeler asserts that at least one test will succeed.
 */
bool QUmlConditionalNode::isAssured() const
{
    // This is a read-write property

    QM_D(const QUmlConditionalNode);
    return d->isAssured;
}

void QUmlConditionalNode::setAssured(bool isAssured)
{
    // This is a read-write property

    QM_D(QUmlConditionalNode);
    if (d->isAssured != isAssured) {
        d->isAssured = isAssured;
    }
}

/*!
    If true, the modeler asserts that at most one test will succeed.
 */
bool QUmlConditionalNode::isDeterminate() const
{
    // This is a read-write property

    QM_D(const QUmlConditionalNode);
    return d->isDeterminate;
}

void QUmlConditionalNode::setDeterminate(bool isDeterminate)
{
    // This is a read-write property

    QM_D(QUmlConditionalNode);
    if (d->isDeterminate != isDeterminate) {
        d->isDeterminate = isDeterminate;
    }
}

/*!
    A list of output pins that constitute the data flow outputs of the conditional.
 */
QList<QUmlOutputPin *> QUmlConditionalNode::result() const
{
    // This is a read-write association end

    QM_D(const QUmlConditionalNode);
    return d->result;
}

void QUmlConditionalNode::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    QM_D(QUmlConditionalNode);
    if (!d->result.contains(result)) {
        d->result.append(result);
    }
}

void QUmlConditionalNode::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    QM_D(QUmlConditionalNode);
    if (d->result.contains(result)) {
        d->result.removeAll(result);
    }
}

QT_END_NAMESPACE

