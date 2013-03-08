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

#include "qumlbehavioredclassifier.h"
#include "qumlbehavioredclassifier_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlInterfaceRealization>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlBehavioredClassifierPrivate::QUmlBehavioredClassifierPrivate() :
    classifierBehavior(0)
{
}

QUmlBehavioredClassifierPrivate::~QUmlBehavioredClassifierPrivate()
{
}

/*!
    \class QUmlBehavioredClassifier

    \inmodule QtUml

    \brief A behaviored classifier may have an interface realization.A classifier can have behavior specifications defined in its namespace. One of these may specify the behavior of the classifier itself.
 */

QUmlBehavioredClassifier::QUmlBehavioredClassifier(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClassifier(*new QUmlBehavioredClassifierPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlBehavioredClassifier::QUmlBehavioredClassifier(QUmlBehavioredClassifierPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClassifier(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlBehavioredClassifier::~QUmlBehavioredClassifier()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlBehavioredClassifier
// ---------------------------------------------------------------

/*!
    References behavior specifications owned by a classifier.
 */
QSet<QUmlBehavior *> QUmlBehavioredClassifier::ownedBehaviors() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavioredClassifier);
    return d->ownedBehaviors;
}

void QUmlBehavioredClassifier::addOwnedBehavior(QUmlBehavior *ownedBehavior)
{
    // This is a read-write association end

    Q_D(QUmlBehavioredClassifier);
    if (!d->ownedBehaviors.contains(ownedBehavior)) {
        d->ownedBehaviors.insert(ownedBehavior);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedBehavior));
    }
}

void QUmlBehavioredClassifier::removeOwnedBehavior(QUmlBehavior *ownedBehavior)
{
    // This is a read-write association end

    Q_D(QUmlBehavioredClassifier);
    if (d->ownedBehaviors.contains(ownedBehavior)) {
        d->ownedBehaviors.remove(ownedBehavior);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedBehavior));
    }
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
QSet<QUmlInterfaceRealization *> QUmlBehavioredClassifier::interfaceRealizations() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavioredClassifier);
    return d->interfaceRealizations;
}

void QUmlBehavioredClassifier::addInterfaceRealization(QUmlInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    Q_D(QUmlBehavioredClassifier);
    if (!d->interfaceRealizations.contains(interfaceRealization)) {
        d->interfaceRealizations.insert(interfaceRealization);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(interfaceRealization));
        (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(qwrappedobject_cast<QUmlDependency *>(interfaceRealization));

        // Adjust opposite property
        interfaceRealization->setImplementingClassifier(this);
    }
}

void QUmlBehavioredClassifier::removeInterfaceRealization(QUmlInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    Q_D(QUmlBehavioredClassifier);
    if (d->interfaceRealizations.contains(interfaceRealization)) {
        d->interfaceRealizations.remove(interfaceRealization);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(interfaceRealization));
        (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(qwrappedobject_cast<QUmlDependency *>(interfaceRealization));

        // Adjust opposite property
        interfaceRealization->setImplementingClassifier(0);
    }
}

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
QUmlBehavior *QUmlBehavioredClassifier::classifierBehavior() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavioredClassifier);
    return d->classifierBehavior;
}

void QUmlBehavioredClassifier::setClassifierBehavior(QUmlBehavior *classifierBehavior)
{
    // This is a read-write association end

    Q_D(QUmlBehavioredClassifier);
    if (d->classifierBehavior != classifierBehavior) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlBehavioredClassifier *>(this))->removeOwnedBehavior(qwrappedobject_cast<QUmlBehavior *>(d->classifierBehavior));

        d->classifierBehavior = classifierBehavior;

        // Adjust subsetted property(ies)
        if (classifierBehavior) {
            (qwrappedobject_cast<QUmlBehavioredClassifier *>(this))->addOwnedBehavior(qwrappedobject_cast<QUmlBehavior *>(classifierBehavior));
        }
    }
}

void QUmlBehavioredClassifier::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("ownedBehaviors")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("ownedBehaviors")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("ownedBehaviors")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References behavior specifications owned by a classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("ownedBehaviors")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("ownedBehaviors")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("ownedBehaviors")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("interfaceRealizations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("interfaceRealizations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("interfaceRealizations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("interfaceRealizations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("interfaceRealizations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements QUmlNamedElement::clientDependencies");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("interfaceRealizations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QInterfaceRealization::implementingClassifier");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("classifierBehavior")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("classifierBehavior")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("classifierBehavior")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A behavior specification that specifies the behavior of the classifier itself.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("classifierBehavior")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("classifierBehavior")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlBehavioredClassifier::ownedBehaviors");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioredClassifier")][QString::fromLatin1("classifierBehavior")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlClassifier::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlBehavioredClassifier::addClientDependency(QWrappedObjectPointer<QUmlInterfaceRealization> interfaceRealization)
{
    addInterfaceRealization(interfaceRealization);
}

void QUmlBehavioredClassifier::removeClientDependency(QWrappedObjectPointer<QUmlInterfaceRealization> interfaceRealization)
{
    removeInterfaceRealization(interfaceRealization);
}

QT_END_NAMESPACE

#include "moc_qumlbehavioredclassifier.cpp"

