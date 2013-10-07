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
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>

/*!
    \class QUmlOperation

    \inmodule QtUml

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.An operation may invoke both the execution of method behaviors as well as other behavioral responses.Operation specializes TemplateableElement in order to support specification of template operations and bound operations. Operation specializes ParameterableElement to specify that an operation can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
 */
QUmlOperation::QUmlOperation(bool createQObject) :
    _bodyCondition(0),
    _class_(0),
    _datatype(0),
    _interface_(0),
    _isQuery(false),
    _templateParameter(0)
{
    if (createQObject)
        _qObject = new QUmlOperationObject(this);
    setPropertyData();
}

QUmlOperation::~QUmlOperation()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlOperation::clone() const
{
    QUmlOperation *c = new QUmlOperation;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (ownedTemplateSignature())
        c->setOwnedTemplateSignature(dynamic_cast<QUmlTemplateSignature *>(ownedTemplateSignature()->clone()));
    foreach (QUmlTemplateBinding *element, templateBindings())
        c->addTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
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
    foreach (QUmlBehavior *element, methods())
        c->addMethod(dynamic_cast<QUmlBehavior *>(element->clone()));
    foreach (QUmlParameterSet *element, ownedParameterSets())
        c->addOwnedParameterSet(dynamic_cast<QUmlParameterSet *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (bodyCondition())
        c->setBodyCondition(dynamic_cast<QUmlConstraint *>(bodyCondition()->clone()));
    if (class_())
        c->setClass(dynamic_cast<QUmlClass *>(class_()->clone()));
    if (datatype())
        c->setDatatype(dynamic_cast<QUmlDataType *>(datatype()->clone()));
    if (interface_())
        c->setInterface(dynamic_cast<QUmlInterface *>(interface_()->clone()));
    c->setQuery(isQuery());
    foreach (QUmlParameter *element, ownedParameters())
        c->addOwnedParameter(dynamic_cast<QUmlParameter *>(element->clone()));
    foreach (QUmlConstraint *element, postconditions())
        c->addPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, preconditions())
        c->addPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlType *element, raisedExceptions())
        c->addRaisedException(dynamic_cast<QUmlType *>(element->clone()));
    foreach (QUmlOperation *element, redefinedOperations())
        c->addRedefinedOperation(dynamic_cast<QUmlOperation *>(element->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlOperationTemplateParameter *>(templateParameter()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    An optional Constraint on the result values of an invocation of this Operation.
 */
QUmlConstraint *QUmlOperation::bodyCondition() const
{
    // This is a read-write association end

    return _bodyCondition;
}

void QUmlOperation::setBodyCondition(QUmlConstraint *bodyCondition)
{
    // This is a read-write association end

    if (_bodyCondition != bodyCondition) {
        // Adjust subsetted properties
        removeOwnedRule(_bodyCondition);

        _bodyCondition = bodyCondition;
        if (bodyCondition && bodyCondition->asQObject() && this->asQObject())
            QObject::connect(bodyCondition->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setBodyCondition()));
        bodyCondition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (bodyCondition) {
            addOwnedRule(bodyCondition);
        }
    }
}

/*!
    The class that owns the operation.
 */
QUmlClass *QUmlOperation::class_() const
{
    // This is a read-write association end

    return _class_;
}

void QUmlOperation::setClass(QUmlClass *class_)
{
    // This is a read-write association end

    if (_class_ != class_) {
        // Adjust subsetted properties
        removeFeaturingClassifier(_class_);
        removeRedefinitionContext(_class_);

        _class_ = class_;
        if (class_ && class_->asQObject() && this->asQObject())
            QObject::connect(class_->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setClass()));

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
 */
QUmlDataType *QUmlOperation::datatype() const
{
    // This is a read-write association end

    return _datatype;
}

void QUmlOperation::setDatatype(QUmlDataType *datatype)
{
    // This is a read-write association end

    if (_datatype != datatype) {
        // Adjust subsetted properties
        removeFeaturingClassifier(_datatype);
        removeRedefinitionContext(_datatype);

        _datatype = datatype;
        if (datatype && datatype->asQObject() && this->asQObject())
            QObject::connect(datatype->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setDatatype()));

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
 */
QUmlInterface *QUmlOperation::interface_() const
{
    // This is a read-write association end

    return _interface_;
}

void QUmlOperation::setInterface(QUmlInterface *interface_)
{
    // This is a read-write association end

    if (_interface_ != interface_) {
        // Adjust subsetted properties
        removeFeaturingClassifier(_interface_);
        removeRedefinitionContext(_interface_);

        _interface_ = interface_;
        if (interface_ && interface_->asQObject() && this->asQObject())
            QObject::connect(interface_->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setInterface()));

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
 */
bool QUmlOperation::isOrdered() const
{
    // This is a read-only derived property

    qWarning("UmlOperation::isOrdered(): to be implemented (this is a derived property)");

    return bool();
}

void QUmlOperation::setOrdered(bool isOrdered)
{
    // This is a read-only derived property

    qWarning("UmlOperation::setOrdered(): to be implemented (this is a derived property)");
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

void QUmlOperation::setQuery(bool isQuery)
{
    // This is a read-write property

    if (_isQuery != isQuery) {
        _isQuery = isQuery;
        _modifiedResettableProperties << QStringLiteral("isQuery");
    }
}

/*!
    Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation.
 */
bool QUmlOperation::isUnique() const
{
    // This is a read-only derived property

    qWarning("UmlOperation::isUnique(): to be implemented (this is a derived property)");

    return bool();
}

void QUmlOperation::setUnique(bool isUnique)
{
    // This is a read-only derived property

    qWarning("UmlOperation::setUnique(): to be implemented (this is a derived property)");
    Q_UNUSED(isUnique);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    This information is derived from the return result for this Operation.Specifies the lower multiplicity of the return parameter, if present.
 */
int QUmlOperation::lower() const
{
    // This is a read-only derived property

    qWarning("UmlOperation::lower(): to be implemented (this is a derived property)");

    return int();
}

void QUmlOperation::setLower(int lower)
{
    // This is a read-only derived property

    qWarning("UmlOperation::setLower(): to be implemented (this is a derived property)");
    Q_UNUSED(lower);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.
 */
const QList<QUmlParameter *> QUmlOperation::ownedParameters() const
{
    // This is a read-write association end

    return _ownedParameters;
}

void QUmlOperation::addOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.append(ownedParameter);
        if (ownedParameter && ownedParameter->asQObject() && this->asQObject())
            QObject::connect(ownedParameter->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedParameter(QObject *)));
        ownedParameter->asQObject()->setParent(this->asQObject());

        // Adjust opposite properties
        if (ownedParameter) {
            ownedParameter->setOperation(this);
        }
    }
}

void QUmlOperation::removeOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.removeAll(ownedParameter);
        if (ownedParameter->asQObject())
            ownedParameter->asQObject()->setParent(0);

        // Adjust opposite properties
        if (ownedParameter) {
            ownedParameter->setOperation(0);
        }
    }
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
const QSet<QUmlConstraint *> QUmlOperation::postconditions() const
{
    // This is a read-write association end

    return _postconditions;
}

void QUmlOperation::addPostcondition(QUmlConstraint *postcondition)
{
    // This is a read-write association end

    if (!_postconditions.contains(postcondition)) {
        _postconditions.insert(postcondition);
        if (postcondition && postcondition->asQObject() && this->asQObject())
            QObject::connect(postcondition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removePostcondition(QObject *)));
        postcondition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedRule(postcondition);
    }
}

void QUmlOperation::removePostcondition(QUmlConstraint *postcondition)
{
    // This is a read-write association end

    if (_postconditions.contains(postcondition)) {
        _postconditions.remove(postcondition);
        if (postcondition->asQObject())
            postcondition->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedRule(postcondition);
    }
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.
 */
const QSet<QUmlConstraint *> QUmlOperation::preconditions() const
{
    // This is a read-write association end

    return _preconditions;
}

void QUmlOperation::addPrecondition(QUmlConstraint *precondition)
{
    // This is a read-write association end

    if (!_preconditions.contains(precondition)) {
        _preconditions.insert(precondition);
        if (precondition && precondition->asQObject() && this->asQObject())
            QObject::connect(precondition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removePrecondition(QObject *)));
        precondition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedRule(precondition);
    }
}

void QUmlOperation::removePrecondition(QUmlConstraint *precondition)
{
    // This is a read-write association end

    if (_preconditions.contains(precondition)) {
        _preconditions.remove(precondition);
        if (precondition->asQObject())
            precondition->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedRule(precondition);
    }
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.
 */
const QSet<QUmlType *> QUmlOperation::raisedExceptions() const
{
    // This is a read-write association end

    return _raisedExceptions;
}

void QUmlOperation::addRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    if (!_raisedExceptions.contains(raisedException)) {
        _raisedExceptions.insert(raisedException);
        if (raisedException && raisedException->asQObject() && this->asQObject())
            QObject::connect(raisedException->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRaisedException(QObject *)));
    }
}

void QUmlOperation::removeRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    if (_raisedExceptions.contains(raisedException)) {
        _raisedExceptions.remove(raisedException);
    }
}

/*!
    References the Operations that are redefined by this Operation.
 */
const QSet<QUmlOperation *> QUmlOperation::redefinedOperations() const
{
    // This is a read-write association end

    return _redefinedOperations;
}

void QUmlOperation::addRedefinedOperation(QUmlOperation *redefinedOperation)
{
    // This is a read-write association end

    if (!_redefinedOperations.contains(redefinedOperation)) {
        _redefinedOperations.insert(redefinedOperation);
        if (redefinedOperation && redefinedOperation->asQObject() && this->asQObject())
            QObject::connect(redefinedOperation->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRedefinedOperation(QObject *)));

        // Adjust subsetted properties
        addRedefinedElement(redefinedOperation);
    }
}

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
 */
QUmlOperationTemplateParameter *QUmlOperation::templateParameter() const
{
    // This is a read-write association end

    return _templateParameter;
}

void QUmlOperation::setTemplateParameter(QUmlOperationTemplateParameter *templateParameter)
{
    // This is a read-write association end

    if (_templateParameter != templateParameter) {
        _templateParameter = templateParameter;
        if (templateParameter && templateParameter->asQObject() && this->asQObject())
            QObject::connect(templateParameter->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setTemplateParameter()));
    }
}

/*!
    This information is derived from the return result for this Operation.Specifies the return result of the operation, if present.
 */
QUmlType *QUmlOperation::type() const
{
    // This is a read-only derived association end

    qWarning("UmlOperation::type(): to be implemented (this is a derived association end)");

    return 0;
}

void QUmlOperation::setType(QUmlType *type)
{
    // This is a read-only derived association end

    qWarning("UmlOperation::setType(): to be implemented (this is a derived association end)");
    Q_UNUSED(type);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present.
 */
int QUmlOperation::upper() const
{
    // This is a read-only derived property

    qWarning("UmlOperation::upper(): to be implemented (this is a derived property)");

    return int();
}

void QUmlOperation::setUpper(int upper)
{
    // This is a read-only derived property

    qWarning("UmlOperation::setUpper(): to be implemented (this is a derived property)");
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
    qWarning("UmlOperation::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
QSet<QUmlParameter *> QUmlOperation::returnResult() const
{
    qWarning("UmlOperation::returnResult(): to be implemented (operation)");

    return QSet<QUmlParameter *> ();
}

void QUmlOperation::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("bodyCondition")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("bodyCondition")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("bodyCondition")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("bodyCondition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("bodyCondition")][QtModeling::DocumentationRole] = QStringLiteral("An optional Constraint on the result values of an invocation of this Operation.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("bodyCondition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("bodyCondition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedRule");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("bodyCondition")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("class")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("class")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("class")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("class")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("class")][QtModeling::DocumentationRole] = QStringLiteral("The class that owns the operation.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("class")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("class")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Feature-featuringClassifier RedefinableElement-redefinitionContext NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("class")][QtModeling::OppositeEndRole] = QStringLiteral("Class-ownedOperation");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("datatype")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("datatype")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("datatype")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("datatype")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("datatype")][QtModeling::DocumentationRole] = QStringLiteral("The DataType that owns this Operation.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("datatype")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("datatype")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Feature-featuringClassifier RedefinableElement-redefinitionContext NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("datatype")][QtModeling::OppositeEndRole] = QStringLiteral("DataType-ownedOperation");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("interface")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("interface")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("interface")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("interface")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("interface")][QtModeling::DocumentationRole] = QStringLiteral("The Interface that owns this Operation.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("interface")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("interface")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Feature-featuringClassifier RedefinableElement-redefinitionContext NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("interface")][QtModeling::OppositeEndRole] = QStringLiteral("Interface-ownedOperation");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isOrdered")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isOrdered")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isOrdered")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isOrdered")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isOrdered")][QtModeling::DocumentationRole] = QStringLiteral("This information is derived from the return result for this Operation.Specifies whether the return parameter is ordered or not, if present.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isOrdered")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isOrdered")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isOrdered")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isQuery")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isQuery")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isQuery")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isQuery")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isQuery")][QtModeling::DocumentationRole] = QStringLiteral("Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isQuery")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isQuery")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isQuery")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isUnique")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isUnique")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isUnique")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isUnique")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isUnique")][QtModeling::DocumentationRole] = QStringLiteral("Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isUnique")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isUnique")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("isUnique")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("lower")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("lower")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("lower")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("lower")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("lower")][QtModeling::DocumentationRole] = QStringLiteral("This information is derived from the return result for this Operation.Specifies the lower multiplicity of the return parameter, if present.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("lower")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("lower")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("lower")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("ownedParameter")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("ownedParameter")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("ownedParameter")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("ownedParameter")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("ownedParameter")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("ownedParameter")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("BehavioralFeature-ownedParameter");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("ownedParameter")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("ownedParameter")][QtModeling::OppositeEndRole] = QStringLiteral("Parameter-operation");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("postcondition")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("postcondition")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("postcondition")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("postcondition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("postcondition")][QtModeling::DocumentationRole] = QStringLiteral("An optional set of Constraints specifying the state of the system when the Operation is completed.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("postcondition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("postcondition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedRule");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("postcondition")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("precondition")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("precondition")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("precondition")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("precondition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("precondition")][QtModeling::DocumentationRole] = QStringLiteral("An optional set of Constraints on the state of the system when the Operation is invoked.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("precondition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("precondition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedRule");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("precondition")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("raisedException")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("raisedException")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("raisedException")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("raisedException")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("raisedException")][QtModeling::DocumentationRole] = QStringLiteral("References the Types representing exceptions that may be raised during an invocation of this operation.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("raisedException")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("BehavioralFeature-raisedException");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("raisedException")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("raisedException")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("redefinedOperation")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("redefinedOperation")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("redefinedOperation")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("redefinedOperation")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("redefinedOperation")][QtModeling::DocumentationRole] = QStringLiteral("References the Operations that are redefined by this Operation.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("redefinedOperation")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("redefinedOperation")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("RedefinableElement-redefinedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("redefinedOperation")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("templateParameter")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("templateParameter")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("templateParameter")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("templateParameter")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("templateParameter")][QtModeling::DocumentationRole] = QStringLiteral("The template parameter that exposes this element as a formal parameter.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("templateParameter")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("ParameterableElement-templateParameter");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("templateParameter")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("templateParameter")][QtModeling::OppositeEndRole] = QStringLiteral("OperationTemplateParameter-parameteredElement");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("type")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("type")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("type")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("type")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("type")][QtModeling::DocumentationRole] = QStringLiteral("This information is derived from the return result for this Operation.Specifies the return result of the operation, if present.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("type")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("type")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("type")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("upper")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("upper")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOperation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("upper")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("upper")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("upper")][QtModeling::DocumentationRole] = QStringLiteral("This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("upper")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("upper")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOperation")][QStringLiteral("upper")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlOperation::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedTemplateSignature")] = QStringLiteral("QUmlTemplateableElement");
    _classForProperty[QStringLiteral("templateBindings")] = QStringLiteral("QUmlTemplateableElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("elementImports")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("importedMembers")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("members")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("ownedMembers")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("ownedRules")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("packageImports")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("isLeaf")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinedElements")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinitionContexts")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("featuringClassifiers")] = QStringLiteral("QUmlFeature");
    _classForProperty[QStringLiteral("isStatic")] = QStringLiteral("QUmlFeature");
    _classForProperty[QStringLiteral("concurrency")] = QStringLiteral("QUmlBehavioralFeature");
    _classForProperty[QStringLiteral("isAbstract")] = QStringLiteral("QUmlBehavioralFeature");
    _classForProperty[QStringLiteral("methods")] = QStringLiteral("QUmlBehavioralFeature");
    _classForProperty[QStringLiteral("ownedParameterSets")] = QStringLiteral("QUmlBehavioralFeature");
    _classForProperty[QStringLiteral("owningTemplateParameter")] = QStringLiteral("QUmlParameterableElement");
    _classForProperty[QStringLiteral("bodyCondition")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("class_")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("datatype")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("interface_")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("isOrdered")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("isQuery")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("isUnique")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("lower")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("ownedParameters")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("postconditions")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("preconditions")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("raisedExceptions")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("redefinedOperations")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("templateParameter")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("type")] = QStringLiteral("QUmlOperation");
    _classForProperty[QStringLiteral("upper")] = QStringLiteral("QUmlOperation");
}

