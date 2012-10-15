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

#include "qclass.h"
#include "qclass_p.h"
#include "qextension_p.h"

#include <QtUml/QReception>
#include <QtUml/QNamedElement>
#include <QtUml/QOperation>
#include <QtUml/QClassifier>
#include <QtUml/QExtension>
#include <QtUml/QProperty>

QT_BEGIN_NAMESPACE_QTUML

QClassPrivate::QClassPrivate(QClass *q_umlptr) :
    isAbstract(false),
    isActive(false),
    nestedClassifiers(new QList<QClassifier *>),
    ownedReceptions(new QSet<QReception *>),
    ownedOperations(new QList<QOperation *>),
    ownedAttributes(new QList<QProperty *>)
{
    this->q_umlptr = q_umlptr;
}

QClassPrivate::~QClassPrivate()
{
    delete nestedClassifiers;
    delete ownedReceptions;
    delete ownedOperations;
    delete ownedAttributes;
}

void QClassPrivate::addExtension(QExtension *extension)
{
    // This is a read-only derived association end

    qWarning("QClass::addExtension: to be implemented (this is a derived associationend)");

    if (false /* <derivedinclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        QTUML_Q(QClass);
        (dynamic_cast<QExtensionPrivate *>(extension->d_umlptr))->setMetaclass(q);
    }
}

void QClassPrivate::removeExtension(QExtension *extension)
{
    // This is a read-only derived association end

    qWarning("QClass::removeExtension: to be implemented (this is a derived associationend)");

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        QTUML_Q(QClass);
        (dynamic_cast<QExtensionPrivate *>(extension->d_umlptr))->setMetaclass(0);
    }
}

/*!
    \class QClass

    \inmodule QtUml

    \brief A class may be designated as active (i.e., each of its instances having its own thread of control) or passive (i.e., each of its instances executing within the context of some other object). A class may also specify which signals the instances of this class handle.A class describes a set of objects that share the same specifications of features, constraints, and semantics.A class has the capability to have an internal structure and ports.Class has derived association that indicates how it may be extended through one or more stereotypes. Stereotype is the only kind of metaclass that cannot be extended by stereotypes.
 */

QClass::QClass(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QClassPrivate(this);
}

QClass::QClass(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QClassPrivate;
}

QClass::~QClass()
{
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract.
 */
bool QClass::isAbstract() const
{
    // This is a read-write attribute

    QTUML_D(const QClass);
    return d->isAbstract;
}

void QClass::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    QTUML_D(QClass);
    if (d->isAbstract != isAbstract) {
        d->isAbstract = isAbstract;
    }
}

/*!
    Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class.
 */
bool QClass::isActive() const
{
    // This is a read-write attribute

    QTUML_D(const QClass);
    return d->isActive;
}

void QClass::setActive(bool isActive)
{
    // This is a read-write attribute

    QTUML_D(QClass);
    if (d->isActive != isActive) {
        d->isActive = isActive;
    }
}

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
const QList<QClassifier *> *QClass::nestedClassifiers() const
{
    // This is a read-write association end

    QTUML_D(const QClass);
    return d->nestedClassifiers;
}

void QClass::addNestedClassifier(QClassifier *nestedClassifier)
{
    // This is a read-write association end

    QTUML_D(QClass);
    if (!d->nestedClassifiers->contains(nestedClassifier)) {
        d->nestedClassifiers->append(nestedClassifier);

        // Adjust subsetted property(ies)
        d->addOwnedMember(nestedClassifier);
    }
}

void QClass::removeNestedClassifier(QClassifier *nestedClassifier)
{
    // This is a read-write association end

    QTUML_D(QClass);
    if (d->nestedClassifiers->contains(nestedClassifier)) {
        d->nestedClassifiers->removeAll(nestedClassifier);

        // Adjust subsetted property(ies)
        d->removeOwnedMember(nestedClassifier);
    }
}

/*!
    Receptions that objects of this class are willing to accept.
 */
const QSet<QReception *> *QClass::ownedReceptions() const
{
    // This is a read-write association end

    QTUML_D(const QClass);
    return d->ownedReceptions;
}

void QClass::addOwnedReception(QReception *ownedReception)
{
    // This is a read-write association end

    QTUML_D(QClass);
    if (!d->ownedReceptions->contains(ownedReception)) {
        d->ownedReceptions->insert(ownedReception);

        // Adjust subsetted property(ies)
        d->addFeature(ownedReception);
        d->addOwnedMember(ownedReception);
    }
}

void QClass::removeOwnedReception(QReception *ownedReception)
{
    // This is a read-write association end

    QTUML_D(QClass);
    if (d->ownedReceptions->contains(ownedReception)) {
        d->ownedReceptions->remove(ownedReception);

        // Adjust subsetted property(ies)
        d->removeFeature(ownedReception);
        d->removeOwnedMember(ownedReception);
    }
}

/*!
    References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class.
 */
const QSet<QExtension *> *QClass::extensions() const
{
    // This is a read-only derived association end

    qWarning("QClass::extensions: to be implemented (this is a derived associationend)");

    //QTUML_D(const QClass);
    //return <derived-return>;
}

/*!
    The operations owned by the class.
 */
const QList<QOperation *> *QClass::ownedOperations() const
{
    // This is a read-write association end

    QTUML_D(const QClass);
    return d->ownedOperations;
}

void QClass::addOwnedOperation(QOperation *ownedOperation)
{
    // This is a read-write association end

    QTUML_D(QClass);
    if (!d->ownedOperations->contains(ownedOperation)) {
        d->ownedOperations->append(ownedOperation);

        // Adjust subsetted property(ies)
        d->addFeature(ownedOperation);
        d->addOwnedMember(ownedOperation);

        // Adjust opposite property
        ownedOperation->setClass_(this);
    }
}

void QClass::removeOwnedOperation(QOperation *ownedOperation)
{
    // This is a read-write association end

    QTUML_D(QClass);
    if (d->ownedOperations->contains(ownedOperation)) {
        d->ownedOperations->removeAll(ownedOperation);

        // Adjust subsetted property(ies)
        d->removeFeature(ownedOperation);
        d->removeOwnedMember(ownedOperation);

        // Adjust opposite property
        ownedOperation->setClass_(0);
    }
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
const QList<QProperty *> *QClass::ownedAttributes() const
{
    // This is a read-write association end

    QTUML_D(const QClass);
    return d->ownedAttributes;
}

void QClass::addOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    QTUML_D(QClass);
    if (!d->ownedAttributes->contains(ownedAttribute)) {
        d->ownedAttributes->append(ownedAttribute);

        // Adjust subsetted property(ies)
        d->addOwnedMember(ownedAttribute);
        d->addAttribute(ownedAttribute);

        // Adjust opposite property
        ownedAttribute->setClass_(this);
    }
}

void QClass::removeOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    QTUML_D(QClass);
    if (d->ownedAttributes->contains(ownedAttribute)) {
        d->ownedAttributes->removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        d->removeOwnedMember(ownedAttribute);
        d->removeAttribute(ownedAttribute);

        // Adjust opposite property
        ownedAttribute->setClass_(0);
    }
}

/*!
    This gives the superclasses of a class.
 */
const QSet<QClass *> *QClass::superClasses() const
{
    // This is a read-write derived association end

    qWarning("QClass::superClasses: to be implemented (this is a derived associationend)");

    //QTUML_D(const QClass);
    //return <derived-return>;
}

void QClass::addSuperClass(QClass *superClass)
{
    // This is a read-write derived association end

    qWarning("QClass::addSuperClass: to be implemented (this is a derived associationend)");

    //QTUML_D(QClass);
    if (false /* <derived-inclusion-criteria> */) {
        // <derived-code>
    }
}

void QClass::removeSuperClass(QClass *superClass)
{
    // This is a read-write derived association end

    qWarning("QClass::removeSuperClass: to be implemented (this is a derived associationend)");

    //QTUML_D(QClass);
    if (false /* <derived-exclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
const QSet<QNamedElement *> *QClass::inherit(const QSet<QNamedElement *> *inhs) const
{
    qWarning("QClass::inherit: operation to be implemented");
}

#include "moc_qclass.cpp"

QT_END_NAMESPACE_QTUML

