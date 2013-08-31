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
#include "qumlactor.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

/*!
    \class UmlActor

    \inmodule QtUml

    \brief An actor specifies a role played by a user or any other system that interacts with the subject.
 */

QUmlActor::QUmlActor(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlActor::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlActor::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlActor::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlActor::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlActor::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlActor::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlActor::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlActor::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QUmlElementImport *> QUmlActor::elementImport() const
{
    return *(reinterpret_cast<const QSet<QUmlElementImport *> *>(&_elementImport));
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QUmlPackageableElement *> QUmlActor::importedMember() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importedMember())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QUmlNamedElement *> QUmlActor::member() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_member));
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QUmlNamedElement *> QUmlActor::ownedMember() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_ownedMember));
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QUmlConstraint *> QUmlActor::ownedRule() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_ownedRule));
}

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QUmlPackageImport *> QUmlActor::packageImport() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageImport *> *>(&_packageImport));
}

// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlActor::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}
// OWNED ATTRIBUTES [PackageableElement]

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlActor::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [Type]

/*!
    Specifies the owning package of this classifier, if any.
 */
QUmlPackage *QUmlActor::package() const
{
    return reinterpret_cast<QUmlPackage *>(_package);
}

// OWNED ATTRIBUTES [RedefinableElement]

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlActor::isLeaf() const
{
    return _isLeaf;
}

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QUmlRedefinableElement *> QUmlActor::redefinedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableElement *> *>(&_redefinedElement));
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QUmlClassifier *> QUmlActor::redefinitionContext() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_redefinitionContext));
}

// OWNED ATTRIBUTES [TemplateableElement]

/*!
    The optional bindings from this element to templates.
 */
const QSet<QUmlTemplateBinding *> QUmlActor::templateBinding() const
{
    return *(reinterpret_cast<const QSet<QUmlTemplateBinding *> *>(&_templateBinding));
}

// OWNED ATTRIBUTES [Classifier]

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
const QSet<QUmlProperty *> QUmlActor::attribute() const
{
    return *(reinterpret_cast<const QSet<QUmlProperty *> *>(&_attribute));
}

/*!
    References the collaboration uses owned by the classifier.
 */
const QSet<QUmlCollaborationUse *> QUmlActor::collaborationUse() const
{
    return *(reinterpret_cast<const QSet<QUmlCollaborationUse *> *>(&_collaborationUse));
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
const QSet<QUmlFeature *> QUmlActor::feature() const
{
    return *(reinterpret_cast<const QSet<QUmlFeature *> *>(&_feature));
}

/*!
    Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.
 */
const QSet<QUmlClassifier *> QUmlActor::general() const
{
    QSet<QUmlClassifier *> r;
    foreach (UmlClassifier *element, UmlClassifier::general())
        r.insert(reinterpret_cast<QUmlClassifier *>(element));
    return r;
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
const QSet<QUmlGeneralization *> QUmlActor::generalization() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralization *> *>(&_generalization));
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
const QSet<QUmlNamedElement *> QUmlActor::inheritedMember() const
{
    QSet<QUmlNamedElement *> r;
    foreach (UmlNamedElement *element, UmlClassifier::inheritedMember())
        r.insert(reinterpret_cast<QUmlNamedElement *>(element));
    return r;
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QUmlActor::isAbstract() const
{
    return _isAbstract;
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QUmlActor::isFinalSpecialization() const
{
    return _isFinalSpecialization;
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlRedefinableTemplateSignature *QUmlActor::ownedTemplateSignature() const
{
    return reinterpret_cast<QUmlRedefinableTemplateSignature *>(_ownedTemplateSignature);
}

/*!
    References the use cases owned by this classifier.
 */
const QSet<QUmlUseCase *> QUmlActor::ownedUseCase() const
{
    return *(reinterpret_cast<const QSet<QUmlUseCase *> *>(&_ownedUseCase));
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
const QSet<QUmlGeneralizationSet *> QUmlActor::powertypeExtent() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralizationSet *> *>(&_powertypeExtent));
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
const QSet<QUmlClassifier *> QUmlActor::redefinedClassifier() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_redefinedClassifier));
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QUmlCollaborationUse *QUmlActor::representation() const
{
    return reinterpret_cast<QUmlCollaborationUse *>(_representation);
}

/*!
    References the substitutions that are owned by this Classifier.
 */
const QSet<QUmlSubstitution *> QUmlActor::substitution() const
{
    return *(reinterpret_cast<const QSet<QUmlSubstitution *> *>(&_substitution));
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlClassifierTemplateParameter *QUmlActor::templateParameter() const
{
    return reinterpret_cast<QUmlClassifierTemplateParameter *>(_templateParameter);
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
const QSet<QUmlUseCase *> QUmlActor::useCase() const
{
    return *(reinterpret_cast<const QSet<QUmlUseCase *> *>(&_useCase));
}

// OWNED ATTRIBUTES [BehavioredClassifier]

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
QUmlBehavior *QUmlActor::classifierBehavior() const
{
    return reinterpret_cast<QUmlBehavior *>(_classifierBehavior);
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
const QSet<QUmlInterfaceRealization *> QUmlActor::interfaceRealization() const
{
    return *(reinterpret_cast<const QSet<QUmlInterfaceRealization *> *>(&_interfaceRealization));
}

/*!
    References behavior specifications owned by a classifier.
 */
const QSet<QUmlBehavior *> QUmlActor::ownedBehavior() const
{
    return *(reinterpret_cast<const QSet<QUmlBehavior *> *>(&_ownedBehavior));
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlActor::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlActor::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlActor::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlActor::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlActor::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlActor::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [Namespace]

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QUmlPackageableElement *> QUmlActor::excludeCollisions(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::excludeCollisions(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlActor::getNamesOfMember(QUmlNamedElement *element) const
{
    return UmlNamespace::getNamesOfMember(element);
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlActor::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importMembers(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlActor::membersAreDistinguishable() const
{
    return UmlNamespace::membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlActor::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlParameterableElement::isCompatibleWith(p);
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlActor::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

/*!
    The query isConsistentWith() specifies, for any two RedefinableElements in a context in which redefinition is possible, whether redefinition would be logically consistent. By default, this is false; this operation must be overridden for subclasses of RedefinableElement to define the consistency conditions.
 */
bool QUmlActor::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlRedefinableElement::isConsistentWith(redefinee);
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
 */
bool QUmlActor::isRedefinitionContextValid(QUmlRedefinableElement *redefined) const
{
    return UmlRedefinableElement::isRedefinitionContextValid(redefined);
}

// OPERATIONS [TemplateableElement]

/*!
    The query parameterableElements() returns the set of elements that may be used as the parametered elements for a template parameter of this templateable element. By default, this set includes all the owned elements. Subclasses may override this operation if they choose to restrict the set of parameterable elements.
 */
QSet<QUmlParameterableElement *> QUmlActor::parameterableElements() const
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
QSet<QUmlFeature *> QUmlActor::allFeatures() const
{
    QSet<QUmlFeature *> r;
    foreach (UmlFeature *element, UmlClassifier::allFeatures())
        r.insert(reinterpret_cast<QUmlFeature *>(element));
    return r;
}

/*!
    The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 */
QSet<QUmlClassifier *> QUmlActor::allParents() const
{
    QSet<QUmlClassifier *> r;
    foreach (UmlClassifier *element, UmlClassifier::allParents())
        r.insert(reinterpret_cast<QUmlClassifier *>(element));
    return r;
}

/*!
    The query conformsTo() gives true for a classifier that defines a type that conforms to another. This is used, for example, in the specification of signature conformance for operations.
 */
bool QUmlActor::conformsTo(QUmlClassifier *other) const
{
    return UmlClassifier::conformsTo(other);
}

/*!
    The query hasVisibilityOf() determines whether a named element is visible in the classifier. By default all are visible. It is only called when the argument is something owned by a parent.
 */
bool QUmlActor::hasVisibilityOf(QUmlNamedElement *n) const
{
    return UmlClassifier::hasVisibilityOf(n);
}

/*!
    The inherit operation is overridden to exclude redefined properties.The query inherit() defines how to inherit a set of elements. Here the operation is defined to inherit them all. It is intended to be redefined in circumstances where inheritance is affected by redefinition.
 */
QSet<QUmlNamedElement *> QUmlActor::inherit(QSet<QUmlNamedElement *> inhs) const
{
    QSet<QUmlNamedElement *> r;
    foreach (UmlNamedElement *element, UmlClassifier::inherit(*(reinterpret_cast<QSet<UmlNamedElement *> *>(&inhs))))
        r.insert(reinterpret_cast<QUmlNamedElement *>(element));
    return r;
}

/*!
    The query inheritableMembers() gives all of the members of a classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
 */
QSet<QUmlNamedElement *> QUmlActor::inheritableMembers(QUmlClassifier *c) const
{
    QSet<QUmlNamedElement *> r;
    foreach (UmlNamedElement *element, UmlClassifier::inheritableMembers(c))
        r.insert(reinterpret_cast<QUmlNamedElement *>(element));
    return r;
}

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QUmlActor::isTemplate() const
{
    return UmlClassifier::isTemplate();
}

/*!
    The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
 */
bool QUmlActor::maySpecializeType(QUmlClassifier *c) const
{
    return UmlClassifier::maySpecializeType(c);
}

/*!
    The query parents() gives all of the immediate ancestors of a generalized Classifier.
 */
QSet<QUmlClassifier *> QUmlActor::parents() const
{
    QSet<QUmlClassifier *> r;
    foreach (UmlClassifier *element, UmlClassifier::parents())
        r.insert(reinterpret_cast<QUmlClassifier *>(element));
    return r;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActor::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlActor::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActor::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlActor::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlActor::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlActor::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlActor::addElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::addElementImport(elementImport);
}

void QUmlActor::removeElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::removeElementImport(elementImport);
}

void QUmlActor::addOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::addOwnedRule(ownedRule);
}

void QUmlActor::removeOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::removeOwnedRule(ownedRule);
}

void QUmlActor::addPackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::addPackageImport(packageImport);
}

void QUmlActor::removePackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::removePackageImport(packageImport);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlActor::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlActor::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlPackageableElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlActor::setPackage(QUmlPackage *package)
{
    UmlType::setPackage(package);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlActor::setLeaf(bool isLeaf)
{
    UmlRedefinableElement::setLeaf(isLeaf);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlActor::addTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::addTemplateBinding(templateBinding);
}

void QUmlActor::removeTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::removeTemplateBinding(templateBinding);
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlActor::addCollaborationUse(UmlCollaborationUse *collaborationUse)
{
    UmlClassifier::addCollaborationUse(collaborationUse);
}

void QUmlActor::removeCollaborationUse(UmlCollaborationUse *collaborationUse)
{
    UmlClassifier::removeCollaborationUse(collaborationUse);
}

void QUmlActor::addGeneral(UmlClassifier *general)
{
    UmlClassifier::addGeneral(general);
}

void QUmlActor::removeGeneral(UmlClassifier *general)
{
    UmlClassifier::removeGeneral(general);
}

void QUmlActor::addGeneralization(UmlGeneralization *generalization)
{
    UmlClassifier::addGeneralization(generalization);
}

void QUmlActor::removeGeneralization(UmlGeneralization *generalization)
{
    UmlClassifier::removeGeneralization(generalization);
}

void QUmlActor::setAbstract(bool isAbstract)
{
    UmlClassifier::setAbstract(isAbstract);
}

void QUmlActor::setFinalSpecialization(bool isFinalSpecialization)
{
    UmlClassifier::setFinalSpecialization(isFinalSpecialization);
}

void QUmlActor::setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature)
{
    UmlClassifier::setOwnedTemplateSignature(ownedTemplateSignature);
}

void QUmlActor::addOwnedUseCase(UmlUseCase *ownedUseCase)
{
    UmlClassifier::addOwnedUseCase(ownedUseCase);
}

void QUmlActor::removeOwnedUseCase(UmlUseCase *ownedUseCase)
{
    UmlClassifier::removeOwnedUseCase(ownedUseCase);
}

void QUmlActor::addPowertypeExtent(UmlGeneralizationSet *powertypeExtent)
{
    UmlClassifier::addPowertypeExtent(powertypeExtent);
}

void QUmlActor::removePowertypeExtent(UmlGeneralizationSet *powertypeExtent)
{
    UmlClassifier::removePowertypeExtent(powertypeExtent);
}

void QUmlActor::addRedefinedClassifier(UmlClassifier *redefinedClassifier)
{
    UmlClassifier::addRedefinedClassifier(redefinedClassifier);
}

void QUmlActor::removeRedefinedClassifier(UmlClassifier *redefinedClassifier)
{
    UmlClassifier::removeRedefinedClassifier(redefinedClassifier);
}

void QUmlActor::setRepresentation(QUmlCollaborationUse *representation)
{
    UmlClassifier::setRepresentation(representation);
}

void QUmlActor::addSubstitution(UmlSubstitution *substitution)
{
    UmlClassifier::addSubstitution(substitution);
}

void QUmlActor::removeSubstitution(UmlSubstitution *substitution)
{
    UmlClassifier::removeSubstitution(substitution);
}

void QUmlActor::setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter)
{
    UmlClassifier::setTemplateParameter(templateParameter);
}

void QUmlActor::addUseCase(UmlUseCase *useCase)
{
    UmlClassifier::addUseCase(useCase);
}

void QUmlActor::removeUseCase(UmlUseCase *useCase)
{
    UmlClassifier::removeUseCase(useCase);
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlActor::setClassifierBehavior(QUmlBehavior *classifierBehavior)
{
    UmlBehavioredClassifier::setClassifierBehavior(classifierBehavior);
}

void QUmlActor::addInterfaceRealization(UmlInterfaceRealization *interfaceRealization)
{
    UmlBehavioredClassifier::addInterfaceRealization(interfaceRealization);
}

void QUmlActor::removeInterfaceRealization(UmlInterfaceRealization *interfaceRealization)
{
    UmlBehavioredClassifier::removeInterfaceRealization(interfaceRealization);
}

void QUmlActor::addOwnedBehavior(UmlBehavior *ownedBehavior)
{
    UmlBehavioredClassifier::addOwnedBehavior(ownedBehavior);
}

void QUmlActor::removeOwnedBehavior(UmlBehavior *ownedBehavior)
{
    UmlBehavioredClassifier::removeOwnedBehavior(ownedBehavior);
}

QT_END_NAMESPACE

