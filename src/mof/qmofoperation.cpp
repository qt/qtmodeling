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

#include "private/qmofoperationobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofDataType>
#include <QtMof/QMofElement>
#include <QtMof/QMofElementImport>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofPackageableElement>
#include <QtMof/QMofPackageImport>
#include <QtMof/QMofParameter>
#include <QtMof/QMofRedefinableElement>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

/*!
    \class QMofOperation

    \inmodule QtMof

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.
 */

/*!
    Creates a new QMofOperation. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QMofOperation::QMofOperation(bool createQModelingObject) :
    _bodyCondition(0),
    _class_(0),
    _datatype(0),
    _isQuery(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofOperationObject(this));
}

/*!
    Destroys the QMofOperation.
 */
QMofOperation::~QMofOperation()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QMofOperation.
*/
QModelingElement *QMofOperation::clone() const
{
    QMofOperation *c = new QMofOperation;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    c->setStatic(isStatic());
    foreach (QMofElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QMofElementImport *>(element->clone()));
    foreach (QMofConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QMofConstraint *>(element->clone()));
    foreach (QMofPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QMofPackageImport *>(element->clone()));
    if (bodyCondition())
        c->setBodyCondition(dynamic_cast<QMofConstraint *>(bodyCondition()->clone()));
    c->setQuery(isQuery());
    foreach (QMofParameter *element, ownedParameters())
        c->addOwnedParameter(dynamic_cast<QMofParameter *>(element->clone()));
    foreach (QMofConstraint *element, postconditions())
        c->addPostcondition(dynamic_cast<QMofConstraint *>(element->clone()));
    foreach (QMofConstraint *element, preconditions())
        c->addPrecondition(dynamic_cast<QMofConstraint *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    An optional Constraint on the result values of an invocation of this Operation.

    \b {Subsetted property(ies):} QMofNamespace::ownedRules().
 */
QMofConstraint *QMofOperation::bodyCondition() const
{
    // This is a read-write association end

    return _bodyCondition;
}

/*!
    Adjusts bodyCondition to \a bodyCondition.
 */
void QMofOperation::setBodyCondition(QMofConstraint *bodyCondition)
{
    // This is a read-write association end

    if (_bodyCondition != bodyCondition) {
        // Adjust subsetted properties
        removeOwnedRule(_bodyCondition);

        _bodyCondition = bodyCondition;
        if (bodyCondition && bodyCondition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(bodyCondition->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setBodyCondition()));
        bodyCondition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (bodyCondition) {
            addOwnedRule(bodyCondition);
        }
    }
}

/*!
    The class that owns the operation.

    \b {Subsetted property(ies):} QMofNamedElement::namespace_(), QMofFeature::featuringClassifiers(), QMofRedefinableElement::redefinitionContexts().

    \b {Opposite property(ies):} QMofClass::ownedOperations().
 */
QMofClass *QMofOperation::class_() const
{
    // This is a read-write association end

    return _class_;
}

/*!
    Adjusts class_ to \a class_.
 */
void QMofOperation::setClass(QMofClass *class_)
{
    // This is a read-write association end

    if (_class_ != class_) {
        // Adjust subsetted properties
        removeFeaturingClassifier(_class_);
        removeRedefinitionContext(_class_);

        _class_ = class_;
        if (class_ && class_->asQModelingObject() && this->asQModelingObject())
            QObject::connect(class_->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setClass()));

        // Adjust subsetted properties
        setNamespace(class_);
        if (class_) {
            addFeaturingClassifier(class_);
        }
        if (class_) {
            addRedefinitionContext(class_);
        }
    }
}

/*!
    The DataType that owns this Operation.

    \b {Subsetted property(ies):} QMofNamedElement::namespace_(), QMofFeature::featuringClassifiers(), QMofRedefinableElement::redefinitionContexts().

    \b {Opposite property(ies):} QMofDataType::ownedOperations().
 */
QMofDataType *QMofOperation::datatype() const
{
    // This is a read-write association end

    return _datatype;
}

/*!
    Adjusts datatype to \a datatype.
 */
void QMofOperation::setDatatype(QMofDataType *datatype)
{
    // This is a read-write association end

    if (_datatype != datatype) {
        // Adjust subsetted properties
        removeFeaturingClassifier(_datatype);
        removeRedefinitionContext(_datatype);

        _datatype = datatype;
        if (datatype && datatype->asQModelingObject() && this->asQModelingObject())
            QObject::connect(datatype->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setDatatype()));

        // Adjust subsetted properties
        setNamespace(datatype);
        if (datatype) {
            addFeaturingClassifier(datatype);
        }
        if (datatype) {
            addRedefinitionContext(datatype);
        }
    }
}

/*!
    Specifies whether the return parameter is ordered or not, if present.

    \b {This is a read-only derived property.}
 */
bool QMofOperation::isOrdered() const
{
    // This is a read-only derived property

    qWarning("QMofOperation::isOrdered(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    Adjusts isOrdered to \a isOrdered.
 */
void QMofOperation::setOrdered(bool isOrdered)
{
    // This is a read-only derived property

    qWarning("QMofOperation::setOrdered(): to be implemented (this is a derived property)");
    Q_UNUSED(isOrdered);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QMofOperation::isQuery() const
{
    // This is a read-write property

    return _isQuery;
}

/*!
    Adjusts isQuery to \a isQuery.
 */
void QMofOperation::setQuery(bool isQuery)
{
    // This is a read-write property

    if (_isQuery != isQuery) {
        _isQuery = isQuery;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isQuery");
    }
}

/*!
    Specifies whether the return parameter is unique or not, if present.

    \b {This is a read-only derived property.}
 */
bool QMofOperation::isUnique() const
{
    // This is a read-only derived property

    qWarning("QMofOperation::isUnique(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    Adjusts isUnique to \a isUnique.
 */
void QMofOperation::setUnique(bool isUnique)
{
    // This is a read-only derived property

    qWarning("QMofOperation::setUnique(): to be implemented (this is a derived property)");
    Q_UNUSED(isUnique);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies the lower multiplicity of the return parameter, if present.

    \b {This is a read-only derived property.}
 */
int QMofOperation::lower() const
{
    // This is a read-only derived property

    qWarning("QMofOperation::lower(): to be implemented (this is a derived property)");

    return int();
}

/*!
    Adjusts lower to \a lower.
 */
void QMofOperation::setLower(int lower)
{
    // This is a read-only derived property

    qWarning("QMofOperation::setLower(): to be implemented (this is a derived property)");
    Q_UNUSED(lower);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies the parameters owned by this Operation.

    \sa addOwnedParameter(), removeOwnedParameter()

    \b {Redefined property(ies):} QMofBehavioralFeature::ownedParameters().

    \b {Opposite property(ies):} QMofParameter::operation().
 */
const QList<QMofParameter *> QMofOperation::ownedParameters() const
{
    // This is a read-write association end

    return _ownedParameters;
}

/*!
    Adds \a ownedParameter to ownedParameters.

    \sa ownedParameters(), removeOwnedParameter()
 */
void QMofOperation::addOwnedParameter(QMofParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.append(ownedParameter);
        if (ownedParameter && ownedParameter->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedParameter->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedParameter(QObject *)));
        ownedParameter->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust redefined properties
        QMofBehavioralFeature::addOwnedParameter(ownedParameter);

        // Adjust opposite properties
        if (ownedParameter) {
            ownedParameter->setOperation(this);
        }
    }
}

/*!
    Removes \a ownedParameter from ownedParameters.

    \sa ownedParameters(), addOwnedParameter()
 */
void QMofOperation::removeOwnedParameter(QMofParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.removeAll(ownedParameter);
        if (ownedParameter->asQModelingObject())
            ownedParameter->asQModelingObject()->setParent(0);

        // Adjust redefined properties
        QMofBehavioralFeature::removeOwnedParameter(ownedParameter);

        // Adjust opposite properties
        if (ownedParameter) {
            ownedParameter->setOperation(0);
        }
    }
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.

    \sa addPostcondition(), removePostcondition()

    \b {Subsetted property(ies):} QMofNamespace::ownedRules().
 */
const QSet<QMofConstraint *> QMofOperation::postconditions() const
{
    // This is a read-write association end

    return _postconditions;
}

/*!
    Adds \a postcondition to postconditions.

    \sa postconditions(), removePostcondition()
 */
void QMofOperation::addPostcondition(QMofConstraint *postcondition)
{
    // This is a read-write association end

    if (!_postconditions.contains(postcondition)) {
        _postconditions.insert(postcondition);
        if (postcondition && postcondition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(postcondition->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removePostcondition(QObject *)));
        postcondition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedRule(postcondition);
    }
}

/*!
    Removes \a postcondition from postconditions.

    \sa postconditions(), addPostcondition()
 */
void QMofOperation::removePostcondition(QMofConstraint *postcondition)
{
    // This is a read-write association end

    if (_postconditions.contains(postcondition)) {
        _postconditions.remove(postcondition);
        if (postcondition->asQModelingObject())
            postcondition->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedRule(postcondition);
    }
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.

    \sa addPrecondition(), removePrecondition()

    \b {Subsetted property(ies):} QMofNamespace::ownedRules().
 */
const QSet<QMofConstraint *> QMofOperation::preconditions() const
{
    // This is a read-write association end

    return _preconditions;
}

/*!
    Adds \a precondition to preconditions.

    \sa preconditions(), removePrecondition()
 */
void QMofOperation::addPrecondition(QMofConstraint *precondition)
{
    // This is a read-write association end

    if (!_preconditions.contains(precondition)) {
        _preconditions.insert(precondition);
        if (precondition && precondition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(precondition->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removePrecondition(QObject *)));
        precondition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedRule(precondition);
    }
}

/*!
    Removes \a precondition from preconditions.

    \sa preconditions(), addPrecondition()
 */
void QMofOperation::removePrecondition(QMofConstraint *precondition)
{
    // This is a read-write association end

    if (_preconditions.contains(precondition)) {
        _preconditions.remove(precondition);
        if (precondition->asQModelingObject())
            precondition->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedRule(precondition);
    }
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.

    \sa addRaisedException(), removeRaisedException()

    \b {Redefined property(ies):} QMofBehavioralFeature::raisedExceptions().
 */
const QSet<QMofType *> QMofOperation::raisedExceptions() const
{
    // This is a read-write association end

    return _raisedExceptions;
}

/*!
    Adds \a raisedException to raisedExceptions.

    \sa raisedExceptions(), removeRaisedException()
 */
void QMofOperation::addRaisedException(QMofType *raisedException)
{
    // This is a read-write association end

    if (!_raisedExceptions.contains(raisedException)) {
        _raisedExceptions.insert(raisedException);
        if (raisedException && raisedException->asQModelingObject() && this->asQModelingObject())
            QObject::connect(raisedException->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRaisedException(QObject *)));

        // Adjust redefined properties
        QMofBehavioralFeature::addRaisedException(raisedException);
    }
}

/*!
    Removes \a raisedException from raisedExceptions.

    \sa raisedExceptions(), addRaisedException()
 */
void QMofOperation::removeRaisedException(QMofType *raisedException)
{
    // This is a read-write association end

    if (_raisedExceptions.contains(raisedException)) {
        _raisedExceptions.remove(raisedException);

        // Adjust redefined properties
        QMofBehavioralFeature::removeRaisedException(raisedException);
    }
}

/*!
    References the Operations that are redefined by this Operation.

    \sa addRedefinedOperation(), removeRedefinedOperation()

    \b {Subsetted property(ies):} QMofRedefinableElement::redefinedElements().
 */
const QSet<QMofOperation *> QMofOperation::redefinedOperations() const
{
    // This is a read-write association end

    return _redefinedOperations;
}

/*!
    Adds \a redefinedOperation to redefinedOperations.

    \sa redefinedOperations(), removeRedefinedOperation()
 */
void QMofOperation::addRedefinedOperation(QMofOperation *redefinedOperation)
{
    // This is a read-write association end

    if (!_redefinedOperations.contains(redefinedOperation)) {
        _redefinedOperations.insert(redefinedOperation);
        if (redefinedOperation && redefinedOperation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(redefinedOperation->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRedefinedOperation(QObject *)));

        // Adjust subsetted properties
        addRedefinedElement(redefinedOperation);
    }
}

/*!
    Removes \a redefinedOperation from redefinedOperations.

    \sa redefinedOperations(), addRedefinedOperation()
 */
void QMofOperation::removeRedefinedOperation(QMofOperation *redefinedOperation)
{
    // This is a read-write association end

    if (_redefinedOperations.contains(redefinedOperation)) {
        _redefinedOperations.remove(redefinedOperation);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedOperation);
    }
}

/*!
    Specifies the return result of the operation, if present.

    \b {This is a read-only derived property.}
 */
QMofType *QMofOperation::type() const
{
    // This is a read-only derived association end

    qWarning("QMofOperation::type(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    Adjusts type to \a type.
 */
void QMofOperation::setType(QMofType *type)
{
    // This is a read-only derived association end

    qWarning("QMofOperation::setType(): to be implemented (this is a derived association end)");
    Q_UNUSED(type);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies the upper multiplicity of the return parameter, if present.

    \b {This is a read-only derived property.}
 */
QString QMofOperation::upper() const
{
    // This is a read-only derived property

    qWarning("QMofOperation::upper(): to be implemented (this is a derived property)");

    return QString();
}

/*!
    Adjusts upper to \a upper.
 */
void QMofOperation::setUpper(QString upper)
{
    // This is a read-only derived property

    qWarning("QMofOperation::setUpper(): to be implemented (this is a derived property)");
    Q_UNUSED(upper);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

// OPERATIONS

/*!
    A redefining operation is consistent with a redefined operation if it has the same number of owned parameters, and the type of each owned parameter conforms to the type of the corresponding redefined parameter.
 */
bool QMofOperation::isConsistentWith(QMofRedefinableElement *redefinee) const
{
    qWarning("QMofOperation::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
QSet<QMofParameter *> QMofOperation::returnResult() const
{
    qWarning("QMofOperation::returnResult(): to be implemented (operation)");

    return QSet<QMofParameter *> ();
}

QT_END_NAMESPACE

