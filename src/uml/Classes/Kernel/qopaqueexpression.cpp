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

#include "qopaqueexpression.h"
//#include "qopaqueexpression_p.h"

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

/*!
    \class QOpaqueExpression

    \inmodule QtUml

    \brief An opaque expression is an uninterpreted textual statement that denotes a (possibly empty) set of values when evaluated in a context.
 */

QOpaqueExpression::QOpaqueExpression(QObject *parent)
    : QObject(parent)
{
}

QOpaqueExpression::~QOpaqueExpression()
{
}
/*!
    The text of the expression, possibly in multiple languages.
 */
QString QOpaqueExpression::body() const
{
}

void QOpaqueExpression::setBody(QString body)
{
}
/*!
    Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.
 */
QString QOpaqueExpression::language() const
{
}

void QOpaqueExpression::setLanguage(QString language)
{
}

/*!
    The query isIntegral() tells whether an expression is intended to produce an integer.
 */
bool QOpaqueExpression::isIntegral() const
{
}

/*!
    The query isNonNegative() tells whether an integer expression has a non-negative value.
 */
bool QOpaqueExpression::isNonNegative() const
{
}

/*!
    The query isPositive() tells whether an integer expression has a positive value.
 */
bool QOpaqueExpression::isPositive() const
{
}

/*!
    The query value() gives an integer value for an expression intended to produce one.
 */
qint32 QOpaqueExpression::value() const
{
}

#include "moc_qopaqueexpression.cpp"

QT_END_NAMESPACE_UML_CLASSES_KERNEL

