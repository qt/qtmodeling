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
#include "qmofinstancespecification.h"
#include "qmofinstancespecification_p.h"

#include <QtMof/QMofClassifier>
#include <QtMof/QMofSlot>
#include <QtMof/QMofValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofInstanceSpecificationPrivate::QMofInstanceSpecificationPrivate() :
    specification(0)
{
}

QMofInstanceSpecificationPrivate::~QMofInstanceSpecificationPrivate()
{
}

/*!
    \class QMofInstanceSpecification

    \inmodule QtMof

    \brief An instance specification is a model element that represents an instance in a modeled system.
 */

QMofInstanceSpecification::QMofInstanceSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofPackageableElement(*new QMofInstanceSpecificationPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofInstanceSpecification::QMofInstanceSpecification(QMofInstanceSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofPackageableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofInstanceSpecification::~QMofInstanceSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofInstanceSpecification
// ---------------------------------------------------------------

/*!
    The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them.
 */
QSet<QMofClassifier *> QMofInstanceSpecification::classifiers() const
{
    // This is a read-write association end

    Q_D(const QMofInstanceSpecification);
    return d->classifiers;
}

void QMofInstanceSpecification::addClassifier(QMofClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QMofInstanceSpecification);
    if (!d->classifiers.contains(classifier)) {
        d->classifiers.insert(classifier);
    }
}

void QMofInstanceSpecification::removeClassifier(QMofClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QMofInstanceSpecification);
    if (d->classifiers.contains(classifier)) {
        d->classifiers.remove(classifier);
    }
}

/*!
    A specification of how to compute, derive, or construct the instance.
 */
QMofValueSpecification *QMofInstanceSpecification::specification() const
{
    // This is a read-write association end

    Q_D(const QMofInstanceSpecification);
    return d->specification;
}

void QMofInstanceSpecification::setSpecification(QMofValueSpecification *specification)
{
    // This is a read-write association end

    Q_D(QMofInstanceSpecification);
    if (d->specification != specification) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(d->specification));

        d->specification = specification;

        // Adjust subsetted property(ies)
        if (specification) {
            (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(specification));
        }
    }
}

/*!
    A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description.
 */
QSet<QMofSlot *> QMofInstanceSpecification::slots_() const
{
    // This is a read-write association end

    Q_D(const QMofInstanceSpecification);
    return d->slots_;
}

void QMofInstanceSpecification::addSlot_(QMofSlot *slot_)
{
    // This is a read-write association end

    Q_D(QMofInstanceSpecification);
    if (!d->slots_.contains(slot_)) {
        d->slots_.insert(slot_);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(slot_));

        // Adjust opposite property
        slot_->setOwningInstance(this);
    }
}

void QMofInstanceSpecification::removeSlot_(QMofSlot *slot_)
{
    // This is a read-write association end

    Q_D(QMofInstanceSpecification);
    if (d->slots_.contains(slot_)) {
        d->slots_.remove(slot_);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(slot_));

        // Adjust opposite property
        slot_->setOwningInstance(0);
    }
}

void QMofInstanceSpecification::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A specification of how to compute, derive, or construct the instance.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofSlot::owningInstance");

    QMofPackageableElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofinstancespecification.cpp"

