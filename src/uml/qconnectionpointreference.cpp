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

#include <QtUml/QPseudostate>
#include <QtUml/QState>

QT_BEGIN_NAMESPACE_QTUML

class QConnectionPointReferencePrivate
{
public:
    explicit QConnectionPointReferencePrivate();
    virtual ~QConnectionPointReferencePrivate();

    QSet<QPseudostate *> *entries;
    QSet<QPseudostate *> *exits;
    QState *state;
};

QConnectionPointReferencePrivate::QConnectionPointReferencePrivate() :
    entries(new QSet<QPseudostate *>),
    exits(new QSet<QPseudostate *>),
    state(0)
{
}

QConnectionPointReferencePrivate::~QConnectionPointReferencePrivate()
{
    delete entries;
    delete exits;
}

/*!
    \class QConnectionPointReference

    \inmodule QtUml

    \brief A connection point reference represents a usage (as part of a submachine state) of an entry/exit point defined in the statemachine reference by the submachine state.
 */

QConnectionPointReference::QConnectionPointReference(QObject *parent)
    : QObject(parent), d_ptr(new QConnectionPointReferencePrivate)
{
}

QConnectionPointReference::~QConnectionPointReference()
{
    delete d_ptr;
}

/*!
    The entryPoint kind pseudo states corresponding to this connection point.
 */
const QSet<QPseudostate *> *QConnectionPointReference::entries() const
{
    return d_ptr->entries;
}

void QConnectionPointReference::addEntry(const QPseudostate *entry)
{
    d_ptr->entries->insert(const_cast<QPseudostate *>(entry));
}

void QConnectionPointReference::removeEntry(const QPseudostate *entry)
{
    d_ptr->entries->remove(const_cast<QPseudostate *>(entry));
}

/*!
    The exitPoints kind pseudo states corresponding to this connection point.
 */
const QSet<QPseudostate *> *QConnectionPointReference::exits() const
{
    return d_ptr->exits;
}

void QConnectionPointReference::addExit(const QPseudostate *exit)
{
    d_ptr->exits->insert(const_cast<QPseudostate *>(exit));
}

void QConnectionPointReference::removeExit(const QPseudostate *exit)
{
    d_ptr->exits->remove(const_cast<QPseudostate *>(exit));
}

/*!
    The State in which the connection point refreshens are defined.
 */
QState *QConnectionPointReference::state() const
{
    return d_ptr->state;
}

void QConnectionPointReference::setState(const QState *state)
{
    d_ptr->state = const_cast<QState *>(state);
}

#include "moc_qconnectionpointreference.cpp"

QT_END_NAMESPACE_QTUML

