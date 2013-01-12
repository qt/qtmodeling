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

#include "qinstancespecification.h"
#include "qinstancespecification_p.h"

#include <QtMof/QClassifier>
#include <QtMof/QSlot>
#include <QtMof/QValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTMOF

QInstanceSpecificationPrivate::QInstanceSpecificationPrivate() :
    specification(0)
{
}

QInstanceSpecificationPrivate::~QInstanceSpecificationPrivate()
{
}

/*!
    \class QInstanceSpecification

    \inmodule QtMof

    \brief An instance specification is a model element that represents an instance in a modeled system.
 */

QInstanceSpecification::QInstanceSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QPackageableElement(*new QInstanceSpecificationPrivate, wrapper, parent)
{
    setPropertyData();
}

QInstanceSpecification::QInstanceSpecification(QInstanceSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QPackageableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QInstanceSpecification::~QInstanceSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInstanceSpecification
// ---------------------------------------------------------------

/*!
    The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them.
 */
QSet<QClassifier *> QInstanceSpecification::classifiers() const
{
    // This is a read-write association end

    Q_D(const QInstanceSpecification);
    return d->classifiers;
}

void QInstanceSpecification::addClassifier(QClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QInstanceSpecification);
    if (!d->classifiers.contains(classifier)) {
        d->classifiers.insert(classifier);
    }
}

void QInstanceSpecification::removeClassifier(QClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QInstanceSpecification);
    if (d->classifiers.contains(classifier)) {
        d->classifiers.remove(classifier);
    }
}

/*!
    A specification of how to compute, derive, or construct the instance.
 */
QValueSpecification *QInstanceSpecification::specification() const
{
    // This is a read-write association end

    Q_D(const QInstanceSpecification);
    return d->specification;
}

void QInstanceSpecification::setSpecification(QValueSpecification *specification)
{
    // This is a read-write association end

    Q_D(QInstanceSpecification);
    if (d->specification != specification) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->specification));

        d->specification = specification;

        // Adjust subsetted property(ies)
        if (specification) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(specification));
        }
    }
}

/*!
    A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description.
 */
QSet<QSlot *> QInstanceSpecification::slots_() const
{
    // This is a read-write association end

    Q_D(const QInstanceSpecification);
    return d->slots_;
}

void QInstanceSpecification::addSlot_(QSlot *slot_)
{
    // This is a read-write association end

    Q_D(QInstanceSpecification);
    if (!d->slots_.contains(slot_)) {
        d->slots_.insert(slot_);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(slot_));

        // Adjust opposite property
        slot_->setOwningInstance(this);
    }
}

void QInstanceSpecification::removeSlot_(QSlot *slot_)
{
    // This is a read-write association end

    Q_D(QInstanceSpecification);
    if (d->slots_.contains(slot_)) {
        d->slots_.remove(slot_);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(slot_));

        // Adjust opposite property
        slot_->setOwningInstance(0);
    }
}

void QInstanceSpecification::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A specification of how to compute, derive, or construct the instance.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QSlot::owningInstance");

    QPackageableElement::setPropertyData();
}

#include "moc_qinstancespecification.cpp"

QT_END_NAMESPACE_QTMOF

