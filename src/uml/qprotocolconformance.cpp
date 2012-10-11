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
#include "qelement_p.h"
#include "qdirectedrelationship_p.h"
#include "qdirectedrelationship_p.h"

#include <QtUml/QProtocolStateMachine>

QT_BEGIN_NAMESPACE_QTUML

QProtocolConformancePrivate::QProtocolConformancePrivate() :
    specificMachine(0),
    generalMachine(0)
{
}

QProtocolConformancePrivate::~QProtocolConformancePrivate()
{
}

void QProtocolConformancePrivate::setSpecificMachine(const QProtocolStateMachine *specificMachine)
{
    // Adjust subsetted property(ies)
    removeSource(this->specificMachine);

    this->specificMachine = const_cast<QProtocolStateMachine *>(specificMachine);

    // Adjust subsetted property(ies)
    setOwner(specificMachine);
    addSource(specificMachine);
}

void QProtocolConformancePrivate::setGeneralMachine(const QProtocolStateMachine *generalMachine)
{
    // Adjust subsetted property(ies)
    removeTarget(this->generalMachine);

    this->generalMachine = const_cast<QProtocolStateMachine *>(generalMachine);

    // Adjust subsetted property(ies)
    addTarget(generalMachine);
}

/*!
    \class QProtocolConformance

    \inmodule QtUml

    \brief Protocol state machines can be redefined into more specific protocol state machines, or into behavioral state machines. Protocol conformance declares that the specific protocol state machine specifies a protocol that conforms to the general state machine one, or that the specific behavioral state machine abide by the protocol of the general protocol state machine.
 */

QProtocolConformance::QProtocolConformance(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QProtocolConformancePrivate;
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
    Q_D(const QProtocolConformance);
    return d->specificMachine;
}

void QProtocolConformance::setSpecificMachine(const QProtocolStateMachine *specificMachine)
{
    Q_D(QProtocolConformance);
    d->setSpecificMachine(const_cast<QProtocolStateMachine *>(specificMachine));
}

/*!
    Specifies the protocol state machine to which the specific state machine conforms.
 */
QProtocolStateMachine *QProtocolConformance::generalMachine() const
{
    Q_D(const QProtocolConformance);
    return d->generalMachine;
}

void QProtocolConformance::setGeneralMachine(const QProtocolStateMachine *generalMachine)
{
    Q_D(QProtocolConformance);
    d->setGeneralMachine(const_cast<QProtocolStateMachine *>(generalMachine));
}

#include "moc_qprotocolconformance.cpp"

QT_END_NAMESPACE_QTUML

