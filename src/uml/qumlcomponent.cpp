/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#include "qumlcomponent.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComponentRealization>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlPackageableElement>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlComponent

    \inmodule QtUml

    \brief In the namespace of a component, all model elements that are involved in or related to its definition are either owned or imported explicitly. This may include, for example, use cases and dependencies (e.g. mappings), packages, components, and artifacts.A component represents a modular part of a system that encapsulates its contents and whose manifestation is replaceable within its environment.
 */

QUmlComponent::QUmlComponent() :
    _isIndirectlyInstantiated(true)
{
}

// OWNED ATTRIBUTES

/*!
    isIndirectlyInstantiated : Boolean {default = true} The kind of instantiation that applies to a Component. If false, the component is instantiated as an addressable object. If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the Component does not exist, that is, the component is instantiated indirectly, through the instantiation of its realizing classifiers or parts. Several standard stereotypes use this meta attribute (e.g., «specification», «focus», «subsystem»).
 */
bool QUmlComponent::isIndirectlyInstantiated() const
{
    // This is a read-write property

    return _isIndirectlyInstantiated;
}

void QUmlComponent::setIndirectlyInstantiated(bool isIndirectlyInstantiated)
{
    // This is a read-write property

    if (_isIndirectlyInstantiated != isIndirectlyInstantiated) {
        _isIndirectlyInstantiated = isIndirectlyInstantiated;
    }
}

/*!
    The set of PackageableElements that a Component owns. In the namespace of a component, all model elements that are involved in or related to its definition may be owned or imported explicitly. These may include e.g. Classes, Interfaces, Components, Packages, Use cases, Dependencies (e.g. mappings), and Artifacts.
 */
QSet<QUmlPackageableElement *> QUmlComponent::packagedElement() const
{
    // This is a read-write association end

    return _packagedElement;
}

void QUmlComponent::addPackagedElement(QUmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    if (!_packagedElement.contains(packagedElement)) {
        _packagedElement.insert(packagedElement);

        // Adjust subsetted properties
        addOwnedMember(packagedElement);
    }
}

void QUmlComponent::removePackagedElement(QUmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    if (_packagedElement.contains(packagedElement)) {
        _packagedElement.remove(packagedElement);

        // Adjust subsetted properties
        removeOwnedMember(packagedElement);
    }
}

/*!
    The interfaces that the component exposes to its environment. These interfaces may be Realized by the Component or any of its realizingClassifiers, or they may be the Interfaces that are provided by its public Ports.
 */
QSet<QUmlInterface *> QUmlComponent::provided() const
{
    // This is a read-only derived association end

    qWarning("QUmlComponent::provided(): to be implemented (this is a derived association end)");

    return QSet<QUmlInterface *>();
}

void QUmlComponent::addProvided(QUmlInterface *provided)
{
    // This is a read-only derived association end

    qWarning("QUmlComponent::provided(): to be implemented (this is a derived association end)");
    Q_UNUSED(provided);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlComponent::removeProvided(QUmlInterface *provided)
{
    // This is a read-only derived association end

    qWarning("QUmlComponent::provided(): to be implemented (this is a derived association end)");
    Q_UNUSED(provided);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The set of Realizations owned by the Component. Realizations reference the Classifiers of which the Component is an abstraction; i.e., that realize its behavior.
 */
QSet<QUmlComponentRealization *> QUmlComponent::realization() const
{
    // This is a read-write association end

    return _realization;
}

void QUmlComponent::addRealization(QUmlComponentRealization *realization)
{
    // This is a read-write association end

    if (!_realization.contains(realization)) {
        _realization.insert(realization);

        // Adjust subsetted properties
        addOwnedElement(realization);

        // Adjust opposite properties
        if (realization) {
            realization->setAbstraction(this);
        }
    }
}

void QUmlComponent::removeRealization(QUmlComponentRealization *realization)
{
    // This is a read-write association end

    if (_realization.contains(realization)) {
        _realization.remove(realization);

        // Adjust subsetted properties
        removeOwnedElement(realization);

        // Adjust opposite properties
        if (realization) {
            realization->setAbstraction(0);
        }
    }
}

/*!
    The interfaces that the component requires from other components in its environment in order to be able to offer its full set of provided functionality. These interfaces may be used by the Component or any of its realizingClassifiers, or they may be the Interfaces that are required by its public Ports.
 */
QSet<QUmlInterface *> QUmlComponent::required() const
{
    // This is a read-only derived association end

    qWarning("QUmlComponent::required(): to be implemented (this is a derived association end)");

    return QSet<QUmlInterface *>();
}

void QUmlComponent::addRequired(QUmlInterface *required)
{
    // This is a read-only derived association end

    qWarning("QUmlComponent::required(): to be implemented (this is a derived association end)");
    Q_UNUSED(required);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlComponent::removeRequired(QUmlInterface *required)
{
    // This is a read-only derived association end

    qWarning("QUmlComponent::required(): to be implemented (this is a derived association end)");
    Q_UNUSED(required);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

// OPERATIONS

/*!
    Utility returning the set of realized interfaces of a component.
 */
QSet<QUmlInterface *> QUmlComponent::realizedInterfaces(QUmlClassifier *classifier) const
{
    Q_UNUSED(classifier);
    return QSet<QUmlInterface *> ();
}

/*!
    Utility returning the set of used interfaces of a component.
 */
QSet<QUmlInterface *> QUmlComponent::usedInterfaces(QUmlClassifier *classifier) const
{
    Q_UNUSED(classifier);
    return QSet<QUmlInterface *> ();
}

QT_END_NAMESPACE

