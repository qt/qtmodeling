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
#include "qmofopaqueexpression_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofOpaqueExpressionPrivate::QMofOpaqueExpressionPrivate()
{
}

QMofOpaqueExpressionPrivate::~QMofOpaqueExpressionPrivate()
{
}

/*!
    \class QMofOpaqueExpression

    \inmodule QtMof

    \brief An opaque expression is an uninterpreted textual statement that denotes a (possibly empty) set of values when evaluated in a context.
 */

QMofOpaqueExpression::QMofOpaqueExpression(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofValueSpecification(*new QMofOpaqueExpressionPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofOpaqueExpression::QMofOpaqueExpression(QMofOpaqueExpressionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofValueSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QMofOpaqueExpression::~QMofOpaqueExpression()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofOpaqueExpression
// ---------------------------------------------------------------

/*!
    The text of the expression, possibly in multiple languages.
 */
QList<QString> QMofOpaqueExpression::bodies() const
{
    // This is a read-write attribute

    Q_D(const QMofOpaqueExpression);
    return d->bodies;
}

void QMofOpaqueExpression::addBody(QString body)
{
    // This is a read-write attribute

    Q_D(QMofOpaqueExpression);
    if (!d->bodies.contains(body)) {
        d->bodies.append(body);
    }
}

void QMofOpaqueExpression::removeBody(QString body)
{
    // This is a read-write attribute

    Q_D(QMofOpaqueExpression);
    if (d->bodies.contains(body)) {
        d->bodies.removeAll(body);
    }
}

/*!
    Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.
 */
QList<QString> QMofOpaqueExpression::languages() const
{
    // This is a read-write attribute

    Q_D(const QMofOpaqueExpression);
    return d->languages;
}

void QMofOpaqueExpression::addLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QMofOpaqueExpression);
    if (!d->languages.contains(language)) {
        d->languages.append(language);
    }
}

void QMofOpaqueExpression::removeLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QMofOpaqueExpression);
    if (d->languages.contains(language)) {
        d->languages.removeAll(language);
    }
}

/*!
    The query isIntegral() tells whether an expression is intended to produce an integer.
 */
bool QMofOpaqueExpression::isIntegral() const
{
    qWarning("QMofOpaqueExpression::isIntegral: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isNonNegative() tells whether an integer expression has a non-negative value.
 */
bool QMofOpaqueExpression::isNonNegative() const
{
    qWarning("QMofOpaqueExpression::isNonNegative: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isPositive() tells whether an integer expression has a positive value.
 */
bool QMofOpaqueExpression::isPositive() const
{
    qWarning("QMofOpaqueExpression::isPositive: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query value() gives an integer value for an expression intended to produce one.
 */
qint32 QMofOpaqueExpression::value() const
{
    qWarning("QMofOpaqueExpression::value: operation to be implemented");

    return qint32(); // change here to your derived return
}

void QMofOpaqueExpression::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The text of the expression, possibly in multiple languages.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QMofValueSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofopaqueexpression.cpp"

