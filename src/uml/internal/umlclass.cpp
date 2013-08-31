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
#include "umlclass_p.h"

#include "private/umlclassifier_p.h"
#include "private/umlextension_p.h"
#include "private/umlnamedelement_p.h"
#include "private/umloperation_p.h"
#include "private/umlproperty_p.h"
#include "private/umlreception_p.h"

UmlClass::UmlClass() :
    _isAbstract(false),
    _isActive(false)
{
}

// OWNED ATTRIBUTES

const QSet<UmlExtension *> UmlClass::extension() const
{
    // This is a read-only derived association end

    qWarning("UmlClass::extension(): to be implemented (this is a derived association end)");

    return QSet<UmlExtension *>();
}

void UmlClass::addExtension(UmlExtension *extension)
{
    // This is a read-only derived association end

    qWarning("UmlClass::extension(): to be implemented (this is a derived association end)");
    Q_UNUSED(extension);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite properties
        if (extension) {
            extension->setMetaclass(this);
        }
    }
}

void UmlClass::removeExtension(UmlExtension *extension)
{
    // This is a read-only derived association end

    qWarning("UmlClass::extension(): to be implemented (this is a derived association end)");
    Q_UNUSED(extension);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite properties
        if (extension) {
            extension->setMetaclass(0);
        }
    }
}

bool UmlClass::isAbstract() const
{
    // This is a read-write property

    return _isAbstract;
}

void UmlClass::setAbstract(bool isAbstract)
{
    // This is a read-write property

    if (_isAbstract != isAbstract) {
        _isAbstract = isAbstract;
    }
}

bool UmlClass::isActive() const
{
    // This is a read-write property

    return _isActive;
}

void UmlClass::setActive(bool isActive)
{
    // This is a read-write property

    if (_isActive != isActive) {
        _isActive = isActive;
    }
}

const QList<UmlClassifier *> UmlClass::nestedClassifier() const
{
    // This is a read-write association end

    return _nestedClassifier;
}

void UmlClass::addNestedClassifier(UmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    if (!_nestedClassifier.contains(nestedClassifier)) {
        _nestedClassifier.append(nestedClassifier);

        // Adjust subsetted properties
        addOwnedMember(nestedClassifier);
    }
}

void UmlClass::removeNestedClassifier(UmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    if (_nestedClassifier.contains(nestedClassifier)) {
        _nestedClassifier.removeAll(nestedClassifier);

        // Adjust subsetted properties
        removeOwnedMember(nestedClassifier);
    }
}

const QList<UmlProperty *> UmlClass::ownedAttribute() const
{
    // This is a read-write association end

    return _ownedAttribute;
}

void UmlClass::addOwnedAttribute(UmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (!_ownedAttribute.contains(ownedAttribute)) {
        _ownedAttribute.append(ownedAttribute);

        // Adjust subsetted properties
        addOwnedMember(ownedAttribute);
        addAttribute(ownedAttribute);

        // Adjust opposite properties
        if (ownedAttribute) {
            ownedAttribute->setClass(this);
        }
    }
}

void UmlClass::removeOwnedAttribute(UmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (_ownedAttribute.contains(ownedAttribute)) {
        _ownedAttribute.removeAll(ownedAttribute);

        // Adjust subsetted properties
        removeOwnedMember(ownedAttribute);
        removeAttribute(ownedAttribute);

        // Adjust opposite properties
        if (ownedAttribute) {
            ownedAttribute->setClass(0);
        }
    }
}

const QList<UmlOperation *> UmlClass::ownedOperation() const
{
    // This is a read-write association end

    return _ownedOperation;
}

void UmlClass::addOwnedOperation(UmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (!_ownedOperation.contains(ownedOperation)) {
        _ownedOperation.append(ownedOperation);

        // Adjust subsetted properties
        addFeature(ownedOperation);
        addOwnedMember(ownedOperation);

        // Adjust opposite properties
        if (ownedOperation) {
            ownedOperation->setClass(this);
        }
    }
}

void UmlClass::removeOwnedOperation(UmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (_ownedOperation.contains(ownedOperation)) {
        _ownedOperation.removeAll(ownedOperation);

        // Adjust subsetted properties
        removeFeature(ownedOperation);
        removeOwnedMember(ownedOperation);

        // Adjust opposite properties
        if (ownedOperation) {
            ownedOperation->setClass(0);
        }
    }
}

const QSet<UmlReception *> UmlClass::ownedReception() const
{
    // This is a read-write association end

    return _ownedReception;
}

void UmlClass::addOwnedReception(UmlReception *ownedReception)
{
    // This is a read-write association end

    if (!_ownedReception.contains(ownedReception)) {
        _ownedReception.insert(ownedReception);

        // Adjust subsetted properties
        addFeature(ownedReception);
        addOwnedMember(ownedReception);
    }
}

void UmlClass::removeOwnedReception(UmlReception *ownedReception)
{
    // This is a read-write association end

    if (_ownedReception.contains(ownedReception)) {
        _ownedReception.remove(ownedReception);

        // Adjust subsetted properties
        removeFeature(ownedReception);
        removeOwnedMember(ownedReception);
    }
}

const QSet<UmlClass *> UmlClass::superClass() const
{
    // This is a read-write derived association end

    qWarning("UmlClass::superClass(): to be implemented (this is a derived association end)");

    return QSet<UmlClass *>();
}

void UmlClass::addSuperClass(UmlClass *superClass)
{
    // This is a read-write derived association end

    qWarning("UmlClass::superClass(): to be implemented (this is a derived association end)");
    Q_UNUSED(superClass);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void UmlClass::removeSuperClass(UmlClass *superClass)
{
    // This is a read-write derived association end

    qWarning("UmlClass::superClass(): to be implemented (this is a derived association end)");
    Q_UNUSED(superClass);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

// OPERATIONS

QSet<UmlNamedElement *> UmlClass::inherit(
    QSet<UmlNamedElement *> inhs) const
{
    qWarning("UmlClass::inherit(): to be implemented (operation)");

    Q_UNUSED(inhs);
    return QSet<UmlNamedElement *> ();
}

