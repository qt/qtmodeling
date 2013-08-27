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
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlOperation>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlProtocolStateMachine>
#include <QtUml/QUmlReception>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlInterface

    \inmodule QtUml

    \brief Since an interface specifies conformance characteristics, it does not own detailed behavior specifications. Instead, interfaces may own a protocol state machine that specifies event sequences and pre/post conditions for the operations and receptions described by the interface.Interfaces may include receptions (in addition to operations).An interface is a kind of classifier that represents a declaration of a set of coherent public features and obligations. An interface specifies a contract; any instance of a classifier that realizes the interface must fulfill that contract. The obligations that may be associated with an interface are in the form of various kinds of constraints (such as pre- and post-conditions) or protocol specifications, which may impose ordering restrictions on interactions through the interface.
 */

QUmlInterface::QUmlInterface() :
    _protocol(0)
{
    d_ptr->object.setProperty("nestedClassifier", QVariant::fromValue(&_nestedClassifier));
    d_ptr->object.setProperty("ownedAttribute", QVariant::fromValue(&_ownedAttribute));
    d_ptr->object.setProperty("ownedOperation", QVariant::fromValue(&_ownedOperation));
    d_ptr->object.setProperty("ownedReception", QVariant::fromValue(&_ownedReception));
    d_ptr->object.setProperty("protocol", QVariant::fromValue((QUmlProtocolStateMachine *)(0)));
    d_ptr->object.setProperty("redefinedInterface", QVariant::fromValue(&_redefinedInterface));
}

// OWNED ATTRIBUTES

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
const QList<QUmlClassifier *> QUmlInterface::nestedClassifier() const
{
    // This is a read-write association end

    return _nestedClassifier;
}

void QUmlInterface::addNestedClassifier(QUmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    if (!_nestedClassifier.contains(nestedClassifier)) {
        _nestedClassifier.append(nestedClassifier);

        // Adjust subsetted properties
        addOwnedMember(nestedClassifier);
    }
}

void QUmlInterface::removeNestedClassifier(QUmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    if (_nestedClassifier.contains(nestedClassifier)) {
        _nestedClassifier.removeAll(nestedClassifier);

        // Adjust subsetted properties
        removeOwnedMember(nestedClassifier);
    }
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
const QList<QUmlProperty *> QUmlInterface::ownedAttribute() const
{
    // This is a read-write association end

    return _ownedAttribute;
}

void QUmlInterface::addOwnedAttribute(QUmlProperty *ownedAttribute)
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

void QUmlInterface::removeOwnedAttribute(QUmlProperty *ownedAttribute)
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

/*!
    The operations owned by the class.
 */
const QList<QUmlOperation *> QUmlInterface::ownedOperation() const
{
    // This is a read-write association end

    return _ownedOperation;
}

void QUmlInterface::addOwnedOperation(QUmlOperation *ownedOperation)
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

void QUmlInterface::removeOwnedOperation(QUmlOperation *ownedOperation)
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

/*!
    Receptions that objects providing this interface are willing to accept.
 */
const QSet<QUmlReception *> QUmlInterface::ownedReception() const
{
    // This is a read-write association end

    return _ownedReception;
}

void QUmlInterface::addOwnedReception(QUmlReception *ownedReception)
{
    // This is a read-write association end

    if (!_ownedReception.contains(ownedReception)) {
        _ownedReception.insert(ownedReception);

        // Adjust subsetted properties
        addFeature(ownedReception);
        addOwnedMember(ownedReception);
    }
}

void QUmlInterface::removeOwnedReception(QUmlReception *ownedReception)
{
    // This is a read-write association end

    if (_ownedReception.contains(ownedReception)) {
        _ownedReception.remove(ownedReception);

        // Adjust subsetted properties
        removeFeature(ownedReception);
        removeOwnedMember(ownedReception);
    }
}

/*!
    References a protocol state machine specifying the legal sequences of the invocation of the behavioral features described in the interface.
 */
QUmlProtocolStateMachine *QUmlInterface::protocol() const
{
    // This is a read-write association end

    return _protocol;
}

void QUmlInterface::setProtocol(QUmlProtocolStateMachine *protocol)
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

/*!
    References all the Interfaces redefined by this Interface.
 */
const QSet<QUmlInterface *> QUmlInterface::redefinedInterface() const
{
    // This is a read-write association end

    return _redefinedInterface;
}

void QUmlInterface::addRedefinedInterface(QUmlInterface *redefinedInterface)
{
    // This is a read-write association end

    if (!_redefinedInterface.contains(redefinedInterface)) {
        _redefinedInterface.insert(redefinedInterface);

        // Adjust subsetted properties
        addRedefinedClassifier(redefinedInterface);
    }
}

void QUmlInterface::removeRedefinedInterface(QUmlInterface *redefinedInterface)
{
    // This is a read-write association end

    if (_redefinedInterface.contains(redefinedInterface)) {
        _redefinedInterface.remove(redefinedInterface);

        // Adjust subsetted properties
        removeRedefinedClassifier(redefinedInterface);
    }
}

QT_END_NAMESPACE

