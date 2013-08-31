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
#include "umlinterface_p.h"

#include "private/umloperation_p.h"
#include "private/umlproperty_p.h"
#include "private/umlprotocolstatemachine_p.h"
#include "private/umlreception_p.h"

UmlInterface::UmlInterface() :
    _protocol(0)
{
}

// OWNED ATTRIBUTES

const QList<UmlClassifier *> UmlInterface::nestedClassifier() const
{
    // This is a read-write association end

    return _nestedClassifier;
}

void UmlInterface::addNestedClassifier(UmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    if (!_nestedClassifier.contains(nestedClassifier)) {
        _nestedClassifier.append(nestedClassifier);

        // Adjust subsetted properties
        addOwnedMember(nestedClassifier);
    }
}

void UmlInterface::removeNestedClassifier(UmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    if (_nestedClassifier.contains(nestedClassifier)) {
        _nestedClassifier.removeAll(nestedClassifier);

        // Adjust subsetted properties
        removeOwnedMember(nestedClassifier);
    }
}

const QList<UmlProperty *> UmlInterface::ownedAttribute() const
{
    // This is a read-write association end

    return _ownedAttribute;
}

void UmlInterface::addOwnedAttribute(UmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (!_ownedAttribute.contains(ownedAttribute)) {
        _ownedAttribute.append(ownedAttribute);

        // Adjust subsetted properties
        addOwnedMember(ownedAttribute);
        addAttribute(ownedAttribute);

        // Adjust opposite properties
        if (ownedAttribute) {
            ownedAttribute->setInterface(this);
        }
    }
}

void UmlInterface::removeOwnedAttribute(UmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (_ownedAttribute.contains(ownedAttribute)) {
        _ownedAttribute.removeAll(ownedAttribute);

        // Adjust subsetted properties
        removeOwnedMember(ownedAttribute);
        removeAttribute(ownedAttribute);

        // Adjust opposite properties
        if (ownedAttribute) {
            ownedAttribute->setInterface(0);
        }
    }
}

const QList<UmlOperation *> UmlInterface::ownedOperation() const
{
    // This is a read-write association end

    return _ownedOperation;
}

void UmlInterface::addOwnedOperation(UmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (!_ownedOperation.contains(ownedOperation)) {
        _ownedOperation.append(ownedOperation);

        // Adjust subsetted properties
        addFeature(ownedOperation);
        addOwnedMember(ownedOperation);

        // Adjust opposite properties
        if (ownedOperation) {
            ownedOperation->setInterface(this);
        }
    }
}

void UmlInterface::removeOwnedOperation(UmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (_ownedOperation.contains(ownedOperation)) {
        _ownedOperation.removeAll(ownedOperation);

        // Adjust subsetted properties
        removeFeature(ownedOperation);
        removeOwnedMember(ownedOperation);

        // Adjust opposite properties
        if (ownedOperation) {
            ownedOperation->setInterface(0);
        }
    }
}

const QSet<UmlReception *> UmlInterface::ownedReception() const
{
    // This is a read-write association end

    return _ownedReception;
}

void UmlInterface::addOwnedReception(UmlReception *ownedReception)
{
    // This is a read-write association end

    if (!_ownedReception.contains(ownedReception)) {
        _ownedReception.insert(ownedReception);

        // Adjust subsetted properties
        addFeature(ownedReception);
        addOwnedMember(ownedReception);
    }
}

void UmlInterface::removeOwnedReception(UmlReception *ownedReception)
{
    // This is a read-write association end

    if (_ownedReception.contains(ownedReception)) {
        _ownedReception.remove(ownedReception);

        // Adjust subsetted properties
        removeFeature(ownedReception);
        removeOwnedMember(ownedReception);
    }
}

UmlProtocolStateMachine *UmlInterface::protocol() const
{
    // This is a read-write association end

    return _protocol;
}

void UmlInterface::setProtocol(UmlProtocolStateMachine *protocol)
{
    // This is a read-write association end

    if (_protocol != protocol) {
        // Adjust subsetted properties
        removeOwnedMember(_protocol);

        _protocol = protocol;

        // Adjust subsetted properties
        if (protocol) {
            addOwnedMember(protocol);
        }
    }
}

const QSet<UmlInterface *> UmlInterface::redefinedInterface() const
{
    // This is a read-write association end

    return _redefinedInterface;
}

void UmlInterface::addRedefinedInterface(UmlInterface *redefinedInterface)
{
    // This is a read-write association end

    if (!_redefinedInterface.contains(redefinedInterface)) {
        _redefinedInterface.insert(redefinedInterface);

        // Adjust subsetted properties
        addRedefinedClassifier(redefinedInterface);
    }
}

void UmlInterface::removeRedefinedInterface(UmlInterface *redefinedInterface)
{
    // This is a read-write association end

    if (_redefinedInterface.contains(redefinedInterface)) {
        _redefinedInterface.remove(redefinedInterface);

        // Adjust subsetted properties
        removeRedefinedClassifier(redefinedInterface);
    }
}

