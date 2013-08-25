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
#include "qumlinterface_p.h"

#include <QtUml/QUmlOperation>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlProtocolStateMachine>
#include <QtUml/QUmlReception>

QT_BEGIN_NAMESPACE

QUmlInterfacePrivate::QUmlInterfacePrivate() :
    protocol(0)
{
}

/*!
    \class QUmlInterface

    \inmodule QtUml

    \brief Since an interface specifies conformance characteristics, it does not own detailed behavior specifications. Instead, interfaces may own a protocol state machine that specifies event sequences and pre/post conditions for the operations and receptions described by the interface.Interfaces may include receptions (in addition to operations).An interface is a kind of classifier that represents a declaration of a set of coherent public features and obligations. An interface specifies a contract; any instance of a classifier that realizes the interface must fulfill that contract. The obligations that may be associated with an interface are in the form of various kinds of constraints (such as pre- and post-conditions) or protocol specifications, which may impose ordering restrictions on interactions through the interface.
 */

QUmlInterface::QUmlInterface(bool create_d_ptr) :
    QUmlClassifier(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlInterfacePrivate);
}

// OWNED ATTRIBUTES

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
QList<QUmlClassifier *> QUmlInterface::nestedClassifier() const
{
    // This is a read-write association end

    QM_D(const QUmlInterface);
    return d->nestedClassifier;
}

void QUmlInterface::addNestedClassifier(QUmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    QM_D(QUmlInterface);
    if (!d->nestedClassifier.contains(nestedClassifier)) {
        d->nestedClassifier.append(nestedClassifier);
    }
}

void QUmlInterface::removeNestedClassifier(QUmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    QM_D(QUmlInterface);
    if (d->nestedClassifier.contains(nestedClassifier)) {
        d->nestedClassifier.removeAll(nestedClassifier);
    }
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
QList<QUmlProperty *> QUmlInterface::ownedAttribute() const
{
    // This is a read-write association end

    QM_D(const QUmlInterface);
    return d->ownedAttribute;
}

void QUmlInterface::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    QM_D(QUmlInterface);
    if (!d->ownedAttribute.contains(ownedAttribute)) {
        d->ownedAttribute.append(ownedAttribute);
    }
}

void QUmlInterface::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    QM_D(QUmlInterface);
    if (d->ownedAttribute.contains(ownedAttribute)) {
        d->ownedAttribute.removeAll(ownedAttribute);
    }
}

/*!
    The operations owned by the class.
 */
QList<QUmlOperation *> QUmlInterface::ownedOperation() const
{
    // This is a read-write association end

    QM_D(const QUmlInterface);
    return d->ownedOperation;
}

void QUmlInterface::addOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    QM_D(QUmlInterface);
    if (!d->ownedOperation.contains(ownedOperation)) {
        d->ownedOperation.append(ownedOperation);
    }
}

void QUmlInterface::removeOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    QM_D(QUmlInterface);
    if (d->ownedOperation.contains(ownedOperation)) {
        d->ownedOperation.removeAll(ownedOperation);
    }
}

/*!
    Receptions that objects providing this interface are willing to accept.
 */
QSet<QUmlReception *> QUmlInterface::ownedReception() const
{
    // This is a read-write association end

    QM_D(const QUmlInterface);
    return d->ownedReception;
}

void QUmlInterface::addOwnedReception(QUmlReception *ownedReception)
{
    // This is a read-write association end

    QM_D(QUmlInterface);
    if (!d->ownedReception.contains(ownedReception)) {
        d->ownedReception.insert(ownedReception);
    }
}

void QUmlInterface::removeOwnedReception(QUmlReception *ownedReception)
{
    // This is a read-write association end

    QM_D(QUmlInterface);
    if (d->ownedReception.contains(ownedReception)) {
        d->ownedReception.remove(ownedReception);
    }
}

/*!
    References a protocol state machine specifying the legal sequences of the invocation of the behavioral features described in the interface.
 */
QUmlProtocolStateMachine *QUmlInterface::protocol() const
{
    // This is a read-write association end

    QM_D(const QUmlInterface);
    return d->protocol;
}

void QUmlInterface::setProtocol(QUmlProtocolStateMachine *protocol)
{
    // This is a read-write association end

    QM_D(QUmlInterface);
    if (d->protocol != protocol) {
        d->protocol = protocol;
    }
}

/*!
    References all the Interfaces redefined by this Interface.
 */
QSet<QUmlInterface *> QUmlInterface::redefinedInterface() const
{
    // This is a read-write association end

    QM_D(const QUmlInterface);
    return d->redefinedInterface;
}

void QUmlInterface::addRedefinedInterface(QUmlInterface *redefinedInterface)
{
    // This is a read-write association end

    QM_D(QUmlInterface);
    if (!d->redefinedInterface.contains(redefinedInterface)) {
        d->redefinedInterface.insert(redefinedInterface);
    }
}

void QUmlInterface::removeRedefinedInterface(QUmlInterface *redefinedInterface)
{
    // This is a read-write association end

    QM_D(QUmlInterface);
    if (d->redefinedInterface.contains(redefinedInterface)) {
        d->redefinedInterface.remove(redefinedInterface);
    }
}

QT_END_NAMESPACE

