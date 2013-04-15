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
#include "qumlinteractionconstraint.h"
#include "qumlinteractionconstraint_p.h"

#include <QtUml/QUmlValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlInteractionConstraintPrivate::QUmlInteractionConstraintPrivate() :
    maxint(0),
    minint(0)
{
}

QUmlInteractionConstraintPrivate::~QUmlInteractionConstraintPrivate()
{
}

/*!
    \class QUmlInteractionConstraint

    \inmodule QtUml

    \brief An interaction constraint is a Boolean expression that guards an operand in a combined fragment.
 */

QUmlInteractionConstraint::QUmlInteractionConstraint(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlConstraint(*new QUmlInteractionConstraintPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlInteractionConstraint::QUmlInteractionConstraint(QUmlInteractionConstraintPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlConstraint(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlInteractionConstraint::~QUmlInteractionConstraint()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlInteractionConstraint
// ---------------------------------------------------------------

/*!
    The maximum number of iterations of a loop
 */
QUmlValueSpecification *QUmlInteractionConstraint::maxint() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionConstraint);
    return d->maxint;
}

void QUmlInteractionConstraint::setMaxint(QUmlValueSpecification *maxint)
{
    // This is a read-write association end

    Q_D(QUmlInteractionConstraint);
    if (d->maxint != maxint) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->maxint));

        d->maxint = maxint;

        // Adjust subsetted property(ies)
        if (maxint) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(maxint));
        }
    }
}

/*!
    The minimum number of iterations of a loop
 */
QUmlValueSpecification *QUmlInteractionConstraint::minint() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionConstraint);
    return d->minint;
}

void QUmlInteractionConstraint::setMinint(QUmlValueSpecification *minint)
{
    // This is a read-write association end

    Q_D(QUmlInteractionConstraint);
    if (d->minint != minint) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->minint));

        d->minint = minint;

        // Adjust subsetted property(ies)
        if (minint) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(minint));
        }
    }
}

void QUmlInteractionConstraint::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionConstraint")][QString::fromLatin1("maxint")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionConstraint")][QString::fromLatin1("maxint")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionConstraint")][QString::fromLatin1("maxint")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The maximum number of iterations of a loop");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionConstraint")][QString::fromLatin1("maxint")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionConstraint")][QString::fromLatin1("maxint")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionConstraint")][QString::fromLatin1("maxint")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionConstraint")][QString::fromLatin1("minint")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionConstraint")][QString::fromLatin1("minint")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionConstraint")][QString::fromLatin1("minint")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The minimum number of iterations of a loop");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionConstraint")][QString::fromLatin1("minint")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionConstraint")][QString::fromLatin1("minint")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionConstraint")][QString::fromLatin1("minint")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlConstraint::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlinteractionconstraint.cpp"

