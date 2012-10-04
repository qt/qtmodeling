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

#include "qport.h"
//#include "qport_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QPort

    \inmodule QtUml

    \brief A port has an associated protocol state machine.A port is a property of a classifier that specifies a distinct interaction point between that classifier and its environment or between the (behavior of the) classifier and its internal parts. Ports are connected to properties of the classifier by connectors through which requests can be made to invoke the behavioral features of a classifier. A Port may specify the services a classifier provides (offers) to its environment as well as the services that a classifier expects (requires) of its environment.
 */

QPort::QPort(QObject *parent)
    : QProperty(parent)
{
}

QPort::~QPort()
{
}

/*!
    Specifies whether requests arriving at this port are sent to the classifier behavior of this classifier. Such ports are referred to as behavior port. Any invocation of a behavioral feature targeted at a behavior port will be handled by the instance of the owning classifier itself, rather than by any instances that this classifier may contain.
 */
bool QPort::isBehavior() const
{
}

void QPort::setBehavior(bool isBehavior)
{
}

/*!
    Specifies the way that the provided and required interfaces are derived from the Port’s Type. The default value is false.
 */
bool QPort::isConjugated() const
{
}

void QPort::setConjugated(bool isConjugated)
{
}

/*!
    If true indicates that this port is used to provide the published functionality of a classifier; if false, this port is used to implement the classifier but is not part of the essential externally-visible functionality of the classifier and can, therefore, be altered or deleted along with the internal implementation of the classifier and other properties that are considered part of its implementation.
 */
bool QPort::isService() const
{
}

void QPort::setService(bool isService)
{
}

/*!
    References an optional protocol state machine which describes valid interactions at this interaction point.
 */
QProtocolStateMachine *QPort::protocol() const
{
}

void QPort::setProtocol(const QProtocolStateMachine *protocol)
{
}

/*!
    A port may be redefined when its containing classifier is specialized. The redefining port may have additional interfaces to those that are associated with the redefined port or it may replace an interface by one of its subtypes.
 */
const QSet<QPort *> *QPort::redefinedPorts() const
{
}

void QPort::addRedefinedPort(const QPort *redefinedPort)
{
}

void QPort::removeRedefinedPort(const QPort *redefinedPort)
{
}

/*!
    Missing derivation for Port::/provided : Interface
 */
const QSet<QInterface *> *QPort::provided() const
{
}

/*!
    Missing derivation for Port::/required : Interface
 */
const QSet<QInterface *> *QPort::required() const
{
}

#include "moc_qport.cpp"

QT_END_NAMESPACE_QTUML

