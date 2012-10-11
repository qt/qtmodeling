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

#include "qprotocolstatemachine.h"
#include "qprotocolstatemachine_p.h"
#include "qelement_p.h"

#include <QtUml/QProtocolConformance>

QT_BEGIN_NAMESPACE_QTUML

QProtocolStateMachinePrivate::QProtocolStateMachinePrivate() :
    conformance(new QSet<QProtocolConformance *>)
{
}

QProtocolStateMachinePrivate::~QProtocolStateMachinePrivate()
{
    delete conformance;
}

void QProtocolStateMachinePrivate::addConformance(const QProtocolConformance *conformance)
{
    this->conformance->insert(const_cast<QProtocolConformance *>(conformance));

    // Adjust subsetted property(ies)
    addOwnedElement(conformance);
}

void QProtocolStateMachinePrivate::removeConformance(const QProtocolConformance *conformance)
{
    this->conformance->remove(const_cast<QProtocolConformance *>(conformance));

    // Adjust subsetted property(ies)
    removeOwnedElement(conformance);
}

/*!
    \class QProtocolStateMachine

    \inmodule QtUml

    \brief A protocol state machine is always defined in the context of a classifier. It specifies which operations of the classifier can be called in which state and under which condition, thus specifying the allowed call sequences on the classifier's operations. A protocol state machine presents the possible and permitted transitions on the instances of its context classifier, together with the operations which carry the transitions. In this manner, an instance lifecycle can be created for a classifier, by specifying the order in which the operations can be activated and the states through which an instance progresses during its existence.
 */

QProtocolStateMachine::QProtocolStateMachine(QObject *parent)
    : QStateMachine(false, parent)
{
    d_umlptr = new QProtocolStateMachinePrivate;
}

QProtocolStateMachine::QProtocolStateMachine(bool createPimpl, QObject *parent)
    : QStateMachine(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QProtocolStateMachinePrivate;
}

QProtocolStateMachine::~QProtocolStateMachine()
{
}

/*!
    Conformance between protocol state machines.
 */
const QSet<QProtocolConformance *> *QProtocolStateMachine::conformance() const
{
    QTUML_D(const QProtocolStateMachine);
    return d->conformance;
}

void QProtocolStateMachine::addConformance(const QProtocolConformance *conformance)
{
    QTUML_D(QProtocolStateMachine);
    d->addConformance(const_cast<QProtocolConformance *>(conformance));
}

void QProtocolStateMachine::removeConformance(const QProtocolConformance *conformance)
{
    QTUML_D(QProtocolStateMachine);
    d->removeConformance(const_cast<QProtocolConformance *>(conformance));
}

#include "moc_qprotocolstatemachine.cpp"

QT_END_NAMESPACE_QTUML

