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
  
void QInterfacePrivate::setProtocol(const QProtocolStateMachine *protocol) 
{  
    this->protocol = const_cast<QProtocolStateMachine *>(protocol);   
}
  
void QInterfacePrivate::addRedefinedInterface(const QInterface *redefinedInterface) 
{   
    this->redefinedInterfaces->insert(const_cast<QInterface *>(redefinedInterface)); 

    // Adjust subsetted property(ies)
    addRedefinedClassifier(redefinedInterface); 
}
 
void QInterfacePrivate::removeRedefinedInterface(const QInterface *redefinedInterface) 
{    
    this->redefinedInterfaces->remove(const_cast<QInterface *>(redefinedInterface)); 

    // Adjust subsetted property(ies)
    removeRedefinedClassifier(redefinedInterface);
}
  
void QInterfacePrivate::addOwnedReception(const QReception *ownedReception) 
{   
    this->ownedReceptions->insert(const_cast<QReception *>(ownedReception)); 

    // Adjust subsetted property(ies)
    addFeature(ownedReception);
    addOwnedMember(ownedReception); 
}
 
void QInterfacePrivate::removeOwnedReception(const QReception *ownedReception) 
{    
    this->ownedReceptions->remove(const_cast<QReception *>(ownedReception)); 

    // Adjust subsetted property(ies)
    removeFeature(ownedReception);
    removeOwnedMember(ownedReception);
}
  
void QInterfacePrivate::addOwnedOperation(const QOperation *ownedOperation) 
{   
    this->ownedOperations->append(const_cast<QOperation *>(ownedOperation)); 

    // Adjust subsetted property(ies)
    addFeature(ownedOperation);
    addOwnedMember(ownedOperation); 
}
 
void QInterfacePrivate::removeOwnedOperation(const QOperation *ownedOperation) 
{    
    this->ownedOperations->removeAll(const_cast<QOperation *>(ownedOperation)); 

    // Adjust subsetted property(ies)
    removeFeature(ownedOperation);
    removeOwnedMember(ownedOperation);
}
  
void QInterfacePrivate::addNestedClassifier(const QClassifier *nestedClassifier) 
{   
    this->nestedClassifiers->append(const_cast<QClassifier *>(nestedClassifier)); 

    // Adjust subsetted property(ies)
    addOwnedMember(nestedClassifier); 
}
 
void QInterfacePrivate::removeNestedClassifier(const QClassifier *nestedClassifier) 
{    
    this->nestedClassifiers->removeAll(const_cast<QClassifier *>(nestedClassifier)); 

    // Adjust subsetted property(ies)
    removeOwnedMember(nestedClassifier);
}
  
void QInterfacePrivate::addOwnedAttribute(const QProperty *ownedAttribute) 
{   
    this->ownedAttributes->append(const_cast<QProperty *>(ownedAttribute)); 

    // Adjust subsetted property(ies)
    addOwnedMember(ownedAttribute);
    addAttribute(ownedAttribute); 
}
 
void QInterfacePrivate::removeOwnedAttribute(const QProperty *ownedAttribute) 
{    
    this->ownedAttributes->removeAll(const_cast<QProperty *>(ownedAttribute)); 

    // Adjust subsetted property(ies)
    removeOwnedMember(ownedAttribute);
    removeAttribute(ownedAttribute);
}

/*!
    \class QInterface

    \inmodule QtUml

    \brief Since an interface specifies conformance characteristics, it does not own detailed behavior specifications. Instead, interfaces may own a protocol state machine that specifies event sequences and pre/post conditions for the operations and receptions described by the interface.Interfaces may include receptions (in addition to operations).An interface is a kind of classifier that represents a declaration of a set of coherent public features and obligations. An interface specifies a contract; any instance of a classifier that realizes the interface must fulfill that contract. The obligations that may be associated with an interface are in the form of various kinds of constraints (such as pre- and post-conditions) or protocol specifications, which may impose ordering restrictions on interactions through the interface.
 */

QInterface::QInterface(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QInterfacePrivate;
}

QInterface::QInterface(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QInterfacePrivate;
}

QInterface::~QInterface()
{
}

/*!
    References a protocol state machine specifying the legal sequences of the invocation of the behavioral features described in the interface.
 */
QProtocolStateMachine *QInterface::protocol() const
{
    Q_D(const QInterface);
    return d->protocol;
}

void QInterface::setProtocol(const QProtocolStateMachine *protocol)
{
    Q_D(QInterface);
    d->setProtocol(const_cast<QProtocolStateMachine *>(protocol));
}

/*!
    References all the Interfaces redefined by this Interface.
 */
const QSet<QInterface *> *QInterface::redefinedInterfaces() const
{
    Q_D(const QInterface);
    return d->redefinedInterfaces;
}

void QInterface::addRedefinedInterface(const QInterface *redefinedInterface)
{
    Q_D(QInterface);
    d->addRedefinedInterface(const_cast<QInterface *>(redefinedInterface));
}

void QInterface::removeRedefinedInterface(const QInterface *redefinedInterface)
{
    Q_D(QInterface);
    d->removeRedefinedInterface(const_cast<QInterface *>(redefinedInterface));
}

/*!
    Receptions that objects providing this interface are willing to accept.
 */
const QSet<QReception *> *QInterface::ownedReceptions() const
{
    Q_D(const QInterface);
    return d->ownedReceptions;
}

void QInterface::addOwnedReception(const QReception *ownedReception)
{
    Q_D(QInterface);
    d->addOwnedReception(const_cast<QReception *>(ownedReception));
}

void QInterface::removeOwnedReception(const QReception *ownedReception)
{
    Q_D(QInterface);
    d->removeOwnedReception(const_cast<QReception *>(ownedReception));
}

/*!
    The operations owned by the class.
 */
const QList<QOperation *> *QInterface::ownedOperations() const
{
    Q_D(const QInterface);
    return d->ownedOperations;
}

void QInterface::addOwnedOperation(const QOperation *ownedOperation)
{
    Q_D(QInterface);
    d->addOwnedOperation(const_cast<QOperation *>(ownedOperation));
}

void QInterface::removeOwnedOperation(const QOperation *ownedOperation)
{
    Q_D(QInterface);
    d->removeOwnedOperation(const_cast<QOperation *>(ownedOperation));
}

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
const QList<QClassifier *> *QInterface::nestedClassifiers() const
{
    Q_D(const QInterface);
    return d->nestedClassifiers;
}

void QInterface::addNestedClassifier(const QClassifier *nestedClassifier)
{
    Q_D(QInterface);
    d->addNestedClassifier(const_cast<QClassifier *>(nestedClassifier));
}

void QInterface::removeNestedClassifier(const QClassifier *nestedClassifier)
{
    Q_D(QInterface);
    d->removeNestedClassifier(const_cast<QClassifier *>(nestedClassifier));
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
const QList<QProperty *> *QInterface::ownedAttributes() const
{
    Q_D(const QInterface);
    return d->ownedAttributes;
}

void QInterface::addOwnedAttribute(const QProperty *ownedAttribute)
{
    Q_D(QInterface);
    d->addOwnedAttribute(const_cast<QProperty *>(ownedAttribute));
}

void QInterface::removeOwnedAttribute(const QProperty *ownedAttribute)
{
    Q_D(QInterface);
    d->removeOwnedAttribute(const_cast<QProperty *>(ownedAttribute));
}

#include "moc_qinterface.cpp"

QT_END_NAMESPACE_QTUML

