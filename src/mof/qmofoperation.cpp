/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofoperation.h"
#include "qmofoperation_p.h"

#include <QtMof/QMofType>
#include <QtMof/QMofRedefinableElement>
#include <QtMof/QMofParameter>
#include <QtMof/QMofClass>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofDataType>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofOperationPrivate::QMofOperationPrivate() :
    isQuery(false),
    bodyCondition(0),
    datatype(0),
    class_(0)
{
}

QMofOperationPrivate::~QMofOperationPrivate()
{
}

/*!
    \class QMofOperation

    \inmodule QtMof

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.
 */

QMofOperation::QMofOperation(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofBehavioralFeature(*new QMofOperationPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofOperation::QMofOperation(QMofOperationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofBehavioralFeature(dd, wrapper, parent)
{
    setPropertyData();
}

QMofOperation::~QMofOperation()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofOperation
// ---------------------------------------------------------------

/*!
    Specifies the lower multiplicity of the return parameter, if present.
 */
qint32 QMofOperation::lower() const
{
    // This is a read-only derived attribute

    qWarning("QMofOperation::lower: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QMofOperation::isQuery() const
{
    // This is a read-write attribute

    Q_D(const QMofOperation);
    return d->isQuery;
}

void QMofOperation::setQuery(bool isQuery)
{
    // This is a read-write attribute

    Q_D(QMofOperation);
    if (d->isQuery != isQuery) {
        d->isQuery = isQuery;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isQuery");
}

void QMofOperation::unsetQuery()
{
    setQuery(false);
    Q_D(QMofOperation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isQuery"));
}

/*!
    Specifies whether the return parameter is unique or not, if present.
 */
bool QMofOperation::isUnique() const
{
    // This is a read-only derived attribute

    qWarning("QMofOperation::isUnique: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

/*!
    Specifies the upper multiplicity of the return parameter, if present.
 */
qint32 QMofOperation::upper() const
{
    // This is a read-only derived attribute

    qWarning("QMofOperation::upper: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

/*!
    Specifies whether the return parameter is ordered or not, if present.
 */
bool QMofOperation::isOrdered() const
{
    // This is a read-only derived attribute

    qWarning("QMofOperation::isOrdered: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofOperation
// ---------------------------------------------------------------

/*!
    Specifies the parameters owned by this Operation.
 */
QList<QMofParameter *> QMofOperation::ownedParameters() const
{
    // This is a read-write association end

    Q_D(const QMofOperation);
    return d->ownedParameters;
}

void QMofOperation::addOwnedParameter(QMofParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (!d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.append(ownedParameter);
        qTopLevelWrapper(ownedParameter)->setParent(qTopLevelWrapper(this));

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QMofBehavioralFeature *>(this))->addOwnedParameter(qwrappedobject_cast<QMofParameter *>(ownedParameter));

        // Adjust opposite property
        ownedParameter->setOperation(this);
    }
}

void QMofOperation::removeOwnedParameter(QMofParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.removeAll(ownedParameter);
        qTopLevelWrapper(ownedParameter)->setParent(0);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QMofBehavioralFeature *>(this))->removeOwnedParameter(qwrappedobject_cast<QMofParameter *>(ownedParameter));

        // Adjust opposite property
        ownedParameter->setOperation(0);
    }
}

/*!
    An optional Constraint on the result values of an invocation of this Operation.
 */
QMofConstraint *QMofOperation::bodyCondition() const
{
    // This is a read-write association end

    Q_D(const QMofOperation);
    return d->bodyCondition;
}

void QMofOperation::setBodyCondition(QMofConstraint *bodyCondition)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (d->bodyCondition != bodyCondition) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QMofConstraint *>(d->bodyCondition));

        d->bodyCondition = bodyCondition;

        // Adjust subsetted property(ies)
        if (bodyCondition) {
            (qwrappedobject_cast<QMofNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QMofConstraint *>(bodyCondition));
        }
    }
}

/*!
    References the Operations that are redefined by this Operation.
 */
QSet<QMofOperation *> QMofOperation::redefinedOperations() const
{
    // This is a read-write association end

    Q_D(const QMofOperation);
    return d->redefinedOperations;
}

void QMofOperation::addRedefinedOperation(QMofOperation *redefinedOperation)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (!d->redefinedOperations.contains(redefinedOperation)) {
        d->redefinedOperations.insert(redefinedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QMofRedefinableElement *>(redefinedOperation));
    }
}

void QMofOperation::removeRedefinedOperation(QMofOperation *redefinedOperation)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (d->redefinedOperations.contains(redefinedOperation)) {
        d->redefinedOperations.remove(redefinedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QMofRedefinableElement *>(redefinedOperation));
    }
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
QSet<QMofConstraint *> QMofOperation::postconditions() const
{
    // This is a read-write association end

    Q_D(const QMofOperation);
    return d->postconditions;
}

void QMofOperation::addPostcondition(QMofConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (!d->postconditions.contains(postcondition)) {
        d->postconditions.insert(postcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QMofConstraint *>(postcondition));
    }
}

void QMofOperation::removePostcondition(QMofConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (d->postconditions.contains(postcondition)) {
        d->postconditions.remove(postcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QMofConstraint *>(postcondition));
    }
}

/*!
    The DataType that owns this Operation.
 */
QMofDataType *QMofOperation::datatype() const
{
    // This is a read-write association end

    Q_D(const QMofOperation);
    return d->datatype;
}

void QMofOperation::setDatatype(QMofDataType *datatype)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (d->datatype != datatype) {
        // Adjust opposite property
        if (d->datatype)
            d->datatype->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QMofClassifier *>(d->datatype));
        (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QMofClassifier *>(d->datatype));

        d->datatype = datatype;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QMofNamespace *>(datatype));
        if (datatype) {
            (qwrappedobject_cast<QMofFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QMofClassifier *>(datatype));
        }
        if (datatype) {
            (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QMofClassifier *>(datatype));
        }

        // Adjust opposite property
        if (datatype)
            datatype->addOwnedOperation(this);
    }
}

/*!
    Specifies the return result of the operation, if present.
 */
QMofType *QMofOperation::type() const
{
    // This is a read-only derived association end

    qWarning("QMofOperation::type: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.
 */
QSet<QMofConstraint *> QMofOperation::preconditions() const
{
    // This is a read-write association end

    Q_D(const QMofOperation);
    return d->preconditions;
}

void QMofOperation::addPrecondition(QMofConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (!d->preconditions.contains(precondition)) {
        d->preconditions.insert(precondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QMofConstraint *>(precondition));
    }
}

void QMofOperation::removePrecondition(QMofConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (d->preconditions.contains(precondition)) {
        d->preconditions.remove(precondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QMofConstraint *>(precondition));
    }
}

/*!
    The class that owns the operation.
 */
QMofClass *QMofOperation::class_() const
{
    // This is a read-write association end

    Q_D(const QMofOperation);
    return d->class_;
}

void QMofOperation::setClass_(QMofClass *class_)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (d->class_ != class_) {
        // Adjust opposite property
        if (d->class_)
            d->class_->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QMofClassifier *>(d->class_));
        (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QMofClassifier *>(d->class_));

        d->class_ = class_;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QMofNamespace *>(class_));
        if (class_) {
            (qwrappedobject_cast<QMofFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QMofClassifier *>(class_));
        }
        if (class_) {
            (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QMofClassifier *>(class_));
        }

        // Adjust opposite property
        if (class_)
            class_->addOwnedOperation(this);
    }
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.
 */
QSet<QMofType *> QMofOperation::raisedExceptions() const
{
    // This is a read-write association end

    Q_D(const QMofOperation);
    return d->raisedExceptions;
}

void QMofOperation::addRaisedException(QMofType *raisedException)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (!d->raisedExceptions.contains(raisedException)) {
        d->raisedExceptions.insert(raisedException);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QMofBehavioralFeature *>(this))->addRaisedException(qwrappedobject_cast<QMofType *>(raisedException));
    }
}

void QMofOperation::removeRaisedException(QMofType *raisedException)
{
    // This is a read-write association end

    Q_D(QMofOperation);
    if (d->raisedExceptions.contains(raisedException)) {
        d->raisedExceptions.remove(raisedException);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QMofBehavioralFeature *>(this))->removeRaisedException(qwrappedobject_cast<QMofType *>(raisedException));
    }
}

/*!
    A redefining operation is consistent with a redefined operation if it has the same number of owned parameters, and the type of each owned parameter conforms to the type of the corresponding redefined parameter.
 */
bool QMofOperation::isConsistentWith(const QMofRedefinableElement *redefinee) const
{
    qWarning("QMofOperation::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
QSet<QMofParameter *> QMofOperation::returnResult() const
{
    qWarning("QMofOperation::returnResult: operation to be implemented");

    return QSet<QMofParameter *>(); // change here to your derived return
}

void QMofOperation::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("lower")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("lower")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("lower")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the lower multiplicity of the return parameter, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("lower")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("lower")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("lower")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the return parameter is unique or not, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("upper")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("upper")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("upper")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the upper multiplicity of the return parameter, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("upper")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("upper")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("upper")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the return parameter is ordered or not, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the parameters owned by this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QMofBehavioralFeature::ownedParameters");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofParameter::operation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional Constraint on the result values of an invocation of this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Operations that are redefined by this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional set of Constraints specifying the state of the system when the Operation is completed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The DataType that owns this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamedElement::namespace QMofFeature::featuringClassifiers QMofRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofDataType::ownedOperation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("type")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("type")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("type")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the return result of the operation, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("type")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("type")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("type")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional set of Constraints on the state of the system when the Operation is invoked.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("class_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("class_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("class_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The class that owns the operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("class_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("class_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamedElement::namespace QMofFeature::featuringClassifiers QMofRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("class_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofClass::ownedOperation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Types representing exceptions that may be raised during an invocation of this operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QMofBehavioralFeature::raisedExceptions");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QMofBehavioralFeature::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofoperation.cpp"

