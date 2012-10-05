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

QT_BEGIN_NAMESPACE_QTUML

class QTimeExpressionPrivate
{
public:
    explicit QTimeExpressionPrivate();
    virtual ~QTimeExpressionPrivate();

    QValueSpecification *expr;
    QSet<QObservation *> *observations;
};

QTimeExpressionPrivate::QTimeExpressionPrivate() :
    observations(new QSet<QObservation *>)
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

QTimeExpression::QTimeExpression(QObject *parent)
    : QObject(parent), d_ptr(new QTimeExpressionPrivate)
{
}

QTimeExpression::~QTimeExpression()
{
    delete d_ptr;
}

/*!
    The value of the time expression.
 */
QValueSpecification *QTimeExpression::expr() const
{
    return d_ptr->expr;
}

void QTimeExpression::setExpr(const QValueSpecification *expr)
{
    d_ptr->expr = const_cast<QValueSpecification *>(expr);
}

/*!
    Refers to the time and duration observations that are involved in expr.
 */
const QSet<QObservation *> *QTimeExpression::observations() const
{
    return d_ptr->observations;
}

void QTimeExpression::addObservation(const QObservation *observation)
{
    d_ptr->observations->insert(const_cast<QObservation *>(observation));
}

void QTimeExpression::removeObservation(const QObservation *observation)
{
    d_ptr->observations->remove(const_cast<QObservation *>(observation));
}

#include "moc_qtimeexpression.cpp"

QT_END_NAMESPACE_QTUML

