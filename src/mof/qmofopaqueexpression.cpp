/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofopaqueexpression.h"

#include "private/qmofopaqueexpressionobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

/*!
    \class QMofOpaqueExpression

    \inmodule QtMof

    \brief An opaque expression is an uninterpreted textual statement that denotes a (possibly empty) set of values when evaluated in a context.
 */
QMofOpaqueExpression::QMofOpaqueExpression(bool createQModelingObject)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofOpaqueExpressionObject(this));
}

QModelingElement *QMofOpaqueExpression::clone() const
{
    QMofOpaqueExpression *c = new QMofOpaqueExpression;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    if (type())
        c->setType(dynamic_cast<QMofType *>(type()->clone()));
    foreach (QString element, bodies())
        c->addBody(element);
    foreach (QString element, languages())
        c->addLanguage(element);
    return c;
}

// OWNED ATTRIBUTES

/*!
    The text of the expression, possibly in multiple languages.
 */
const QList<QString> QMofOpaqueExpression::bodies() const
{
    // This is a read-write property

    return _bodies;
}

void QMofOpaqueExpression::addBody(QString body)
{
    // This is a read-write property

    if (!_bodies.contains(body)) {
        _bodies.append(body);
    }
}

void QMofOpaqueExpression::removeBody(QString body)
{
    // This is a read-write property

    if (_bodies.contains(body)) {
        _bodies.removeAll(body);
    }
}

/*!
    Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.
 */
const QList<QString> QMofOpaqueExpression::languages() const
{
    // This is a read-write property

    return _languages;
}

void QMofOpaqueExpression::addLanguage(QString language)
{
    // This is a read-write property

    if (!_languages.contains(language)) {
        _languages.append(language);
    }
}

void QMofOpaqueExpression::removeLanguage(QString language)
{
    // This is a read-write property

    if (_languages.contains(language)) {
        _languages.removeAll(language);
    }
}

// OPERATIONS

/*!
    The query isIntegral() tells whether an expression is intended to produce an integer.
 */
bool QMofOpaqueExpression::isIntegral() const
{
    qWarning("QMofOpaqueExpression::isIntegral(): to be implemented (operation)");

    return bool ();
}

/*!
    The query isNonNegative() tells whether an integer expression has a non-negative value.
 */
bool QMofOpaqueExpression::isNonNegative() const
{
    qWarning("QMofOpaqueExpression::isNonNegative(): to be implemented (operation)");

    return bool ();
}

/*!
    The query isPositive() tells whether an integer expression has a positive value.
 */
bool QMofOpaqueExpression::isPositive() const
{
    qWarning("QMofOpaqueExpression::isPositive(): to be implemented (operation)");

    return bool ();
}

/*!
    The query value() gives an integer value for an expression intended to produce one.
 */
int QMofOpaqueExpression::value() const
{
    qWarning("QMofOpaqueExpression::value(): to be implemented (operation)");

    return int ();
}

QT_END_NAMESPACE

