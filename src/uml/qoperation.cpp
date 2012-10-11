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
#include "qoperation_p.h"
#include "qnamespace_p.h"
#include "qredefinableelement_p.h"
#include "qnamespace_p.h"
#include "qfeature_p.h"
#include "qredefinableelement_p.h"
#include "qnamedelement_p.h"
#include "qfeature_p.h"
#include "qredefinableelement_p.h"
#include "qnamedelement_p.h"
#include "qnamespace_p.h"
#include "qfeature_p.h"
#include "qredefinableelement_p.h"
#include "qnamedelement_p.h"

#include <QtUml/QOperationTemplateParameter>
#include <QtUml/QType>
#include <QtUml/QRedefinableElement>
#include <QtUml/QParameter>
#include <QtUml/QInterface>
#include <QtUml/QConstraint>
#include <QtUml/QDataType>
#include <QtUml/QClass>

QT_BEGIN_NAMESPACE_QTUML

QOperationPrivate::QOperationPrivate() :
    isQuery(false),
    ownedParameters(new QList<QParameter *>),
    bodyCondition(0),
    redefinedOperations(new QSet<QOperation *>),
    postconditions(new QSet<QConstraint *>),
    datatype(0),
    templateParameter(0),
    interface(0),
    preconditions(new QSet<QConstraint *>),
    class_(0),
    raisedExceptions(new QSet<QType *>)
{
}

QOperationPrivate::~QOperationPrivate()
{
    delete ownedParameters;
    delete redefinedOperations;
    delete postconditions;
    delete preconditions;
    delete raisedExceptions;
}

void QOperationPrivate::setQuery(bool isQuery)
{
    this->isQuery = isQuery;
}

void QOperationPrivate::addOwnedParameter(const QParameter *ownedParameter)
{
    this->ownedParameters->append(const_cast<QParameter *>(ownedParameter));
}

void QOperationPrivate::removeOwnedParameter(const QParameter *ownedParameter)
{
    this->ownedParameters->removeAll(const_cast<QParameter *>(ownedParameter));
}

void QOperationPrivate::setBodyCondition(const QConstraint *bodyCondition)
{
    // Adjust subsetted property(ies)
    removeOwnedRule(this->bodyCondition);

    this->bodyCondition = const_cast<QConstraint *>(bodyCondition);

    // Adjust subsetted property(ies)
    addOwnedRule(bodyCondition);
}

void QOperationPrivate::addRedefinedOperation(const QOperation *redefinedOperation)
{
    this->redefinedOperations->insert(const_cast<QOperation *>(redefinedOperation));

    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedOperation);
}

void QOperationPrivate::removeRedefinedOperation(const QOperation *redefinedOperation)
{
    this->redefinedOperations->remove(const_cast<QOperation *>(redefinedOperation));

    // Adjust subsetted property(ies)
    removeRedefinedElement(redefinedOperation);
}

void QOperationPrivate::addPostcondition(const QConstraint *postcondition)
{
    this->postconditions->insert(const_cast<QConstraint *>(postcondition));

    // Adjust subsetted property(ies)
    addOwnedRule(postcondition);
}

void QOperationPrivate::removePostcondition(const QConstraint *postcondition)
{
    this->postconditions->remove(const_cast<QConstraint *>(postcondition));

    // Adjust subsetted property(ies)
    removeOwnedRule(postcondition);
}

void QOperationPrivate::setDatatype(const QDataType *datatype)
{
    // Adjust subsetted property(ies)
    removeFeaturingClassifier(this->datatype);
    removeRedefinitionContext(this->datatype);

    this->datatype = const_cast<QDataType *>(datatype);

    // Adjust subsetted property(ies)
    addFeaturingClassifier(datatype);
    addRedefinitionContext(datatype);
    setNamespace_(datatype);
}

void QOperationPrivate::setTemplateParameter(const QOperationTemplateParameter *templateParameter)
{
    this->templateParameter = const_cast<QOperationTemplateParameter *>(templateParameter);
}

void QOperationPrivate::setInterface(const QInterface *interface)
{
    // Adjust subsetted property(ies)
    removeFeaturingClassifier(this->interface);
    removeRedefinitionContext(this->interface);

    this->interface = const_cast<QInterface *>(interface);

    // Adjust subsetted property(ies)
    addFeaturingClassifier(interface);
    addRedefinitionContext(interface);
    setNamespace_(interface);
}

void QOperationPrivate::addPrecondition(const QConstraint *precondition)
{
    this->preconditions->insert(const_cast<QConstraint *>(precondition));

    // Adjust subsetted property(ies)
    addOwnedRule(precondition);
}

void QOperationPrivate::removePrecondition(const QConstraint *precondition)
{
    this->preconditions->remove(const_cast<QConstraint *>(precondition));

    // Adjust subsetted property(ies)
    removeOwnedRule(precondition);
}

void QOperationPrivate::setClass_(const QClass *class_)
{
    // Adjust subsetted property(ies)
    removeFeaturingClassifier(this->class_);
    removeRedefinitionContext(this->class_);

    this->class_ = const_cast<QClass *>(class_);

    // Adjust subsetted property(ies)
    addFeaturingClassifier(class_);
    addRedefinitionContext(class_);
    setNamespace_(class_);
}

void QOperationPrivate::addRaisedException(const QType *raisedException)
{
    this->raisedExceptions->insert(const_cast<QType *>(raisedException));
}

void QOperationPrivate::removeRaisedException(const QType *raisedException)
{
    this->raisedExceptions->remove(const_cast<QType *>(raisedException));
}

/*!
    \class QOperation

    \inmodule QtUml

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.An operation may invoke both the execution of method behaviors as well as other behavioral responses.Operation specializes TemplateableElement in order to support specification of template operations and bound operations. Operation specializes ParameterableElement to specify that an operation can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
 */

QOperation::QOperation(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QOperationPrivate;
}

QOperation::QOperation(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QOperationPrivate;
}

QOperation::~QOperation()
{
}

/*!
    This information is derived from the return result for this Operation.Specifies the lower multiplicity of the return parameter, if present.
 */
qint32 QOperation::lower() const
{
    qWarning("QOperation::lower: to be implemented (this is a derived attribute)");
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QOperation::isQuery() const
{
    Q_D(const QOperation);
    return d->isQuery;
}

void QOperation::setQuery(bool isQuery)
{
    Q_D(QOperation);
    d->setQuery(isQuery);
}

/*!
    Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation.
 */
bool QOperation::isUnique() const
{
    qWarning("QOperation::isUnique: to be implemented (this is a derived attribute)");
}

/*!
    This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present.
 */
qint32 QOperation::upper() const
{
    qWarning("QOperation::upper: to be implemented (this is a derived attribute)");
}

/*!
    This information is derived from the return result for this Operation.Specifies whether the return parameter is ordered or not, if present.
 */
bool QOperation::isOrdered() const
{
    qWarning("QOperation::isOrdered: to be implemented (this is a derived attribute)");
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.
 */
const QList<QParameter *> *QOperation::ownedParameters() const
{
    Q_D(const QOperation);
    return d->ownedParameters;
}

void QOperation::addOwnedParameter(const QParameter *ownedParameter)
{
    Q_D(QOperation);
    d->addOwnedParameter(const_cast<QParameter *>(ownedParameter));
}

void QOperation::removeOwnedParameter(const QParameter *ownedParameter)
{
    Q_D(QOperation);
    d->removeOwnedParameter(const_cast<QParameter *>(ownedParameter));
}

/*!
    An optional Constraint on the result values of an invocation of this Operation.
 */
QConstraint *QOperation::bodyCondition() const
{
    Q_D(const QOperation);
    return d->bodyCondition;
}

void QOperation::setBodyCondition(const QConstraint *bodyCondition)
{
    Q_D(QOperation);
    d->setBodyCondition(const_cast<QConstraint *>(bodyCondition));
}

/*!
    References the Operations that are redefined by this Operation.
 */
const QSet<QOperation *> *QOperation::redefinedOperations() const
{
    Q_D(const QOperation);
    return d->redefinedOperations;
}

void QOperation::addRedefinedOperation(const QOperation *redefinedOperation)
{
    Q_D(QOperation);
    d->addRedefinedOperation(const_cast<QOperation *>(redefinedOperation));
}

void QOperation::removeRedefinedOperation(const QOperation *redefinedOperation)
{
    Q_D(QOperation);
    d->removeRedefinedOperation(const_cast<QOperation *>(redefinedOperation));
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
const QSet<QConstraint *> *QOperation::postconditions() const
{
    Q_D(const QOperation);
    return d->postconditions;
}

void QOperation::addPostcondition(const QConstraint *postcondition)
{
    Q_D(QOperation);
    d->addPostcondition(const_cast<QConstraint *>(postcondition));
}

void QOperation::removePostcondition(const QConstraint *postcondition)
{
    Q_D(QOperation);
    d->removePostcondition(const_cast<QConstraint *>(postcondition));
}

/*!
    The DataType that owns this Operation.
 */
QDataType *QOperation::datatype() const
{
    Q_D(const QOperation);
    return d->datatype;
}

void QOperation::setDatatype(const QDataType *datatype)
{
    Q_D(QOperation);
    d->setDatatype(const_cast<QDataType *>(datatype));
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QOperationTemplateParameter *QOperation::templateParameter() const
{
    Q_D(const QOperation);
    return d->templateParameter;
}

void QOperation::setTemplateParameter(const QOperationTemplateParameter *templateParameter)
{
    Q_D(QOperation);
    d->setTemplateParameter(const_cast<QOperationTemplateParameter *>(templateParameter));
}

/*!
    The Interface that owns this Operation.
 */
QInterface *QOperation::interface() const
{
    Q_D(const QOperation);
    return d->interface;
}

void QOperation::setInterface(const QInterface *interface)
{
    Q_D(QOperation);
    d->setInterface(const_cast<QInterface *>(interface));
}

/*!
    This information is derived from the return result for this Operation.Specifies the return result of the operation, if present.
 */
QType *QOperation::type() const
{
    qWarning("QOperation::type: to be implemented (this is a derived associationend)");
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.
 */
const QSet<QConstraint *> *QOperation::preconditions() const
{
    Q_D(const QOperation);
    return d->preconditions;
}

void QOperation::addPrecondition(const QConstraint *precondition)
{
    Q_D(QOperation);
    d->addPrecondition(const_cast<QConstraint *>(precondition));
}

void QOperation::removePrecondition(const QConstraint *precondition)
{
    Q_D(QOperation);
    d->removePrecondition(const_cast<QConstraint *>(precondition));
}

/*!
    The class that owns the operation.
 */
QClass *QOperation::class_() const
{
    Q_D(const QOperation);
    return d->class_;
}

void QOperation::setClass_(const QClass *class_)
{
    Q_D(QOperation);
    d->setClass_(const_cast<QClass *>(class_));
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.
 */
const QSet<QType *> *QOperation::raisedExceptions() const
{
    Q_D(const QOperation);
    return d->raisedExceptions;
}

void QOperation::addRaisedException(const QType *raisedException)
{
    Q_D(QOperation);
    d->addRaisedException(const_cast<QType *>(raisedException));
}

void QOperation::removeRaisedException(const QType *raisedException)
{
    Q_D(QOperation);
    d->removeRaisedException(const_cast<QType *>(raisedException));
}

/*!
    A redefining operation is consistent with a redefined operation if it has the same number of owned parameters, and the type of each owned parameter conforms to the type of the corresponding redefined parameter.The query isConsistentWith() specifies, for any two Operations in a context in which redefinition is possible, whether redefinition would be consistent in the sense of maintaining type covariance. Other senses of consistency may be required, for example to determine consistency in the sense of contravariance. Users may define alternative queries under names different from 'isConsistentWith()', as for example, users may define a query named 'isContravariantWith()'.
 */
bool QOperation::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QOperation::isConsistentWith: operation to be implemented");
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
const QSet<QParameter *> *QOperation::returnResult() const
{
    qWarning("QOperation::returnResult: operation to be implemented");
}

#include "moc_qoperation.cpp"

QT_END_NAMESPACE_QTUML

