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
#include "umlbehavior_p.h"

#include "private/umlbehavioralfeature_p.h"
#include "private/umlbehavioredclassifier_p.h"
#include "private/umlconstraint_p.h"
#include "private/umlparameter_p.h"
#include "private/umlparameterset_p.h"

UmlBehavior::UmlBehavior() :
    _isReentrant(true),
    _specification(0)
{
}

// OWNED ATTRIBUTES

UmlBehavioredClassifier *UmlBehavior::context() const
{
    // This is a read-only derived association end

    qWarning("UmlBehavior::context(): to be implemented (this is a derived association end)");

    return 0;
}

void UmlBehavior::setContext(UmlBehavioredClassifier *context)
{
    // This is a read-only derived association end

    qWarning("UmlBehavior::context(): to be implemented (this is a derived association end)");
    Q_UNUSED(context);

    if (false /* <derivedexclusion-criteria> */) {
        // Adjust subsetted properties
        // removeRedefinitionContext(/* <derived-code> */);

        // <derived-code>

        // Adjust subsetted properties
        if (context) {
            addRedefinitionContext(context);
        }
    }
}

bool UmlBehavior::isReentrant() const
{
    // This is a read-write property

    return _isReentrant;
}

void UmlBehavior::setReentrant(bool isReentrant)
{
    // This is a read-write property

    if (_isReentrant != isReentrant) {
        _isReentrant = isReentrant;
    }
}

const QList<UmlParameter *> UmlBehavior::ownedParameter() const
{
    // This is a read-write association end

    return _ownedParameter;
}

void UmlBehavior::addOwnedParameter(UmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameter.contains(ownedParameter)) {
        _ownedParameter.append(ownedParameter);

        // Adjust subsetted properties
        addOwnedMember(ownedParameter);
    }
}

void UmlBehavior::removeOwnedParameter(UmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameter.contains(ownedParameter)) {
        _ownedParameter.removeAll(ownedParameter);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameter);
    }
}

const QSet<UmlParameterSet *> UmlBehavior::ownedParameterSet() const
{
    // This is a read-write association end

    return _ownedParameterSet;
}

void UmlBehavior::addOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (!_ownedParameterSet.contains(ownedParameterSet)) {
        _ownedParameterSet.insert(ownedParameterSet);

        // Adjust subsetted properties
        addOwnedMember(ownedParameterSet);
    }
}

void UmlBehavior::removeOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (_ownedParameterSet.contains(ownedParameterSet)) {
        _ownedParameterSet.remove(ownedParameterSet);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameterSet);
    }
}

const QSet<UmlConstraint *> UmlBehavior::postcondition() const
{
    // This is a read-write association end

    return _postcondition;
}

void UmlBehavior::addPostcondition(UmlConstraint *postcondition)
{
    // This is a read-write association end

    if (!_postcondition.contains(postcondition)) {
        _postcondition.insert(postcondition);

        // Adjust subsetted properties
        addOwnedRule(postcondition);
    }
}

void UmlBehavior::removePostcondition(UmlConstraint *postcondition)
{
    // This is a read-write association end

    if (_postcondition.contains(postcondition)) {
        _postcondition.remove(postcondition);

        // Adjust subsetted properties
        removeOwnedRule(postcondition);
    }
}

const QSet<UmlConstraint *> UmlBehavior::precondition() const
{
    // This is a read-write association end

    return _precondition;
}

void UmlBehavior::addPrecondition(UmlConstraint *precondition)
{
    // This is a read-write association end

    if (!_precondition.contains(precondition)) {
        _precondition.insert(precondition);

        // Adjust subsetted properties
        addOwnedRule(precondition);
    }
}

void UmlBehavior::removePrecondition(UmlConstraint *precondition)
{
    // This is a read-write association end

    if (_precondition.contains(precondition)) {
        _precondition.remove(precondition);

        // Adjust subsetted properties
        removeOwnedRule(precondition);
    }
}

const QSet<UmlBehavior *> UmlBehavior::redefinedBehavior() const
{
    // This is a read-write association end

    return _redefinedBehavior;
}

void UmlBehavior::addRedefinedBehavior(UmlBehavior *redefinedBehavior)
{
    // This is a read-write association end

    if (!_redefinedBehavior.contains(redefinedBehavior)) {
        _redefinedBehavior.insert(redefinedBehavior);

        // Adjust subsetted properties
        addRedefinedClassifier(redefinedBehavior);
    }
}

void UmlBehavior::removeRedefinedBehavior(UmlBehavior *redefinedBehavior)
{
    // This is a read-write association end

    if (_redefinedBehavior.contains(redefinedBehavior)) {
        _redefinedBehavior.remove(redefinedBehavior);

        // Adjust subsetted properties
        removeRedefinedClassifier(redefinedBehavior);
    }
}

UmlBehavioralFeature *UmlBehavior::specification() const
{
    // This is a read-write association end

    return _specification;
}

void UmlBehavior::setSpecification(UmlBehavioralFeature *specification)
{
    // This is a read-write association end

    if (_specification != specification) {
        _specification = specification;
    }
}

