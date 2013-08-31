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
#include "umlcomponent_p.h"

#include "private/umlclassifier_p.h"
#include "private/umlcomponentrealization_p.h"
#include "private/umlinterface_p.h"
#include "private/umlpackageableelement_p.h"

UmlComponent::UmlComponent() :
    _isIndirectlyInstantiated(true)
{
}

// OWNED ATTRIBUTES

bool UmlComponent::isIndirectlyInstantiated() const
{
    // This is a read-write property

    return _isIndirectlyInstantiated;
}

void UmlComponent::setIndirectlyInstantiated(bool isIndirectlyInstantiated)
{
    // This is a read-write property

    if (_isIndirectlyInstantiated != isIndirectlyInstantiated) {
        _isIndirectlyInstantiated = isIndirectlyInstantiated;
    }
}

const QSet<UmlPackageableElement *> UmlComponent::packagedElement() const
{
    // This is a read-write association end

    return _packagedElement;
}

void UmlComponent::addPackagedElement(UmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    if (!_packagedElement.contains(packagedElement)) {
        _packagedElement.insert(packagedElement);

        // Adjust subsetted properties
        addOwnedMember(packagedElement);
    }
}

void UmlComponent::removePackagedElement(UmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    if (_packagedElement.contains(packagedElement)) {
        _packagedElement.remove(packagedElement);

        // Adjust subsetted properties
        removeOwnedMember(packagedElement);
    }
}

const QSet<UmlInterface *> UmlComponent::provided() const
{
    // This is a read-only derived association end

    qWarning("UmlComponent::provided(): to be implemented (this is a derived association end)");

    return QSet<UmlInterface *>();
}

void UmlComponent::addProvided(UmlInterface *provided)
{
    // This is a read-only derived association end

    qWarning("UmlComponent::provided(): to be implemented (this is a derived association end)");
    Q_UNUSED(provided);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void UmlComponent::removeProvided(UmlInterface *provided)
{
    // This is a read-only derived association end

    qWarning("UmlComponent::provided(): to be implemented (this is a derived association end)");
    Q_UNUSED(provided);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

const QSet<UmlComponentRealization *> UmlComponent::realization() const
{
    // This is a read-write association end

    return _realization;
}

void UmlComponent::addRealization(UmlComponentRealization *realization)
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

void UmlComponent::removeRealization(UmlComponentRealization *realization)
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

const QSet<UmlInterface *> UmlComponent::required() const
{
    // This is a read-only derived association end

    qWarning("UmlComponent::required(): to be implemented (this is a derived association end)");

    return QSet<UmlInterface *>();
}

void UmlComponent::addRequired(UmlInterface *required)
{
    // This is a read-only derived association end

    qWarning("UmlComponent::required(): to be implemented (this is a derived association end)");
    Q_UNUSED(required);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void UmlComponent::removeRequired(UmlInterface *required)
{
    // This is a read-only derived association end

    qWarning("UmlComponent::required(): to be implemented (this is a derived association end)");
    Q_UNUSED(required);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

// OPERATIONS

QSet<UmlInterface *> UmlComponent::realizedInterfaces(
    UmlClassifier *classifier) const
{
    qWarning("UmlComponent::realizedInterfaces(): to be implemented (operation)");

    Q_UNUSED(classifier);
    return QSet<UmlInterface *> ();
}

QSet<UmlInterface *> UmlComponent::usedInterfaces(
    UmlClassifier *classifier) const
{
    qWarning("UmlComponent::usedInterfaces(): to be implemented (operation)");

    Q_UNUSED(classifier);
    return QSet<UmlInterface *> ();
}

