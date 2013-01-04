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

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QOpaqueExpressionPrivate::QOpaqueExpressionPrivate() :
    behavior(0)
{
}

QOpaqueExpressionPrivate::~QOpaqueExpressionPrivate()
{
}

/*!
    \class QOpaqueExpression

    \inmodule QtUml

    \brief An opaque expression is an uninterpreted textual statement that denotes a (possibly empty) set of values when evaluated in a context.Provides a mechanism for precisely defining the behavior of an opaque expression. An opaque expression is defined by a behavior restricted to return one result.
 */

QOpaqueExpression::QOpaqueExpression(QWrappedObject *wrapper, QWrappedObject *parent) :
    QValueSpecification(*new QOpaqueExpressionPrivate, wrapper, parent)
{
    setPropertyData();
}

QOpaqueExpression::QOpaqueExpression(QOpaqueExpressionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QValueSpecification(dd, wrapper, parent)
{
    setPropertyData();
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
QList<QString> QOpaqueExpression::bodies() const
{
    // This is a read-write attribute

    Q_D(const QOpaqueExpression);
    return d->bodies;
}

void QOpaqueExpression::addBody(QString body)
{
    // This is a read-write attribute

    Q_D(QOpaqueExpression);
    if (!d->bodies.contains(body)) {
        d->bodies.append(body);
    }
}

void QOpaqueExpression::removeBody(QString body)
{
    // This is a read-write attribute

    Q_D(QOpaqueExpression);
    if (d->bodies.contains(body)) {
        d->bodies.removeAll(body);
    }
}

/*!
    Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.
 */
QList<QString> QOpaqueExpression::languages() const
{
    // This is a read-write attribute

    Q_D(const QOpaqueExpression);
    return d->languages;
}

void QOpaqueExpression::addLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QOpaqueExpression);
    if (!d->languages.contains(language)) {
        d->languages.append(language);
    }
}

void QOpaqueExpression::removeLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QOpaqueExpression);
    if (d->languages.contains(language)) {
        d->languages.removeAll(language);
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

void QOpaqueExpression::registerMetaTypes() const
{
    qRegisterMetaType<QBehavior *>("QBehavior *");
    qRegisterMetaType<QSet<QBehavior *>>("QSet<QBehavior *>");
    qRegisterMetaType<QList<QBehavior *>>("QList<QBehavior *>");

    qRegisterMetaType<QParameter *>("QParameter *");
    qRegisterMetaType<QSet<QParameter *>>("QSet<QParameter *>");
    qRegisterMetaType<QList<QParameter *>>("QList<QParameter *>");

    QValueSpecification::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QOpaqueExpression::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The text of the expression, possibly in multiple languages.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("behavior")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("behavior")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("behavior")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the behavior of the opaque expression.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("behavior")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("behavior")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("behavior")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Restricts an opaque expression to return exactly one return result. When the invocation of the opaque expression completes, a single set of values is returned to its owner. This association is derived from the single return result parameter of the associated behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueExpression")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QValueSpecification::setPropertyData();
}

#include "moc_qopaqueexpression.cpp"

QT_END_NAMESPACE_QTUML

