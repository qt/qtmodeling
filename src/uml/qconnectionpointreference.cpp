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

#include "qconnectionpointreference.h"
#include "qconnectionpointreference_p.h"

#include <QtUml/QPseudostate>
#include <QtUml/QState>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QConnectionPointReferencePrivate::QConnectionPointReferencePrivate() :
    state(0)
{
}

QConnectionPointReferencePrivate::~QConnectionPointReferencePrivate()
{
}

/*!
    \class QConnectionPointReference

    \inmodule QtUml

    \brief A connection point reference represents a usage (as part of a submachine state) of an entry/exit point defined in the statemachine reference by the submachine state.
 */

QConnectionPointReference::QConnectionPointReference(QWrappedObject *wrapper, QWrappedObject *parent) :
    QVertex(*new QConnectionPointReferencePrivate, wrapper, parent)
{
    setPropertyData();
}

QConnectionPointReference::QConnectionPointReference(QConnectionPointReferencePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QVertex(dd, wrapper, parent)
{
    setPropertyData();
}

QConnectionPointReference::~QConnectionPointReference()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QConnectionPointReference
// ---------------------------------------------------------------

/*!
    The exitPoints kind pseudo states corresponding to this connection point.
 */
QSet<QPseudostate *> QConnectionPointReference::exits() const
{
    // This is a read-write association end

    Q_D(const QConnectionPointReference);
    return d->exits;
}

void QConnectionPointReference::addExit(QPseudostate *exit)
{
    // This is a read-write association end

    Q_D(QConnectionPointReference);
    if (!d->exits.contains(exit)) {
        d->exits.insert(exit);
    }
}

void QConnectionPointReference::removeExit(QPseudostate *exit)
{
    // This is a read-write association end

    Q_D(QConnectionPointReference);
    if (d->exits.contains(exit)) {
        d->exits.remove(exit);
    }
}

/*!
    The State in which the connection point refreshens are defined.
 */
QState *QConnectionPointReference::state() const
{
    // This is a read-write association end

    Q_D(const QConnectionPointReference);
    return d->state;
}

void QConnectionPointReference::setState(QState *state)
{
    // This is a read-write association end

    Q_D(QConnectionPointReference);
    if (d->state != state) {
        // Adjust opposite property
        if (d->state)
            d->state->removeConnection(this);

        d->state = state;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(state));

        // Adjust opposite property
        if (state)
            state->addConnection(this);
    }
}

/*!
    The entryPoint kind pseudo states corresponding to this connection point.
 */
QSet<QPseudostate *> QConnectionPointReference::entries() const
{
    // This is a read-write association end

    Q_D(const QConnectionPointReference);
    return d->entries;
}

void QConnectionPointReference::addEntry(QPseudostate *entry)
{
    // This is a read-write association end

    Q_D(QConnectionPointReference);
    if (!d->entries.contains(entry)) {
        d->entries.insert(entry);
    }
}

void QConnectionPointReference::removeEntry(QPseudostate *entry)
{
    // This is a read-write association end

    Q_D(QConnectionPointReference);
    if (d->entries.contains(entry)) {
        d->entries.remove(entry);
    }
}

void QConnectionPointReference::registerMetaTypes() const
{
    qRegisterMetaType<QPseudostate *>("QPseudostate *");
    qRegisterMetaType<QSet<QPseudostate *>>("QSet<QPseudostate *>");
    qRegisterMetaType<QList<QPseudostate *>>("QList<QPseudostate *>");

    qRegisterMetaType<QState *>("QState *");
    qRegisterMetaType<QSet<QState *>>("QSet<QState *>");
    qRegisterMetaType<QList<QState *>>("QList<QState *>");

    QVertex::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QConnectionPointReference::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("exits")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("exits")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("exits")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The exitPoints kind pseudo states corresponding to this connection point.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("exits")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("exits")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("exits")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("state")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("state")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("state")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The State in which the connection point refreshens are defined.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("state")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("state")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("state")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QState::connection");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("entries")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("entries")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("entries")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The entryPoint kind pseudo states corresponding to this connection point.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("entries")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("entries")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectionPointReference")][QString::fromLatin1("entries")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QVertex::setPropertyData();
}

#include "moc_qconnectionpointreference.cpp"

QT_END_NAMESPACE_QTUML

