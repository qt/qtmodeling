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
#include "qumlactivity.h"

#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
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
#include <QtUml/QUmlReception>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>
#include <QtUml/QUmlVariable>

QT_BEGIN_NAMESPACE

/*!
    \class UmlActivity

    \inmodule QtUml

    \brief An activity is the specification of parameterized behavior as the coordinated sequencing of subordinate units whose individual elements are actions.
 */

QUmlActivity::QUmlActivity(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlActivity::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlActivity::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlActivity::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlActivity::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlActivity::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlActivity::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlActivity::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlActivity::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QUmlElementImport *> QUmlActivity::elementImport() const
{
    return *(reinterpret_cast<const QSet<QUmlElementImport *> *>(&_elementImport));
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QUmlPackageableElement *> QUmlActivity::importedMember() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importedMember())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QUmlNamedElement *> QUmlActivity::member() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_member));
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QUmlNamedElement *> QUmlActivity::ownedMember() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_ownedMember));
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QUmlConstraint *> QUmlActivity::ownedRule() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_ownedRule));
}

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QUmlPackageImport *> QUmlActivity::packageImport() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageImport *> *>(&_packageImport));
}

// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlActivity::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}
// OWNED ATTRIBUTES [PackageableElement]

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlActivity::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [Type]

/*!
    Specifies the owning package of this classifier, if any.
 */
QUmlPackage *QUmlActivity::package() const
{
    return reinterpret_cast<QUmlPackage *>(_package);
}

// OWNED ATTRIBUTES [RedefinableElement]

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlActivity::isLeaf() const
{
    return _isLeaf;
}

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QUmlRedefinableElement *> QUmlActivity::redefinedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableElement *> *>(&_redefinedElement));
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QUmlClassifier *> QUmlActivity::redefinitionContext() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_redefinitionContext));
}

// OWNED ATTRIBUTES [TemplateableElement]

/*!
    The optional bindings from this element to templates.
 */
const QSet<QUmlTemplateBinding *> QUmlActivity::templateBinding() const
{
    return *(reinterpret_cast<const QSet<QUmlTemplateBinding *> *>(&_templateBinding));
}

// OWNED ATTRIBUTES [Classifier]

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
const QSet<QUmlProperty *> QUmlActivity::attribute() const
{
    return *(reinterpret_cast<const QSet<QUmlProperty *> *>(&_attribute));
}

/*!
    References the collaboration uses owned by the classifier.
 */
const QSet<QUmlCollaborationUse *> QUmlActivity::collaborationUse() const
{
    return *(reinterpret_cast<const QSet<QUmlCollaborationUse *> *>(&_collaborationUse));
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
const QSet<QUmlFeature *> QUmlActivity::feature() const
{
    return *(reinterpret_cast<const QSet<QUmlFeature *> *>(&_feature));
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
const QSet<QUmlGeneralization *> QUmlActivity::generalization() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralization *> *>(&_generalization));
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
const QSet<QUmlNamedElement *> QUmlActivity::inheritedMember() const
{
    QSet<QUmlNamedElement *> r;
    foreach (UmlNamedElement *element, UmlClassifier::inheritedMember())
        r.insert(reinterpret_cast<QUmlNamedElement *>(element));
    return r;
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QUmlActivity::isFinalSpecialization() const
{
    return _isFinalSpecialization;
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlRedefinableTemplateSignature *QUmlActivity::ownedTemplateSignature() const
{
    return reinterpret_cast<QUmlRedefinableTemplateSignature *>(_ownedTemplateSignature);
}

/*!
    References the use cases owned by this classifier.
 */
const QSet<QUmlUseCase *> QUmlActivity::ownedUseCase() const
{
    return *(reinterpret_cast<const QSet<QUmlUseCase *> *>(&_ownedUseCase));
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
const QSet<QUmlGeneralizationSet *> QUmlActivity::powertypeExtent() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralizationSet *> *>(&_powertypeExtent));
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
const QSet<QUmlClassifier *> QUmlActivity::redefinedClassifier() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_redefinedClassifier));
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QUmlCollaborationUse *QUmlActivity::representation() const
{
    return reinterpret_cast<QUmlCollaborationUse *>(_representation);
}

/*!
    References the substitutions that are owned by this Classifier.
 */
const QSet<QUmlSubstitution *> QUmlActivity::substitution() const
{
    return *(reinterpret_cast<const QSet<QUmlSubstitution *> *>(&_substitution));
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlClassifierTemplateParameter *QUmlActivity::templateParameter() const
{
    return reinterpret_cast<QUmlClassifierTemplateParameter *>(_templateParameter);
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
const QSet<QUmlUseCase *> QUmlActivity::useCase() const
{
    return *(reinterpret_cast<const QSet<QUmlUseCase *> *>(&_useCase));
}

// OWNED ATTRIBUTES [StructuredClassifier]

/*!
    References the connectors owned by the classifier.
 */
const QSet<QUmlConnector *> QUmlActivity::ownedConnector() const
{
    return *(reinterpret_cast<const QSet<QUmlConnector *> *>(&_ownedConnector));
}

/*!
    References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true.
 */
const QSet<QUmlProperty *> QUmlActivity::part() const
{
    QSet<QUmlProperty *> r;
    foreach (UmlProperty *element, UmlStructuredClassifier::part())
        r.insert(reinterpret_cast<QUmlProperty *>(element));
    return r;
}

/*!
    References the roles that instances may play in this classifier.
 */
const QSet<QUmlConnectableElement *> QUmlActivity::role() const
{
    return *(reinterpret_cast<const QSet<QUmlConnectableElement *> *>(&_role));
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

/*!
    References a set of ports that an encapsulated classifier owns.
 */
const QSet<QUmlPort *> QUmlActivity::ownedPort() const
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
QUmlBehavior *QUmlActivity::classifierBehavior() const
{
    return reinterpret_cast<QUmlBehavior *>(_classifierBehavior);
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
const QSet<QUmlInterfaceRealization *> QUmlActivity::interfaceRealization() const
{
    return *(reinterpret_cast<const QSet<QUmlInterfaceRealization *> *>(&_interfaceRealization));
}

/*!
    References behavior specifications owned by a classifier.
 */
const QSet<QUmlBehavior *> QUmlActivity::ownedBehavior() const
{
    return *(reinterpret_cast<const QSet<QUmlBehavior *> *>(&_ownedBehavior));
}

// OWNED ATTRIBUTES [Class]

/*!
    References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class.
 */
const QSet<QUmlExtension *> QUmlActivity::extension() const
{
    QSet<QUmlExtension *> r;
    foreach (UmlExtension *element, UmlClass::extension())
        r.insert(reinterpret_cast<QUmlExtension *>(element));
    return r;
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract.
 */
bool QUmlActivity::isAbstract() const
{
    return _isAbstract;
}

/*!
    Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class.
 */
bool QUmlActivity::isActive() const
{
    return _isActive;
}

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
const QList<QUmlClassifier *> QUmlActivity::nestedClassifier() const
{
    return *(reinterpret_cast<const QList<QUmlClassifier *> *>(&_nestedClassifier));
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
const QList<QUmlProperty *> QUmlActivity::ownedAttribute() const
{
    return *(reinterpret_cast<const QList<QUmlProperty *> *>(&_ownedAttribute));
}

/*!
    The operations owned by the class.
 */
const QList<QUmlOperation *> QUmlActivity::ownedOperation() const
{
    return *(reinterpret_cast<const QList<QUmlOperation *> *>(&_ownedOperation));
}

/*!
    Receptions that objects of this class are willing to accept.
 */
const QSet<QUmlReception *> QUmlActivity::ownedReception() const
{
    return *(reinterpret_cast<const QSet<QUmlReception *> *>(&_ownedReception));
}

/*!
    This gives the superclasses of a class.
 */
const QSet<QUmlClass *> QUmlActivity::superClass() const
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
QUmlBehavioredClassifier *QUmlActivity::context() const
{
    return reinterpret_cast<QUmlBehavioredClassifier *>(UmlBehavior::context());
}

/*!
    Tells whether the behavior can be invoked while it is still executing from a previous invocation.
 */
bool QUmlActivity::isReentrant() const
{
    return _isReentrant;
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
const QList<QUmlParameter *> QUmlActivity::ownedParameter() const
{
    return *(reinterpret_cast<const QList<QUmlParameter *> *>(&_ownedParameter));
}

/*!
    The ParameterSets owned by this Behavior.
 */
const QSet<QUmlParameterSet *> QUmlActivity::ownedParameterSet() const
{
    return *(reinterpret_cast<const QSet<QUmlParameterSet *> *>(&_ownedParameterSet));
}

/*!
    An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.
 */
const QSet<QUmlConstraint *> QUmlActivity::postcondition() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_postcondition));
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
const QSet<QUmlConstraint *> QUmlActivity::precondition() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_precondition));
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
const QSet<QUmlBehavior *> QUmlActivity::redefinedBehavior() const
{
    return *(reinterpret_cast<const QSet<QUmlBehavior *> *>(&_redefinedBehavior));
}

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
QUmlBehavioralFeature *QUmlActivity::specification() const
{
    return reinterpret_cast<QUmlBehavioralFeature *>(_specification);
}

// OWNED ATTRIBUTES [Activity]

/*!
    Edges expressing flow between nodes of the activity.
 */
const QSet<QUmlActivityEdge *> QUmlActivity::edge() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityEdge *> *>(&_edge));
}

/*!
    Top-level groups in the activity.
 */
const QSet<QUmlActivityGroup *> QUmlActivity::group() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityGroup *> *>(&_group));
}

/*!
    If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).
 */
bool QUmlActivity::isReadOnly() const
{
    return _isReadOnly;
}

/*!
    If true, all invocations of the activity are handled by the same execution.
 */
bool QUmlActivity::isSingleExecution() const
{
    return _isSingleExecution;
}

/*!
    Nodes coordinated by the activity.
 */
const QSet<QUmlActivityNode *> QUmlActivity::node() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityNode *> *>(&_node));
}

/*!
    Top-level partitions in the activity.
 */
const QSet<QUmlActivityPartition *> QUmlActivity::partition() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityPartition *> *>(&_partition));
}

/*!
    Top-level structured nodes in the activity.
 */
const QSet<QUmlStructuredActivityNode *> QUmlActivity::structuredNode() const
{
    return *(reinterpret_cast<const QSet<QUmlStructuredActivityNode *> *>(&_structuredNode));
}

/*!
    Top-level variables in the activity.
 */
const QSet<QUmlVariable *> QUmlActivity::variable() const
{
    return *(reinterpret_cast<const QSet<QUmlVariable *> *>(&_variable));
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlActivity::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlActivity::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlActivity::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlActivity::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlActivity::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlActivity::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [Namespace]

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QUmlPackageableElement *> QUmlActivity::excludeCollisions(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::excludeCollisions(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlActivity::getNamesOfMember(QUmlNamedElement *element) const
{
    return UmlNamespace::getNamesOfMember(element);
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlActivity::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importMembers(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlActivity::membersAreDistinguishable() const
{
    return UmlNamespace::membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlActivity::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlParameterableElement::isCompatibleWith(p);
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlActivity::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

/*!
    The query isConsistentWith() specifies, for any two RedefinableElements in a context in which redefinition is possible, whether redefinition would be logically consistent. By default, this is false; this operation must be overridden for subclasses of RedefinableElement to define the consistency conditions.
 */
bool QUmlActivity::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlRedefinableElement::isConsistentWith(redefinee);
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
 */
bool QUmlActivity::isRedefinitionContextValid(QUmlRedefinableElement *redefined) const
{
    return UmlRedefinableElement::isRedefinitionContextValid(redefined);
}

// OPERATIONS [TemplateableElement]

/*!
    The query parameterableElements() returns the set of elements that may be used as the parametered elements for a template parameter of this templateable element. By default, this set includes all the owned elements. Subclasses may override this operation if they choose to restrict the set of parameterable elements.
 */
QSet<QUmlParameterableElement *> QUmlActivity::parameterableElements() const
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
QSet<QUmlFeature *> QUmlActivity::allFeatures() const
{
    QSet<QUmlFeature *> r;
    foreach (UmlFeature *element, UmlClassifier::allFeatures())
        r.insert(reinterpret_cast<QUmlFeature *>(element));
    return r;
}

/*!
    The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 */
QSet<QUmlClassifier *> QUmlActivity::allParents() const
{
    QSet<QUmlClassifier *> r;
    foreach (UmlClassifier *element, UmlClassifier::allParents())
        r.insert(reinterpret_cast<QUmlClassifier *>(element));
    return r;
}

/*!
    The query conformsTo() gives true for a classifier that defines a type that conforms to another. This is used, for example, in the specification of signature conformance for operations.
 */
bool QUmlActivity::conformsTo(QUmlClassifier *other) const
{
    return UmlClassifier::conformsTo(other);
}

/*!
    The query hasVisibilityOf() determines whether a named element is visible in the classifier. By default all are visible. It is only called when the argument is something owned by a parent.
 */
bool QUmlActivity::hasVisibilityOf(QUmlNamedElement *n) const
{
    return UmlClassifier::hasVisibilityOf(n);
}

/*!
    The query inheritableMembers() gives all of the members of a classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
 */
QSet<QUmlNamedElement *> QUmlActivity::inheritableMembers(QUmlClassifier *c) const
{
    QSet<QUmlNamedElement *> r;
    foreach (UmlNamedElement *element, UmlClassifier::inheritableMembers(c))
        r.insert(reinterpret_cast<QUmlNamedElement *>(element));
    return r;
}

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QUmlActivity::isTemplate() const
{
    return UmlClassifier::isTemplate();
}

/*!
    The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
 */
bool QUmlActivity::maySpecializeType(QUmlClassifier *c) const
{
    return UmlClassifier::maySpecializeType(c);
}

/*!
    The query parents() gives all of the immediate ancestors of a generalized Classifier.
 */
QSet<QUmlClassifier *> QUmlActivity::parents() const
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
QSet<QUmlNamedElement *> QUmlActivity::inherit(QSet<QUmlNamedElement *> inhs) const
{
    QSet<QUmlNamedElement *> r;
    foreach (UmlNamedElement *element, UmlClass::inherit(*(reinterpret_cast<QSet<UmlNamedElement *> *>(&inhs))))
        r.insert(reinterpret_cast<QUmlNamedElement *>(element));
    return r;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActivity::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlActivity::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActivity::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlActivity::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlActivity::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlActivity::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlActivity::addElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::addElementImport(elementImport);
}

void QUmlActivity::removeElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::removeElementImport(elementImport);
}

void QUmlActivity::addOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::addOwnedRule(ownedRule);
}

void QUmlActivity::removeOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::removeOwnedRule(ownedRule);
}

void QUmlActivity::addPackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::addPackageImport(packageImport);
}

void QUmlActivity::removePackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::removePackageImport(packageImport);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlActivity::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlActivity::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlPackageableElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlActivity::setPackage(QUmlPackage *package)
{
    UmlType::setPackage(package);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlActivity::setLeaf(bool isLeaf)
{
    UmlRedefinableElement::setLeaf(isLeaf);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlActivity::addTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::addTemplateBinding(templateBinding);
}

void QUmlActivity::removeTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::removeTemplateBinding(templateBinding);
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlActivity::addCollaborationUse(UmlCollaborationUse *collaborationUse)
{
    UmlClassifier::addCollaborationUse(collaborationUse);
}

void QUmlActivity::removeCollaborationUse(UmlCollaborationUse *collaborationUse)
{
    UmlClassifier::removeCollaborationUse(collaborationUse);
}

void QUmlActivity::addGeneralization(UmlGeneralization *generalization)
{
    UmlClassifier::addGeneralization(generalization);
}

void QUmlActivity::removeGeneralization(UmlGeneralization *generalization)
{
    UmlClassifier::removeGeneralization(generalization);
}

void QUmlActivity::setFinalSpecialization(bool isFinalSpecialization)
{
    UmlClassifier::setFinalSpecialization(isFinalSpecialization);
}

void QUmlActivity::setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature)
{
    UmlClassifier::setOwnedTemplateSignature(ownedTemplateSignature);
}

void QUmlActivity::addOwnedUseCase(UmlUseCase *ownedUseCase)
{
    UmlClassifier::addOwnedUseCase(ownedUseCase);
}

void QUmlActivity::removeOwnedUseCase(UmlUseCase *ownedUseCase)
{
    UmlClassifier::removeOwnedUseCase(ownedUseCase);
}

void QUmlActivity::addPowertypeExtent(UmlGeneralizationSet *powertypeExtent)
{
    UmlClassifier::addPowertypeExtent(powertypeExtent);
}

void QUmlActivity::removePowertypeExtent(UmlGeneralizationSet *powertypeExtent)
{
    UmlClassifier::removePowertypeExtent(powertypeExtent);
}

void QUmlActivity::addRedefinedClassifier(UmlClassifier *redefinedClassifier)
{
    UmlClassifier::addRedefinedClassifier(redefinedClassifier);
}

void QUmlActivity::removeRedefinedClassifier(UmlClassifier *redefinedClassifier)
{
    UmlClassifier::removeRedefinedClassifier(redefinedClassifier);
}

void QUmlActivity::setRepresentation(QUmlCollaborationUse *representation)
{
    UmlClassifier::setRepresentation(representation);
}

void QUmlActivity::addSubstitution(UmlSubstitution *substitution)
{
    UmlClassifier::addSubstitution(substitution);
}

void QUmlActivity::removeSubstitution(UmlSubstitution *substitution)
{
    UmlClassifier::removeSubstitution(substitution);
}

void QUmlActivity::setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter)
{
    UmlClassifier::setTemplateParameter(templateParameter);
}

void QUmlActivity::addUseCase(UmlUseCase *useCase)
{
    UmlClassifier::addUseCase(useCase);
}

void QUmlActivity::removeUseCase(UmlUseCase *useCase)
{
    UmlClassifier::removeUseCase(useCase);
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlActivity::addOwnedConnector(UmlConnector *ownedConnector)
{
    UmlStructuredClassifier::addOwnedConnector(ownedConnector);
}

void QUmlActivity::removeOwnedConnector(UmlConnector *ownedConnector)
{
    UmlStructuredClassifier::removeOwnedConnector(ownedConnector);
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlActivity::setClassifierBehavior(QUmlBehavior *classifierBehavior)
{
    UmlBehavioredClassifier::setClassifierBehavior(classifierBehavior);
}

void QUmlActivity::addInterfaceRealization(UmlInterfaceRealization *interfaceRealization)
{
    UmlBehavioredClassifier::addInterfaceRealization(interfaceRealization);
}

void QUmlActivity::removeInterfaceRealization(UmlInterfaceRealization *interfaceRealization)
{
    UmlBehavioredClassifier::removeInterfaceRealization(interfaceRealization);
}

void QUmlActivity::addOwnedBehavior(UmlBehavior *ownedBehavior)
{
    UmlBehavioredClassifier::addOwnedBehavior(ownedBehavior);
}

void QUmlActivity::removeOwnedBehavior(UmlBehavior *ownedBehavior)
{
    UmlBehavioredClassifier::removeOwnedBehavior(ownedBehavior);
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlActivity::setAbstract(bool isAbstract)
{
    UmlClass::setAbstract(isAbstract);
}

void QUmlActivity::setActive(bool isActive)
{
    UmlClass::setActive(isActive);
}

void QUmlActivity::addNestedClassifier(UmlClassifier *nestedClassifier)
{
    UmlClass::addNestedClassifier(nestedClassifier);
}

void QUmlActivity::removeNestedClassifier(UmlClassifier *nestedClassifier)
{
    UmlClass::removeNestedClassifier(nestedClassifier);
}

void QUmlActivity::addOwnedAttribute(UmlProperty *ownedAttribute)
{
    UmlClass::addOwnedAttribute(ownedAttribute);
}

void QUmlActivity::removeOwnedAttribute(UmlProperty *ownedAttribute)
{
    UmlClass::removeOwnedAttribute(ownedAttribute);
}

void QUmlActivity::addOwnedOperation(UmlOperation *ownedOperation)
{
    UmlClass::addOwnedOperation(ownedOperation);
}

void QUmlActivity::removeOwnedOperation(UmlOperation *ownedOperation)
{
    UmlClass::removeOwnedOperation(ownedOperation);
}

void QUmlActivity::addOwnedReception(UmlReception *ownedReception)
{
    UmlClass::addOwnedReception(ownedReception);
}

void QUmlActivity::removeOwnedReception(UmlReception *ownedReception)
{
    UmlClass::removeOwnedReception(ownedReception);
}

void QUmlActivity::addSuperClass(UmlClass *superClass)
{
    UmlClass::addSuperClass(superClass);
}

void QUmlActivity::removeSuperClass(UmlClass *superClass)
{
    UmlClass::removeSuperClass(superClass);
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlActivity::setReentrant(bool isReentrant)
{
    UmlBehavior::setReentrant(isReentrant);
}

void QUmlActivity::addOwnedParameter(UmlParameter *ownedParameter)
{
    UmlBehavior::addOwnedParameter(ownedParameter);
}

void QUmlActivity::removeOwnedParameter(UmlParameter *ownedParameter)
{
    UmlBehavior::removeOwnedParameter(ownedParameter);
}

void QUmlActivity::addOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    UmlBehavior::addOwnedParameterSet(ownedParameterSet);
}

void QUmlActivity::removeOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    UmlBehavior::removeOwnedParameterSet(ownedParameterSet);
}

void QUmlActivity::addPostcondition(UmlConstraint *postcondition)
{
    UmlBehavior::addPostcondition(postcondition);
}

void QUmlActivity::removePostcondition(UmlConstraint *postcondition)
{
    UmlBehavior::removePostcondition(postcondition);
}

void QUmlActivity::addPrecondition(UmlConstraint *precondition)
{
    UmlBehavior::addPrecondition(precondition);
}

void QUmlActivity::removePrecondition(UmlConstraint *precondition)
{
    UmlBehavior::removePrecondition(precondition);
}

void QUmlActivity::addRedefinedBehavior(UmlBehavior *redefinedBehavior)
{
    UmlBehavior::addRedefinedBehavior(redefinedBehavior);
}

void QUmlActivity::removeRedefinedBehavior(UmlBehavior *redefinedBehavior)
{
    UmlBehavior::removeRedefinedBehavior(redefinedBehavior);
}

void QUmlActivity::setSpecification(QUmlBehavioralFeature *specification)
{
    UmlBehavior::setSpecification(specification);
}

// SLOTS FOR OWNED ATTRIBUTES [Activity]

void QUmlActivity::addEdge(UmlActivityEdge *edge)
{
    UmlActivity::addEdge(edge);
}

void QUmlActivity::removeEdge(UmlActivityEdge *edge)
{
    UmlActivity::removeEdge(edge);
}

void QUmlActivity::addGroup(UmlActivityGroup *group)
{
    UmlActivity::addGroup(group);
}

void QUmlActivity::removeGroup(UmlActivityGroup *group)
{
    UmlActivity::removeGroup(group);
}

void QUmlActivity::setReadOnly(bool isReadOnly)
{
    UmlActivity::setReadOnly(isReadOnly);
}

void QUmlActivity::setSingleExecution(bool isSingleExecution)
{
    UmlActivity::setSingleExecution(isSingleExecution);
}

void QUmlActivity::addNode(UmlActivityNode *node)
{
    UmlActivity::addNode(node);
}

void QUmlActivity::removeNode(UmlActivityNode *node)
{
    UmlActivity::removeNode(node);
}

void QUmlActivity::addPartition(UmlActivityPartition *partition)
{
    UmlActivity::addPartition(partition);
}

void QUmlActivity::removePartition(UmlActivityPartition *partition)
{
    UmlActivity::removePartition(partition);
}

void QUmlActivity::addStructuredNode(UmlStructuredActivityNode *structuredNode)
{
    UmlActivity::addStructuredNode(structuredNode);
}

void QUmlActivity::removeStructuredNode(UmlStructuredActivityNode *structuredNode)
{
    UmlActivity::removeStructuredNode(structuredNode);
}

void QUmlActivity::addVariable(UmlVariable *variable)
{
    UmlActivity::addVariable(variable);
}

void QUmlActivity::removeVariable(UmlVariable *variable)
{
    UmlActivity::removeVariable(variable);
}

QT_END_NAMESPACE

