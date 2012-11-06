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
#include "qopaqueexpression_p.h"

#include <QtUml/QBehavior>
#include <QtUml/QParameter>

QT_BEGIN_NAMESPACE_QTUML

QOpaqueExpressionPrivate::QOpaqueExpressionPrivate() :
    bodies(new QList<QString>),
    languages(new QList<QString>),
    behavior(0)
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

QOpaqueExpression::QOpaqueExpression(QObject *parent) :
    QValueSpecification(*new QOpaqueExpressionPrivate, parent)
{
    qRegisterMetaType<QOpaqueExpression *>("QOpaqueExpression *");
    qRegisterMetaType<const QSet<QOpaqueExpression *> *>("const QSet<QOpaqueExpression *> *");
    qRegisterMetaType<const QList<QOpaqueExpression *> *>("const QList<QOpaqueExpression *> *");
}

QOpaqueExpression::QOpaqueExpression(QOpaqueExpressionPrivate &dd, QObject *parent) :
    QValueSpecification(dd, parent)
{
    qRegisterMetaType<QOpaqueExpression *>("QOpaqueExpression *");
    qRegisterMetaType<const QSet<QOpaqueExpression *> *>("const QSet<QOpaqueExpression *> *");
    qRegisterMetaType<const QList<QOpaqueExpression *> *>("const QList<QOpaqueExpression *> *");
}

QOpaqueExpression::~QOpaqueExpression()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QOpaqueExpression
// ---------------------------------------------------------------

/*!
    The text of the expression, possibly in multiple languages.
 */
const QList<QString> *QOpaqueExpression::bodies() const
{
    // This is a read-write attribute

    Q_D(const QOpaqueExpression);
    return d->bodies;
}

void QOpaqueExpression::addBody(QString body)
{
    // This is a read-write attribute

    Q_D(QOpaqueExpression);
    if (!d->bodies->contains(body)) {
        d->bodies->append(body);
    }
}

void QOpaqueExpression::removeBody(QString body)
{
    // This is a read-write attribute

    Q_D(QOpaqueExpression);
    if (d->bodies->contains(body)) {
        d->bodies->removeAll(body);
    }
}

/*!
    Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.
 */
const QList<QString> *QOpaqueExpression::languages() const
{
    // This is a read-write attribute

    Q_D(const QOpaqueExpression);
    return d->languages;
}

void QOpaqueExpression::addLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QOpaqueExpression);
    if (!d->languages->contains(language)) {
        d->languages->append(language);
    }
}

void QOpaqueExpression::removeLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QOpaqueExpression);
    if (d->languages->contains(language)) {
        d->languages->removeAll(language);
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QOpaqueExpression
// ---------------------------------------------------------------

/*!
    Specifies the behavior of the opaque expression.
 */
QBehavior *QOpaqueExpression::behavior() const
{
    // This is a read-write association end

    Q_D(const QOpaqueExpression);
    return d->behavior;
}

void QOpaqueExpression::setBehavior(QBehavior *behavior)
{
    // This is a read-write association end

    Q_D(QOpaqueExpression);
    if (d->behavior != behavior) {
        d->behavior = behavior;
    }
}

/*!
    Restricts an opaque expression to return exactly one return result. When the invocation of the opaque expression completes, a single set of values is returned to its owner. This association is derived from the single return result parameter of the associated behavior.
 */
QParameter *QOpaqueExpression::result() const
{
    // This is a read-only derived association end

    qWarning("QOpaqueExpression::result: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The query isIntegral() tells whether an expression is intended to produce an integer.
 */
bool QOpaqueExpression::isIntegral() const
{
    qWarning("QOpaqueExpression::isIntegral: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isNonNegative() tells whether an integer expression has a non-negative value.
 */
bool QOpaqueExpression::isNonNegative() const
{
    qWarning("QOpaqueExpression::isNonNegative: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isPositive() tells whether an integer expression has a positive value.
 */
bool QOpaqueExpression::isPositive() const
{
    qWarning("QOpaqueExpression::isPositive: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query value() gives an integer value for an expression intended to produce one.
 */
qint32 QOpaqueExpression::value() const
{
    qWarning("QOpaqueExpression::value: operation to be implemented");

    return qint32(); // change here to your derived return
}

#include "moc_qopaqueexpression.cpp"

QT_END_NAMESPACE_QTUML

