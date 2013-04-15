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
#include "qumlstateinvariant.h"
#include "qumlstateinvariant_p.h"

#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlConstraint>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlStateInvariantPrivate::QUmlStateInvariantPrivate() :
    invariant(0),
    covered(0)
{
}

QUmlStateInvariantPrivate::~QUmlStateInvariantPrivate()
{
}

/*!
    \class QUmlStateInvariant

    \inmodule QtUml

    \brief A state invariant is a runtime constraint on the participants of the interaction. It may be used to specify a variety of different kinds of constraints, such as values of attributes or variables, internal or external states, and so on. A state invariant is an interaction fragment and it is placed on a lifeline.
 */

QUmlStateInvariant::QUmlStateInvariant(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInteractionFragment(*new QUmlStateInvariantPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlStateInvariant::QUmlStateInvariant(QUmlStateInvariantPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInteractionFragment(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlStateInvariant::~QUmlStateInvariant()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlStateInvariant
// ---------------------------------------------------------------

/*!
    A Constraint that should hold at runtime for this StateInvariant
 */
QUmlConstraint *QUmlStateInvariant::invariant() const
{
    // This is a read-write association end

    Q_D(const QUmlStateInvariant);
    return d->invariant;
}

void QUmlStateInvariant::setInvariant(QUmlConstraint *invariant)
{
    // This is a read-write association end

    Q_D(QUmlStateInvariant);
    if (d->invariant != invariant) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->invariant));

        d->invariant = invariant;

        // Adjust subsetted property(ies)
        if (invariant) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(invariant));
        }
    }
}

/*!
    References the Lifeline on which the StateInvariant appears.
 */
QUmlLifeline *QUmlStateInvariant::covered() const
{
    // This is a read-write association end

    Q_D(const QUmlStateInvariant);
    return d->covered;
}

void QUmlStateInvariant::setCovered(QUmlLifeline *covered)
{
    // This is a read-write association end

    Q_D(QUmlStateInvariant);
    if (d->covered != covered) {
        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlInteractionFragment *>(this))->removeCovered(qwrappedobject_cast<QUmlLifeline *>(d->covered));

        d->covered = covered;

        // Adjust redefined property(ies)
        if (covered) {
            (qwrappedobject_cast<QUmlInteractionFragment *>(this))->addCovered(qwrappedobject_cast<QUmlLifeline *>(covered));
        }
    }
}

void QUmlStateInvariant::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateInvariant")][QString::fromLatin1("invariant")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateInvariant")][QString::fromLatin1("invariant")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateInvariant")][QString::fromLatin1("invariant")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A Constraint that should hold at runtime for this StateInvariant");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateInvariant")][QString::fromLatin1("invariant")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateInvariant")][QString::fromLatin1("invariant")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateInvariant")][QString::fromLatin1("invariant")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateInvariant")][QString::fromLatin1("covered")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateInvariant")][QString::fromLatin1("covered")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateInvariant")][QString::fromLatin1("covered")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Lifeline on which the StateInvariant appears.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateInvariant")][QString::fromLatin1("covered")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlInteractionFragment::covered");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateInvariant")][QString::fromLatin1("covered")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateInvariant")][QString::fromLatin1("covered")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlInteractionFragment::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlstateinvariant.cpp"

