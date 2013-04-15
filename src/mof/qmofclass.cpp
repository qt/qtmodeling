/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofclass.h"
#include "qmofclass_p.h"

#include <QtMof/QMofNamedElement>
#include <QtMof/QMofProperty>
#include <QtMof/QMofOperation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofClassPrivate::QMofClassPrivate() :
    isAbstract(false)
{
}

QMofClassPrivate::~QMofClassPrivate()
{
}

/*!
    \class QMofClass

    \inmodule QtMof

    \brief A class describes a set of objects that share the same specifications of features, constraints, and semantics.
 */

QMofClass::QMofClass(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofClassifier(*new QMofClassPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofClass::QMofClass(QMofClassPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofClassifier(dd, wrapper, parent)
{
    setPropertyData();
}

QMofClass::~QMofClass()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofClass
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QMofClass::isAbstract() const
{
    // This is a read-write attribute

    Q_D(const QMofClass);
    return d->isAbstract;
}

void QMofClass::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    Q_D(QMofClass);
    if (d->isAbstract != isAbstract) {
        d->isAbstract = isAbstract;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QMofClassifier *>(this))->setAbstract(isAbstract);
    }
    d->modifiedResettableProperties << QString::fromLatin1("isAbstract");
}

void QMofClass::unsetAbstract()
{
    setAbstract(false);
    Q_D(QMofClass);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofClass
// ---------------------------------------------------------------

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
QList<QMofClassifier *> QMofClass::nestedClassifiers() const
{
    // This is a read-write association end

    Q_D(const QMofClass);
    return d->nestedClassifiers;
}

void QMofClass::addNestedClassifier(QMofClassifier *nestedClassifier)
{
    // This is a read-write association end

    Q_D(QMofClass);
    if (!d->nestedClassifiers.contains(nestedClassifier)) {
        d->nestedClassifiers.append(nestedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QMofNamedElement *>(nestedClassifier));
    }
}

void QMofClass::removeNestedClassifier(QMofClassifier *nestedClassifier)
{
    // This is a read-write association end

    Q_D(QMofClass);
    if (d->nestedClassifiers.contains(nestedClassifier)) {
        d->nestedClassifiers.removeAll(nestedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QMofNamedElement *>(nestedClassifier));
    }
}

/*!
    The operations owned by the class.
 */
QList<QMofOperation *> QMofClass::ownedOperations() const
{
    // This is a read-write association end

    Q_D(const QMofClass);
    return d->ownedOperations;
}

void QMofClass::addOwnedOperation(QMofOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QMofClass);
    if (!d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.append(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QMofFeature *>(ownedOperation));
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setClass_(this);
    }
}

void QMofClass::removeOwnedOperation(QMofOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QMofClass);
    if (d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.removeAll(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QMofFeature *>(ownedOperation));
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setClass_(0);
    }
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
QList<QMofProperty *> QMofClass::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QMofClass);
    return d->ownedAttributes;
}

void QMofClass::addOwnedAttribute(QMofProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QMofClass);
    if (!d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofClassifierPrivate *>(d))->addAttribute(qwrappedobject_cast<QMofProperty *>(ownedAttribute));
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setClass_(this);
    }
}

void QMofClass::removeOwnedAttribute(QMofProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QMofClass);
    if (d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofClassifierPrivate *>(d))->removeAttribute(qwrappedobject_cast<QMofProperty *>(ownedAttribute));
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setClass_(0);
    }
}

/*!
    This gives the superclasses of a class.
 */
QSet<QMofClass *> QMofClass::superClasses() const
{
    // This is a read-write derived association end

    qWarning("QMofClass::superClasses: to be implemented (this is a derived associationend)");

    return QSet<QMofClass *>(); // change here to your derived return
}

void QMofClass::addSuperClass(QMofClass *superClass)
{
    // This is a read-write derived association end

    qWarning("QMofClass::addSuperClass: to be implemented (this is a derived associationend)");
    Q_UNUSED(superClass);

    if (false) { // change to your derived inclusion criteria
        // change to your derived code

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QMofClassifier *>(this))->addGeneral(qwrappedobject_cast<QMofClassifier *>(superClass));
    }
}

void QMofClass::removeSuperClass(QMofClass *superClass)
{
    // This is a read-write derived association end

    qWarning("QMofClass::removeSuperClass: to be implemented (this is a derived associationend)");
    Q_UNUSED(superClass);

    if (false) { // change to your derived exclusion criteria
        // change to your derived code

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QMofClassifier *>(this))->removeGeneral(qwrappedobject_cast<QMofClassifier *>(superClass));
    }
}

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QMofNamedElement *> QMofClass::inherit(QSet<QMofNamedElement *> inhs) const
{
    qWarning("QMofClass::inherit: operation to be implemented");
    Q_UNUSED(inhs);

    return QSet<QMofNamedElement *>(); // change here to your derived return
}

void QMofClass::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QMofClassifier::isAbstract");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References all the Classifiers that are defined (nested) within the Class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The operations owned by the class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofClassifier::features QMofNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofOperation::class");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The attributes (i.e. the properties) owned by the class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofClassifier::attributes QMofNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofProperty::class");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This gives the superclasses of a class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QMofClassifier::generals");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QMofClassifier::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofclass.cpp"

