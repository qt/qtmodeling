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

#include "qstateinvariant.h"
#include "qstateinvariant_p.h"

#include <QtUml/QLifeline>
#include <QtUml/QConstraint>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QStateInvariantPrivate::QStateInvariantPrivate() :
    invariant(0),
    covered(0)
{
}

QStateInvariantPrivate::~QStateInvariantPrivate()
{
}

/*!
    \class QStateInvariant

    \inmodule QtUml

    \brief A state invariant is a runtime constraint on the participants of the interaction. It may be used to specify a variety of different kinds of constraints, such as values of attributes or variables, internal or external states, and so on. A state invariant is an interaction fragment and it is placed on a lifeline.
 */

QStateInvariant::QStateInvariant(QWrappedObject *wrapper, QWrappedObject *parent) :
    QInteractionFragment(*new QStateInvariantPrivate, wrapper, parent)
{
    setPropertyData();
}

QStateInvariant::QStateInvariant(QStateInvariantPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QInteractionFragment(dd, wrapper, parent)
{
    setPropertyData();
}

QStateInvariant::~QStateInvariant()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QStateInvariant
// ---------------------------------------------------------------

/*!
    A Constraint that should hold at runtime for this StateInvariant
 */
QConstraint *QStateInvariant::invariant() const
{
    // This is a read-write association end

    Q_D(const QStateInvariant);
    return d->invariant;
}

void QStateInvariant::setInvariant(QConstraint *invariant)
{
    // This is a read-write association end

    Q_D(QStateInvariant);
    if (d->invariant != invariant) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->invariant));

        d->invariant = invariant;

        // Adjust subsetted property(ies)
        if (invariant) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(invariant));
        }
    }
}

/*!
    References the Lifeline on which the StateInvariant appears.
 */
QLifeline *QStateInvariant::covered() const
{
    // This is a read-write association end

    Q_D(const QStateInvariant);
    return d->covered;
}

void QStateInvariant::setCovered(QLifeline *covered)
{
    // This is a read-write association end

    Q_D(QStateInvariant);
    if (d->covered != covered) {
        d->covered = covered;
    }
}

void QStateInvariant::registerMetaTypes() const
{
    qRegisterMetaType<QLifeline *>("QLifeline *");
    qRegisterMetaType<QSet<QLifeline *>>("QSet<QLifeline *>");
    qRegisterMetaType<QList<QLifeline *>>("QList<QLifeline *>");

    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QConstraint *>");
    qRegisterMetaType<QList<QConstraint *>>("QList<QConstraint *>");

    QInteractionFragment::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QStateInvariant::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStateInvariant")][QString::fromLatin1("invariant")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStateInvariant")][QString::fromLatin1("invariant")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStateInvariant")][QString::fromLatin1("invariant")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A Constraint that should hold at runtime for this StateInvariant");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStateInvariant")][QString::fromLatin1("invariant")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStateInvariant")][QString::fromLatin1("invariant")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStateInvariant")][QString::fromLatin1("invariant")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QStateInvariant")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStateInvariant")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStateInvariant")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Lifeline on which the StateInvariant appears.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStateInvariant")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QInteractionFragment::covered");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStateInvariant")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStateInvariant")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QInteractionFragment::setPropertyData();
}

#include "moc_qstateinvariant.cpp"

QT_END_NAMESPACE_QTUML

