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
#include "umlbehavioralfeature_p.h"

#include "private/umlbehavior_p.h"
#include "private/umlnamedelement_p.h"
#include "private/umlparameter_p.h"
#include "private/umlparameterset_p.h"
#include "private/umltype_p.h"

/*!
    \class UmlBehavioralFeature

    \inmodule QtUml

    \brief A behavioral feature is a feature of a classifier that specifies an aspect of the behavior of its instances.A behavioral feature is implemented (realized) by a behavior. A behavioral feature specifies that a classifier will respond to a designated request by invoking its implementing method.A behavioral feature owns zero or more parameter sets.
 */

UmlBehavioralFeature::UmlBehavioralFeature() :
    _concurrency(QtUml::CallConcurrencyKindSequential),
    _isAbstract(false)
{
}

// OWNED ATTRIBUTES

/*!
    Specifies the semantics of concurrent calls to the same passive instance (i.e., an instance originating from a class with isActive being false). Active instances control access to their own behavioral features.
 */
QtUml::CallConcurrencyKind UmlBehavioralFeature::concurrency() const
{
    // This is a read-write property

    return _concurrency;
}

void UmlBehavioralFeature::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    // This is a read-write property

    if (_concurrency != concurrency) {
        _concurrency = concurrency;
    }
}

/*!
    If true, then the behavioral feature does not have an implementation, and one must be supplied by a more specific element. If false, the behavioral feature must have an implementation in the classifier or one must be inherited from a more general element.
 */
bool UmlBehavioralFeature::isAbstract() const
{
    // This is a read-write property

    return _isAbstract;
}

void UmlBehavioralFeature::setAbstract(bool isAbstract)
{
    // This is a read-write property

    if (_isAbstract != isAbstract) {
        _isAbstract = isAbstract;
    }
}

/*!
    A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior).
 */
const QSet<UmlBehavior *> UmlBehavioralFeature::method() const
{
    // This is a read-write association end

    return _method;
}

void UmlBehavioralFeature::addMethod(UmlBehavior *method)
{
    // This is a read-write association end

    if (!_method.contains(method)) {
        _method.insert(method);

        // Adjust opposite properties
        if (method) {
            method->setSpecification(this);
        }
    }
}

void UmlBehavioralFeature::removeMethod(UmlBehavior *method)
{
    // This is a read-write association end

    if (_method.contains(method)) {
        _method.remove(method);

        // Adjust opposite properties
        if (method) {
            method->setSpecification(0);
        }
    }
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.
 */
const QList<UmlParameter *> UmlBehavioralFeature::ownedParameter() const
{
    // This is a read-write association end

    return _ownedParameter;
}

void UmlBehavioralFeature::addOwnedParameter(UmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameter.contains(ownedParameter)) {
        _ownedParameter.append(ownedParameter);

        // Adjust subsetted properties
        addOwnedMember(ownedParameter);
    }
}

void UmlBehavioralFeature::removeOwnedParameter(UmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameter.contains(ownedParameter)) {
        _ownedParameter.removeAll(ownedParameter);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameter);
    }
}

/*!
    The ParameterSets owned by this BehavioralFeature.
 */
const QSet<UmlParameterSet *> UmlBehavioralFeature::ownedParameterSet() const
{
    // This is a read-write association end

    return _ownedParameterSet;
}

void UmlBehavioralFeature::addOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (!_ownedParameterSet.contains(ownedParameterSet)) {
        _ownedParameterSet.insert(ownedParameterSet);

        // Adjust subsetted properties
        addOwnedMember(ownedParameterSet);
    }
}

void UmlBehavioralFeature::removeOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (_ownedParameterSet.contains(ownedParameterSet)) {
        _ownedParameterSet.remove(ownedParameterSet);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameterSet);
    }
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this feature.
 */
const QSet<UmlType *> UmlBehavioralFeature::raisedException() const
{
    // This is a read-write association end

    return _raisedException;
}

void UmlBehavioralFeature::addRaisedException(UmlType *raisedException)
{
    // This is a read-write association end

    if (!_raisedException.contains(raisedException)) {
        _raisedException.insert(raisedException);
    }
}

void UmlBehavioralFeature::removeRaisedException(UmlType *raisedException)
{
    // This is a read-write association end

    if (_raisedException.contains(raisedException)) {
        _raisedException.remove(raisedException);
    }
}

// OPERATIONS

/*!
    The query isDistinguishableFrom() determines whether two BehavioralFeatures may coexist in the same Namespace. It specifies that they have to have different signatures.
 */
bool UmlBehavioralFeature::isDistinguishableFrom(
    UmlNamedElement *n, UmlNamespace *ns) const
{
    qWarning("UmlBehavioralFeature::isDistinguishableFrom(): to be implemented (operation)");

    Q_UNUSED(n);
    Q_UNUSED(ns);
    return bool ();
}

