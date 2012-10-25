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

#include <QtUml/QRedefinableElement>
#include <QtUml/QType>
#include <QtUml/QOperationTemplateParameter>
#include <QtUml/QParameter>
#include <QtUml/QInterface>
#include <QtUml/QConstraint>
#include <QtUml/QDataType>
#include <QtUml/QClass>

QT_BEGIN_NAMESPACE_QTUML

QOperationPrivate::QOperationPrivate(QOperation *q_umlptr) :
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
    this->q_umlptr = q_umlptr;
}

QOperationPrivate::~QOperationPrivate()
{
    foreach (QParameter *parameter, *ownedParameters)
        delete parameter;
    delete ownedParameters;
    delete redefinedOperations;
    delete postconditions;
    delete preconditions;
    delete raisedExceptions;
}

/*!
    \class QOperation

    \inmodule QtUml

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.An operation may invoke both the execution of method behaviors as well as other behavioral responses.Operation specializes TemplateableElement in order to support specification of template operations and bound operations. Operation specializes ParameterableElement to specify that an operation can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
 */

QOperation::QOperation(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QOperationPrivate(this);
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
    // This is a read-only derived attribute

    qWarning("QOperation::lower: to be implemented (this is a derived attribute)");

    //QTUML_D(const QOperation);
    //return <derived-return>;
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QOperation::isQuery() const
{
    // This is a read-write attribute

    QTUML_D(const QOperation);
    return d->isQuery;
}

void QOperation::setQuery(bool isQuery)
{
    // This is a read-write attribute

    QTUML_D(QOperation);
    if (d->isQuery != isQuery) {
        d->isQuery = isQuery;
    }
}

/*!
    Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation.
 */
bool QOperation::isUnique() const
{
    // This is a read-only derived attribute

    qWarning("QOperation::isUnique: to be implemented (this is a derived attribute)");

    //QTUML_D(const QOperation);
    //return <derived-return>;
}

/*!
    This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present.
 */
qint32 QOperation::upper() const
{
    // This is a read-only derived attribute

    qWarning("QOperation::upper: to be implemented (this is a derived attribute)");

    //QTUML_D(const QOperation);
    //return <derived-return>;
}

/*!
    This information is derived from the return result for this Operation.Specifies whether the return parameter is ordered or not, if present.
 */
bool QOperation::isOrdered() const
{
    // This is a read-only derived attribute

    qWarning("QOperation::isOrdered: to be implemented (this is a derived attribute)");

    //QTUML_D(const QOperation);
    //return <derived-return>;
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.
 */
const QList<QParameter *> *QOperation::ownedParameters() const
{
    // This is a read-write association end

    QTUML_D(const QOperation);
    return d->ownedParameters;
}

void QOperation::addOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (!d->ownedParameters->contains(ownedParameter)) {
        d->ownedParameters->append(ownedParameter);

        // Adjust opposite property
        ownedParameter->setOperation(this);
    }
}

void QOperation::removeOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (d->ownedParameters->contains(ownedParameter)) {
        d->ownedParameters->removeAll(ownedParameter);

        // Adjust opposite property
        ownedParameter->setOperation(0);
    }
}

/*!
    An optional Constraint on the result values of an invocation of this Operation.
 */
QConstraint *QOperation::bodyCondition() const
{
    // This is a read-write association end

    QTUML_D(const QOperation);
    return d->bodyCondition;
}

void QOperation::setBodyCondition(QConstraint *bodyCondition)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (d->bodyCondition != bodyCondition) {
        // Adjust subsetted property(ies)
        QNamespace::removeOwnedRule(dynamic_cast<QConstraint *>(d->bodyCondition));

        d->bodyCondition = bodyCondition;

        // Adjust subsetted property(ies)
        if (bodyCondition) {
            QNamespace::addOwnedRule(dynamic_cast<QConstraint *>(bodyCondition));
        }
    }
}

/*!
    References the Operations that are redefined by this Operation.
 */
const QSet<QOperation *> *QOperation::redefinedOperations() const
{
    // This is a read-write association end

    QTUML_D(const QOperation);
    return d->redefinedOperations;
}

void QOperation::addRedefinedOperation(QOperation *redefinedOperation)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (!d->redefinedOperations->contains(redefinedOperation)) {
        d->redefinedOperations->insert(redefinedOperation);

        // Adjust subsetted property(ies)
        d->QRedefinableElementPrivate::addRedefinedElement(dynamic_cast<QRedefinableElement *>(redefinedOperation));
    }
}

void QOperation::removeRedefinedOperation(QOperation *redefinedOperation)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (d->redefinedOperations->contains(redefinedOperation)) {
        d->redefinedOperations->remove(redefinedOperation);

        // Adjust subsetted property(ies)
        d->QRedefinableElementPrivate::removeRedefinedElement(dynamic_cast<QRedefinableElement *>(redefinedOperation));
    }
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
const QSet<QConstraint *> *QOperation::postconditions() const
{
    // This is a read-write association end

    QTUML_D(const QOperation);
    return d->postconditions;
}

void QOperation::addPostcondition(QConstraint *postcondition)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (!d->postconditions->contains(postcondition)) {
        d->postconditions->insert(postcondition);

        // Adjust subsetted property(ies)
        QNamespace::addOwnedRule(dynamic_cast<QConstraint *>(postcondition));
    }
}

void QOperation::removePostcondition(QConstraint *postcondition)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (d->postconditions->contains(postcondition)) {
        d->postconditions->remove(postcondition);

        // Adjust subsetted property(ies)
        QNamespace::removeOwnedRule(dynamic_cast<QConstraint *>(postcondition));
    }
}

/*!
    The DataType that owns this Operation.
 */
QDataType *QOperation::datatype() const
{
    // This is a read-write association end

    QTUML_D(const QOperation);
    return d->datatype;
}

void QOperation::setDatatype(QDataType *datatype)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (d->datatype != datatype) {
        // Adjust opposite property
        if (d->datatype)
            d->datatype->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        d->QFeaturePrivate::removeFeaturingClassifier(dynamic_cast<QClassifier *>(d->datatype));
        d->QRedefinableElementPrivate::removeRedefinitionContext(dynamic_cast<QClassifier *>(d->datatype));

        d->datatype = datatype;

        // Adjust subsetted property(ies)
        if (datatype) {
            d->QFeaturePrivate::addFeaturingClassifier(dynamic_cast<QClassifier *>(datatype));
        }
        if (datatype) {
            d->QRedefinableElementPrivate::addRedefinitionContext(dynamic_cast<QClassifier *>(datatype));
        }
        d->QNamedElementPrivate::setNamespace_(dynamic_cast<QNamespace *>(datatype));

        // Adjust opposite property
        if (datatype)
            datatype->addOwnedOperation(this);
    }
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QOperationTemplateParameter *QOperation::templateParameter() const
{
    // This is a read-write association end

    QTUML_D(const QOperation);
    return d->templateParameter;
}

void QOperation::setTemplateParameter(QOperationTemplateParameter *templateParameter)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (d->templateParameter != templateParameter) {
        // Adjust opposite property

        d->templateParameter = templateParameter;

        // Adjust opposite property
        templateParameter->setParameteredElement(this);
    }
}

/*!
    The Interface that owns this Operation.
 */
QInterface *QOperation::interface() const
{
    // This is a read-write association end

    QTUML_D(const QOperation);
    return d->interface;
}

void QOperation::setInterface(QInterface *interface)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (d->interface != interface) {
        // Adjust opposite property
        if (d->interface)
            d->interface->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        d->QFeaturePrivate::removeFeaturingClassifier(dynamic_cast<QClassifier *>(d->interface));
        d->QRedefinableElementPrivate::removeRedefinitionContext(dynamic_cast<QClassifier *>(d->interface));

        d->interface = interface;

        // Adjust subsetted property(ies)
        if (interface) {
            d->QFeaturePrivate::addFeaturingClassifier(dynamic_cast<QClassifier *>(interface));
        }
        if (interface) {
            d->QRedefinableElementPrivate::addRedefinitionContext(dynamic_cast<QClassifier *>(interface));
        }
        d->QNamedElementPrivate::setNamespace_(dynamic_cast<QNamespace *>(interface));

        // Adjust opposite property
        if (interface)
            interface->addOwnedOperation(this);
    }
}

/*!
    This information is derived from the return result for this Operation.Specifies the return result of the operation, if present.
 */
QType *QOperation::type() const
{
    // This is a read-only derived association end

    qWarning("QOperation::type: to be implemented (this is a derived associationend)");

    //QTUML_D(const QOperation);
    //return <derived-return>;
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.
 */
const QSet<QConstraint *> *QOperation::preconditions() const
{
    // This is a read-write association end

    QTUML_D(const QOperation);
    return d->preconditions;
}

void QOperation::addPrecondition(QConstraint *precondition)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (!d->preconditions->contains(precondition)) {
        d->preconditions->insert(precondition);

        // Adjust subsetted property(ies)
        QNamespace::addOwnedRule(dynamic_cast<QConstraint *>(precondition));
    }
}

void QOperation::removePrecondition(QConstraint *precondition)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (d->preconditions->contains(precondition)) {
        d->preconditions->remove(precondition);

        // Adjust subsetted property(ies)
        QNamespace::removeOwnedRule(dynamic_cast<QConstraint *>(precondition));
    }
}

/*!
    The class that owns the operation.
 */
QClass *QOperation::class_() const
{
    // This is a read-write association end

    QTUML_D(const QOperation);
    return d->class_;
}

void QOperation::setClass_(QClass *class_)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (d->class_ != class_) {
        // Adjust opposite property
        if (d->class_)
            d->class_->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        d->QFeaturePrivate::removeFeaturingClassifier(dynamic_cast<QClassifier *>(d->class_));
        d->QRedefinableElementPrivate::removeRedefinitionContext(dynamic_cast<QClassifier *>(d->class_));

        d->class_ = class_;

        // Adjust subsetted property(ies)
        if (class_) {
            d->QFeaturePrivate::addFeaturingClassifier(dynamic_cast<QClassifier *>(class_));
        }
        if (class_) {
            d->QRedefinableElementPrivate::addRedefinitionContext(dynamic_cast<QClassifier *>(class_));
        }
        d->QNamedElementPrivate::setNamespace_(dynamic_cast<QNamespace *>(class_));

        // Adjust opposite property
        if (class_)
            class_->addOwnedOperation(this);
    }
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.
 */
const QSet<QType *> *QOperation::raisedExceptions() const
{
    // This is a read-write association end

    QTUML_D(const QOperation);
    return d->raisedExceptions;
}

void QOperation::addRaisedException(QType *raisedException)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (!d->raisedExceptions->contains(raisedException)) {
        d->raisedExceptions->insert(raisedException);
    }
}

void QOperation::removeRaisedException(QType *raisedException)
{
    // This is a read-write association end

    QTUML_D(QOperation);
    if (d->raisedExceptions->contains(raisedException)) {
        d->raisedExceptions->remove(raisedException);
    }
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

