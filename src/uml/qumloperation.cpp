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

#include "private/qumloperationobject_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDataType>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperationTemplateParameter>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlOperation

    \inmodule QtUml

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.An operation may invoke both the execution of method behaviors as well as other behavioral responses.Operation specializes TemplateableElement in order to support specification of template operations and bound operations. Operation specializes ParameterableElement to specify that an operation can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
 */

/*!
    Creates a new QUmlOperation. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlOperation::QUmlOperation(bool createQModelingObject) :
    _bodyCondition(0),
    _class_(0),
    _datatype(0),
    _interface_(0),
    _isQuery(false),
    _templateParameter(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlOperationObject(this));
}

/*!
    Destroys the QUmlOperation.
 */
QUmlOperation::~QUmlOperation()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlOperation.
*/
QModelingElement *QUmlOperation::clone() const
{
    QUmlOperation *c = new QUmlOperation;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (ownedTemplateSignature())
        c->setOwnedTemplateSignature(dynamic_cast<QUmlTemplateSignature *>(ownedTemplateSignature()->clone()));
    foreach (QUmlTemplateBinding *element, templateBindings())
        c->addTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    c->setLeaf(isLeaf());
    c->setStatic(isStatic());
    c->setConcurrency(concurrency());
    c->setAbstract(isAbstract());
    foreach (QUmlParameterSet *element, ownedParameterSets())
        c->addOwnedParameterSet(dynamic_cast<QUmlParameterSet *>(element->clone()));
    if (bodyCondition())
        c->setBodyCondition(dynamic_cast<QUmlConstraint *>(bodyCondition()->clone()));
    c->setQuery(isQuery());
    foreach (QUmlParameter *element, ownedParameters())
        c->addOwnedParameter(dynamic_cast<QUmlParameter *>(element->clone()));
    foreach (QUmlConstraint *element, postconditions())
        c->addPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, preconditions())
        c->addPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    An optional Constraint on the result values of an invocation of this Operation.

    \b {Subsetted property(ies):} QUmlNamespace::ownedRules().
 */
QUmlConstraint *QUmlOperation::bodyCondition() const
{
    // This is a read-write association end

    return _bodyCondition;
}

/*!
    Adjusts bodyCondition to \a bodyCondition.
 */
void QUmlOperation::setBodyCondition(QUmlConstraint *bodyCondition)
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

    \b {Subsetted property(ies):} QUmlFeature::featuringClassifiers(), QUmlRedefinableElement::redefinitionContexts(), QUmlNamedElement::namespace_().

    \b {Opposite property(ies):} QUmlClass::ownedOperations().
 */
QUmlClass *QUmlOperation::class_() const
{
    // This is a read-write association end

    return _class_;
}

/*!
    Adjusts class_ to \a class_.
 */
void QUmlOperation::setClass(QUmlClass *class_)
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
        if (class_) {
            addFeaturingClassifier(class_);
        }
        if (class_) {
            addRedefinitionContext(class_);
        }
        setNamespace(class_);
    }
}

/*!
    The DataType that owns this Operation.

    \b {Subsetted property(ies):} QUmlFeature::featuringClassifiers(), QUmlRedefinableElement::redefinitionContexts(), QUmlNamedElement::namespace_().

    \b {Opposite property(ies):} QUmlDataType::ownedOperations().
 */
QUmlDataType *QUmlOperation::datatype() const
{
    // This is a read-write association end

    return _datatype;
}

/*!
    Adjusts datatype to \a datatype.
 */
void QUmlOperation::setDatatype(QUmlDataType *datatype)
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
        if (datatype) {
            addFeaturingClassifier(datatype);
        }
        if (datatype) {
            addRedefinitionContext(datatype);
        }
        setNamespace(datatype);
    }
}

/*!
    The Interface that owns this Operation.

    \b {Subsetted property(ies):} QUmlFeature::featuringClassifiers(), QUmlRedefinableElement::redefinitionContexts(), QUmlNamedElement::namespace_().

    \b {Opposite property(ies):} QUmlInterface::ownedOperations().
 */
QUmlInterface *QUmlOperation::interface_() const
{
    // This is a read-write association end

    return _interface_;
}

/*!
    Adjusts interface_ to \a interface_.
 */
void QUmlOperation::setInterface(QUmlInterface *interface_)
{
    // This is a read-write association end

    if (_interface_ != interface_) {
        // Adjust subsetted properties
        removeFeaturingClassifier(_interface_);
        removeRedefinitionContext(_interface_);

        _interface_ = interface_;
        if (interface_ && interface_->asQModelingObject() && this->asQModelingObject())
            QObject::connect(interface_->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setInterface()));

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

/*!
    This information is derived from the return result for this Operation.Specifies whether the return parameter is ordered or not, if present.

    \b {This is a read-only derived property.}
 */
bool QUmlOperation::isOrdered() const
{
    // This is a read-only derived property

    qWarning("QUmlOperation::isOrdered(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    Adjusts isOrdered to \a isOrdered.
 */
void QUmlOperation::setOrdered(bool isOrdered)
{
    // This is a read-only derived property

    qWarning("QUmlOperation::setOrdered(): to be implemented (this is a derived property)");
    Q_UNUSED(isOrdered);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QUmlOperation::isQuery() const
{
    // This is a read-write property

    return _isQuery;
}

/*!
    Adjusts isQuery to \a isQuery.
 */
void QUmlOperation::setQuery(bool isQuery)
{
    // This is a read-write property

    if (_isQuery != isQuery) {
        _isQuery = isQuery;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isQuery");
    }
}

/*!
    Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation.

    \b {This is a read-only derived property.}
 */
bool QUmlOperation::isUnique() const
{
    // This is a read-only derived property

    qWarning("QUmlOperation::isUnique(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    Adjusts isUnique to \a isUnique.
 */
void QUmlOperation::setUnique(bool isUnique)
{
    // This is a read-only derived property

    qWarning("QUmlOperation::setUnique(): to be implemented (this is a derived property)");
    Q_UNUSED(isUnique);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    This information is derived from the return result for this Operation.Specifies the lower multiplicity of the return parameter, if present.

    \b {This is a read-only derived property.}
 */
int QUmlOperation::lower() const
{
    // This is a read-only derived property

    qWarning("QUmlOperation::lower(): to be implemented (this is a derived property)");

    return int();
}

/*!
    Adjusts lower to \a lower.
 */
void QUmlOperation::setLower(int lower)
{
    // This is a read-only derived property

    qWarning("QUmlOperation::setLower(): to be implemented (this is a derived property)");
    Q_UNUSED(lower);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.

    \sa addOwnedParameter(), removeOwnedParameter()

    \b {Redefined property(ies):} QUmlBehavioralFeature::ownedParameters().

    \b {Opposite property(ies):} QUmlParameter::operation().
 */
const QList<QUmlParameter *> QUmlOperation::ownedParameters() const
{
    // This is a read-write association end

    return _ownedParameters;
}

/*!
    Adds \a ownedParameter to ownedParameters.

    \sa ownedParameters(), removeOwnedParameter()
 */
void QUmlOperation::addOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.append(ownedParameter);
        if (ownedParameter && ownedParameter->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedParameter->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedParameter(QObject *)));
        ownedParameter->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust redefined properties
        QUmlBehavioralFeature::addOwnedParameter(ownedParameter);

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
void QUmlOperation::removeOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.removeAll(ownedParameter);
        if (ownedParameter->asQModelingObject())
            ownedParameter->asQModelingObject()->setParent(0);

        // Adjust redefined properties
        QUmlBehavioralFeature::removeOwnedParameter(ownedParameter);

        // Adjust opposite properties
        if (ownedParameter) {
            ownedParameter->setOperation(0);
        }
    }
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.

    \sa addPostcondition(), removePostcondition()

    \b {Subsetted property(ies):} QUmlNamespace::ownedRules().
 */
const QSet<QUmlConstraint *> QUmlOperation::postconditions() const
{
    // This is a read-write association end

    return _postconditions;
}

/*!
    Adds \a postcondition to postconditions.

    \sa postconditions(), removePostcondition()
 */
void QUmlOperation::addPostcondition(QUmlConstraint *postcondition)
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
void QUmlOperation::removePostcondition(QUmlConstraint *postcondition)
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

    \b {Subsetted property(ies):} QUmlNamespace::ownedRules().
 */
const QSet<QUmlConstraint *> QUmlOperation::preconditions() const
{
    // This is a read-write association end

    return _preconditions;
}

/*!
    Adds \a precondition to preconditions.

    \sa preconditions(), removePrecondition()
 */
void QUmlOperation::addPrecondition(QUmlConstraint *precondition)
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
void QUmlOperation::removePrecondition(QUmlConstraint *precondition)
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

    \b {Redefined property(ies):} QUmlBehavioralFeature::raisedExceptions().
 */
const QSet<QUmlType *> QUmlOperation::raisedExceptions() const
{
    // This is a read-write association end

    return _raisedExceptions;
}

/*!
    Adds \a raisedException to raisedExceptions.

    \sa raisedExceptions(), removeRaisedException()
 */
void QUmlOperation::addRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    if (!_raisedExceptions.contains(raisedException)) {
        _raisedExceptions.insert(raisedException);
        if (raisedException && raisedException->asQModelingObject() && this->asQModelingObject())
            QObject::connect(raisedException->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRaisedException(QObject *)));

        // Adjust redefined properties
        QUmlBehavioralFeature::addRaisedException(raisedException);
    }
}

/*!
    Removes \a raisedException from raisedExceptions.

    \sa raisedExceptions(), addRaisedException()
 */
void QUmlOperation::removeRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    if (_raisedExceptions.contains(raisedException)) {
        _raisedExceptions.remove(raisedException);

        // Adjust redefined properties
        QUmlBehavioralFeature::removeRaisedException(raisedException);
    }
}

/*!
    References the Operations that are redefined by this Operation.

    \sa addRedefinedOperation(), removeRedefinedOperation()

    \b {Subsetted property(ies):} QUmlRedefinableElement::redefinedElements().
 */
const QSet<QUmlOperation *> QUmlOperation::redefinedOperations() const
{
    // This is a read-write association end

    return _redefinedOperations;
}

/*!
    Adds \a redefinedOperation to redefinedOperations.

    \sa redefinedOperations(), removeRedefinedOperation()
 */
void QUmlOperation::addRedefinedOperation(QUmlOperation *redefinedOperation)
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
void QUmlOperation::removeRedefinedOperation(QUmlOperation *redefinedOperation)
{
    // This is a read-write association end

    if (_redefinedOperations.contains(redefinedOperation)) {
        _redefinedOperations.remove(redefinedOperation);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedOperation);
    }
}

/*!
    The template parameter that exposes this element as a formal parameter.

    \b {Redefined property(ies):} QUmlParameterableElement::templateParameter().

    \b {Opposite property(ies):} QUmlOperationTemplateParameter::parameteredElement().
 */
QUmlOperationTemplateParameter *QUmlOperation::templateParameter() const
{
    // This is a read-write association end

    return _templateParameter;
}

/*!
    Adjusts templateParameter to \a templateParameter.
 */
void QUmlOperation::setTemplateParameter(QUmlOperationTemplateParameter *templateParameter)
{
    // This is a read-write association end

    if (_templateParameter != templateParameter) {
        _templateParameter = templateParameter;
        if (templateParameter && templateParameter->asQModelingObject() && this->asQModelingObject())
            QObject::connect(templateParameter->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setTemplateParameter()));

        // Adjust redefined properties
        QUmlParameterableElement::setTemplateParameter(templateParameter);
    }
}

/*!
    This information is derived from the return result for this Operation.Specifies the return result of the operation, if present.

    \b {This is a read-only derived property.}
 */
QUmlType *QUmlOperation::type() const
{
    // This is a read-only derived association end

    qWarning("QUmlOperation::type(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    Adjusts type to \a type.
 */
void QUmlOperation::setType(QUmlType *type)
{
    // This is a read-only derived association end

    qWarning("QUmlOperation::setType(): to be implemented (this is a derived association end)");
    Q_UNUSED(type);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present.

    \b {This is a read-only derived property.}
 */
QString QUmlOperation::upper() const
{
    // This is a read-only derived property

    qWarning("QUmlOperation::upper(): to be implemented (this is a derived property)");

    return QString();
}

/*!
    Adjusts upper to \a upper.
 */
void QUmlOperation::setUpper(QString upper)
{
    // This is a read-only derived property

    qWarning("QUmlOperation::setUpper(): to be implemented (this is a derived property)");
    Q_UNUSED(upper);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

// OPERATIONS

/*!
    A redefining operation is consistent with a redefined operation if it has the same number of owned parameters, and the type of each owned parameter conforms to the type of the corresponding redefined parameter.The query isConsistentWith() specifies, for any two Operations in a context in which redefinition is possible, whether redefinition would be consistent in the sense of maintaining type covariance. Other senses of consistency may be required, for example to determine consistency in the sense of contravariance. Users may define alternative queries under names different from 'isConsistentWith()', as for example, users may define a query named 'isContravariantWith()'.
 */
bool QUmlOperation::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlOperation::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
QSet<QUmlParameter *> QUmlOperation::returnResult() const
{
    qWarning("QUmlOperation::returnResult(): to be implemented (operation)");

    return QSet<QUmlParameter *> ();
}

QT_END_NAMESPACE

