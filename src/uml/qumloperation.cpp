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

QT_BEGIN_NAMESPACE

/*!
    \class UmlOperation

    \inmodule QtUml

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.An operation may invoke both the execution of method behaviors as well as other behavioral responses.Operation specializes TemplateableElement in order to support specification of template operations and bound operations. Operation specializes ParameterableElement to specify that an operation can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
 */

QUmlOperation::QUmlOperation(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlOperation::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlOperation::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlOperation::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [TemplateableElement]

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlTemplateSignature *QUmlOperation::ownedTemplateSignature() const
{
    return reinterpret_cast<QUmlTemplateSignature *>(_ownedTemplateSignature);
}

/*!
    The optional bindings from this element to templates.
 */
const QSet<QUmlTemplateBinding *> QUmlOperation::templateBinding() const
{
    return *(reinterpret_cast<const QSet<QUmlTemplateBinding *> *>(&_templateBinding));
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlOperation::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlOperation::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlOperation::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlOperation::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlOperation::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlOperation::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [Namespace]

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QUmlElementImport *> QUmlOperation::elementImport() const
{
    return *(reinterpret_cast<const QSet<QUmlElementImport *> *>(&_elementImport));
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QUmlPackageableElement *> QUmlOperation::importedMember() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importedMember())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QUmlNamedElement *> QUmlOperation::member() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_member));
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QUmlNamedElement *> QUmlOperation::ownedMember() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_ownedMember));
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QUmlConstraint *> QUmlOperation::ownedRule() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_ownedRule));
}

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QUmlPackageImport *> QUmlOperation::packageImport() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageImport *> *>(&_packageImport));
}

// OWNED ATTRIBUTES [RedefinableElement]

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlOperation::isLeaf() const
{
    return _isLeaf;
}

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QUmlRedefinableElement *> QUmlOperation::redefinedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableElement *> *>(&_redefinedElement));
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QUmlClassifier *> QUmlOperation::redefinitionContext() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_redefinitionContext));
}

// OWNED ATTRIBUTES [Feature]

/*!
    The Classifiers that have this Feature as a feature.
 */
const QSet<QUmlClassifier *> QUmlOperation::featuringClassifier() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_featuringClassifier));
}

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QUmlOperation::isStatic() const
{
    return _isStatic;
}

// OWNED ATTRIBUTES [BehavioralFeature]

/*!
    Specifies the semantics of concurrent calls to the same passive instance (i.e., an instance originating from a class with isActive being false). Active instances control access to their own behavioral features.
 */
QtUml::CallConcurrencyKind QUmlOperation::concurrency() const
{
    return _concurrency;
}

/*!
    If true, then the behavioral feature does not have an implementation, and one must be supplied by a more specific element. If false, the behavioral feature must have an implementation in the classifier or one must be inherited from a more general element.
 */
bool QUmlOperation::isAbstract() const
{
    return _isAbstract;
}

/*!
    A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior).
 */
const QSet<QUmlBehavior *> QUmlOperation::method() const
{
    return *(reinterpret_cast<const QSet<QUmlBehavior *> *>(&_method));
}

/*!
    The ParameterSets owned by this BehavioralFeature.
 */
const QSet<QUmlParameterSet *> QUmlOperation::ownedParameterSet() const
{
    return *(reinterpret_cast<const QSet<QUmlParameterSet *> *>(&_ownedParameterSet));
}
// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlOperation::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}
// OWNED ATTRIBUTES [Operation]

/*!
    An optional Constraint on the result values of an invocation of this Operation.
 */
QUmlConstraint *QUmlOperation::bodyCondition() const
{
    return reinterpret_cast<QUmlConstraint *>(_bodyCondition);
}

/*!
    The class that owns the operation.
 */
QUmlClass *QUmlOperation::class_() const
{
    return reinterpret_cast<QUmlClass *>(_class_);
}

/*!
    The DataType that owns this Operation.
 */
QUmlDataType *QUmlOperation::datatype() const
{
    return reinterpret_cast<QUmlDataType *>(_datatype);
}

/*!
    The Interface that owns this Operation.
 */
QUmlInterface *QUmlOperation::interface_() const
{
    return reinterpret_cast<QUmlInterface *>(_interface_);
}

/*!
    This information is derived from the return result for this Operation.Specifies whether the return parameter is ordered or not, if present.
 */
bool QUmlOperation::isOrdered() const
{
    return UmlOperation::isOrdered();
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QUmlOperation::isQuery() const
{
    return _isQuery;
}

/*!
    Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation.
 */
bool QUmlOperation::isUnique() const
{
    return UmlOperation::isUnique();
}

/*!
    This information is derived from the return result for this Operation.Specifies the lower multiplicity of the return parameter, if present.
 */
int QUmlOperation::lower() const
{
    return UmlOperation::lower();
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.
 */
const QList<QUmlParameter *> QUmlOperation::ownedParameter() const
{
    return *(reinterpret_cast<const QList<QUmlParameter *> *>(&_ownedParameter));
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
const QSet<QUmlConstraint *> QUmlOperation::postcondition() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_postcondition));
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.
 */
const QSet<QUmlConstraint *> QUmlOperation::precondition() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_precondition));
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.
 */
const QSet<QUmlType *> QUmlOperation::raisedException() const
{
    return *(reinterpret_cast<const QSet<QUmlType *> *>(&_raisedException));
}

/*!
    References the Operations that are redefined by this Operation.
 */
const QSet<QUmlOperation *> QUmlOperation::redefinedOperation() const
{
    return *(reinterpret_cast<const QSet<QUmlOperation *> *>(&_redefinedOperation));
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlOperationTemplateParameter *QUmlOperation::templateParameter() const
{
    return reinterpret_cast<QUmlOperationTemplateParameter *>(_templateParameter);
}

/*!
    This information is derived from the return result for this Operation.Specifies the return result of the operation, if present.
 */
QUmlType *QUmlOperation::type() const
{
    return reinterpret_cast<QUmlType *>(UmlOperation::type());
}

/*!
    This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present.
 */
int QUmlOperation::upper() const
{
    return UmlOperation::upper();
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlOperation::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlOperation::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [TemplateableElement]

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QUmlOperation::isTemplate() const
{
    return UmlTemplateableElement::isTemplate();
}

/*!
    The query parameterableElements() returns the set of elements that may be used as the parametered elements for a template parameter of this templateable element. By default, this set includes all the owned elements. Subclasses may override this operation if they choose to restrict the set of parameterable elements.
 */
QSet<QUmlParameterableElement *> QUmlOperation::parameterableElements() const
{
    QSet<QUmlParameterableElement *> r;
    foreach (UmlParameterableElement *element, UmlTemplateableElement::parameterableElements())
        r.insert(reinterpret_cast<QUmlParameterableElement *>(element));
    return r;
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlOperation::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlOperation::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlOperation::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [Namespace]

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QUmlPackageableElement *> QUmlOperation::excludeCollisions(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::excludeCollisions(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlOperation::getNamesOfMember(QUmlNamedElement *element) const
{
    return UmlNamespace::getNamesOfMember(element);
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlOperation::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importMembers(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlOperation::membersAreDistinguishable() const
{
    return UmlNamespace::membersAreDistinguishable();
}

// OPERATIONS [RedefinableElement]

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
 */
bool QUmlOperation::isRedefinitionContextValid(QUmlRedefinableElement *redefined) const
{
    return UmlRedefinableElement::isRedefinitionContextValid(redefined);
}

// OPERATIONS [BehavioralFeature]

/*!
    The query isDistinguishableFrom() determines whether two BehavioralFeatures may coexist in the same Namespace. It specifies that they have to have different signatures.
 */
bool QUmlOperation::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlBehavioralFeature::isDistinguishableFrom(n, ns);
}

// OPERATIONS [ParameterableElement]

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlOperation::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlParameterableElement::isCompatibleWith(p);
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlOperation::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// OPERATIONS [Operation]

/*!
    A redefining operation is consistent with a redefined operation if it has the same number of owned parameters, and the type of each owned parameter conforms to the type of the corresponding redefined parameter.The query isConsistentWith() specifies, for any two Operations in a context in which redefinition is possible, whether redefinition would be consistent in the sense of maintaining type covariance. Other senses of consistency may be required, for example to determine consistency in the sense of contravariance. Users may define alternative queries under names different from 'isConsistentWith()', as for example, users may define a query named 'isContravariantWith()'.
 */
bool QUmlOperation::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlOperation::isConsistentWith(redefinee);
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
QSet<QUmlParameter *> QUmlOperation::returnResult() const
{
    QSet<QUmlParameter *> r;
    foreach (UmlParameter *element, UmlOperation::returnResult())
        r.insert(reinterpret_cast<QUmlParameter *>(element));
    return r;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOperation::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlOperation::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlOperation::setOwnedTemplateSignature(QUmlTemplateSignature *ownedTemplateSignature)
{
    UmlTemplateableElement::setOwnedTemplateSignature(ownedTemplateSignature);
}

void QUmlOperation::addTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::addTemplateBinding(templateBinding);
}

void QUmlOperation::removeTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::removeTemplateBinding(templateBinding);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOperation::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlOperation::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlOperation::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlOperation::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlOperation::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlOperation::addElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::addElementImport(elementImport);
}

void QUmlOperation::removeElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::removeElementImport(elementImport);
}

void QUmlOperation::addOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::addOwnedRule(ownedRule);
}

void QUmlOperation::removeOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::removeOwnedRule(ownedRule);
}

void QUmlOperation::addPackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::addPackageImport(packageImport);
}

void QUmlOperation::removePackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::removePackageImport(packageImport);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlOperation::setLeaf(bool isLeaf)
{
    UmlRedefinableElement::setLeaf(isLeaf);
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlOperation::setStatic(bool isStatic)
{
    UmlFeature::setStatic(isStatic);
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioralFeature]

void QUmlOperation::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    UmlBehavioralFeature::setConcurrency(concurrency);
}

void QUmlOperation::setAbstract(bool isAbstract)
{
    UmlBehavioralFeature::setAbstract(isAbstract);
}

void QUmlOperation::addMethod(UmlBehavior *method)
{
    UmlBehavioralFeature::addMethod(method);
}

void QUmlOperation::removeMethod(UmlBehavior *method)
{
    UmlBehavioralFeature::removeMethod(method);
}

void QUmlOperation::addOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    UmlBehavioralFeature::addOwnedParameterSet(ownedParameterSet);
}

void QUmlOperation::removeOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    UmlBehavioralFeature::removeOwnedParameterSet(ownedParameterSet);
}
// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlOperation::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}
// SLOTS FOR OWNED ATTRIBUTES [Operation]

void QUmlOperation::setBodyCondition(QUmlConstraint *bodyCondition)
{
    UmlOperation::setBodyCondition(bodyCondition);
}

void QUmlOperation::setClass(QUmlClass *class_)
{
    UmlOperation::setClass(class_);
}

void QUmlOperation::setDatatype(QUmlDataType *datatype)
{
    UmlOperation::setDatatype(datatype);
}

void QUmlOperation::setInterface(QUmlInterface *interface_)
{
    UmlOperation::setInterface(interface_);
}

void QUmlOperation::setQuery(bool isQuery)
{
    UmlOperation::setQuery(isQuery);
}

void QUmlOperation::addOwnedParameter(UmlParameter *ownedParameter)
{
    UmlOperation::addOwnedParameter(ownedParameter);
}

void QUmlOperation::removeOwnedParameter(UmlParameter *ownedParameter)
{
    UmlOperation::removeOwnedParameter(ownedParameter);
}

void QUmlOperation::addPostcondition(UmlConstraint *postcondition)
{
    UmlOperation::addPostcondition(postcondition);
}

void QUmlOperation::removePostcondition(UmlConstraint *postcondition)
{
    UmlOperation::removePostcondition(postcondition);
}

void QUmlOperation::addPrecondition(UmlConstraint *precondition)
{
    UmlOperation::addPrecondition(precondition);
}

void QUmlOperation::removePrecondition(UmlConstraint *precondition)
{
    UmlOperation::removePrecondition(precondition);
}

void QUmlOperation::addRaisedException(UmlType *raisedException)
{
    UmlOperation::addRaisedException(raisedException);
}

void QUmlOperation::removeRaisedException(UmlType *raisedException)
{
    UmlOperation::removeRaisedException(raisedException);
}

void QUmlOperation::addRedefinedOperation(UmlOperation *redefinedOperation)
{
    UmlOperation::addRedefinedOperation(redefinedOperation);
}

void QUmlOperation::removeRedefinedOperation(UmlOperation *redefinedOperation)
{
    UmlOperation::removeRedefinedOperation(redefinedOperation);
}

void QUmlOperation::setTemplateParameter(QUmlOperationTemplateParameter *templateParameter)
{
    UmlOperation::setTemplateParameter(templateParameter);
}

QT_END_NAMESPACE

