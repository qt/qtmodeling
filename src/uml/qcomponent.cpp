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

#include "qcomponent.h"
#include "qcomponent_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QComponentRealization>
#include <QtUml/QPackageableElement>
#include <QtUml/QInterface>

QT_BEGIN_NAMESPACE_QTUML

QComponentPrivate::QComponentPrivate() :
    isIndirectlyInstantiated(true),
    realizations(new QSet<QComponentRealization *>),
    packagedElements(new QSet<QPackageableElement *>)
{
}

QComponentPrivate::~QComponentPrivate()
{
    delete realizations;
    delete packagedElements;
}

/*!
    \class QComponent

    \inmodule QtUml

    \brief In the namespace of a component, all model elements that are involved in or related to its definition are either owned or imported explicitly. This may include, for example, use cases and dependencies (e.g. mappings), packages, components, and artifacts.A component represents a modular part of a system that encapsulates its contents and whose manifestation is replaceable within its environment.
 */

QComponent::QComponent(QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QClass(*new QComponentPrivate, parent, wrapper)
{
}

QComponent::QComponent(QComponentPrivate &dd, QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QClass(dd, parent, wrapper)
{
}

QComponent::~QComponent()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QComponent
// ---------------------------------------------------------------

/*!
    isIndirectlyInstantiated : Boolean {default = true} The kind of instantiation that applies to a Component. If false, the component is instantiated as an addressable object. If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the Component does not exist, that is, the component is instantiated indirectly, through the instantiation of its realizing classifiers or parts. Several standard stereotypes use this meta attribute (e.g., «specification», «focus», «subsystem»).
 */
bool QComponent::isIndirectlyInstantiated() const
{
    // This is a read-write attribute

    Q_D(const QComponent);
    return d->isIndirectlyInstantiated;
}

void QComponent::setIndirectlyInstantiated(bool isIndirectlyInstantiated)
{
    // This is a read-write attribute

    Q_D(QComponent);
    if (d->isIndirectlyInstantiated != isIndirectlyInstantiated) {
        d->isIndirectlyInstantiated = isIndirectlyInstantiated;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QComponent
// ---------------------------------------------------------------

/*!
    The set of Realizations owned by the Component. Realizations reference the Classifiers of which the Component is an abstraction; i.e., that realize its behavior.
 */
const QSet<QComponentRealization *> *QComponent::realizations() const
{
    // This is a read-write association end

    Q_D(const QComponent);
    return d->realizations;
}

void QComponent::addRealization(QComponentRealization *realization)
{
    // This is a read-write association end

    Q_D(QComponent);
    if (!d->realizations->contains(realization)) {
        d->realizations->insert(realization);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QElementPrivate *>(d))->addOwnedElement(qmofobject_cast<QElement *>(realization));

        // Adjust opposite property
        realization->setAbstraction(this);
    }
}

void QComponent::removeRealization(QComponentRealization *realization)
{
    // This is a read-write association end

    Q_D(QComponent);
    if (d->realizations->contains(realization)) {
        d->realizations->remove(realization);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QElementPrivate *>(d))->removeOwnedElement(qmofobject_cast<QElement *>(realization));

        // Adjust opposite property
        realization->setAbstraction(0);
    }
}

/*!
    The interfaces that the component requires from other components in its environment in order to be able to offer its full set of provided functionality. These interfaces may be used by the Component or any of its realizingClassifiers, or they may be the Interfaces that are required by its public Ports.
 */
const QSet<QInterface *> *QComponent::required() const
{
    // This is a read-only derived association end

    qWarning("QComponent::required: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The interfaces that the component exposes to its environment. These interfaces may be Realized by the Component or any of its realizingClassifiers, or they may be the Interfaces that are provided by its public Ports.
 */
const QSet<QInterface *> *QComponent::provided() const
{
    // This is a read-only derived association end

    qWarning("QComponent::provided: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The set of PackageableElements that a Component owns. In the namespace of a component, all model elements that are involved in or related to its definition may be owned or imported explicitly. These may include e.g. Classes, Interfaces, Components, Packages, Use cases, Dependencies (e.g. mappings), and Artifacts.
 */
const QSet<QPackageableElement *> *QComponent::packagedElements() const
{
    // This is a read-write association end

    Q_D(const QComponent);
    return d->packagedElements;
}

void QComponent::addPackagedElement(QPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QComponent);
    if (!d->packagedElements->contains(packagedElement)) {
        d->packagedElements->insert(packagedElement);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qmofobject_cast<QNamedElement *>(packagedElement));
    }
}

void QComponent::removePackagedElement(QPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QComponent);
    if (d->packagedElements->contains(packagedElement)) {
        d->packagedElements->remove(packagedElement);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qmofobject_cast<QNamedElement *>(packagedElement));
    }
}

/*!
    Utility returning the set of realized interfaces of a component.
 */
const QSet<QInterface *> *QComponent::realizedInterfaces(const QClassifier *classifier) const
{
    qWarning("QComponent::realizedInterfaces: operation to be implemented");
    Q_UNUSED(classifier);

    return 0; // change here to your derived return
}

/*!
    Utility returning the set of used interfaces of a component.
 */
const QSet<QInterface *> *QComponent::usedInterfaces(const QClassifier *classifier) const
{
    qWarning("QComponent::usedInterfaces: operation to be implemented");
    Q_UNUSED(classifier);

    return 0; // change here to your derived return
}

#include "moc_qcomponent.cpp"

QT_END_NAMESPACE_QTUML

