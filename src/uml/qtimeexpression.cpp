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

#include "qtimeexpression.h"
#include "qtimeexpression_p.h"

#include <QtUml/QObservation>

QT_BEGIN_NAMESPACE_QTUML

QTimeExpressionPrivate::QTimeExpressionPrivate() :
    observations(new QSet<QObservation *>),
    expr(0)
{
}

QTimeExpressionPrivate::~QTimeExpressionPrivate()
{
    delete observations;
}

/*!
    \class QTimeExpression

    \inmodule QtUml

    \brief A time expression defines a value specification that represents a time value.
 */

QTimeExpression::QTimeExpression(QUmlObject *parent, QUmlObject *wrapper) :
    QValueSpecification(*new QTimeExpressionPrivate, parent, wrapper)
{
}

QTimeExpression::QTimeExpression(QTimeExpressionPrivate &dd, QUmlObject *parent, QUmlObject *wrapper) :
    QValueSpecification(dd, parent, wrapper)
{
}

QTimeExpression::~QTimeExpression()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QTimeExpression
// ---------------------------------------------------------------

/*!
    Refers to the time and duration observations that are involved in expr.
 */
const QSet<QObservation *> *QTimeExpression::observations() const
{
    // This is a read-write association end

    Q_D(const QTimeExpression);
    return d->observations;
}

void QTimeExpression::addObservation(QObservation *observation)
{
    // This is a read-write association end

    Q_D(QTimeExpression);
    if (!d->observations->contains(observation)) {
        d->observations->insert(observation);
    }
}

void QTimeExpression::removeObservation(QObservation *observation)
{
    // This is a read-write association end

    Q_D(QTimeExpression);
    if (d->observations->contains(observation)) {
        d->observations->remove(observation);
    }
}

/*!
    The value of the time expression.
 */
QValueSpecification *QTimeExpression::expr() const
{
    // This is a read-write association end

    Q_D(const QTimeExpression);
    return d->expr;
}

void QTimeExpression::setExpr(QValueSpecification *expr)
{
    // This is a read-write association end

    Q_D(QTimeExpression);
    if (d->expr != expr) {
        // Adjust subsetted property(ies)
        (qumlobject_cast<QElementPrivate *>(d))->removeOwnedElement(qumlobject_cast<QElement *>(d->expr));

        d->expr = expr;

        // Adjust subsetted property(ies)
        if (expr) {
            (qumlobject_cast<QElementPrivate *>(d))->addOwnedElement(qumlobject_cast<QElement *>(expr));
        }
    }
}

#include "moc_qtimeexpression.cpp"

QT_END_NAMESPACE_QTUML

