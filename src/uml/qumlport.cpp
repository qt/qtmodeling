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

QUmlPort::QUmlPort(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

bool QUmlPort::isBehavior() const
{
    return _isBehavior;
}

void QUmlPort::setBehavior(bool isBehavior)
{
    UmlPort::setBehavior(isBehavior);
}

bool QUmlPort::isConjugated() const
{
    return _isConjugated;
}

void QUmlPort::setConjugated(bool isConjugated)
{
    UmlPort::setConjugated(isConjugated);
}

bool QUmlPort::isService() const
{
    return _isService;
}

void QUmlPort::setService(bool isService)
{
    UmlPort::setService(isService);
}

QUmlProtocolStateMachine *QUmlPort::protocol() const
{
    return reinterpret_cast<QUmlProtocolStateMachine *>(_protocol);
}

void QUmlPort::setProtocol(QUmlProtocolStateMachine *protocol)
{
    UmlPort::setProtocol(protocol);
}

const QSet<QUmlInterface *> QUmlPort::provided() const
{
    QSet<QUmlInterface *> r;
    foreach (UmlInterface *element, UmlPort::provided())
        r.insert(reinterpret_cast<QUmlInterface *>(element));
    return r;
}

const QSet<QUmlPort *> QUmlPort::redefinedPort() const
{
    return *(reinterpret_cast<const QSet<QUmlPort *> *>(&_redefinedPort));
}

void QUmlPort::addRedefinedPort(UmlPort *redefinedPort)
{
    UmlPort::addRedefinedPort(redefinedPort);
}

void QUmlPort::removeRedefinedPort(UmlPort *redefinedPort)
{
    UmlPort::removeRedefinedPort(redefinedPort);
}

const QSet<QUmlInterface *> QUmlPort::required() const
{
    QSet<QUmlInterface *> r;
    foreach (UmlInterface *element, UmlPort::required())
        r.insert(reinterpret_cast<QUmlInterface *>(element));
    return r;
}

QT_END_NAMESPACE

