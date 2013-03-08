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

#include "qumlopaqueexpression.h"
#include "qumlopaqueexpression_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlParameter>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlOpaqueExpressionPrivate::QUmlOpaqueExpressionPrivate() :
    behavior(0)
{
}

QUmlOpaqueExpressionPrivate::~QUmlOpaqueExpressionPrivate()
{
}

/*!
    \class QUmlOpaqueExpression

    \inmodule QtUml

    \brief An opaque expression is an uninterpreted textual statement that denotes a (possibly empty) set of values when evaluated in a context.Provides a mechanism for precisely defining the behavior of an opaque expression. An opaque expression is defined by a behavior restricted to return one result.
 */

QUmlOpaqueExpression::QUmlOpaqueExpression(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlValueSpecification(*new QUmlOpaqueExpressionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlOpaqueExpression::QUmlOpaqueExpression(QUmlOpaqueExpressionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlValueSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlOpaqueExpression::~QUmlOpaqueExpression()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlOpaqueExpression
// ---------------------------------------------------------------

/*!
    The text of the expression, possibly in multiple languages.
 */
QList<QString> QUmlOpaqueExpression::bodies() const
{
    // This is a read-write attribute

    Q_D(const QUmlOpaqueExpression);
    return d->bodies;
}

void QUmlOpaqueExpression::addBody(QString body)
{
    // This is a read-write attribute

    Q_D(QUmlOpaqueExpression);
    if (!d->bodies.contains(body)) {
        d->bodies.append(body);
    }
}

void QUmlOpaqueExpression::removeBody(QString body)
{
    // This is a read-write attribute

    Q_D(QUmlOpaqueExpression);
    if (d->bodies.contains(body)) {
        d->bodies.removeAll(body);
    }
}

/*!
    Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.
 */
QList<QString> QUmlOpaqueExpression::languages() const
{
    // This is a read-write attribute

    Q_D(const QUmlOpaqueExpression);
    return d->languages;
}

void QUmlOpaqueExpression::addLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QUmlOpaqueExpression);
    if (!d->languages.contains(language)) {
        d->languages.append(language);
    }
}

void QUmlOpaqueExpression::removeLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QUmlOpaqueExpression);
    if (d->languages.contains(language)) {
        d->languages.removeAll(language);
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlOpaqueExpression
// ---------------------------------------------------------------

/*!
    Specifies the behavior of the opaque expression.
 */
QUmlBehavior *QUmlOpaqueExpression::behavior() const
{
    // This is a read-write association end

    Q_D(const QUmlOpaqueExpression);
    return d->behavior;
}

void QUmlOpaqueExpression::setBehavior(QUmlBehavior *behavior)
{
    // This is a read-write association end

    Q_D(QUmlOpaqueExpression);
    if (d->behavior != behavior) {
        d->behavior = behavior;
    }
}

/*!
    Restricts an opaque expression to return exactly one return result. When the invocation of the opaque expression completes, a single set of values is returned to its owner. This association is derived from the single return result parameter of the associated behavior.
 */
QUmlParameter *QUmlOpaqueExpression::result() const
{
    // This is a read-only derived association end

    qWarning("QUmlOpaqueExpression::result: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The query isIntegral() tells whether an expression is intended to produce an integer.
 */
bool QUmlOpaqueExpression::isIntegral() const
{
    qWarning("QUmlOpaqueExpression::isIntegral: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isNonNegative() tells whether an integer expression has a non-negative value.
 */
bool QUmlOpaqueExpression::isNonNegative() const
{
    qWarning("QUmlOpaqueExpression::isNonNegative: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isPositive() tells whether an integer expression has a positive value.
 */
bool QUmlOpaqueExpression::isPositive() const
{
    qWarning("QUmlOpaqueExpression::isPositive: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query value() gives an integer value for an expression intended to produce one.
 */
qint32 QUmlOpaqueExpression::value() const
{
    qWarning("QUmlOpaqueExpression::value: operation to be implemented");

    return qint32(); // change here to your derived return
}

void QUmlOpaqueExpression::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The text of the expression, possibly in multiple languages.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("bodies")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("languages")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("behavior")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("behavior")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("behavior")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the behavior of the opaque expression.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("behavior")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("behavior")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("behavior")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("result")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("result")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("result")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Restricts an opaque expression to return exactly one return result. When the invocation of the opaque expression completes, a single set of values is returned to its owner. This association is derived from the single return result parameter of the associated behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("result")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("result")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueExpression")][QString::fromLatin1("result")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlValueSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlopaqueexpression.cpp"

