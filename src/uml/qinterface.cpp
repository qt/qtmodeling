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

#include "qinterface.h"
#include "qinterface_p.h"
#include "qnamespace_p.h"
#include "qclassifier_p.h"
#include "qclassifier_p.h"
#include "qnamespace_p.h"
#include "qclassifier_p.h"
#include "qnamespace_p.h"
#include "qnamespace_p.h"
#include "qnamespace_p.h"
#include "qclassifier_p.h"

#include <QtUml/QProtocolStateMachine>
#include <QtUml/QReception>
#include <QtUml/QProperty>
#include <QtUml/QOperation>

QT_BEGIN_NAMESPACE_QTUML

QInterfacePrivate::QInterfacePrivate() :
    protocol(0),
    redefinedInterfaces(new QSet<QInterface *>),
    ownedReceptions(new QSet<QReception *>),
    ownedOperations(new QList<QOperation *>),
    nestedClassifiers(new QList<QClassifier *>),
    ownedAttributes(new QList<QProperty *>)
{
}

QInterfacePrivate::~QInterfacePrivate()
{
    delete redefinedInterfaces;
    delete ownedReceptions;
    delete ownedOperations;
    delete nestedClassifiers;
    delete ownedAttributes;
}

/*!
    \class QInterface

    \inmodule QtUml

    \brief Since an interface specifies conformance characteristics, it does not own detailed behavior specifications. Instead, interfaces may own a protocol state machine that specifies event sequences and pre/post conditions for the operations and receptions described by the interface.Interfaces may include receptions (in addition to operations).An interface is a kind of classifier that represents a declaration of a set of coherent public features and obligations. An interface specifies a contract; any instance of a classifier that realizes the interface must fulfill that contract. The obligations that may be associated with an interface are in the form of various kinds of constraints (such as pre- and post-conditions) or protocol specifications, which may impose ordering restrictions on interactions through the interface.
 */

QInterface::QInterface(QObject *parent)
    : QObject(parent), d_ptr(new QInterfacePrivate)
{
}

QInterface::~QInterface()
{
    delete d_ptr;
}

/*!
    References a protocol state machine specifying the legal sequences of the invocation of the behavioral features described in the interface.
 */
QProtocolStateMachine *QInterface::protocol() const
{
    return d_ptr->protocol;
}

void QInterface::setProtocol(const QProtocolStateMachine *protocol)
{
    d_ptr->protocol = const_cast<QProtocolStateMachine *>(protocol);
}

/*!
    References all the Interfaces redefined by this Interface.
 */
const QSet<QInterface *> *QInterface::redefinedInterfaces() const
{
    return d_ptr->redefinedInterfaces;
}

void QInterface::addRedefinedInterface(const QInterface *redefinedInterface)
{
    d_ptr->redefinedInterfaces->insert(const_cast<QInterface *>(redefinedInterface));
}

void QInterface::removeRedefinedInterface(const QInterface *redefinedInterface)
{
    d_ptr->redefinedInterfaces->remove(const_cast<QInterface *>(redefinedInterface));
}

/*!
    Receptions that objects providing this interface are willing to accept.
 */
const QSet<QReception *> *QInterface::ownedReceptions() const
{
    return d_ptr->ownedReceptions;
}

void QInterface::addOwnedReception(const QReception *ownedReception)
{
    d_ptr->ownedReceptions->insert(const_cast<QReception *>(ownedReception));
}

void QInterface::removeOwnedReception(const QReception *ownedReception)
{
    d_ptr->ownedReceptions->remove(const_cast<QReception *>(ownedReception));
}

/*!
    The operations owned by the class.
 */
const QList<QOperation *> *QInterface::ownedOperations() const
{
    return d_ptr->ownedOperations;
}

void QInterface::addOwnedOperation(const QOperation *ownedOperation)
{
    d_ptr->ownedOperations->append(const_cast<QOperation *>(ownedOperation));
}

void QInterface::removeOwnedOperation(const QOperation *ownedOperation)
{
    d_ptr->ownedOperations->removeAll(const_cast<QOperation *>(ownedOperation));
}

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
const QList<QClassifier *> *QInterface::nestedClassifiers() const
{
    return d_ptr->nestedClassifiers;
}

void QInterface::addNestedClassifier(const QClassifier *nestedClassifier)
{
    d_ptr->nestedClassifiers->append(const_cast<QClassifier *>(nestedClassifier));
}

void QInterface::removeNestedClassifier(const QClassifier *nestedClassifier)
{
    d_ptr->nestedClassifiers->removeAll(const_cast<QClassifier *>(nestedClassifier));
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
const QList<QProperty *> *QInterface::ownedAttributes() const
{
    return d_ptr->ownedAttributes;
}

void QInterface::addOwnedAttribute(const QProperty *ownedAttribute)
{
    d_ptr->ownedAttributes->append(const_cast<QProperty *>(ownedAttribute));
}

void QInterface::removeOwnedAttribute(const QProperty *ownedAttribute)
{
    d_ptr->ownedAttributes->removeAll(const_cast<QProperty *>(ownedAttribute));
}

#include "moc_qinterface.cpp"

QT_END_NAMESPACE_QTUML

