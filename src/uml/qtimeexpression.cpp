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

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QTimeExpressionPrivate::QTimeExpressionPrivate() :
    expr(0)
{
}

QTimeExpressionPrivate::~QTimeExpressionPrivate()
{
}

/*!
    \class QTimeExpression

    \inmodule QtUml

    \brief A time expression defines a value specification that represents a time value.
 */

QTimeExpression::QTimeExpression(QWrappedObject *wrapper, QWrappedObject *parent) :
    QValueSpecification(*new QTimeExpressionPrivate, wrapper, parent)
{
    setPropertyData();
}

QTimeExpression::QTimeExpression(QTimeExpressionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QValueSpecification(dd, wrapper, parent)
{
    setPropertyData();
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
QSet<QObservation *> QTimeExpression::observations() const
{
    // This is a read-write association end

    Q_D(const QTimeExpression);
    return d->observations;
}

void QTimeExpression::addObservation(QObservation *observation)
{
    // This is a read-write association end

    Q_D(QTimeExpression);
    if (!d->observations.contains(observation)) {
        d->observations.insert(observation);
    }
}

void QTimeExpression::removeObservation(QObservation *observation)
{
    // This is a read-write association end

    Q_D(QTimeExpression);
    if (d->observations.contains(observation)) {
        d->observations.remove(observation);
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
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->expr));

        d->expr = expr;

        // Adjust subsetted property(ies)
        if (expr) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(expr));
        }
    }
}

void QTimeExpression::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTimeExpression")][QString::fromLatin1("observations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTimeExpression")][QString::fromLatin1("observations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTimeExpression")][QString::fromLatin1("observations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to the time and duration observations that are involved in expr.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTimeExpression")][QString::fromLatin1("observations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTimeExpression")][QString::fromLatin1("observations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTimeExpression")][QString::fromLatin1("observations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTimeExpression")][QString::fromLatin1("expr")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTimeExpression")][QString::fromLatin1("expr")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTimeExpression")][QString::fromLatin1("expr")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The value of the time expression.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTimeExpression")][QString::fromLatin1("expr")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTimeExpression")][QString::fromLatin1("expr")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTimeExpression")][QString::fromLatin1("expr")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QValueSpecification::setPropertyData();
}

#include "moc_qtimeexpression.cpp"

QT_END_NAMESPACE_QTUML

