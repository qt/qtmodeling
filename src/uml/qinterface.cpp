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

QInterface::QInterface(QUmlObject *parent, QUmlObject *wrapper) :
    QClassifier(*new QInterfacePrivate, parent, wrapper)
{
}

QInterface::QInterface(QInterfacePrivate &dd, QUmlObject *parent, QUmlObject *wrapper) :
    QClassifier(dd, parent, wrapper)
{
}

QInterface::~QInterface()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInterface
// ---------------------------------------------------------------

/*!
    References a protocol state machine specifying the legal sequences of the invocation of the behavioral features described in the interface.
 */
QProtocolStateMachine *QInterface::protocol() const
{
    // This is a read-write association end

    Q_D(const QInterface);
    return d->protocol;
}

void QInterface::setProtocol(QProtocolStateMachine *protocol)
{
    // This is a read-write association end

    Q_D(QInterface);
    if (d->protocol != protocol) {
        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qumlobject_cast<QNamedElement *>(d->protocol));

        d->protocol = protocol;

        // Adjust subsetted property(ies)
        if (protocol) {
            (qumlobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qumlobject_cast<QNamedElement *>(protocol));
        }
    }
}

/*!
    References all the Interfaces redefined by this Interface.
 */
const QSet<QInterface *> *QInterface::redefinedInterfaces() const
{
    // This is a read-write association end

    Q_D(const QInterface);
    return d->redefinedInterfaces;
}

void QInterface::addRedefinedInterface(QInterface *redefinedInterface)
{
    // This is a read-write association end

    Q_D(QInterface);
    if (!d->redefinedInterfaces->contains(redefinedInterface)) {
        d->redefinedInterfaces->insert(redefinedInterface);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QClassifier *>(this))->addRedefinedClassifier(qumlobject_cast<QClassifier *>(redefinedInterface));
    }
}

void QInterface::removeRedefinedInterface(QInterface *redefinedInterface)
{
    // This is a read-write association end

    Q_D(QInterface);
    if (d->redefinedInterfaces->contains(redefinedInterface)) {
        d->redefinedInterfaces->remove(redefinedInterface);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QClassifier *>(this))->removeRedefinedClassifier(qumlobject_cast<QClassifier *>(redefinedInterface));
    }
}

/*!
    Receptions that objects providing this interface are willing to accept.
 */
const QSet<QReception *> *QInterface::ownedReceptions() const
{
    // This is a read-write association end

    Q_D(const QInterface);
    return d->ownedReceptions;
}

void QInterface::addOwnedReception(QReception *ownedReception)
{
    // This is a read-write association end

    Q_D(QInterface);
    if (!d->ownedReceptions->contains(ownedReception)) {
        d->ownedReceptions->insert(ownedReception);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QClassifierPrivate *>(d))->addFeature(qumlobject_cast<QFeature *>(ownedReception));
        (qumlobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qumlobject_cast<QNamedElement *>(ownedReception));
    }
}

void QInterface::removeOwnedReception(QReception *ownedReception)
{
    // This is a read-write association end

    Q_D(QInterface);
    if (d->ownedReceptions->contains(ownedReception)) {
        d->ownedReceptions->remove(ownedReception);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QClassifierPrivate *>(d))->removeFeature(qumlobject_cast<QFeature *>(ownedReception));
        (qumlobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qumlobject_cast<QNamedElement *>(ownedReception));
    }
}

/*!
    The operations owned by the class.
 */
const QList<QOperation *> *QInterface::ownedOperations() const
{
    // This is a read-write association end

    Q_D(const QInterface);
    return d->ownedOperations;
}

void QInterface::addOwnedOperation(QOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QInterface);
    if (!d->ownedOperations->contains(ownedOperation)) {
        d->ownedOperations->append(ownedOperation);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QClassifierPrivate *>(d))->addFeature(qumlobject_cast<QFeature *>(ownedOperation));
        (qumlobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qumlobject_cast<QNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setInterface(this);
    }
}

void QInterface::removeOwnedOperation(QOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QInterface);
    if (d->ownedOperations->contains(ownedOperation)) {
        d->ownedOperations->removeAll(ownedOperation);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QClassifierPrivate *>(d))->removeFeature(qumlobject_cast<QFeature *>(ownedOperation));
        (qumlobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qumlobject_cast<QNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setInterface(0);
    }
}

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
const QList<QClassifier *> *QInterface::nestedClassifiers() const
{
    // This is a read-write association end

    Q_D(const QInterface);
    return d->nestedClassifiers;
}

void QInterface::addNestedClassifier(QClassifier *nestedClassifier)
{
    // This is a read-write association end

    Q_D(QInterface);
    if (!d->nestedClassifiers->contains(nestedClassifier)) {
        d->nestedClassifiers->append(nestedClassifier);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qumlobject_cast<QNamedElement *>(nestedClassifier));
    }
}

void QInterface::removeNestedClassifier(QClassifier *nestedClassifier)
{
    // This is a read-write association end

    Q_D(QInterface);
    if (d->nestedClassifiers->contains(nestedClassifier)) {
        d->nestedClassifiers->removeAll(nestedClassifier);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qumlobject_cast<QNamedElement *>(nestedClassifier));
    }
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
const QList<QProperty *> *QInterface::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QInterface);
    return d->ownedAttributes;
}

void QInterface::addOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QInterface);
    if (!d->ownedAttributes->contains(ownedAttribute)) {
        d->ownedAttributes->append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qumlobject_cast<QNamedElement *>(ownedAttribute));
        (qumlobject_cast<QClassifierPrivate *>(d))->addAttribute(qumlobject_cast<QProperty *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setInterface(this);
    }
}

void QInterface::removeOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QInterface);
    if (d->ownedAttributes->contains(ownedAttribute)) {
        d->ownedAttributes->removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qumlobject_cast<QNamedElement *>(ownedAttribute));
        (qumlobject_cast<QClassifierPrivate *>(d))->removeAttribute(qumlobject_cast<QProperty *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setInterface(0);
    }
}

// Overriden methods for subsetted properties

void QInterface::addRedefinedClassifier(QUmlPointer<QInterface> redefinedInterface)
{
    addRedefinedInterface(redefinedInterface);
}

void QInterface::removeRedefinedClassifier(QUmlPointer<QInterface> redefinedInterface)
{
    removeRedefinedInterface(redefinedInterface);
}

#include "moc_qinterface.cpp"

QT_END_NAMESPACE_QTUML

