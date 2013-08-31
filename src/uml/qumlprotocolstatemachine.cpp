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
#include "qumlprotocolstatemachine.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlBehavioralFeature>
#include <QtUml/QUmlBehavioredClassifier>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlProtocolConformance>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlReception>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

/*!
    \class UmlProtocolStateMachine

    \inmodule QtUml

    \brief A protocol state machine is always defined in the context of a classifier. It specifies which operations of the classifier can be called in which state and under which condition, thus specifying the allowed call sequences on the classifier's operations. A protocol state machine presents the possible and permitted transitions on the instances of its context classifier, together with the operations which carry the transitions. In this manner, an instance lifecycle can be created for a classifier, by specifying the order in which the operations can be activated and the states through which an instance progresses during its existence.
 */

QUmlProtocolStateMachine::QUmlProtocolStateMachine(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlProtocolStateMachine::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlProtocolStateMachine::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlProtocolStateMachine::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlProtocolStateMachine::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlProtocolStateMachine::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlProtocolStateMachine::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlProtocolStateMachine::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlProtocolStateMachine::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QUmlElementImport *> QUmlProtocolStateMachine::elementImport() const
{
    return *(reinterpret_cast<const QSet<QUmlElementImport *> *>(&_elementImport));
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QUmlPackageableElement *> QUmlProtocolStateMachine::importedMember() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importedMember())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QUmlNamedElement *> QUmlProtocolStateMachine::member() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_member));
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QUmlNamedElement *> QUmlProtocolStateMachine::ownedMember() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_ownedMember));
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QUmlConstraint *> QUmlProtocolStateMachine::ownedRule() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_ownedRule));
}

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QUmlPackageImport *> QUmlProtocolStateMachine::packageImport() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageImport *> *>(&_packageImport));
}

// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlProtocolStateMachine::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}
// OWNED ATTRIBUTES [PackageableElement]

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlProtocolStateMachine::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [Type]

/*!
    Specifies the owning package of this classifier, if any.
 */
QUmlPackage *QUmlProtocolStateMachine::package() const
{
    return reinterpret_cast<QUmlPackage *>(_package);
}

// OWNED ATTRIBUTES [RedefinableElement]

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlProtocolStateMachine::isLeaf() const
{
    return _isLeaf;
}

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QUmlRedefinableElement *> QUmlProtocolStateMachine::redefinedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableElement *> *>(&_redefinedElement));
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QUmlClassifier *> QUmlProtocolStateMachine::redefinitionContext() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_redefinitionContext));
}

// OWNED ATTRIBUTES [TemplateableElement]

/*!
    The optional bindings from this element to templates.
 */
const QSet<QUmlTemplateBinding *> QUmlProtocolStateMachine::templateBinding() const
{
    return *(reinterpret_cast<const QSet<QUmlTemplateBinding *> *>(&_templateBinding));
}

// OWNED ATTRIBUTES [Classifier]

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
const QSet<QUmlProperty *> QUmlProtocolStateMachine::attribute() const
{
    return *(reinterpret_cast<const QSet<QUmlProperty *> *>(&_attribute));
}

/*!
    References the collaboration uses owned by the classifier.
 */
const QSet<QUmlCollaborationUse *> QUmlProtocolStateMachine::collaborationUse() const
{
    return *(reinterpret_cast<const QSet<QUmlCollaborationUse *> *>(&_collaborationUse));
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
const QSet<QUmlFeature *> QUmlProtocolStateMachine::feature() const
{
    return *(reinterpret_cast<const QSet<QUmlFeature *> *>(&_feature));
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
const QSet<QUmlGeneralization *> QUmlProtocolStateMachine::generalization() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralization *> *>(&_generalization));
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
const QSet<QUmlNamedElement *> QUmlProtocolStateMachine::inheritedMember() const
{
    QSet<QUmlNamedElement *> r;
    foreach (UmlNamedElement *element, UmlClassifier::inheritedMember())
        r.insert(reinterpret_cast<QUmlNamedElement *>(element));
    return r;
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QUmlProtocolStateMachine::isFinalSpecialization() const
{
    return _isFinalSpecialization;
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlRedefinableTemplateSignature *QUmlProtocolStateMachine::ownedTemplateSignature() const
{
    return reinterpret_cast<QUmlRedefinableTemplateSignature *>(_ownedTemplateSignature);
}

/*!
    References the use cases owned by this classifier.
 */
const QSet<QUmlUseCase *> QUmlProtocolStateMachine::ownedUseCase() const
{
    return *(reinterpret_cast<const QSet<QUmlUseCase *> *>(&_ownedUseCase));
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
const QSet<QUmlGeneralizationSet *> QUmlProtocolStateMachine::powertypeExtent() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralizationSet *> *>(&_powertypeExtent));
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
const QSet<QUmlClassifier *> QUmlProtocolStateMachine::redefinedClassifier() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_redefinedClassifier));
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QUmlCollaborationUse *QUmlProtocolStateMachine::representation() const
{
    return reinterpret_cast<QUmlCollaborationUse *>(_representation);
}

/*!
    References the substitutions that are owned by this Classifier.
 */
const QSet<QUmlSubstitution *> QUmlProtocolStateMachine::substitution() const
{
    return *(reinterpret_cast<const QSet<QUmlSubstitution *> *>(&_substitution));
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlClassifierTemplateParameter *QUmlProtocolStateMachine::templateParameter() const
{
    return reinterpret_cast<QUmlClassifierTemplateParameter *>(_templateParameter);
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
const QSet<QUmlUseCase *> QUmlProtocolStateMachine::useCase() const
{
    return *(reinterpret_cast<const QSet<QUmlUseCase *> *>(&_useCase));
}

// OWNED ATTRIBUTES [StructuredClassifier]

/*!
    References the connectors owned by the classifier.
 */
const QSet<QUmlConnector *> QUmlProtocolStateMachine::ownedConnector() const
{
    return *(reinterpret_cast<const QSet<QUmlConnector *> *>(&_ownedConnector));
}

/*!
    References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true.
 */
const QSet<QUmlProperty *> QUmlProtocolStateMachine::part() const
{
    QSet<QUmlProperty *> r;
    foreach (UmlProperty *element, UmlStructuredClassifier::part())
        r.insert(reinterpret_cast<QUmlProperty *>(element));
    return r;
}

/*!
    References the roles that instances may play in this classifier.
 */
const QSet<QUmlConnectableElement *> QUmlProtocolStateMachine::role() const
{
    return *(reinterpret_cast<const QSet<QUmlConnectableElement *> *>(&_role));
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

/*!
    References a set of ports that an encapsulated classifier owns.
 */
const QSet<QUmlPort *> QUmlProtocolStateMachine::ownedPort() const
{
    QSet<QUmlPort *> r;
    foreach (UmlPort *element, UmlEncapsulatedClassifier::ownedPort())
        r.insert(reinterpret_cast<QUmlPort *>(element));
    return r;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
QUmlBehavior *QUmlProtocolStateMachine::classifierBehavior() const
{
    return reinterpret_cast<QUmlBehavior *>(_classifierBehavior);
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
const QSet<QUmlInterfaceRealization *> QUmlProtocolStateMachine::interfaceRealization() const
{
    return *(reinterpret_cast<const QSet<QUmlInterfaceRealization *> *>(&_interfaceRealization));
}

/*!
    References behavior specifications owned by a classifier.
 */
const QSet<QUmlBehavior *> QUmlProtocolStateMachine::ownedBehavior() const
{
    return *(reinterpret_cast<const QSet<QUmlBehavior *> *>(&_ownedBehavior));
}

// OWNED ATTRIBUTES [Class]

/*!
    References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class.
 */
const QSet<QUmlExtension *> QUmlProtocolStateMachine::extension() const
{
    QSet<QUmlExtension *> r;
    foreach (UmlExtension *element, UmlClass::extension())
        r.insert(reinterpret_cast<QUmlExtension *>(element));
    return r;
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract.
 */
bool QUmlProtocolStateMachine::isAbstract() const
{
    return _isAbstract;
}

/*!
    Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class.
 */
bool QUmlProtocolStateMachine::isActive() const
{
    return _isActive;
}

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
const QList<QUmlClassifier *> QUmlProtocolStateMachine::nestedClassifier() const
{
    return *(reinterpret_cast<const QList<QUmlClassifier *> *>(&_nestedClassifier));
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
const QList<QUmlProperty *> QUmlProtocolStateMachine::ownedAttribute() const
{
    return *(reinterpret_cast<const QList<QUmlProperty *> *>(&_ownedAttribute));
}

/*!
    The operations owned by the class.
 */
const QList<QUmlOperation *> QUmlProtocolStateMachine::ownedOperation() const
{
    return *(reinterpret_cast<const QList<QUmlOperation *> *>(&_ownedOperation));
}

/*!
    Receptions that objects of this class are willing to accept.
 */
const QSet<QUmlReception *> QUmlProtocolStateMachine::ownedReception() const
{
    return *(reinterpret_cast<const QSet<QUmlReception *> *>(&_ownedReception));
}

/*!
    This gives the superclasses of a class.
 */
const QSet<QUmlClass *> QUmlProtocolStateMachine::superClass() const
{
    QSet<QUmlClass *> r;
    foreach (UmlClass *element, UmlClass::superClass())
        r.insert(reinterpret_cast<QUmlClass *>(element));
    return r;
}

// OWNED ATTRIBUTES [Behavior]

/*!
    The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.
 */
QUmlBehavioredClassifier *QUmlProtocolStateMachine::context() const
{
    return reinterpret_cast<QUmlBehavioredClassifier *>(UmlBehavior::context());
}

/*!
    Tells whether the behavior can be invoked while it is still executing from a previous invocation.
 */
bool QUmlProtocolStateMachine::isReentrant() const
{
    return _isReentrant;
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
const QList<QUmlParameter *> QUmlProtocolStateMachine::ownedParameter() const
{
    return *(reinterpret_cast<const QList<QUmlParameter *> *>(&_ownedParameter));
}

/*!
    The ParameterSets owned by this Behavior.
 */
const QSet<QUmlParameterSet *> QUmlProtocolStateMachine::ownedParameterSet() const
{
    return *(reinterpret_cast<const QSet<QUmlParameterSet *> *>(&_ownedParameterSet));
}

/*!
    An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.
 */
const QSet<QUmlConstraint *> QUmlProtocolStateMachine::postcondition() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_postcondition));
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
const QSet<QUmlConstraint *> QUmlProtocolStateMachine::precondition() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_precondition));
}

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
QUmlBehavioralFeature *QUmlProtocolStateMachine::specification() const
{
    return reinterpret_cast<QUmlBehavioralFeature *>(_specification);
}

// OWNED ATTRIBUTES [StateMachine]

/*!
    The connection points defined for this state machine. They represent the interface of the state machine when used as part of submachine state.
 */
const QSet<QUmlPseudostate *> QUmlProtocolStateMachine::connectionPoint() const
{
    return *(reinterpret_cast<const QSet<QUmlPseudostate *> *>(&_connectionPoint));
}

/*!
    The state machines of which this is an extension.
 */
const QSet<QUmlStateMachine *> QUmlProtocolStateMachine::extendedStateMachine() const
{
    return *(reinterpret_cast<const QSet<QUmlStateMachine *> *>(&_extendedStateMachine));
}

/*!
    The regions owned directly by the state machine.
 */
const QSet<QUmlRegion *> QUmlProtocolStateMachine::region() const
{
    return *(reinterpret_cast<const QSet<QUmlRegion *> *>(&_region));
}

/*!
    References the submachine(s) in case of a submachine state. Multiple machines are referenced in case of a concurrent state.
 */
const QSet<QUmlState *> QUmlProtocolStateMachine::submachineState() const
{
    return *(reinterpret_cast<const QSet<QUmlState *> *>(&_submachineState));
}

// OWNED ATTRIBUTES [ProtocolStateMachine]

/*!
    Conformance between protocol state machines.
 */
const QSet<QUmlProtocolConformance *> QUmlProtocolStateMachine::conformance() const
{
    return *(reinterpret_cast<const QSet<QUmlProtocolConformance *> *>(&_conformance));
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlProtocolStateMachine::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlProtocolStateMachine::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlProtocolStateMachine::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlProtocolStateMachine::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlProtocolStateMachine::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlProtocolStateMachine::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [Namespace]

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QUmlPackageableElement *> QUmlProtocolStateMachine::excludeCollisions(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::excludeCollisions(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlProtocolStateMachine::getNamesOfMember(QUmlNamedElement *element) const
{
    return UmlNamespace::getNamesOfMember(element);
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlProtocolStateMachine::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importMembers(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlProtocolStateMachine::membersAreDistinguishable() const
{
    return UmlNamespace::membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlProtocolStateMachine::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlParameterableElement::isCompatibleWith(p);
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlProtocolStateMachine::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]
// OPERATIONS [TemplateableElement]

/*!
    The query parameterableElements() returns the set of elements that may be used as the parametered elements for a template parameter of this templateable element. By default, this set includes all the owned elements. Subclasses may override this operation if they choose to restrict the set of parameterable elements.
 */
QSet<QUmlParameterableElement *> QUmlProtocolStateMachine::parameterableElements() const
{
    QSet<QUmlParameterableElement *> r;
    foreach (UmlParameterableElement *element, UmlTemplateableElement::parameterableElements())
        r.insert(reinterpret_cast<QUmlParameterableElement *>(element));
    return r;
}

// OPERATIONS [Classifier]

/*!
    The query allFeatures() gives all of the features in the namespace of the classifier. In general, through mechanisms such as inheritance, this will be a larger set than feature.
 */
QSet<QUmlFeature *> QUmlProtocolStateMachine::allFeatures() const
{
    QSet<QUmlFeature *> r;
    foreach (UmlFeature *element, UmlClassifier::allFeatures())
        r.insert(reinterpret_cast<QUmlFeature *>(element));
    return r;
}

/*!
    The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 */
QSet<QUmlClassifier *> QUmlProtocolStateMachine::allParents() const
{
    QSet<QUmlClassifier *> r;
    foreach (UmlClassifier *element, UmlClassifier::allParents())
        r.insert(reinterpret_cast<QUmlClassifier *>(element));
    return r;
}

/*!
    The query conformsTo() gives true for a classifier that defines a type that conforms to another. This is used, for example, in the specification of signature conformance for operations.
 */
bool QUmlProtocolStateMachine::conformsTo(QUmlClassifier *other) const
{
    return UmlClassifier::conformsTo(other);
}

/*!
    The query hasVisibilityOf() determines whether a named element is visible in the classifier. By default all are visible. It is only called when the argument is something owned by a parent.
 */
bool QUmlProtocolStateMachine::hasVisibilityOf(QUmlNamedElement *n) const
{
    return UmlClassifier::hasVisibilityOf(n);
}

/*!
    The query inheritableMembers() gives all of the members of a classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
 */
QSet<QUmlNamedElement *> QUmlProtocolStateMachine::inheritableMembers(QUmlClassifier *c) const
{
    QSet<QUmlNamedElement *> r;
    foreach (UmlNamedElement *element, UmlClassifier::inheritableMembers(c))
        r.insert(reinterpret_cast<QUmlNamedElement *>(element));
    return r;
}

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QUmlProtocolStateMachine::isTemplate() const
{
    return UmlClassifier::isTemplate();
}

/*!
    The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
 */
bool QUmlProtocolStateMachine::maySpecializeType(QUmlClassifier *c) const
{
    return UmlClassifier::maySpecializeType(c);
}

/*!
    The query parents() gives all of the immediate ancestors of a generalized Classifier.
 */
QSet<QUmlClassifier *> QUmlProtocolStateMachine::parents() const
{
    QSet<QUmlClassifier *> r;
    foreach (UmlClassifier *element, UmlClassifier::parents())
        r.insert(reinterpret_cast<QUmlClassifier *>(element));
    return r;
}

// OPERATIONS [Class]

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QUmlNamedElement *> QUmlProtocolStateMachine::inherit(QSet<QUmlNamedElement *> inhs) const
{
    QSet<QUmlNamedElement *> r;
    foreach (UmlNamedElement *element, UmlClass::inherit(*(reinterpret_cast<QSet<UmlNamedElement *> *>(&inhs))))
        r.insert(reinterpret_cast<QUmlNamedElement *>(element));
    return r;
}

// OPERATIONS [StateMachine]

/*!
    The operation LCA(s1,s2) returns an orthogonal state or region which is the least common ancestor of states s1 and s2, based on the statemachine containment hierarchy.
 */
QUmlNamespace *QUmlProtocolStateMachine::LCA(QUmlState *s1, QUmlState *s2) const
{
    return reinterpret_cast<QUmlNamespace *>(UmlStateMachine::LCA(s1, s2));
}

/*!
    The query ancestor(s1, s2) checks whether s1 is an ancestor state of state s2.
 */
bool QUmlProtocolStateMachine::ancestor(QUmlState *s1, QUmlState *s2) const
{
    return UmlStateMachine::ancestor(s1, s2);
}

/*!
    The query isConsistentWith() specifies that a redefining state machine is consistent with a redefined state machine provided that the redefining state machine is an extension of the redefined state machine: Regions are inherited and regions can be added, inherited regions can be redefined. In case of multiple redefining state machines, extension implies that the redefining state machine gets orthogonal regions for each of the redefined state machines.
 */
bool QUmlProtocolStateMachine::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlStateMachine::isConsistentWith(redefinee);
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a statemachine are properly related to the redefinition contexts of the specified statemachine to allow this element to redefine the other. The containing classifier of a redefining statemachine must redefine the containing classifier of the redefined statemachine.
 */
bool QUmlProtocolStateMachine::isRedefinitionContextValid(QUmlStateMachine *redefined) const
{
    return UmlStateMachine::isRedefinitionContextValid(redefined);
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProtocolStateMachine::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlProtocolStateMachine::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlProtocolStateMachine::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlProtocolStateMachine::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlProtocolStateMachine::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlProtocolStateMachine::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlProtocolStateMachine::addElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::addElementImport(elementImport);
}

void QUmlProtocolStateMachine::removeElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::removeElementImport(elementImport);
}

void QUmlProtocolStateMachine::addOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::addOwnedRule(ownedRule);
}

void QUmlProtocolStateMachine::removeOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::removeOwnedRule(ownedRule);
}

void QUmlProtocolStateMachine::addPackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::addPackageImport(packageImport);
}

void QUmlProtocolStateMachine::removePackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::removePackageImport(packageImport);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlProtocolStateMachine::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlProtocolStateMachine::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlPackageableElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlProtocolStateMachine::setPackage(QUmlPackage *package)
{
    UmlType::setPackage(package);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlProtocolStateMachine::setLeaf(bool isLeaf)
{
    UmlRedefinableElement::setLeaf(isLeaf);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlProtocolStateMachine::addTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::addTemplateBinding(templateBinding);
}

void QUmlProtocolStateMachine::removeTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::removeTemplateBinding(templateBinding);
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlProtocolStateMachine::addCollaborationUse(UmlCollaborationUse *collaborationUse)
{
    UmlClassifier::addCollaborationUse(collaborationUse);
}

void QUmlProtocolStateMachine::removeCollaborationUse(UmlCollaborationUse *collaborationUse)
{
    UmlClassifier::removeCollaborationUse(collaborationUse);
}

void QUmlProtocolStateMachine::addGeneralization(UmlGeneralization *generalization)
{
    UmlClassifier::addGeneralization(generalization);
}

void QUmlProtocolStateMachine::removeGeneralization(UmlGeneralization *generalization)
{
    UmlClassifier::removeGeneralization(generalization);
}

void QUmlProtocolStateMachine::setFinalSpecialization(bool isFinalSpecialization)
{
    UmlClassifier::setFinalSpecialization(isFinalSpecialization);
}

void QUmlProtocolStateMachine::setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature)
{
    UmlClassifier::setOwnedTemplateSignature(ownedTemplateSignature);
}

void QUmlProtocolStateMachine::addOwnedUseCase(UmlUseCase *ownedUseCase)
{
    UmlClassifier::addOwnedUseCase(ownedUseCase);
}

void QUmlProtocolStateMachine::removeOwnedUseCase(UmlUseCase *ownedUseCase)
{
    UmlClassifier::removeOwnedUseCase(ownedUseCase);
}

void QUmlProtocolStateMachine::addPowertypeExtent(UmlGeneralizationSet *powertypeExtent)
{
    UmlClassifier::addPowertypeExtent(powertypeExtent);
}

void QUmlProtocolStateMachine::removePowertypeExtent(UmlGeneralizationSet *powertypeExtent)
{
    UmlClassifier::removePowertypeExtent(powertypeExtent);
}

void QUmlProtocolStateMachine::addRedefinedClassifier(UmlClassifier *redefinedClassifier)
{
    UmlClassifier::addRedefinedClassifier(redefinedClassifier);
}

void QUmlProtocolStateMachine::removeRedefinedClassifier(UmlClassifier *redefinedClassifier)
{
    UmlClassifier::removeRedefinedClassifier(redefinedClassifier);
}

void QUmlProtocolStateMachine::setRepresentation(QUmlCollaborationUse *representation)
{
    UmlClassifier::setRepresentation(representation);
}

void QUmlProtocolStateMachine::addSubstitution(UmlSubstitution *substitution)
{
    UmlClassifier::addSubstitution(substitution);
}

void QUmlProtocolStateMachine::removeSubstitution(UmlSubstitution *substitution)
{
    UmlClassifier::removeSubstitution(substitution);
}

void QUmlProtocolStateMachine::setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter)
{
    UmlClassifier::setTemplateParameter(templateParameter);
}

void QUmlProtocolStateMachine::addUseCase(UmlUseCase *useCase)
{
    UmlClassifier::addUseCase(useCase);
}

void QUmlProtocolStateMachine::removeUseCase(UmlUseCase *useCase)
{
    UmlClassifier::removeUseCase(useCase);
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlProtocolStateMachine::addOwnedConnector(UmlConnector *ownedConnector)
{
    UmlStructuredClassifier::addOwnedConnector(ownedConnector);
}

void QUmlProtocolStateMachine::removeOwnedConnector(UmlConnector *ownedConnector)
{
    UmlStructuredClassifier::removeOwnedConnector(ownedConnector);
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlProtocolStateMachine::setClassifierBehavior(QUmlBehavior *classifierBehavior)
{
    UmlBehavioredClassifier::setClassifierBehavior(classifierBehavior);
}

void QUmlProtocolStateMachine::addInterfaceRealization(UmlInterfaceRealization *interfaceRealization)
{
    UmlBehavioredClassifier::addInterfaceRealization(interfaceRealization);
}

void QUmlProtocolStateMachine::removeInterfaceRealization(UmlInterfaceRealization *interfaceRealization)
{
    UmlBehavioredClassifier::removeInterfaceRealization(interfaceRealization);
}

void QUmlProtocolStateMachine::addOwnedBehavior(UmlBehavior *ownedBehavior)
{
    UmlBehavioredClassifier::addOwnedBehavior(ownedBehavior);
}

void QUmlProtocolStateMachine::removeOwnedBehavior(UmlBehavior *ownedBehavior)
{
    UmlBehavioredClassifier::removeOwnedBehavior(ownedBehavior);
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlProtocolStateMachine::setAbstract(bool isAbstract)
{
    UmlClass::setAbstract(isAbstract);
}

void QUmlProtocolStateMachine::setActive(bool isActive)
{
    UmlClass::setActive(isActive);
}

void QUmlProtocolStateMachine::addNestedClassifier(UmlClassifier *nestedClassifier)
{
    UmlClass::addNestedClassifier(nestedClassifier);
}

void QUmlProtocolStateMachine::removeNestedClassifier(UmlClassifier *nestedClassifier)
{
    UmlClass::removeNestedClassifier(nestedClassifier);
}

void QUmlProtocolStateMachine::addOwnedAttribute(UmlProperty *ownedAttribute)
{
    UmlClass::addOwnedAttribute(ownedAttribute);
}

void QUmlProtocolStateMachine::removeOwnedAttribute(UmlProperty *ownedAttribute)
{
    UmlClass::removeOwnedAttribute(ownedAttribute);
}

void QUmlProtocolStateMachine::addOwnedOperation(UmlOperation *ownedOperation)
{
    UmlClass::addOwnedOperation(ownedOperation);
}

void QUmlProtocolStateMachine::removeOwnedOperation(UmlOperation *ownedOperation)
{
    UmlClass::removeOwnedOperation(ownedOperation);
}

void QUmlProtocolStateMachine::addOwnedReception(UmlReception *ownedReception)
{
    UmlClass::addOwnedReception(ownedReception);
}

void QUmlProtocolStateMachine::removeOwnedReception(UmlReception *ownedReception)
{
    UmlClass::removeOwnedReception(ownedReception);
}

void QUmlProtocolStateMachine::addSuperClass(UmlClass *superClass)
{
    UmlClass::addSuperClass(superClass);
}

void QUmlProtocolStateMachine::removeSuperClass(UmlClass *superClass)
{
    UmlClass::removeSuperClass(superClass);
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlProtocolStateMachine::setReentrant(bool isReentrant)
{
    UmlBehavior::setReentrant(isReentrant);
}

void QUmlProtocolStateMachine::addOwnedParameter(UmlParameter *ownedParameter)
{
    UmlBehavior::addOwnedParameter(ownedParameter);
}

void QUmlProtocolStateMachine::removeOwnedParameter(UmlParameter *ownedParameter)
{
    UmlBehavior::removeOwnedParameter(ownedParameter);
}

void QUmlProtocolStateMachine::addOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    UmlBehavior::addOwnedParameterSet(ownedParameterSet);
}

void QUmlProtocolStateMachine::removeOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    UmlBehavior::removeOwnedParameterSet(ownedParameterSet);
}

void QUmlProtocolStateMachine::addPostcondition(UmlConstraint *postcondition)
{
    UmlBehavior::addPostcondition(postcondition);
}

void QUmlProtocolStateMachine::removePostcondition(UmlConstraint *postcondition)
{
    UmlBehavior::removePostcondition(postcondition);
}

void QUmlProtocolStateMachine::addPrecondition(UmlConstraint *precondition)
{
    UmlBehavior::addPrecondition(precondition);
}

void QUmlProtocolStateMachine::removePrecondition(UmlConstraint *precondition)
{
    UmlBehavior::removePrecondition(precondition);
}

void QUmlProtocolStateMachine::setSpecification(QUmlBehavioralFeature *specification)
{
    UmlBehavior::setSpecification(specification);
}

// SLOTS FOR OWNED ATTRIBUTES [StateMachine]

void QUmlProtocolStateMachine::addConnectionPoint(UmlPseudostate *connectionPoint)
{
    UmlStateMachine::addConnectionPoint(connectionPoint);
}

void QUmlProtocolStateMachine::removeConnectionPoint(UmlPseudostate *connectionPoint)
{
    UmlStateMachine::removeConnectionPoint(connectionPoint);
}

void QUmlProtocolStateMachine::addExtendedStateMachine(UmlStateMachine *extendedStateMachine)
{
    UmlStateMachine::addExtendedStateMachine(extendedStateMachine);
}

void QUmlProtocolStateMachine::removeExtendedStateMachine(UmlStateMachine *extendedStateMachine)
{
    UmlStateMachine::removeExtendedStateMachine(extendedStateMachine);
}

void QUmlProtocolStateMachine::addRegion(UmlRegion *region)
{
    UmlStateMachine::addRegion(region);
}

void QUmlProtocolStateMachine::removeRegion(UmlRegion *region)
{
    UmlStateMachine::removeRegion(region);
}

void QUmlProtocolStateMachine::addSubmachineState(UmlState *submachineState)
{
    UmlStateMachine::addSubmachineState(submachineState);
}

void QUmlProtocolStateMachine::removeSubmachineState(UmlState *submachineState)
{
    UmlStateMachine::removeSubmachineState(submachineState);
}

// SLOTS FOR OWNED ATTRIBUTES [ProtocolStateMachine]

void QUmlProtocolStateMachine::addConformance(UmlProtocolConformance *conformance)
{
    UmlProtocolStateMachine::addConformance(conformance);
}

void QUmlProtocolStateMachine::removeConformance(UmlProtocolConformance *conformance)
{
    UmlProtocolStateMachine::removeConformance(conformance);
}

QT_END_NAMESPACE

