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
#include "qumlconnectionpointreference.h"
#include "qumlconnectionpointreference_p.h"

#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlState>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlConnectionPointReferencePrivate::QUmlConnectionPointReferencePrivate() :
    state(0)
{
}

QUmlConnectionPointReferencePrivate::~QUmlConnectionPointReferencePrivate()
{
}

/*!
    \class QUmlConnectionPointReference

    \inmodule QtUml

    \brief A connection point reference represents a usage (as part of a submachine state) of an entry/exit point defined in the statemachine reference by the submachine state.
 */

QUmlConnectionPointReference::QUmlConnectionPointReference(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlVertex(*new QUmlConnectionPointReferencePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlConnectionPointReference::QUmlConnectionPointReference(QUmlConnectionPointReferencePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlVertex(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlConnectionPointReference::~QUmlConnectionPointReference()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlConnectionPointReference
// ---------------------------------------------------------------

/*!
    The exitPoints kind pseudo states corresponding to this connection point.
 */
QSet<QUmlPseudostate *> QUmlConnectionPointReference::exits() const
{
    // This is a read-write association end

    Q_D(const QUmlConnectionPointReference);
    return d->exits;
}

void QUmlConnectionPointReference::addExit(QUmlPseudostate *exit)
{
    // This is a read-write association end

    Q_D(QUmlConnectionPointReference);
    if (!d->exits.contains(exit)) {
        d->exits.insert(exit);
    }
}

void QUmlConnectionPointReference::removeExit(QUmlPseudostate *exit)
{
    // This is a read-write association end

    Q_D(QUmlConnectionPointReference);
    if (d->exits.contains(exit)) {
        d->exits.remove(exit);
    }
}

/*!
    The State in which the connection point refreshens are defined.
 */
QUmlState *QUmlConnectionPointReference::state() const
{
    // This is a read-write association end

    Q_D(const QUmlConnectionPointReference);
    return d->state;
}

void QUmlConnectionPointReference::setState(QUmlState *state)
{
    // This is a read-write association end

    Q_D(QUmlConnectionPointReference);
    if (d->state != state) {
        // Adjust opposite property
        if (d->state)
            d->state->removeConnection(this);

        d->state = state;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(state));

        // Adjust opposite property
        if (state)
            state->addConnection(this);
    }
}

/*!
    The entryPoint kind pseudo states corresponding to this connection point.
 */
QSet<QUmlPseudostate *> QUmlConnectionPointReference::entries() const
{
    // This is a read-write association end

    Q_D(const QUmlConnectionPointReference);
    return d->entries;
}

void QUmlConnectionPointReference::addEntry(QUmlPseudostate *entry)
{
    // This is a read-write association end

    Q_D(QUmlConnectionPointReference);
    if (!d->entries.contains(entry)) {
        d->entries.insert(entry);
    }
}

void QUmlConnectionPointReference::removeEntry(QUmlPseudostate *entry)
{
    // This is a read-write association end

    Q_D(QUmlConnectionPointReference);
    if (d->entries.contains(entry)) {
        d->entries.remove(entry);
    }
}

void QUmlConnectionPointReference::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("exits")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("exits")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("exits")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The exitPoints kind pseudo states corresponding to this connection point.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("exits")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("exits")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("exits")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("state")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("state")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("state")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The State in which the connection point refreshens are defined.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("state")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("state")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("state")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlState::connection");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("entries")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("entries")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("entries")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The entryPoint kind pseudo states corresponding to this connection point.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("entries")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("entries")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectionPointReference")][QString::fromLatin1("entries")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlVertex::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlconnectionpointreference.cpp"

