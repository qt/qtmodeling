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
#include "qumloperation.h"
#include "qumloperation_p.h"

#include <QtUml/QUmlClass>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDataType>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlOperationTemplateParameter>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlOperationPrivate::QUmlOperationPrivate() :
    bodyCondition(0),
    class_(0),
    datatype(0),
    interface_(0),
    isQuery(false),
    templateParameter(0)
{
}

/*!
    \class QUmlOperation

    \inmodule QtUml

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.An operation may invoke both the execution of method behaviors as well as other behavioral responses.Operation specializes TemplateableElement in order to support specification of template operations and bound operations. Operation specializes ParameterableElement to specify that an operation can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
 */

QUmlOperation::QUmlOperation(bool create_d_ptr) :
    QUmlTemplateableElement(false),
    QUmlBehavioralFeature(false),
    QUmlParameterableElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlOperationPrivate);
}

// OWNED ATTRIBUTES

/*!
    An optional Constraint on the result values of an invocation of this Operation.
 */
QUmlConstraint *QUmlOperation::bodyCondition() const
{
    // This is a read-write association end

    QM_D(const QUmlOperation);
    return d->bodyCondition;
}

void QUmlOperation::setBodyCondition(QUmlConstraint *bodyCondition)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (d->bodyCondition != bodyCondition) {
        d->bodyCondition = bodyCondition;
    }
}

/*!
    The class that owns the operation.
 */
QUmlClass *QUmlOperation::class_() const
{
    // This is a read-write association end

    QM_D(const QUmlOperation);
    return d->class_;
}

void QUmlOperation::setClass(QUmlClass *class_)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (d->class_ != class_) {
        d->class_ = class_;
    }
}

/*!
    The DataType that owns this Operation.
 */
QUmlDataType *QUmlOperation::datatype() const
{
    // This is a read-write association end

    QM_D(const QUmlOperation);
    return d->datatype;
}

void QUmlOperation::setDatatype(QUmlDataType *datatype)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (d->datatype != datatype) {
        d->datatype = datatype;
    }
}

/*!
    The Interface that owns this Operation.
 */
QUmlInterface *QUmlOperation::interface_() const
{
    // This is a read-write association end

    QM_D(const QUmlOperation);
    return d->interface_;
}

void QUmlOperation::setInterface(QUmlInterface *interface_)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (d->interface_ != interface_) {
        d->interface_ = interface_;
    }
}

/*!
    This information is derived from the return result for this Operation.Specifies whether the return parameter is ordered or not, if present.
 */
bool QUmlOperation::isOrdered() const
{
    // This is a read-only derived property

    qWarning("QUmlOperation::isOrdered(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QUmlOperation::isQuery() const
{
    // This is a read-write property

    QM_D(const QUmlOperation);
    return d->isQuery;
}

void QUmlOperation::setQuery(bool isQuery)
{
    // This is a read-write property

    QM_D(QUmlOperation);
    if (d->isQuery != isQuery) {
        d->isQuery = isQuery;
    }
}

/*!
    Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation.
 */
bool QUmlOperation::isUnique() const
{
    // This is a read-only derived property

    qWarning("QUmlOperation::isUnique(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    This information is derived from the return result for this Operation.Specifies the lower multiplicity of the return parameter, if present.
 */
int QUmlOperation::lower() const
{
    // This is a read-only derived property

    qWarning("QUmlOperation::lower(): to be implemented (this is a derived property)");

    return int();
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.
 */
QList<QUmlParameter *> QUmlOperation::ownedParameter() const
{
    // This is a read-write association end

    QM_D(const QUmlOperation);
    return d->ownedParameter;
}

void QUmlOperation::addOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (!d->ownedParameter.contains(ownedParameter)) {
        d->ownedParameter.append(ownedParameter);
    }
}

void QUmlOperation::removeOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (d->ownedParameter.contains(ownedParameter)) {
        d->ownedParameter.removeAll(ownedParameter);
    }
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
QSet<QUmlConstraint *> QUmlOperation::postcondition() const
{
    // This is a read-write association end

    QM_D(const QUmlOperation);
    return d->postcondition;
}

void QUmlOperation::addPostcondition(QUmlConstraint *postcondition)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (!d->postcondition.contains(postcondition)) {
        d->postcondition.insert(postcondition);
    }
}

void QUmlOperation::removePostcondition(QUmlConstraint *postcondition)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (d->postcondition.contains(postcondition)) {
        d->postcondition.remove(postcondition);
    }
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.
 */
QSet<QUmlConstraint *> QUmlOperation::precondition() const
{
    // This is a read-write association end

    QM_D(const QUmlOperation);
    return d->precondition;
}

void QUmlOperation::addPrecondition(QUmlConstraint *precondition)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (!d->precondition.contains(precondition)) {
        d->precondition.insert(precondition);
    }
}

void QUmlOperation::removePrecondition(QUmlConstraint *precondition)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (d->precondition.contains(precondition)) {
        d->precondition.remove(precondition);
    }
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.
 */
QSet<QUmlType *> QUmlOperation::raisedException() const
{
    // This is a read-write association end

    QM_D(const QUmlOperation);
    return d->raisedException;
}

void QUmlOperation::addRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (!d->raisedException.contains(raisedException)) {
        d->raisedException.insert(raisedException);
    }
}

void QUmlOperation::removeRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (d->raisedException.contains(raisedException)) {
        d->raisedException.remove(raisedException);
    }
}

/*!
    References the Operations that are redefined by this Operation.
 */
QSet<QUmlOperation *> QUmlOperation::redefinedOperation() const
{
    // This is a read-write association end

    QM_D(const QUmlOperation);
    return d->redefinedOperation;
}

void QUmlOperation::addRedefinedOperation(QUmlOperation *redefinedOperation)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (!d->redefinedOperation.contains(redefinedOperation)) {
        d->redefinedOperation.insert(redefinedOperation);
    }
}

void QUmlOperation::removeRedefinedOperation(QUmlOperation *redefinedOperation)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (d->redefinedOperation.contains(redefinedOperation)) {
        d->redefinedOperation.remove(redefinedOperation);
    }
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlOperationTemplateParameter *QUmlOperation::templateParameter() const
{
    // This is a read-write association end

    QM_D(const QUmlOperation);
    return d->templateParameter;
}

void QUmlOperation::setTemplateParameter(QUmlOperationTemplateParameter *templateParameter)
{
    // This is a read-write association end

    QM_D(QUmlOperation);
    if (d->templateParameter != templateParameter) {
        d->templateParameter = templateParameter;
    }
}

/*!
    This information is derived from the return result for this Operation.Specifies the return result of the operation, if present.
 */
QUmlType *QUmlOperation::type() const
{
    // This is a read-only derived association end

    qWarning("QUmlOperation::type(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present.
 */
int QUmlOperation::upper() const
{
    // This is a read-only derived property

    qWarning("QUmlOperation::upper(): to be implemented (this is a derived property)");

    return int();
}

// OPERATIONS

/*!
    A redefining operation is consistent with a redefined operation if it has the same number of owned parameters, and the type of each owned parameter conforms to the type of the corresponding redefined parameter.The query isConsistentWith() specifies, for any two Operations in a context in which redefinition is possible, whether redefinition would be consistent in the sense of maintaining type covariance. Other senses of consistency may be required, for example to determine consistency in the sense of contravariance. Users may define alternative queries under names different from 'isConsistentWith()', as for example, users may define a query named 'isContravariantWith()'.
 */
bool QUmlOperation::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
QSet<QUmlParameter *> QUmlOperation::returnResult() const
{
    return QSet<QUmlParameter *> ();
}

QT_END_NAMESPACE

