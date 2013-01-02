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

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTMOF

QOperationPrivate::QOperationPrivate() :
    isQuery(false),
    bodyCondition(0),
    datatype(0),
    class_(0)
{
}

QOperationPrivate::~QOperationPrivate()
{
    qDeleteAll(ownedParameters);
}

/*!
    \class QOperation

    \inmodule QtMof

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.
 */

QOperation::QOperation(QWrappedObject *parent, QWrappedObject *wrapper) :
    QBehavioralFeature(*new QOperationPrivate, parent, wrapper)
{
    setPropertyData();
}

QOperation::QOperation(QOperationPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QBehavioralFeature(dd, parent, wrapper)
{
    setPropertyData();
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

void QOperation::unsetQuery()
{
    setQuery(false);
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
QList<QParameter *> QOperation::ownedParameters() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->ownedParameters;
}

void QOperation::addOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.append(ownedParameter);
        qTopLevelWrapper(ownedParameter)->setParent(qTopLevelWrapper(this));

        // Adjust opposite property
        ownedParameter->setOperation(this);
    }
}

void QOperation::removeOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.removeAll(ownedParameter);
        qTopLevelWrapper(ownedParameter)->setParent(0);

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
        (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QConstraint *>(d->bodyCondition));

        d->bodyCondition = bodyCondition;

        // Adjust subsetted property(ies)
        if (bodyCondition) {
            (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QConstraint *>(bodyCondition));
        }
    }
}

/*!
    References the Operations that are redefined by this Operation.
 */
QSet<QOperation *> QOperation::redefinedOperations() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->redefinedOperations;
}

void QOperation::addRedefinedOperation(QOperation *redefinedOperation)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->redefinedOperations.contains(redefinedOperation)) {
        d->redefinedOperations.insert(redefinedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(redefinedOperation));
    }
}

void QOperation::removeRedefinedOperation(QOperation *redefinedOperation)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->redefinedOperations.contains(redefinedOperation)) {
        d->redefinedOperations.remove(redefinedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(redefinedOperation));
    }
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
QSet<QConstraint *> QOperation::postconditions() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->postconditions;
}

void QOperation::addPostcondition(QConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->postconditions.contains(postcondition)) {
        d->postconditions.insert(postcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QConstraint *>(postcondition));
    }
}

void QOperation::removePostcondition(QConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->postconditions.contains(postcondition)) {
        d->postconditions.remove(postcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QConstraint *>(postcondition));
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
        (qwrappedobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QClassifier *>(d->datatype));
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QClassifier *>(d->datatype));

        d->datatype = datatype;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(datatype));
        if (datatype) {
            (qwrappedobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QClassifier *>(datatype));
        }
        if (datatype) {
            (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QClassifier *>(datatype));
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
QSet<QConstraint *> QOperation::preconditions() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->preconditions;
}

void QOperation::addPrecondition(QConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->preconditions.contains(precondition)) {
        d->preconditions.insert(precondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QConstraint *>(precondition));
    }
}

void QOperation::removePrecondition(QConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->preconditions.contains(precondition)) {
        d->preconditions.remove(precondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QConstraint *>(precondition));
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
        (qwrappedobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QClassifier *>(d->class_));
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QClassifier *>(d->class_));

        d->class_ = class_;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(class_));
        if (class_) {
            (qwrappedobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QClassifier *>(class_));
        }
        if (class_) {
            (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QClassifier *>(class_));
        }

        // Adjust opposite property
        if (class_)
            class_->addOwnedOperation(this);
    }
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.
 */
QSet<QType *> QOperation::raisedExceptions() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->raisedExceptions;
}

void QOperation::addRaisedException(QType *raisedException)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->raisedExceptions.contains(raisedException)) {
        d->raisedExceptions.insert(raisedException);
    }
}

void QOperation::removeRaisedException(QType *raisedException)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->raisedExceptions.contains(raisedException)) {
        d->raisedExceptions.remove(raisedException);
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
QSet<QParameter *> QOperation::returnResult() const
{
    qWarning("QOperation::returnResult: operation to be implemented");

    return QSet<QParameter *>(); // change here to your derived return
}

void QOperation::registerMetaTypes() const
{
    qRegisterMetaType<QType *>("QType *");
    qRegisterMetaType<QSet<QType *>>("QSet<QType *>");
    qRegisterMetaType<QList<QType *>>("QList<QType *>");

    qRegisterMetaType<QRedefinableElement *>("QRedefinableElement *");
    qRegisterMetaType<QSet<QRedefinableElement *>>("QSet<QRedefinableElement *>");
    qRegisterMetaType<QList<QRedefinableElement *>>("QList<QRedefinableElement *>");

    qRegisterMetaType<QParameter *>("QParameter *");
    qRegisterMetaType<QSet<QParameter *>>("QSet<QParameter *>");
    qRegisterMetaType<QList<QParameter *>>("QList<QParameter *>");

    qRegisterMetaType<QClass *>("QClass *");
    qRegisterMetaType<QSet<QClass *>>("QSet<QClass *>");
    qRegisterMetaType<QList<QClass *>>("QList<QClass *>");

    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QConstraint *>");
    qRegisterMetaType<QList<QConstraint *>>("QList<QConstraint *>");

    qRegisterMetaType<QDataType *>("QDataType *");
    qRegisterMetaType<QSet<QDataType *>>("QSet<QDataType *>");
    qRegisterMetaType<QList<QDataType *>>("QList<QDataType *>");

    QBehavioralFeature::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QOperation::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the lower multiplicity of the return parameter, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the return parameter is unique or not, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("upper")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("upper")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("upper")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the upper multiplicity of the return parameter, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("upper")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("upper")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("upper")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the return parameter is ordered or not, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the parameters owned by this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QBehavioralFeature::ownedParameters");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QParameter::operation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional Constraint on the result values of an invocation of this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Operations that are redefined by this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional set of Constraints specifying the state of the system when the Operation is completed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The DataType that owns this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace QFeature::featuringClassifiers QRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QDataType::ownedOperation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("type")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("type")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("type")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the return result of the operation, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("type")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("type")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("type")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional set of Constraints on the state of the system when the Operation is invoked.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("class_")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("class_")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("class_")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The class that owns the operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("class_")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("class_")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace QFeature::featuringClassifiers QRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("class_")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QClass::ownedOperation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Types representing exceptions that may be raised during an invocation of this operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QBehavioralFeature::raisedExceptions");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QBehavioralFeature::setPropertyData();
}

#include "moc_qoperation.cpp"

QT_END_NAMESPACE_QTMOF

