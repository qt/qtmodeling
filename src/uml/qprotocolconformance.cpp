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
//#include "qprotocolconformance_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QProtocolConformance

    \inmodule QtUml

    \brief Protocol state machines can be redefined into more specific protocol state machines, or into behavioral state machines. Protocol conformance declares that the specific protocol state machine specifies a protocol that conforms to the general state machine one, or that the specific behavioral state machine abide by the protocol of the general protocol state machine.
 */

QProtocolConformance::QProtocolConformance(QObject *parent)
    : QObject(parent)
{
}

QProtocolConformance::~QProtocolConformance()
{
}

/*!
    Specifies the protocol state machine to which the specific state machine conforms.
 */
QProtocolStateMachine *QProtocolConformance::generalMachine() const
{
}

void QProtocolConformance::setGeneralMachine(const QProtocolStateMachine *generalMachine)
{
}

/*!
    Specifies the state machine which conforms to the general state machine.
 */
QProtocolStateMachine *QProtocolConformance::specificMachine() const
{
}

void QProtocolConformance::setSpecificMachine(const QProtocolStateMachine *specificMachine)
{
}

#include "moc_qprotocolconformance.cpp"

QT_END_NAMESPACE_QTUML

