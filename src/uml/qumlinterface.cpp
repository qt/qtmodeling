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

#include "qumlinterface.h"
#include "qumlinterface_p.h"

#include <QtUml/QUmlProtocolStateMachine>
#include <QtUml/QUmlReception>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlOperation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlInterfacePrivate::QUmlInterfacePrivate() :
    protocol(0)
{
}

QUmlInterfacePrivate::~QUmlInterfacePrivate()
{
}

/*!
    \class QUmlInterface

    \inmodule QtUml

    \brief Since an interface specifies conformance characteristics, it does not own detailed behavior specifications. Instead, interfaces may own a protocol state machine that specifies event sequences and pre/post conditions for the operations and receptions described by the interface.Interfaces may include receptions (in addition to operations).An interface is a kind of classifier that represents a declaration of a set of coherent public features and obligations. An interface specifies a contract; any instance of a classifier that realizes the interface must fulfill that contract. The obligations that may be associated with an interface are in the form of various kinds of constraints (such as pre- and post-conditions) or protocol specifications, which may impose ordering restrictions on interactions through the interface.
 */

QUmlInterface::QUmlInterface(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClassifier(*new QUmlInterfacePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlInterface::QUmlInterface(QUmlInterfacePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClassifier(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlInterface::~QUmlInterface()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlInterface
// ---------------------------------------------------------------

/*!
    References a protocol state machine specifying the legal sequences of the invocation of the behavioral features described in the interface.
 */
QUmlProtocolStateMachine *QUmlInterface::protocol() const
{
    // This is a read-write association end

    Q_D(const QUmlInterface);
    return d->protocol;
}

void QUmlInterface::setProtocol(QUmlProtocolStateMachine *protocol)
{
    // This is a read-write association end

    Q_D(QUmlInterface);
    if (d->protocol != protocol) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(d->protocol));

        d->protocol = protocol;

        // Adjust subsetted property(ies)
        if (protocol) {
            (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(protocol));
        }
    }
}

/*!
    References all the Interfaces redefined by this Interface.
 */
QSet<QUmlInterface *> QUmlInterface::redefinedInterfaces() const
{
    // This is a read-write association end

    Q_D(const QUmlInterface);
    return d->redefinedInterfaces;
}

void QUmlInterface::addRedefinedInterface(QUmlInterface *redefinedInterface)
{
    // This is a read-write association end

    Q_D(QUmlInterface);
    if (!d->redefinedInterfaces.contains(redefinedInterface)) {
        d->redefinedInterfaces.insert(redefinedInterface);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifier *>(this))->addRedefinedClassifier(qwrappedobject_cast<QUmlClassifier *>(redefinedInterface));
    }
}

void QUmlInterface::removeRedefinedInterface(QUmlInterface *redefinedInterface)
{
    // This is a read-write association end

    Q_D(QUmlInterface);
    if (d->redefinedInterfaces.contains(redefinedInterface)) {
        d->redefinedInterfaces.remove(redefinedInterface);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifier *>(this))->removeRedefinedClassifier(qwrappedobject_cast<QUmlClassifier *>(redefinedInterface));
    }
}

/*!
    Receptions that objects providing this interface are willing to accept.
 */
QSet<QUmlReception *> QUmlInterface::ownedReceptions() const
{
    // This is a read-write association end

    Q_D(const QUmlInterface);
    return d->ownedReceptions;
}

void QUmlInterface::addOwnedReception(QUmlReception *ownedReception)
{
    // This is a read-write association end

    Q_D(QUmlInterface);
    if (!d->ownedReceptions.contains(ownedReception)) {
        d->ownedReceptions.insert(ownedReception);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QUmlFeature *>(ownedReception));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedReception));
    }
}

void QUmlInterface::removeOwnedReception(QUmlReception *ownedReception)
{
    // This is a read-write association end

    Q_D(QUmlInterface);
    if (d->ownedReceptions.contains(ownedReception)) {
        d->ownedReceptions.remove(ownedReception);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QUmlFeature *>(ownedReception));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedReception));
    }
}

/*!
    The operations owned by the class.
 */
QList<QUmlOperation *> QUmlInterface::ownedOperations() const
{
    // This is a read-write association end

    Q_D(const QUmlInterface);
    return d->ownedOperations;
}

void QUmlInterface::addOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QUmlInterface);
    if (!d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.append(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QUmlFeature *>(ownedOperation));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setInterface_(this);
    }
}

void QUmlInterface::removeOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QUmlInterface);
    if (d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.removeAll(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QUmlFeature *>(ownedOperation));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setInterface_(0);
    }
}

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
QList<QUmlClassifier *> QUmlInterface::nestedClassifiers() const
{
    // This is a read-write association end

    Q_D(const QUmlInterface);
    return d->nestedClassifiers;
}

void QUmlInterface::addNestedClassifier(QUmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    Q_D(QUmlInterface);
    if (!d->nestedClassifiers.contains(nestedClassifier)) {
        d->nestedClassifiers.append(nestedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(nestedClassifier));
    }
}

void QUmlInterface::removeNestedClassifier(QUmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    Q_D(QUmlInterface);
    if (d->nestedClassifiers.contains(nestedClassifier)) {
        d->nestedClassifiers.removeAll(nestedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(nestedClassifier));
    }
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
QList<QUmlProperty *> QUmlInterface::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QUmlInterface);
    return d->ownedAttributes;
}

void QUmlInterface::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QUmlInterface);
    if (!d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addAttribute(qwrappedobject_cast<QUmlProperty *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setInterface_(this);
    }
}

void QUmlInterface::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QUmlInterface);
    if (d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeAttribute(qwrappedobject_cast<QUmlProperty *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setInterface_(0);
    }
}

void QUmlInterface::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("protocol")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("protocol")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("protocol")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References a protocol state machine specifying the legal sequences of the invocation of the behavioral features described in the interface.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("protocol")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("protocol")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("protocol")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("redefinedInterfaces")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("redefinedInterfaces")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("redefinedInterfaces")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References all the Interfaces redefined by this Interface.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("redefinedInterfaces")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("redefinedInterfaces")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlClassifier::redefinedClassifiers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("redefinedInterfaces")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Receptions that objects providing this interface are willing to accept.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlClassifier::features QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The operations owned by the class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlClassifier::features QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QOperation::interface");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References all the Classifiers that are defined (nested) within the Class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The attributes (i.e. the properties) owned by the class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers QUmlClassifier::attributes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterface")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QProperty::interface");

    QUmlClassifier::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlInterface::addRedefinedClassifier(QWrappedObjectPointer<QUmlInterface> redefinedInterface)
{
    addRedefinedInterface(redefinedInterface);
}

void QUmlInterface::removeRedefinedClassifier(QWrappedObjectPointer<QUmlInterface> redefinedInterface)
{
    removeRedefinedInterface(redefinedInterface);
}

QT_END_NAMESPACE

#include "moc_qumlinterface.cpp"

