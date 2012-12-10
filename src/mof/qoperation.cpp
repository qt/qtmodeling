/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include <QtMof/QType>
#include <QtMof/QRedefinableElement>
#include <QtMof/QParameter>
#include <QtMof/QClass>
#include <QtMof/QConstraint>
#include <QtMof/QDataType>

QT_BEGIN_NAMESPACE_QTMOF

QOperationPrivate::QOperationPrivate() :
    isQuery(false),
    ownedParameters(new QList<QParameter *>),
    bodyCondition(0),
    redefinedOperations(new QSet<QOperation *>),
    postconditions(new QSet<QConstraint *>),
    datatype(0),
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

/*!
    \class QOperation

    \inmodule QtMof

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.
 */

QOperation::QOperation(QMofObject *parent, QMofObject *wrapper) :
    QBehavioralFeature(*new QOperationPrivate, parent, wrapper)
{
}

QOperation::QOperation(QOperationPrivate &dd, QMofObject *parent, QMofObject *wrapper) :
    QBehavioralFeature(dd, parent, wrapper)
{
}

QOperation::~QOperation()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QOperation
// ---------------------------------------------------------------

/*!
    Specifies the lower multiplicity of the return parameter, if present.
 */
qint32 QOperation::lower() const
{
    // This is a read-only derived attribute

    qWarning("QOperation::lower: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QOperation::isQuery() const
{
    // This is a read-write attribute

    Q_D(const QOperation);
    return d->isQuery;
}

void QOperation::setQuery(bool isQuery)
{
    // This is a read-write attribute

    Q_D(QOperation);
    if (d->isQuery != isQuery) {
        d->isQuery = isQuery;
    }
}

/*!
    Specifies whether the return parameter is unique or not, if present.
 */
bool QOperation::isUnique() const
{
    // This is a read-only derived attribute

    qWarning("QOperation::isUnique: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

/*!
    Specifies the upper multiplicity of the return parameter, if present.
 */
qint32 QOperation::upper() const
{
    // This is a read-only derived attribute

    qWarning("QOperation::upper: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

/*!
    Specifies whether the return parameter is ordered or not, if present.
 */
bool QOperation::isOrdered() const
{
    // This is a read-only derived attribute

    qWarning("QOperation::isOrdered: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QOperation
// ---------------------------------------------------------------

/*!
    Specifies the parameters owned by this Operation.
 */
const QList<QParameter *> *QOperation::ownedParameters() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->ownedParameters;
}

void QOperation::addOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->ownedParameters->contains(ownedParameter)) {
        d->ownedParameters->append(ownedParameter);
        qmof_topLevelWrapper(ownedParameter)->setParent(qmof_topLevelWrapper(this));

        // Adjust opposite property
        ownedParameter->setOperation(this);
    }
}

void QOperation::removeOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->ownedParameters->contains(ownedParameter)) {
        d->ownedParameters->removeAll(ownedParameter);
        qmof_topLevelWrapper(ownedParameter)->setParent(0);

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

    Q_D(const QOperation);
    return d->bodyCondition;
}

void QOperation::setBodyCondition(QConstraint *bodyCondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->bodyCondition != bodyCondition) {
        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespace *>(this))->removeOwnedRule(qmofobject_cast<QConstraint *>(d->bodyCondition));

        d->bodyCondition = bodyCondition;

        // Adjust subsetted property(ies)
        if (bodyCondition) {
            (qmofobject_cast<QNamespace *>(this))->addOwnedRule(qmofobject_cast<QConstraint *>(bodyCondition));
        }
    }
}

/*!
    References the Operations that are redefined by this Operation.
 */
const QSet<QOperation *> *QOperation::redefinedOperations() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->redefinedOperations;
}

void QOperation::addRedefinedOperation(QOperation *redefinedOperation)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->redefinedOperations->contains(redefinedOperation)) {
        d->redefinedOperations->insert(redefinedOperation);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QRedefinableElementPrivate *>(d))->addRedefinedElement(qmofobject_cast<QRedefinableElement *>(redefinedOperation));
    }
}

void QOperation::removeRedefinedOperation(QOperation *redefinedOperation)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->redefinedOperations->contains(redefinedOperation)) {
        d->redefinedOperations->remove(redefinedOperation);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinedElement(qmofobject_cast<QRedefinableElement *>(redefinedOperation));
    }
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
const QSet<QConstraint *> *QOperation::postconditions() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->postconditions;
}

void QOperation::addPostcondition(QConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->postconditions->contains(postcondition)) {
        d->postconditions->insert(postcondition);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespace *>(this))->addOwnedRule(qmofobject_cast<QConstraint *>(postcondition));
    }
}

void QOperation::removePostcondition(QConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->postconditions->contains(postcondition)) {
        d->postconditions->remove(postcondition);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespace *>(this))->removeOwnedRule(qmofobject_cast<QConstraint *>(postcondition));
    }
}

/*!
    The DataType that owns this Operation.
 */
QDataType *QOperation::datatype() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->datatype;
}

void QOperation::setDatatype(QDataType *datatype)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->datatype != datatype) {
        // Adjust opposite property
        if (d->datatype)
            d->datatype->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qmofobject_cast<QClassifier *>(d->datatype));
        (qmofobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qmofobject_cast<QClassifier *>(d->datatype));

        d->datatype = datatype;

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qmofobject_cast<QNamespace *>(datatype));
        if (datatype) {
            (qmofobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qmofobject_cast<QClassifier *>(datatype));
        }
        if (datatype) {
            (qmofobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qmofobject_cast<QClassifier *>(datatype));
        }

        // Adjust opposite property
        if (datatype)
            datatype->addOwnedOperation(this);
    }
}

/*!
    Specifies the return result of the operation, if present.
 */
QType *QOperation::type() const
{
    // This is a read-only derived association end

    qWarning("QOperation::type: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.
 */
const QSet<QConstraint *> *QOperation::preconditions() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->preconditions;
}

void QOperation::addPrecondition(QConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->preconditions->contains(precondition)) {
        d->preconditions->insert(precondition);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespace *>(this))->addOwnedRule(qmofobject_cast<QConstraint *>(precondition));
    }
}

void QOperation::removePrecondition(QConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->preconditions->contains(precondition)) {
        d->preconditions->remove(precondition);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespace *>(this))->removeOwnedRule(qmofobject_cast<QConstraint *>(precondition));
    }
}

/*!
    The class that owns the operation.
 */
QClass *QOperation::class_() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->class_;
}

void QOperation::setClass_(QClass *class_)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->class_ != class_) {
        // Adjust opposite property
        if (d->class_)
            d->class_->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qmofobject_cast<QClassifier *>(d->class_));
        (qmofobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qmofobject_cast<QClassifier *>(d->class_));

        d->class_ = class_;

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qmofobject_cast<QNamespace *>(class_));
        if (class_) {
            (qmofobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qmofobject_cast<QClassifier *>(class_));
        }
        if (class_) {
            (qmofobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qmofobject_cast<QClassifier *>(class_));
        }

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

    Q_D(const QOperation);
    return d->raisedExceptions;
}

void QOperation::addRaisedException(QType *raisedException)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->raisedExceptions->contains(raisedException)) {
        d->raisedExceptions->insert(raisedException);
    }
}

void QOperation::removeRaisedException(QType *raisedException)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->raisedExceptions->contains(raisedException)) {
        d->raisedExceptions->remove(raisedException);
    }
}

/*!
    A redefining operation is consistent with a redefined operation if it has the same number of owned parameters, and the type of each owned parameter conforms to the type of the corresponding redefined parameter.
 */
bool QOperation::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QOperation::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
const QSet<QParameter *> *QOperation::returnResult() const
{
    qWarning("QOperation::returnResult: operation to be implemented");

    return 0; // change here to your derived return
}

#include "moc_qoperation.cpp"

QT_END_NAMESPACE_QTMOF

