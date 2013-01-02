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

#include "qbehavioredclassifier.h"
#include "qbehavioredclassifier_p.h"

#include <QtUml/QBehavior>
#include <QtUml/QInterfaceRealization>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QBehavioredClassifierPrivate::QBehavioredClassifierPrivate() :
    classifierBehavior(0)
{
}

QBehavioredClassifierPrivate::~QBehavioredClassifierPrivate()
{
}

/*!
    \class QBehavioredClassifier

    \inmodule QtUml

    \brief A behaviored classifier may have an interface realization.A classifier can have behavior specifications defined in its namespace. One of these may specify the behavior of the classifier itself.
 */

QBehavioredClassifier::QBehavioredClassifier(QWrappedObject *parent, QWrappedObject *wrapper) :
    QClassifier(*new QBehavioredClassifierPrivate, parent, wrapper)
{
    setPropertyData();
}

QBehavioredClassifier::QBehavioredClassifier(QBehavioredClassifierPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QClassifier(dd, parent, wrapper)
{
    setPropertyData();
}

QBehavioredClassifier::~QBehavioredClassifier()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QBehavioredClassifier
// ---------------------------------------------------------------

/*!
    References behavior specifications owned by a classifier.
 */
QSet<QBehavior *> QBehavioredClassifier::ownedBehaviors() const
{
    // This is a read-write association end

    Q_D(const QBehavioredClassifier);
    return d->ownedBehaviors;
}

void QBehavioredClassifier::addOwnedBehavior(QBehavior *ownedBehavior)
{
    // This is a read-write association end

    Q_D(QBehavioredClassifier);
    if (!d->ownedBehaviors.contains(ownedBehavior)) {
        d->ownedBehaviors.insert(ownedBehavior);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedBehavior));
    }
}

void QBehavioredClassifier::removeOwnedBehavior(QBehavior *ownedBehavior)
{
    // This is a read-write association end

    Q_D(QBehavioredClassifier);
    if (d->ownedBehaviors.contains(ownedBehavior)) {
        d->ownedBehaviors.remove(ownedBehavior);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedBehavior));
    }
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
QSet<QInterfaceRealization *> QBehavioredClassifier::interfaceRealizations() const
{
    // This is a read-write association end

    Q_D(const QBehavioredClassifier);
    return d->interfaceRealizations;
}

void QBehavioredClassifier::addInterfaceRealization(QInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    Q_D(QBehavioredClassifier);
    if (!d->interfaceRealizations.contains(interfaceRealization)) {
        d->interfaceRealizations.insert(interfaceRealization);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(interfaceRealization));
        (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(qwrappedobject_cast<QDependency *>(interfaceRealization));

        // Adjust opposite property
        interfaceRealization->setImplementingClassifier(this);
    }
}

void QBehavioredClassifier::removeInterfaceRealization(QInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    Q_D(QBehavioredClassifier);
    if (d->interfaceRealizations.contains(interfaceRealization)) {
        d->interfaceRealizations.remove(interfaceRealization);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(interfaceRealization));
        (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(qwrappedobject_cast<QDependency *>(interfaceRealization));

        // Adjust opposite property
        interfaceRealization->setImplementingClassifier(0);
    }
}

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
QBehavior *QBehavioredClassifier::classifierBehavior() const
{
    // This is a read-write association end

    Q_D(const QBehavioredClassifier);
    return d->classifierBehavior;
}

void QBehavioredClassifier::setClassifierBehavior(QBehavior *classifierBehavior)
{
    // This is a read-write association end

    Q_D(QBehavioredClassifier);
    if (d->classifierBehavior != classifierBehavior) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QBehavioredClassifier *>(this))->removeOwnedBehavior(qwrappedobject_cast<QBehavior *>(d->classifierBehavior));

        d->classifierBehavior = classifierBehavior;

        // Adjust subsetted property(ies)
        if (classifierBehavior) {
            (qwrappedobject_cast<QBehavioredClassifier *>(this))->addOwnedBehavior(qwrappedobject_cast<QBehavior *>(classifierBehavior));
        }
    }
}

void QBehavioredClassifier::registerMetaTypes() const
{
    qRegisterMetaType<QBehavior *>("QBehavior *");
    qRegisterMetaType<QSet<QBehavior *>>("QSet<QBehavior *>");
    qRegisterMetaType<QList<QBehavior *>>("QList<QBehavior *>");

    qRegisterMetaType<QInterfaceRealization *>("QInterfaceRealization *");
    qRegisterMetaType<QSet<QInterfaceRealization *>>("QSet<QInterfaceRealization *>");
    qRegisterMetaType<QList<QInterfaceRealization *>>("QList<QInterfaceRealization *>");

    QClassifier::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QBehavioredClassifier::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("ownedBehaviors")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("ownedBehaviors")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("ownedBehaviors")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References behavior specifications owned by a classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("ownedBehaviors")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("ownedBehaviors")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("ownedBehaviors")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("interfaceRealizations")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("interfaceRealizations")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("interfaceRealizations")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("interfaceRealizations")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("interfaceRealizations")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements QNamedElement::clientDependencies");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("interfaceRealizations")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QInterfaceRealization::implementingClassifier");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("classifierBehavior")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("classifierBehavior")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("classifierBehavior")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A behavior specification that specifies the behavior of the classifier itself.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("classifierBehavior")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("classifierBehavior")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QBehavioredClassifier::ownedBehaviors");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavioredClassifier")][QString::fromLatin1("classifierBehavior")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QClassifier::setPropertyData();
}

// Overriden methods for subsetted properties

void QBehavioredClassifier::addClientDependency(QWrappedObjectPointer<QInterfaceRealization> interfaceRealization)
{
    addInterfaceRealization(interfaceRealization);
}

void QBehavioredClassifier::removeClientDependency(QWrappedObjectPointer<QInterfaceRealization> interfaceRealization)
{
    removeInterfaceRealization(interfaceRealization);
}

#include "moc_qbehavioredclassifier.cpp"

QT_END_NAMESPACE_QTUML

