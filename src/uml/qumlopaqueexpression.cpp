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
#include "qumlopaqueexpression.h"
#include "qumlopaqueexpression_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlParameter>

QT_BEGIN_NAMESPACE

QUmlOpaqueExpressionPrivate::QUmlOpaqueExpressionPrivate() :
    behavior(0),
    result(0)
{
}

/*!
    \class QUmlOpaqueExpression

    \inmodule QtUml

    \brief An opaque expression is an uninterpreted textual statement that denotes a (possibly empty) set of values when evaluated in a context.Provides a mechanism for precisely defining the behavior of an opaque expression. An opaque expression is defined by a behavior restricted to return one result.
 */

QUmlOpaqueExpression::QUmlOpaqueExpression(bool create_d_ptr) :
    QUmlValueSpecification(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlOpaqueExpressionPrivate);
}

// Owned attributes

/*!
    Specifies the behavior of the opaque expression.
 */
QUmlBehavior *QUmlOpaqueExpression::behavior() const
{
    return 0;
}

void QUmlOpaqueExpression::setBehavior(QUmlBehavior *behavior)
{
    Q_UNUSED(behavior);
}

/*!
    The text of the expression, possibly in multiple languages.
 */
QList<QString> QUmlOpaqueExpression::body() const
{
    return QList<QString>();
}

void QUmlOpaqueExpression::addBody(QList<QString> body)
{
    Q_UNUSED(body);
}

void QUmlOpaqueExpression::removeBody(QList<QString> body)
{
    Q_UNUSED(body);
}

/*!
    Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.
 */
QList<QString> QUmlOpaqueExpression::language() const
{
    return QList<QString>();
}

void QUmlOpaqueExpression::addLanguage(QList<QString> language)
{
    Q_UNUSED(language);
}

void QUmlOpaqueExpression::removeLanguage(QList<QString> language)
{
    Q_UNUSED(language);
}

/*!
    Restricts an opaque expression to return exactly one return result. When the invocation of the opaque expression completes, a single set of values is returned to its owner. This association is derived from the single return result parameter of the associated behavior.
 */
QUmlParameter *QUmlOpaqueExpression::result() const
{
    return 0;
}

// Operations

/*!
    The query isIntegral() tells whether an expression is intended to produce an integer.
 */
bool QUmlOpaqueExpression::isIntegral() const
{
    return bool ();
}

/*!
    The query isNonNegative() tells whether an integer expression has a non-negative value.
 */
bool QUmlOpaqueExpression::isNonNegative() const
{
    return bool ();
}

/*!
    The query isPositive() tells whether an integer expression has a positive value.
 */
bool QUmlOpaqueExpression::isPositive() const
{
    return bool ();
}

/*!
    The query value() gives an integer value for an expression intended to produce one.
 */
int QUmlOpaqueExpression::value() const
{
    return int ();
}

QT_END_NAMESPACE

