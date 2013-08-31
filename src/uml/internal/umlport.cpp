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
#include "umlport_p.h"

#include "private/umlinterface_p.h"
#include "private/umlprotocolstatemachine_p.h"

UmlPort::UmlPort() :
    _isBehavior(false),
    _isConjugated(false),
    _isService(true),
    _protocol(0)
{
}

// OWNED ATTRIBUTES

bool UmlPort::isBehavior() const
{
    // This is a read-write property

    return _isBehavior;
}

void UmlPort::setBehavior(bool isBehavior)
{
    // This is a read-write property

    if (_isBehavior != isBehavior) {
        _isBehavior = isBehavior;
    }
}

bool UmlPort::isConjugated() const
{
    // This is a read-write property

    return _isConjugated;
}

void UmlPort::setConjugated(bool isConjugated)
{
    // This is a read-write property

    if (_isConjugated != isConjugated) {
        _isConjugated = isConjugated;
    }
}

bool UmlPort::isService() const
{
    // This is a read-write property

    return _isService;
}

void UmlPort::setService(bool isService)
{
    // This is a read-write property

    if (_isService != isService) {
        _isService = isService;
    }
}

UmlProtocolStateMachine *UmlPort::protocol() const
{
    // This is a read-write association end

    return _protocol;
}

void UmlPort::setProtocol(UmlProtocolStateMachine *protocol)
{
    // This is a read-write association end

    if (_protocol != protocol) {
        _protocol = protocol;
    }
}

const QSet<UmlInterface *> UmlPort::provided() const
{
    // This is a read-only derived association end

    qWarning("UmlPort::provided(): to be implemented (this is a derived association end)");

    return QSet<UmlInterface *>();
}

void UmlPort::addProvided(UmlInterface *provided)
{
    // This is a read-only derived association end

    qWarning("UmlPort::provided(): to be implemented (this is a derived association end)");
    Q_UNUSED(provided);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void UmlPort::removeProvided(UmlInterface *provided)
{
    // This is a read-only derived association end

    qWarning("UmlPort::provided(): to be implemented (this is a derived association end)");
    Q_UNUSED(provided);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

const QSet<UmlPort *> UmlPort::redefinedPort() const
{
    // This is a read-write association end

    return _redefinedPort;
}

void UmlPort::addRedefinedPort(UmlPort *redefinedPort)
{
    // This is a read-write association end

    if (!_redefinedPort.contains(redefinedPort)) {
        _redefinedPort.insert(redefinedPort);

        // Adjust subsetted properties
        addRedefinedProperty(redefinedPort);
    }
}

void UmlPort::removeRedefinedPort(UmlPort *redefinedPort)
{
    // This is a read-write association end

    if (_redefinedPort.contains(redefinedPort)) {
        _redefinedPort.remove(redefinedPort);

        // Adjust subsetted properties
        removeRedefinedProperty(redefinedPort);
    }
}

const QSet<UmlInterface *> UmlPort::required() const
{
    // This is a read-only derived association end

    qWarning("UmlPort::required(): to be implemented (this is a derived association end)");

    return QSet<UmlInterface *>();
}

void UmlPort::addRequired(UmlInterface *required)
{
    // This is a read-only derived association end

    qWarning("UmlPort::required(): to be implemented (this is a derived association end)");
    Q_UNUSED(required);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void UmlPort::removeRequired(UmlInterface *required)
{
    // This is a read-only derived association end

    qWarning("UmlPort::required(): to be implemented (this is a derived association end)");
    Q_UNUSED(required);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

