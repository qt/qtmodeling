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

#include <QtUml/QBehavior>
#include <QtUml/QParameter>

QT_BEGIN_NAMESPACE_QTUML

class QOpaqueExpressionPrivate
{
public:
    explicit QOpaqueExpressionPrivate();
    virtual ~QOpaqueExpressionPrivate();

    QList<QString> *bodies;
    QList<QString> *languages;
    QBehavior *behavior;
};

QOpaqueExpressionPrivate::QOpaqueExpressionPrivate() :
    bodies(new QList<QString>),
    languages(new QList<QString>)
{
}

QOpaqueExpressionPrivate::~QOpaqueExpressionPrivate()
{
    delete bodies;
    delete languages;
}

/*!
    \class QOpaqueExpression

    \inmodule QtUml

    \brief An opaque expression is an uninterpreted textual statement that denotes a (possibly empty) set of values when evaluated in a context.Provides a mechanism for precisely defining the behavior of an opaque expression. An opaque expression is defined by a behavior restricted to return one result.
 */

QOpaqueExpression::QOpaqueExpression(QObject *parent)
    : QObject(parent), d_ptr(new QOpaqueExpressionPrivate)
{
}

QOpaqueExpression::~QOpaqueExpression()
{
    delete d_ptr;
}

/*!
    The text of the expression, possibly in multiple languages.
 */
const QList<QString> *QOpaqueExpression::bodies() const
{
    return d_ptr->bodies;
}

void QOpaqueExpression::addBody(QString body)
{
    d_ptr->bodies->append(body);
}

void QOpaqueExpression::removeBody(QString body)
{
    d_ptr->bodies->removeAll(body);
}

/*!
    Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.
 */
const QList<QString> *QOpaqueExpression::languages() const
{
    return d_ptr->languages;
}

void QOpaqueExpression::addLanguage(QString language)
{
    d_ptr->languages->append(language);
}

void QOpaqueExpression::removeLanguage(QString language)
{
    d_ptr->languages->removeAll(language);
}

/*!
    Specifies the behavior of the opaque expression.
 */
QBehavior *QOpaqueExpression::behavior() const
{
    return d_ptr->behavior;
}

void QOpaqueExpression::setBehavior(const QBehavior *behavior)
{
    d_ptr->behavior = const_cast<QBehavior *>(behavior);
}

/*!
    Restricts an opaque expression to return exactly one return result. When the invocation of the opaque expression completes, a single set of values is returned to its owner. This association is derived from the single return result parameter of the associated behavior.
 */
QParameter *QOpaqueExpression::result() const
{
    qWarning("To be implemented (this is a derived associationend)");
}

/*!
    The query isIntegral() tells whether an expression is intended to produce an integer.
 */
bool QOpaqueExpression::isIntegral() const
{
    qWarning("To be implemented");
}

/*!
    The query isNonNegative() tells whether an integer expression has a non-negative value.
 */
bool QOpaqueExpression::isNonNegative() const
{
    qWarning("To be implemented");
}

/*!
    The query isPositive() tells whether an integer expression has a positive value.
 */
bool QOpaqueExpression::isPositive() const
{
    qWarning("To be implemented");
}

/*!
    The query value() gives an integer value for an expression intended to produce one.
 */
qint32 QOpaqueExpression::value() const
{
    qWarning("To be implemented");
}

#include "moc_qopaqueexpression.cpp"

QT_END_NAMESPACE_QTUML

