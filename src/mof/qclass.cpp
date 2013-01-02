/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include <QtMof/QNamedElement>
#include <QtMof/QProperty>
#include <QtMof/QOperation>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTMOF

QClassPrivate::QClassPrivate() :
    isAbstract(false)
{
}

QClassPrivate::~QClassPrivate()
{
}

/*!
    \class QClass

    \inmodule QtMof

    \brief A class describes a set of objects that share the same specifications of features, constraints, and semantics.
 */

QClass::QClass(QWrappedObject *parent, QWrappedObject *wrapper) :
    QClassifier(*new QClassPrivate, parent, wrapper)
{
    setPropertyData();
}

QClass::QClass(QClassPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QClassifier(dd, parent, wrapper)
{
    setPropertyData();
}

QClass::~QClass()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QClass
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QClass::isAbstract() const
{
    // This is a read-write attribute

    Q_D(const QClass);
    return d->isAbstract;
}

void QClass::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    Q_D(QClass);
    if (d->isAbstract != isAbstract) {
        d->isAbstract = isAbstract;
    }
}

void QClass::unsetAbstract()
{
    setAbstract(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QClass
// ---------------------------------------------------------------

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
QList<QClassifier *> QClass::nestedClassifiers() const
{
    // This is a read-write association end

    Q_D(const QClass);
    return d->nestedClassifiers;
}

void QClass::addNestedClassifier(QClassifier *nestedClassifier)
{
    // This is a read-write association end

    Q_D(QClass);
    if (!d->nestedClassifiers.contains(nestedClassifier)) {
        d->nestedClassifiers.append(nestedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(nestedClassifier));
    }
}

void QClass::removeNestedClassifier(QClassifier *nestedClassifier)
{
    // This is a read-write association end

    Q_D(QClass);
    if (d->nestedClassifiers.contains(nestedClassifier)) {
        d->nestedClassifiers.removeAll(nestedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(nestedClassifier));
    }
}

/*!
    The operations owned by the class.
 */
QList<QOperation *> QClass::ownedOperations() const
{
    // This is a read-write association end

    Q_D(const QClass);
    return d->ownedOperations;
}

void QClass::addOwnedOperation(QOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QClass);
    if (!d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.append(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QFeature *>(ownedOperation));
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setClass_(this);
    }
}

void QClass::removeOwnedOperation(QOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QClass);
    if (d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.removeAll(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QFeature *>(ownedOperation));
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setClass_(0);
    }
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
QList<QProperty *> QClass::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QClass);
    return d->ownedAttributes;
}

void QClass::addOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QClass);
    if (!d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(d))->addAttribute(qwrappedobject_cast<QProperty *>(ownedAttribute));
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setClass_(this);
    }
}

void QClass::removeOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QClass);
    if (d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(d))->removeAttribute(qwrappedobject_cast<QProperty *>(ownedAttribute));
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setClass_(0);
    }
}

/*!
    This gives the superclasses of a class.
 */
QSet<QClass *> QClass::superClasses() const
{
    // This is a read-write derived association end

    qWarning("QClass::superClasses: to be implemented (this is a derived associationend)");

    return QSet<QClass *>(); // change here to your derived return
}

void QClass::addSuperClass(QClass *superClass)
{
    // This is a read-write derived association end

    qWarning("QClass::addSuperClass: to be implemented (this is a derived associationend)");
    Q_UNUSED(superClass);

    if (false) { // change to your derived inclusion criteria
        // change to your derived code
    }
}

void QClass::removeSuperClass(QClass *superClass)
{
    // This is a read-write derived association end

    qWarning("QClass::removeSuperClass: to be implemented (this is a derived associationend)");
    Q_UNUSED(superClass);

    if (false) { // change to your derived exclusion criteria
        // change to your derived code
    }
}

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QNamedElement *> QClass::inherit(QSet<QNamedElement *> inhs) const
{
    qWarning("QClass::inherit: operation to be implemented");
    Q_UNUSED(inhs);

    return QSet<QNamedElement *>(); // change here to your derived return
}

void QClass::registerMetaTypes() const
{
    qRegisterMetaType<QNamedElement *>("QNamedElement *");
    qRegisterMetaType<QSet<QNamedElement *>>("QSet<QNamedElement *>");
    qRegisterMetaType<QList<QNamedElement *>>("QList<QNamedElement *>");

    qRegisterMetaType<QProperty *>("QProperty *");
    qRegisterMetaType<QSet<QProperty *>>("QSet<QProperty *>");
    qRegisterMetaType<QList<QProperty *>>("QList<QProperty *>");

    qRegisterMetaType<QOperation *>("QOperation *");
    qRegisterMetaType<QSet<QOperation *>>("QSet<QOperation *>");
    qRegisterMetaType<QList<QOperation *>>("QList<QOperation *>");

    QClassifier::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QClass::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QClassifier::isAbstract");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References all the Classifiers that are defined (nested) within the Class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The operations owned by the class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QClassifier::features QNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QOperation::class");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The attributes (i.e. the properties) owned by the class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QClassifier::attributes QNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QProperty::class");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This gives the superclasses of a class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QClassifier::generals");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QClassifier::setPropertyData();
}

#include "moc_qclass.cpp"

QT_END_NAMESPACE_QTMOF

