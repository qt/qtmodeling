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

#include "qoperation.h"
//#include "qoperation_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QOperation

    \inmodule QtUml

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.An operation may invoke both the execution of method behaviors as well as other behavioral responses.Operation specializes TemplateableElement in order to support specification of template operations and bound operations. Operation specializes ParameterableElement to specify that an operation can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
 */

QOperation::QOperation(QObject *parent)
    : QObject(parent)
{
}

QOperation::~QOperation()
{
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QOperation::isQuery() const
{
}

void QOperation::setQuery(bool isQuery)
{
}

/*!
    An optional Constraint on the result values of an invocation of this Operation.
 */
QConstraint *QOperation::bodyCondition() const
{
}

void QOperation::setBodyCondition(const QConstraint *bodyCondition)
{
}

/*!
    The class that owns the operation.
 */
QClass *QOperation::class_() const
{
}

void QOperation::setClass_(const QClass *class_)
{
}

/*!
    The DataType that owns this Operation.
 */
QDataType *QOperation::datatype() const
{
}

void QOperation::setDatatype(const QDataType *datatype)
{
}

/*!
    The Interface that owns this Operation.
 */
QInterface *QOperation::interface() const
{
}

void QOperation::setInterface(const QInterface *interface)
{
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.
 */
const QList<QParameter *> *QOperation::ownedParameters() const
{
}

void QOperation::addOwnedParameter(const QParameter *ownedParameter)
{
}

void QOperation::removeOwnedParameter(const QParameter *ownedParameter)
{
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
const QSet<QConstraint *> *QOperation::postconditions() const
{
}

void QOperation::addPostcondition(const QConstraint *postcondition)
{
}

void QOperation::removePostcondition(const QConstraint *postcondition)
{
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.
 */
const QSet<QConstraint *> *QOperation::preconditions() const
{
}

void QOperation::addPrecondition(const QConstraint *precondition)
{
}

void QOperation::removePrecondition(const QConstraint *precondition)
{
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.
 */
const QSet<QType *> *QOperation::raisedExceptions() const
{
}

void QOperation::addRaisedException(const QType *raisedException)
{
}

void QOperation::removeRaisedException(const QType *raisedException)
{
}

/*!
    References the Operations that are redefined by this Operation.
 */
const QSet<QOperation *> *QOperation::redefinedOperations() const
{
}

void QOperation::addRedefinedOperation(const QOperation *redefinedOperation)
{
}

void QOperation::removeRedefinedOperation(const QOperation *redefinedOperation)
{
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QOperationTemplateParameter *QOperation::templateParameter() const
{
}

void QOperation::setTemplateParameter(const QOperationTemplateParameter *templateParameter)
{
}

/*!
    A redefining operation is consistent with a redefined operation if it has the same number of owned parameters, and the type of each owned parameter conforms to the type of the corresponding redefined parameter.The query isConsistentWith() specifies, for any two Operations in a context in which redefinition is possible, whether redefinition would be consistent in the sense of maintaining type covariance. Other senses of consistency may be required, for example to determine consistency in the sense of contravariance. Users may define alternative queries under names different from 'isConsistentWith()', as for example, users may define a query named 'isContravariantWith()'.
 */
bool QOperation::isConsistentWith(const QRedefinableElement *redefinee) const
{
}

/*!
    If this operation has a return parameter, isOrdered equals the value of isOrdered for that parameter. Otherwise isOrdered is false.
 */
bool QOperation::isOrdered() const
{
}

/*!
    If this operation has a return parameter, isUnique equals the value of isUnique for that parameter. Otherwise isUnique is true.
 */
bool QOperation::isUnique() const
{
}

/*!
    If this operation has a return parameter, lower equals the value of lower for that parameter. Otherwise lower is not defined.
 */
qint32 QOperation::lower() const
{
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
const QSet<QParameter *> *QOperation::returnResult() const
{
}

/*!
    If this operation has a return parameter, type equals the value of type for that parameter. Otherwise type is not defined.
 */
QType *QOperation::type() const
{
}

/*!
    If this operation has a return parameter, upper equals the value of upper for that parameter. Otherwise upper is not defined.
 */
qint32 QOperation::upper() const
{
}

#include "moc_qoperation.cpp"

QT_END_NAMESPACE_QTUML

