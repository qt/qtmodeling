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

#include "qprotocolconformance.h"
#include "qprotocolconformance_p.h"

#include <QtUml/QProtocolStateMachine>

QT_BEGIN_NAMESPACE_QTUML

QProtocolConformancePrivate::QProtocolConformancePrivate(QProtocolConformance *q_umlptr) :
    specificMachine(0),
    generalMachine(0)
{
    this->q_umlptr = q_umlptr;
}

QProtocolConformancePrivate::~QProtocolConformancePrivate()
{
}

/*!
    \class QProtocolConformance

    \inmodule QtUml

    \brief Protocol state machines can be redefined into more specific protocol state machines, or into behavioral state machines. Protocol conformance declares that the specific protocol state machine specifies a protocol that conforms to the general state machine one, or that the specific behavioral state machine abide by the protocol of the general protocol state machine.
 */

QProtocolConformance::QProtocolConformance(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QProtocolConformancePrivate(this);
}

QProtocolConformance::QProtocolConformance(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QProtocolConformancePrivate;
}

QProtocolConformance::~QProtocolConformance()
{
}

/*!
    Specifies the state machine which conforms to the general state machine.
 */
QProtocolStateMachine *QProtocolConformance::specificMachine() const
{
    // This is a read-write association end

    QTUML_D(const QProtocolConformance);
    return d->specificMachine;
}

void QProtocolConformance::setSpecificMachine(QProtocolStateMachine *specificMachine)
{
    // This is a read-write association end

    QTUML_D(QProtocolConformance);
    if (d->specificMachine != specificMachine) {
        // Adjust opposite property
        if (d->specificMachine)
            d->specificMachine->removeConformance(this);

        // Adjust subsetted property(ies)
        d->QDirectedRelationshipPrivate::removeSource(dynamic_cast<QElement *>(d->specificMachine));

        d->specificMachine = specificMachine;

        // Adjust subsetted property(ies)
        d->QElementPrivate::setOwner(dynamic_cast<QElement *>(specificMachine));
        if (specificMachine) {
            d->QDirectedRelationshipPrivate::addSource(dynamic_cast<QElement *>(specificMachine));
        }

        // Adjust opposite property
        if (specificMachine)
            specificMachine->addConformance(this);
    }
}

/*!
    Specifies the protocol state machine to which the specific state machine conforms.
 */
QProtocolStateMachine *QProtocolConformance::generalMachine() const
{
    // This is a read-write association end

    QTUML_D(const QProtocolConformance);
    return d->generalMachine;
}

void QProtocolConformance::setGeneralMachine(QProtocolStateMachine *generalMachine)
{
    // This is a read-write association end

    QTUML_D(QProtocolConformance);
    if (d->generalMachine != generalMachine) {
        // Adjust subsetted property(ies)
        d->QDirectedRelationshipPrivate::removeTarget(dynamic_cast<QElement *>(d->generalMachine));

        d->generalMachine = generalMachine;

        // Adjust subsetted property(ies)
        if (generalMachine) {
            d->QDirectedRelationshipPrivate::addTarget(dynamic_cast<QElement *>(generalMachine));
        }
    }
}

#include "moc_qprotocolconformance.cpp"

QT_END_NAMESPACE_QTUML

