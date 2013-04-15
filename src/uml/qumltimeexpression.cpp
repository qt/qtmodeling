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
#include "qumltimeexpression.h"
#include "qumltimeexpression_p.h"

#include <QtUml/QUmlObservation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlTimeExpressionPrivate::QUmlTimeExpressionPrivate() :
    expr(0)
{
}

QUmlTimeExpressionPrivate::~QUmlTimeExpressionPrivate()
{
}

/*!
    \class QUmlTimeExpression

    \inmodule QtUml

    \brief A time expression defines a value specification that represents a time value.
 */

QUmlTimeExpression::QUmlTimeExpression(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlValueSpecification(*new QUmlTimeExpressionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlTimeExpression::QUmlTimeExpression(QUmlTimeExpressionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlValueSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlTimeExpression::~QUmlTimeExpression()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlTimeExpression
// ---------------------------------------------------------------

/*!
    Refers to the time and duration observations that are involved in expr.
 */
QSet<QUmlObservation *> QUmlTimeExpression::observations() const
{
    // This is a read-write association end

    Q_D(const QUmlTimeExpression);
    return d->observations;
}

void QUmlTimeExpression::addObservation(QUmlObservation *observation)
{
    // This is a read-write association end

    Q_D(QUmlTimeExpression);
    if (!d->observations.contains(observation)) {
        d->observations.insert(observation);
    }
}

void QUmlTimeExpression::removeObservation(QUmlObservation *observation)
{
    // This is a read-write association end

    Q_D(QUmlTimeExpression);
    if (d->observations.contains(observation)) {
        d->observations.remove(observation);
    }
}

/*!
    The value of the time expression.
 */
QUmlValueSpecification *QUmlTimeExpression::expr() const
{
    // This is a read-write association end

    Q_D(const QUmlTimeExpression);
    return d->expr;
}

void QUmlTimeExpression::setExpr(QUmlValueSpecification *expr)
{
    // This is a read-write association end

    Q_D(QUmlTimeExpression);
    if (d->expr != expr) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->expr));

        d->expr = expr;

        // Adjust subsetted property(ies)
        if (expr) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(expr));
        }
    }
}

void QUmlTimeExpression::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeExpression")][QString::fromLatin1("observations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeExpression")][QString::fromLatin1("observations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeExpression")][QString::fromLatin1("observations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to the time and duration observations that are involved in expr.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeExpression")][QString::fromLatin1("observations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeExpression")][QString::fromLatin1("observations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeExpression")][QString::fromLatin1("observations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeExpression")][QString::fromLatin1("expr")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeExpression")][QString::fromLatin1("expr")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeExpression")][QString::fromLatin1("expr")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The value of the time expression.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeExpression")][QString::fromLatin1("expr")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeExpression")][QString::fromLatin1("expr")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeExpression")][QString::fromLatin1("expr")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlValueSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumltimeexpression.cpp"

