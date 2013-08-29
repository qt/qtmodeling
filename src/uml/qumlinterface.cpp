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
#include "qumlinterface.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlProtocolStateMachine>
#include <QtUml/QUmlReception>

QT_BEGIN_NAMESPACE

QUmlInterface::QUmlInterface(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QList<QUmlClassifier *> QUmlInterface::nestedClassifier() const
{
    return *(reinterpret_cast<const QList<QUmlClassifier *> *>(&_nestedClassifier));
}

void QUmlInterface::addNestedClassifier(UmlClassifier *nestedClassifier)
{
    UmlInterface::addNestedClassifier(nestedClassifier);
}

void QUmlInterface::removeNestedClassifier(UmlClassifier *nestedClassifier)
{
    UmlInterface::removeNestedClassifier(nestedClassifier);
}

const QList<QUmlProperty *> QUmlInterface::ownedAttribute() const
{
    return *(reinterpret_cast<const QList<QUmlProperty *> *>(&_ownedAttribute));
}

void QUmlInterface::addOwnedAttribute(UmlProperty *ownedAttribute)
{
    UmlInterface::addOwnedAttribute(ownedAttribute);
}

void QUmlInterface::removeOwnedAttribute(UmlProperty *ownedAttribute)
{
    UmlInterface::removeOwnedAttribute(ownedAttribute);
}

const QList<QUmlOperation *> QUmlInterface::ownedOperation() const
{
    return *(reinterpret_cast<const QList<QUmlOperation *> *>(&_ownedOperation));
}

void QUmlInterface::addOwnedOperation(UmlOperation *ownedOperation)
{
    UmlInterface::addOwnedOperation(ownedOperation);
}

void QUmlInterface::removeOwnedOperation(UmlOperation *ownedOperation)
{
    UmlInterface::removeOwnedOperation(ownedOperation);
}

const QSet<QUmlReception *> QUmlInterface::ownedReception() const
{
    return *(reinterpret_cast<const QSet<QUmlReception *> *>(&_ownedReception));
}

void QUmlInterface::addOwnedReception(UmlReception *ownedReception)
{
    UmlInterface::addOwnedReception(ownedReception);
}

void QUmlInterface::removeOwnedReception(UmlReception *ownedReception)
{
    UmlInterface::removeOwnedReception(ownedReception);
}

QUmlProtocolStateMachine *QUmlInterface::protocol() const
{
    return reinterpret_cast<QUmlProtocolStateMachine *>(_protocol);
}

void QUmlInterface::setProtocol(QUmlProtocolStateMachine *protocol)
{
    UmlInterface::setProtocol(protocol);
}

const QSet<QUmlInterface *> QUmlInterface::redefinedInterface() const
{
    return *(reinterpret_cast<const QSet<QUmlInterface *> *>(&_redefinedInterface));
}

void QUmlInterface::addRedefinedInterface(UmlInterface *redefinedInterface)
{
    UmlInterface::addRedefinedInterface(redefinedInterface);
}

void QUmlInterface::removeRedefinedInterface(UmlInterface *redefinedInterface)
{
    UmlInterface::removeRedefinedInterface(redefinedInterface);
}

QT_END_NAMESPACE

