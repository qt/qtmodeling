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
#include "umloperation_p.h"

#include "private/umlclass_p.h"
#include "private/umlconstraint_p.h"
#include "private/umldatatype_p.h"
#include "private/umlinterface_p.h"
#include "private/umloperationtemplateparameter_p.h"
#include "private/umlparameter_p.h"
#include "private/umlredefinableelement_p.h"
#include "private/umltype_p.h"

UmlOperation::UmlOperation() :
    _bodyCondition(0),
    _class_(0),
    _datatype(0),
    _interface_(0),
    _isQuery(false),
    _templateParameter(0)
{
}

// OWNED ATTRIBUTES

UmlConstraint *UmlOperation::bodyCondition() const
{
    // This is a read-write association end

    return _bodyCondition;
}

void UmlOperation::setBodyCondition(UmlConstraint *bodyCondition)
{
    // This is a read-write association end

    if (_bodyCondition != bodyCondition) {
        // Adjust subsetted properties
        removeOwnedRule(_bodyCondition);

        _bodyCondition = bodyCondition;

        // Adjust subsetted properties
        if (bodyCondition) {
            addOwnedRule(bodyCondition);
        }
    }
}

UmlClass *UmlOperation::class_() const
{
    // This is a read-write association end

    return _class_;
}

void UmlOperation::setClass(UmlClass *class_)
{
    // This is a read-write association end

    if (_class_ != class_) {
        // Adjust subsetted properties
        removeFeaturingClassifier(_class_);
        removeRedefinitionContext(_class_);

        _class_ = class_;

        // Adjust subsetted properties
        if (class_) {
            addFeaturingClassifier(class_);
        }
        if (class_) {
            addRedefinitionContext(class_);
        }
        setNamespace(class_);
    }
}

UmlDataType *UmlOperation::datatype() const
{
    // This is a read-write association end

    return _datatype;
}

void UmlOperation::setDatatype(UmlDataType *datatype)
{
    // This is a read-write association end

    if (_datatype != datatype) {
        // Adjust subsetted properties
        removeFeaturingClassifier(_datatype);
        removeRedefinitionContext(_datatype);

        _datatype = datatype;

        // Adjust subsetted properties
        if (datatype) {
            addFeaturingClassifier(datatype);
        }
        if (datatype) {
            addRedefinitionContext(datatype);
        }
        setNamespace(datatype);
    }
}

UmlInterface *UmlOperation::interface_() const
{
    // This is a read-write association end

    return _interface_;
}

void UmlOperation::setInterface(UmlInterface *interface_)
{
    // This is a read-write association end

    if (_interface_ != interface_) {
        // Adjust subsetted properties
        removeFeaturingClassifier(_interface_);
        removeRedefinitionContext(_interface_);

        _interface_ = interface_;

        // Adjust subsetted properties
        if (interface_) {
            addFeaturingClassifier(interface_);
        }
        if (interface_) {
            addRedefinitionContext(interface_);
        }
        setNamespace(interface_);
    }
}

bool UmlOperation::isOrdered() const
{
    // This is a read-only derived property

    qWarning("UmlOperation::isOrdered(): to be implemented (this is a derived property)");

    return bool();
}

void UmlOperation::setOrdered(bool isOrdered)
{
    // This is a read-only derived property

    qWarning("UmlOperation::isOrdered(): to be implemented (this is a derived property)");
    Q_UNUSED(isOrdered);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

bool UmlOperation::isQuery() const
{
    // This is a read-write property

    return _isQuery;
}

void UmlOperation::setQuery(bool isQuery)
{
    // This is a read-write property

    if (_isQuery != isQuery) {
        _isQuery = isQuery;
    }
}

bool UmlOperation::isUnique() const
{
    // This is a read-only derived property

    qWarning("UmlOperation::isUnique(): to be implemented (this is a derived property)");

    return bool();
}

void UmlOperation::setUnique(bool isUnique)
{
    // This is a read-only derived property

    qWarning("UmlOperation::isUnique(): to be implemented (this is a derived property)");
    Q_UNUSED(isUnique);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

int UmlOperation::lower() const
{
    // This is a read-only derived property

    qWarning("UmlOperation::lower(): to be implemented (this is a derived property)");

    return int();
}

void UmlOperation::setLower(int lower)
{
    // This is a read-only derived property

    qWarning("UmlOperation::lower(): to be implemented (this is a derived property)");
    Q_UNUSED(lower);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

const QList<UmlParameter *> UmlOperation::ownedParameter() const
{
    // This is a read-write association end

    return _ownedParameter;
}

void UmlOperation::addOwnedParameter(UmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameter.contains(ownedParameter)) {
        _ownedParameter.append(ownedParameter);

        // Adjust opposite properties
        if (ownedParameter) {
            ownedParameter->setOperation(this);
        }
    }
}

void UmlOperation::removeOwnedParameter(UmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameter.contains(ownedParameter)) {
        _ownedParameter.removeAll(ownedParameter);

        // Adjust opposite properties
        if (ownedParameter) {
            ownedParameter->setOperation(0);
        }
    }
}

const QSet<UmlConstraint *> UmlOperation::postcondition() const
{
    // This is a read-write association end

    return _postcondition;
}

void UmlOperation::addPostcondition(UmlConstraint *postcondition)
{
    // This is a read-write association end

    if (!_postcondition.contains(postcondition)) {
        _postcondition.insert(postcondition);

        // Adjust subsetted properties
        addOwnedRule(postcondition);
    }
}

void UmlOperation::removePostcondition(UmlConstraint *postcondition)
{
    // This is a read-write association end

    if (_postcondition.contains(postcondition)) {
        _postcondition.remove(postcondition);

        // Adjust subsetted properties
        removeOwnedRule(postcondition);
    }
}

const QSet<UmlConstraint *> UmlOperation::precondition() const
{
    // This is a read-write association end

    return _precondition;
}

void UmlOperation::addPrecondition(UmlConstraint *precondition)
{
    // This is a read-write association end

    if (!_precondition.contains(precondition)) {
        _precondition.insert(precondition);

        // Adjust subsetted properties
        addOwnedRule(precondition);
    }
}

void UmlOperation::removePrecondition(UmlConstraint *precondition)
{
    // This is a read-write association end

    if (_precondition.contains(precondition)) {
        _precondition.remove(precondition);

        // Adjust subsetted properties
        removeOwnedRule(precondition);
    }
}

const QSet<UmlType *> UmlOperation::raisedException() const
{
    // This is a read-write association end

    return _raisedException;
}

void UmlOperation::addRaisedException(UmlType *raisedException)
{
    // This is a read-write association end

    if (!_raisedException.contains(raisedException)) {
        _raisedException.insert(raisedException);
    }
}

void UmlOperation::removeRaisedException(UmlType *raisedException)
{
    // This is a read-write association end

    if (_raisedException.contains(raisedException)) {
        _raisedException.remove(raisedException);
    }
}

const QSet<UmlOperation *> UmlOperation::redefinedOperation() const
{
    // This is a read-write association end

    return _redefinedOperation;
}

void UmlOperation::addRedefinedOperation(UmlOperation *redefinedOperation)
{
    // This is a read-write association end

    if (!_redefinedOperation.contains(redefinedOperation)) {
        _redefinedOperation.insert(redefinedOperation);

        // Adjust subsetted properties
        addRedefinedElement(redefinedOperation);
    }
}

void UmlOperation::removeRedefinedOperation(UmlOperation *redefinedOperation)
{
    // This is a read-write association end

    if (_redefinedOperation.contains(redefinedOperation)) {
        _redefinedOperation.remove(redefinedOperation);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedOperation);
    }
}

UmlOperationTemplateParameter *UmlOperation::templateParameter() const
{
    // This is a read-write association end

    return _templateParameter;
}

void UmlOperation::setTemplateParameter(UmlOperationTemplateParameter *templateParameter)
{
    // This is a read-write association end

    if (_templateParameter != templateParameter) {
        _templateParameter = templateParameter;
    }
}

UmlType *UmlOperation::type() const
{
    // This is a read-only derived association end

    qWarning("UmlOperation::type(): to be implemented (this is a derived association end)");

    return 0;
}

void UmlOperation::setType(UmlType *type)
{
    // This is a read-only derived association end

    qWarning("UmlOperation::type(): to be implemented (this is a derived association end)");
    Q_UNUSED(type);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

int UmlOperation::upper() const
{
    // This is a read-only derived property

    qWarning("UmlOperation::upper(): to be implemented (this is a derived property)");

    return int();
}

void UmlOperation::setUpper(int upper)
{
    // This is a read-only derived property

    qWarning("UmlOperation::upper(): to be implemented (this is a derived property)");
    Q_UNUSED(upper);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

// OPERATIONS

bool UmlOperation::isConsistentWith(
    UmlRedefinableElement *redefinee) const
{
    qWarning("UmlOperation::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

QSet<UmlParameter *> UmlOperation::returnResult(
    ) const
{
    qWarning("UmlOperation::returnResult(): to be implemented (operation)");

    return QSet<UmlParameter *> ();
}

