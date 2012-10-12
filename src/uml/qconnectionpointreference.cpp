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
#include "qnamedelement_p.h"

#include <QtUml/QPseudostate>
#include <QtUml/QState>

QT_BEGIN_NAMESPACE_QTUML

QConnectionPointReferencePrivate::QConnectionPointReferencePrivate() :
    exits(new QSet<QPseudostate *>),
    state(0),
    entries(new QSet<QPseudostate *>)
{
}

QConnectionPointReferencePrivate::~QConnectionPointReferencePrivate()
{
    delete exits;
    delete entries;
}

void QConnectionPointReferencePrivate::addExit(QPseudostate *exit)
{
    this->exits->insert(exit);
}

void QConnectionPointReferencePrivate::removeExit(QPseudostate *exit)
{
    this->exits->remove(exit);
}

void QConnectionPointReferencePrivate::setState(QState *state)
{
    this->state = state;

    // Adjust subsetted property(ies)
    setNamespace_(state);
}

void QConnectionPointReferencePrivate::addEntry(QPseudostate *entry)
{
    this->entries->insert(entry);
}

void QConnectionPointReferencePrivate::removeEntry(QPseudostate *entry)
{
    this->entries->remove(entry);
}

/*!
    \class QConnectionPointReference

    \inmodule QtUml

    \brief A connection point reference represents a usage (as part of a submachine state) of an entry/exit point defined in the statemachine reference by the submachine state.
 */

QConnectionPointReference::QConnectionPointReference(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QConnectionPointReferencePrivate;
}

QConnectionPointReference::QConnectionPointReference(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QConnectionPointReferencePrivate;
}

QConnectionPointReference::~QConnectionPointReference()
{
}

/*!
    The exitPoints kind pseudo states corresponding to this connection point.
 */
const QSet<QPseudostate *> *QConnectionPointReference::exits() const
{
    QTUML_D(const QConnectionPointReference);
    return d->exits;
}

void QConnectionPointReference::addExit(QPseudostate *exit)
{
    QTUML_D(QConnectionPointReference);
    if (!d->exits->contains(exit)) {
        d->addExit(exit);
    }
}

void QConnectionPointReference::removeExit(QPseudostate *exit)
{
    QTUML_D(QConnectionPointReference);
    if (d->exits->contains(exit)) {
        d->removeExit(exit);
    }
}

/*!
    The State in which the connection point refreshens are defined.
 */
QState *QConnectionPointReference::state() const
{
    QTUML_D(const QConnectionPointReference);
    return d->state;
}

void QConnectionPointReference::setState(QState *state)
{
    QTUML_D(QConnectionPointReference);
    if (d->state != state) {
        d->setState(state);

        // Adjust opposite property
        state->addConnection(this);
    }
}

/*!
    The entryPoint kind pseudo states corresponding to this connection point.
 */
const QSet<QPseudostate *> *QConnectionPointReference::entries() const
{
    QTUML_D(const QConnectionPointReference);
    return d->entries;
}

void QConnectionPointReference::addEntry(QPseudostate *entry)
{
    QTUML_D(QConnectionPointReference);
    if (!d->entries->contains(entry)) {
        d->addEntry(entry);
    }
}

void QConnectionPointReference::removeEntry(QPseudostate *entry)
{
    QTUML_D(QConnectionPointReference);
    if (d->entries->contains(entry)) {
        d->removeEntry(entry);
    }
}

#include "moc_qconnectionpointreference.cpp"

QT_END_NAMESPACE_QTUML

