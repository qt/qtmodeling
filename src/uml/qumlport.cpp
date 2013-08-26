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
#include "qumlport.h"

#include <QtUml/QUmlInterface>
#include <QtUml/QUmlProtocolStateMachine>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlPort

    \inmodule QtUml

    \brief A port has an associated protocol state machine.A port is a property of a classifier that specifies a distinct interaction point between that classifier and its environment or between the (behavior of the) classifier and its internal parts. Ports are connected to properties of the classifier by connectors through which requests can be made to invoke the behavioral features of a classifier. A Port may specify the services a classifier provides (offers) to its environment as well as the services that a classifier expects (requires) of its environment.
 */

QUmlPort::QUmlPort() :
    _isBehavior(false),
    _isConjugated(false),
    _isService(true),
    _protocol(0)
{
}

// OWNED ATTRIBUTES

/*!
    Specifies whether requests arriving at this port are sent to the classifier behavior of this classifier. Such ports are referred to as behavior port. Any invocation of a behavioral feature targeted at a behavior port will be handled by the instance of the owning classifier itself, rather than by any instances that this classifier may contain.
 */
bool QUmlPort::isBehavior() const
{
    // This is a read-write property

    return _isBehavior;
}

void QUmlPort::setBehavior(bool isBehavior)
{
    // This is a read-write property

    if (_isBehavior != isBehavior) {
        _isBehavior = isBehavior;
    }
}

/*!
    Specifies the way that the provided and required interfaces are derived from the Port’s Type. The default value is false.
 */
bool QUmlPort::isConjugated() const
{
    // This is a read-write property

    return _isConjugated;
}

void QUmlPort::setConjugated(bool isConjugated)
{
    // This is a read-write property

    if (_isConjugated != isConjugated) {
        _isConjugated = isConjugated;
    }
}

/*!
    If true indicates that this port is used to provide the published functionality of a classifier; if false, this port is used to implement the classifier but is not part of the essential externally-visible functionality of the classifier and can, therefore, be altered or deleted along with the internal implementation of the classifier and other properties that are considered part of its implementation.
 */
bool QUmlPort::isService() const
{
    // This is a read-write property

    return _isService;
}

void QUmlPort::setService(bool isService)
{
    // This is a read-write property

    if (_isService != isService) {
        _isService = isService;
    }
}

/*!
    References an optional protocol state machine which describes valid interactions at this interaction point.
 */
QUmlProtocolStateMachine *QUmlPort::protocol() const
{
    // This is a read-write association end

    return _protocol;
}

void QUmlPort::setProtocol(QUmlProtocolStateMachine *protocol)
{
    // This is a read-write association end

    if (_protocol != protocol) {
        _protocol = protocol;
    }
}

/*!
    References the interfaces specifying the set of operations and receptions that the classifier offers to its environment via this port, and which it will handle either directly or by forwarding it to a part of its internal structure. This association is derived according to the value of isConjugated. If isConjugated is false, provided is derived as the union of the sets of interfaces realized by the type of the port and its supertypes, or directly from the type of the port if the port is typed by an interface. If isConjugated is true, it is derived as the union of the sets of interfaces used by the type of the port and its supertypes.
 */
QSet<QUmlInterface *> QUmlPort::provided() const
{
    // This is a read-only derived association end

    qWarning("QUmlPort::provided(): to be implemented (this is a derived association end)");

    return QSet<QUmlInterface *>();
}

void QUmlPort::addProvided(QUmlInterface *provided)
{
    // This is a read-only derived association end

    qWarning("QUmlPort::provided(): to be implemented (this is a derived association end)");
    Q_UNUSED(provided);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlPort::removeProvided(QUmlInterface *provided)
{
    // This is a read-only derived association end

    qWarning("QUmlPort::provided(): to be implemented (this is a derived association end)");
    Q_UNUSED(provided);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    A port may be redefined when its containing classifier is specialized. The redefining port may have additional interfaces to those that are associated with the redefined port or it may replace an interface by one of its subtypes.
 */
QSet<QUmlPort *> QUmlPort::redefinedPort() const
{
    // This is a read-write association end

    return _redefinedPort;
}

void QUmlPort::addRedefinedPort(QUmlPort *redefinedPort)
{
    // This is a read-write association end

    if (!_redefinedPort.contains(redefinedPort)) {
        _redefinedPort.insert(redefinedPort);
    }
}

void QUmlPort::removeRedefinedPort(QUmlPort *redefinedPort)
{
    // This is a read-write association end

    if (_redefinedPort.contains(redefinedPort)) {
        _redefinedPort.remove(redefinedPort);
    }
}

/*!
    References the interfaces specifying the set of operations and receptions that the classifier expects its environment to handle via this port. This association is derived according to the value of isConjugated. If isConjugated is false, required is derived as the union of the sets of interfaces used by the type of the port and its supertypes. If isConjugated is true, it is derived as the union of the sets of interfaces realized by the type of the port and its supertypes, or directly from the type of the port if the port is typed by an interface.
 */
QSet<QUmlInterface *> QUmlPort::required() const
{
    // This is a read-only derived association end

    qWarning("QUmlPort::required(): to be implemented (this is a derived association end)");

    return QSet<QUmlInterface *>();
}

void QUmlPort::addRequired(QUmlInterface *required)
{
    // This is a read-only derived association end

    qWarning("QUmlPort::required(): to be implemented (this is a derived association end)");
    Q_UNUSED(required);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlPort::removeRequired(QUmlInterface *required)
{
    // This is a read-only derived association end

    qWarning("QUmlPort::required(): to be implemented (this is a derived association end)");
    Q_UNUSED(required);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

QT_END_NAMESPACE

