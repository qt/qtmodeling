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

#include <QtUml/QOperationTemplateParameter>
#include <QtUml/QType>
#include <QtUml/QRedefinableElement>
#include <QtUml/QParameter>
#include <QtUml/QInterface>
#include <QtUml/QConstraint>
#include <QtUml/QDataType>
#include <QtUml/QClass>

QT_BEGIN_NAMESPACE_QTUML

class QOperationPrivate
{
public:
    explicit QOperationPrivate();
    virtual ~QOperationPrivate();

    bool isQuery;
    QConstraint *bodyCondition;
    QClass *class_;
    QDataType *datatype;
    QInterface *interface;
    QList<QParameter *> *ownedParameters;
    QSet<QConstraint *> *postconditions;
    QSet<QConstraint *> *preconditions;
    QSet<QType *> *raisedExceptions;
    QSet<QOperation *> *redefinedOperations;
    QOperationTemplateParameter *templateParameter;
};

QOperationPrivate::QOperationPrivate() :
    isQuery(false),
    bodyCondition(0),
    class_(0),
    datatype(0),
    interface(0),
    ownedParameters(new QList<QParameter *>),
    postconditions(new QSet<QConstraint *>),
    preconditions(new QSet<QConstraint *>),
    raisedExceptions(new QSet<QType *>),
    redefinedOperations(new QSet<QOperation *>),
    templateParameter(0)
{
}

QOperationPrivate::~QOperationPrivate()
{
    delete ownedParameters;
    delete postconditions;
    delete preconditions;
    delete raisedExceptions;
    delete redefinedOperations;
}

/*!
    \class QOperation

    \inmodule QtUml

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.An operation may invoke both the execution of method behaviors as well as other behavioral responses.Operation specializes TemplateableElement in order to support specification of template operations and bound operations. Operation specializes ParameterableElement to specify that an operation can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
 */

QOperation::QOperation(QObject *parent)
    : QObject(parent), d_ptr(new QOperationPrivate)
{
}

QOperation::~QOperation()
{
    delete d_ptr;
}

/*!
    This information is derived from the return result for this Operation.Specifies whether the return parameter is ordered or not, if present.
 */
bool QOperation::isOrdered() const
{
    qWarning("To be implemented (this is a derived attribute)");
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QOperation::isQuery() const
{
    return d_ptr->isQuery;
}

void QOperation::setQuery(bool isQuery)
{
    d_ptr->isQuery = isQuery;
}

/*!
    Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation.
 */
bool QOperation::isUnique() const
{
    qWarning("To be implemented (this is a derived attribute)");
}

/*!
    This information is derived from the return result for this Operation.Specifies the lower multiplicity of the return parameter, if present.
 */
qint32 QOperation::lower() const
{
    qWarning("To be implemented (this is a derived attribute)");
}

/*!
    This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present.
 */
qint32 QOperation::upper() const
{
    qWarning("To be implemented (this is a derived attribute)");
}

/*!
    An optional Constraint on the result values of an invocation of this Operation.
 */
QConstraint *QOperation::bodyCondition() const
{
    return d_ptr->bodyCondition;
}

void QOperation::setBodyCondition(const QConstraint *bodyCondition)
{
    d_ptr->bodyCondition = const_cast<QConstraint *>(bodyCondition);
}

/*!
    The class that owns the operation.
 */
QClass *QOperation::class_() const
{
    return d_ptr->class_;
}

void QOperation::setClass_(const QClass *class_)
{
    d_ptr->class_ = const_cast<QClass *>(class_);
}

/*!
    The DataType that owns this Operation.
 */
QDataType *QOperation::datatype() const
{
    return d_ptr->datatype;
}

void QOperation::setDatatype(const QDataType *datatype)
{
    d_ptr->datatype = const_cast<QDataType *>(datatype);
}

/*!
    The Interface that owns this Operation.
 */
QInterface *QOperation::interface() const
{
    return d_ptr->interface;
}

void QOperation::setInterface(const QInterface *interface)
{
    d_ptr->interface = const_cast<QInterface *>(interface);
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.
 */
const QList<QParameter *> *QOperation::ownedParameters() const
{
    return d_ptr->ownedParameters;
}

void QOperation::addOwnedParameter(const QParameter *ownedParameter)
{
    d_ptr->ownedParameters->append(const_cast<QParameter *>(ownedParameter));
}

void QOperation::removeOwnedParameter(const QParameter *ownedParameter)
{
    d_ptr->ownedParameters->removeAll(const_cast<QParameter *>(ownedParameter));
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
const QSet<QConstraint *> *QOperation::postconditions() const
{
    return d_ptr->postconditions;
}

void QOperation::addPostcondition(const QConstraint *postcondition)
{
    d_ptr->postconditions->insert(const_cast<QConstraint *>(postcondition));
    // Adjust subsetted property(ies)
    addOwnedRule(postcondition);
}

void QOperation::removePostcondition(const QConstraint *postcondition)
{
    d_ptr->postconditions->remove(const_cast<QConstraint *>(postcondition));
    // Adjust subsetted property(ies)
    removeOwnedRule(postcondition);
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.
 */
const QSet<QConstraint *> *QOperation::preconditions() const
{
    return d_ptr->preconditions;
}

void QOperation::addPrecondition(const QConstraint *precondition)
{
    d_ptr->preconditions->insert(const_cast<QConstraint *>(precondition));
    // Adjust subsetted property(ies)
    addOwnedRule(precondition);
}

void QOperation::removePrecondition(const QConstraint *precondition)
{
    d_ptr->preconditions->remove(const_cast<QConstraint *>(precondition));
    // Adjust subsetted property(ies)
    removeOwnedRule(precondition);
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.
 */
const QSet<QType *> *QOperation::raisedExceptions() const
{
    return d_ptr->raisedExceptions;
}

void QOperation::addRaisedException(const QType *raisedException)
{
    d_ptr->raisedExceptions->insert(const_cast<QType *>(raisedException));
}

void QOperation::removeRaisedException(const QType *raisedException)
{
    d_ptr->raisedExceptions->remove(const_cast<QType *>(raisedException));
}

/*!
    References the Operations that are redefined by this Operation.
 */
const QSet<QOperation *> *QOperation::redefinedOperations() const
{
    return d_ptr->redefinedOperations;
}

void QOperation::addRedefinedOperation(const QOperation *redefinedOperation)
{
    d_ptr->redefinedOperations->insert(const_cast<QOperation *>(redefinedOperation));
    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedOperation);
}

void QOperation::removeRedefinedOperation(const QOperation *redefinedOperation)
{
    d_ptr->redefinedOperations->remove(const_cast<QOperation *>(redefinedOperation));
    // Adjust subsetted property(ies)
    removeRedefinedElement(redefinedOperation);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QOperationTemplateParameter *QOperation::templateParameter() const
{
    return d_ptr->templateParameter;
}

void QOperation::setTemplateParameter(const QOperationTemplateParameter *templateParameter)
{
    d_ptr->templateParameter = const_cast<QOperationTemplateParameter *>(templateParameter);
}

/*!
    This information is derived from the return result for this Operation.Specifies the return result of the operation, if present.
 */
QType *QOperation::type() const
{
    qWarning("To be implemented (this is a derived associationend)");
}

/*!
    A redefining operation is consistent with a redefined operation if it has the same number of owned parameters, and the type of each owned parameter conforms to the type of the corresponding redefined parameter.The query isConsistentWith() specifies, for any two Operations in a context in which redefinition is possible, whether redefinition would be consistent in the sense of maintaining type covariance. Other senses of consistency may be required, for example to determine consistency in the sense of contravariance. Users may define alternative queries under names different from 'isConsistentWith()', as for example, users may define a query named 'isContravariantWith()'.
 */
bool QOperation::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("To be implemented");
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
const QSet<QParameter *> *QOperation::returnResult() const
{
    qWarning("To be implemented");
}

#include "moc_qoperation.cpp"

QT_END_NAMESPACE_QTUML

