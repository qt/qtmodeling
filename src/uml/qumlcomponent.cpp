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

#include "qumlcomponent.h"
#include "qumlcomponent_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComponentRealization>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlInterface>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlComponentPrivate::QUmlComponentPrivate() :
    isIndirectlyInstantiated(true)
{
}

QUmlComponentPrivate::~QUmlComponentPrivate()
{
}

/*!
    \class QUmlComponent

    \inmodule QtUml

    \brief In the namespace of a component, all model elements that are involved in or related to its definition are either owned or imported explicitly. This may include, for example, use cases and dependencies (e.g. mappings), packages, components, and artifacts.A component represents a modular part of a system that encapsulates its contents and whose manifestation is replaceable within its environment.
 */

QUmlComponent::QUmlComponent(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClass(*new QUmlComponentPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlComponent::QUmlComponent(QUmlComponentPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClass(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlComponent::~QUmlComponent()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlComponent
// ---------------------------------------------------------------

/*!
    isIndirectlyInstantiated : Boolean {default = true} The kind of instantiation that applies to a Component. If false, the component is instantiated as an addressable object. If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the Component does not exist, that is, the component is instantiated indirectly, through the instantiation of its realizing classifiers or parts. Several standard stereotypes use this meta attribute (e.g., «specification», «focus», «subsystem»).
 */
bool QUmlComponent::isIndirectlyInstantiated() const
{
    // This is a read-write attribute

    Q_D(const QUmlComponent);
    return d->isIndirectlyInstantiated;
}

void QUmlComponent::setIndirectlyInstantiated(bool isIndirectlyInstantiated)
{
    // This is a read-write attribute

    Q_D(QUmlComponent);
    if (d->isIndirectlyInstantiated != isIndirectlyInstantiated) {
        d->isIndirectlyInstantiated = isIndirectlyInstantiated;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isIndirectlyInstantiated");
}

void QUmlComponent::unsetIndirectlyInstantiated()
{
    setIndirectlyInstantiated(true);
    Q_D(QUmlComponent);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isIndirectlyInstantiated"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlComponent
// ---------------------------------------------------------------

/*!
    The set of Realizations owned by the Component. Realizations reference the Classifiers of which the Component is an abstraction; i.e., that realize its behavior.
 */
QSet<QUmlComponentRealization *> QUmlComponent::realizations() const
{
    // This is a read-write association end

    Q_D(const QUmlComponent);
    return d->realizations;
}

void QUmlComponent::addRealization(QUmlComponentRealization *realization)
{
    // This is a read-write association end

    Q_D(QUmlComponent);
    if (!d->realizations.contains(realization)) {
        d->realizations.insert(realization);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(realization));

        // Adjust opposite property
        realization->setAbstraction(this);
    }
}

void QUmlComponent::removeRealization(QUmlComponentRealization *realization)
{
    // This is a read-write association end

    Q_D(QUmlComponent);
    if (d->realizations.contains(realization)) {
        d->realizations.remove(realization);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(realization));

        // Adjust opposite property
        realization->setAbstraction(0);
    }
}

/*!
    The interfaces that the component requires from other components in its environment in order to be able to offer its full set of provided functionality. These interfaces may be used by the Component or any of its realizingClassifiers, or they may be the Interfaces that are required by its public Ports.
 */
QSet<QUmlInterface *> QUmlComponent::required() const
{
    // This is a read-only derived association end

    qWarning("QUmlComponent::required: to be implemented (this is a derived associationend)");

    return QSet<QUmlInterface *>(); // change here to your derived return
}

/*!
    The interfaces that the component exposes to its environment. These interfaces may be Realized by the Component or any of its realizingClassifiers, or they may be the Interfaces that are provided by its public Ports.
 */
QSet<QUmlInterface *> QUmlComponent::provided() const
{
    // This is a read-only derived association end

    qWarning("QUmlComponent::provided: to be implemented (this is a derived associationend)");

    return QSet<QUmlInterface *>(); // change here to your derived return
}

/*!
    The set of PackageableElements that a Component owns. In the namespace of a component, all model elements that are involved in or related to its definition may be owned or imported explicitly. These may include e.g. Classes, Interfaces, Components, Packages, Use cases, Dependencies (e.g. mappings), and Artifacts.
 */
QSet<QUmlPackageableElement *> QUmlComponent::packagedElements() const
{
    // This is a read-write association end

    Q_D(const QUmlComponent);
    return d->packagedElements;
}

void QUmlComponent::addPackagedElement(QUmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QUmlComponent);
    if (!d->packagedElements.contains(packagedElement)) {
        d->packagedElements.insert(packagedElement);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(packagedElement));
    }
}

void QUmlComponent::removePackagedElement(QUmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QUmlComponent);
    if (d->packagedElements.contains(packagedElement)) {
        d->packagedElements.remove(packagedElement);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(packagedElement));
    }
}

/*!
    Utility returning the set of realized interfaces of a component.
 */
QSet<QUmlInterface *> QUmlComponent::realizedInterfaces(const QUmlClassifier *classifier) const
{
    qWarning("QUmlComponent::realizedInterfaces: operation to be implemented");
    Q_UNUSED(classifier);

    return QSet<QUmlInterface *>(); // change here to your derived return
}

/*!
    Utility returning the set of used interfaces of a component.
 */
QSet<QUmlInterface *> QUmlComponent::usedInterfaces(const QUmlClassifier *classifier) const
{
    qWarning("QUmlComponent::usedInterfaces: operation to be implemented");
    Q_UNUSED(classifier);

    return QSet<QUmlInterface *>(); // change here to your derived return
}

void QUmlComponent::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("isIndirectlyInstantiated")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("isIndirectlyInstantiated")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("isIndirectlyInstantiated")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("isIndirectlyInstantiated : Boolean {default = true} The kind of instantiation that applies to a Component. If false, the component is instantiated as an addressable object. If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the Component does not exist, that is, the component is instantiated indirectly, through the instantiation of its realizing classifiers or parts. Several standard stereotypes use this meta attribute (e.g., «specification», «focus», «subsystem»).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("isIndirectlyInstantiated")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("isIndirectlyInstantiated")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("isIndirectlyInstantiated")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("realizations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("realizations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("realizations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of Realizations owned by the Component. Realizations reference the Classifiers of which the Component is an abstraction; i.e., that realize its behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("realizations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("realizations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("realizations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlComponentRealization::abstraction");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("required")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("required")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("required")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The interfaces that the component requires from other components in its environment in order to be able to offer its full set of provided functionality. These interfaces may be used by the Component or any of its realizingClassifiers, or they may be the Interfaces that are required by its public Ports.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("required")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("required")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("required")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("provided")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("provided")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("provided")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The interfaces that the component exposes to its environment. These interfaces may be Realized by the Component or any of its realizingClassifiers, or they may be the Interfaces that are provided by its public Ports.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("provided")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("provided")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("provided")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("packagedElements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("packagedElements")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("packagedElements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of PackageableElements that a Component owns. In the namespace of a component, all model elements that are involved in or related to its definition may be owned or imported explicitly. These may include e.g. Classes, Interfaces, Components, Packages, Use cases, Dependencies (e.g. mappings), and Artifacts.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("packagedElements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("packagedElements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponent")][QString::fromLatin1("packagedElements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlClass::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlcomponent.cpp"

