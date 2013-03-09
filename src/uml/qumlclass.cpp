/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
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

#include "qumlclass.h"
#include "qumlclass_p.h"

#include "qumlextension_p.h"

#include <QtUml/QUmlReception>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlProperty>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlClassPrivate::QUmlClassPrivate() :
    isAbstract(false),
    isActive(false)
{
}

QUmlClassPrivate::~QUmlClassPrivate()
{
}

void QUmlClassPrivate::addExtension(QUmlExtension *extension)
{
    // This is a read-only derived association end

    qWarning("QUmlClass::addExtension: to be implemented (this is a derived associationend)");
    Q_UNUSED(extension);

    if (false /* <derivedinclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QUmlClass);
        (qwrappedobject_cast<QUmlExtensionPrivate *>(extension->d_func()))->setMetaclass(q);
    }
}

void QUmlClassPrivate::removeExtension(QUmlExtension *extension)
{
    // This is a read-only derived association end

    qWarning("QUmlClass::removeExtension: to be implemented (this is a derived associationend)");
    Q_UNUSED(extension);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        (qwrappedobject_cast<QUmlExtensionPrivate *>(extension->d_func()))->setMetaclass(0);
    }
}

/*!
    \class QUmlClass

    \inmodule QtUml

    \brief A class may be designated as active (i.e., each of its instances having its own thread of control) or passive (i.e., each of its instances executing within the context of some other object). A class may also specify which signals the instances of this class handle.A class describes a set of objects that share the same specifications of features, constraints, and semantics.A class has the capability to have an internal structure and ports.Class has derived association that indicates how it may be extended through one or more stereotypes. Stereotype is the only kind of metaclass that cannot be extended by stereotypes.
 */

QUmlClass::QUmlClass(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlClassPrivate, wrapper, parent),
    _wrappedUmlEncapsulatedClassifier(new QUmlEncapsulatedClassifier(this)),
    _wrappedUmlBehavioredClassifier(new QUmlBehavioredClassifier(this))
{
    setPropertyData();
}

QUmlClass::QUmlClass(QUmlClassPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlEncapsulatedClassifier(new QUmlEncapsulatedClassifier(this)),
    _wrappedUmlBehavioredClassifier(new QUmlBehavioredClassifier(this))
{
    setPropertyData();
}

QUmlClass::~QUmlClass()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlClass::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlClass::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlClass::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlClass::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlClass::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlClass::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlClass::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlClass::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlClass::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlClass::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlClass::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlClass::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlClass::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlClass::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlClass::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlClass::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlClass::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlClass::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlClass::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlClass::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlClass::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlClass::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlClass::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlClass::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlClass::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlClass::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlClass::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlClass::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlClass::visibility() const
{
    return (qwrappedobject_cast<const QUmlPackageableElement *>(this))->visibility();
}

void QUmlClass::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlPackageableElement *>(this))->setVisibility(visibility);
}

void QUmlClass::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
    Q_D(QUmlClass);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QUmlPackage *QUmlClass::package() const
{
    return (qwrappedobject_cast<const QUmlType *>(this))->package();
}

void QUmlClass::setPackage(QUmlPackage *package)
{
    (qwrappedobject_cast<QUmlType *>(this))->setPackage(package);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlClass::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlClass::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlClass::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlClass);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlClass::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlClass::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional bindings from this element to templates.
 */
QSet<QUmlTemplateBinding *> QUmlClass::templateBindings() const
{
    return (qwrappedobject_cast<const QUmlTemplateableElement *>(this))->templateBindings();
}

void QUmlClass::addTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QUmlClass::removeTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlClassifier
// ---------------------------------------------------------------

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QUmlClass::isFinalSpecialization() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->isFinalSpecialization();
}

void QUmlClass::setFinalSpecialization(bool isFinalSpecialization)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setFinalSpecialization(isFinalSpecialization);
}

void QUmlClass::unsetFinalSpecialization()
{
    setFinalSpecialization(false);
    Q_D(QUmlClass);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isFinalSpecialization"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlClassifier
// ---------------------------------------------------------------

/*!
    References the use cases owned by this classifier.
 */
QSet<QUmlUseCase *> QUmlClass::ownedUseCases() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->ownedUseCases();
}

void QUmlClass::addOwnedUseCase(QUmlUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addOwnedUseCase(ownedUseCase);
}

void QUmlClass::removeOwnedUseCase(QUmlUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeOwnedUseCase(ownedUseCase);
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
QSet<QUmlGeneralizationSet *> QUmlClass::powertypeExtents() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->powertypeExtents();
}

void QUmlClass::addPowertypeExtent(QUmlGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addPowertypeExtent(powertypeExtent);
}

void QUmlClass::removePowertypeExtent(QUmlGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removePowertypeExtent(powertypeExtent);
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
QSet<QUmlUseCase *> QUmlClass::useCases() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->useCases();
}

void QUmlClass::addUseCase(QUmlUseCase *useCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addUseCase(useCase);
}

void QUmlClass::removeUseCase(QUmlUseCase *useCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeUseCase(useCase);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlClassifierTemplateParameter *QUmlClass::templateParameter() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->templateParameter();
}

void QUmlClass::setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setTemplateParameter(templateParameter);
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QSet<QUmlClassifier *> QUmlClass::redefinedClassifiers() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->redefinedClassifiers();
}

void QUmlClass::addRedefinedClassifier(QUmlClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addRedefinedClassifier(redefinedClassifier);
}

void QUmlClass::removeRedefinedClassifier(QUmlClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeRedefinedClassifier(redefinedClassifier);
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlRedefinableTemplateSignature *QUmlClass::ownedTemplateSignature() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->ownedTemplateSignature();
}

void QUmlClass::setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setOwnedTemplateSignature(ownedTemplateSignature);
}

/*!
    References the collaboration uses owned by the classifier.
 */
QSet<QUmlCollaborationUse *> QUmlClass::collaborationUses() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->collaborationUses();
}

void QUmlClass::addCollaborationUse(QUmlCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addCollaborationUse(collaborationUse);
}

void QUmlClass::removeCollaborationUse(QUmlCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeCollaborationUse(collaborationUse);
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
QSet<QUmlProperty *> QUmlClass::attributes() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->attributes();
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
QSet<QUmlFeature *> QUmlClass::features() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->features();
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QUmlCollaborationUse *QUmlClass::representation() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->representation();
}

void QUmlClass::setRepresentation(QUmlCollaborationUse *representation)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setRepresentation(representation);
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QSet<QUmlGeneralization *> QUmlClass::generalizations() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->generalizations();
}

void QUmlClass::addGeneralization(QUmlGeneralization *generalization)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addGeneralization(generalization);
}

void QUmlClass::removeGeneralization(QUmlGeneralization *generalization)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeGeneralization(generalization);
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
QSet<QUmlNamedElement *> QUmlClass::inheritedMembers() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->inheritedMembers();
}

/*!
    References the substitutions that are owned by this Classifier.
 */
QSet<QUmlSubstitution *> QUmlClass::substitutions() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->substitutions();
}

void QUmlClass::addSubstitution(QUmlSubstitution *substitution)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addSubstitution(substitution);
}

void QUmlClass::removeSubstitution(QUmlSubstitution *substitution)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeSubstitution(substitution);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlStructuredClassifier
// ---------------------------------------------------------------

/*!
    References the roles that instances may play in this classifier.
 */
QSet<QUmlConnectableElement *> QUmlClass::roles() const
{
    return (qwrappedobject_cast<const QUmlStructuredClassifier *>(this))->roles();
}

/*!
    References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true.
 */
QSet<QUmlProperty *> QUmlClass::parts() const
{
    return (qwrappedobject_cast<const QUmlStructuredClassifier *>(this))->parts();
}

/*!
    References the connectors owned by the classifier.
 */
QSet<QUmlConnector *> QUmlClass::ownedConnectors() const
{
    return (qwrappedobject_cast<const QUmlStructuredClassifier *>(this))->ownedConnectors();
}

void QUmlClass::addOwnedConnector(QUmlConnector *ownedConnector)
{
    (qwrappedobject_cast<QUmlStructuredClassifier *>(this))->addOwnedConnector(ownedConnector);
}

void QUmlClass::removeOwnedConnector(QUmlConnector *ownedConnector)
{
    (qwrappedobject_cast<QUmlStructuredClassifier *>(this))->removeOwnedConnector(ownedConnector);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlEncapsulatedClassifier
// ---------------------------------------------------------------

/*!
    References a set of ports that an encapsulated classifier owns.
 */
QSet<QUmlPort *> QUmlClass::ownedPorts() const
{
    return (qwrappedobject_cast<const QUmlEncapsulatedClassifier *>(this))->ownedPorts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlBehavioredClassifier
// ---------------------------------------------------------------

/*!
    References behavior specifications owned by a classifier.
 */
QSet<QUmlBehavior *> QUmlClass::ownedBehaviors() const
{
    return (qwrappedobject_cast<const QUmlBehavioredClassifier *>(this))->ownedBehaviors();
}

void QUmlClass::addOwnedBehavior(QUmlBehavior *ownedBehavior)
{
    (qwrappedobject_cast<QUmlBehavioredClassifier *>(this))->addOwnedBehavior(ownedBehavior);
}

void QUmlClass::removeOwnedBehavior(QUmlBehavior *ownedBehavior)
{
    (qwrappedobject_cast<QUmlBehavioredClassifier *>(this))->removeOwnedBehavior(ownedBehavior);
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
QSet<QUmlInterfaceRealization *> QUmlClass::interfaceRealizations() const
{
    return (qwrappedobject_cast<const QUmlBehavioredClassifier *>(this))->interfaceRealizations();
}

void QUmlClass::addInterfaceRealization(QUmlInterfaceRealization *interfaceRealization)
{
    (qwrappedobject_cast<QUmlBehavioredClassifier *>(this))->addInterfaceRealization(interfaceRealization);
}

void QUmlClass::removeInterfaceRealization(QUmlInterfaceRealization *interfaceRealization)
{
    (qwrappedobject_cast<QUmlBehavioredClassifier *>(this))->removeInterfaceRealization(interfaceRealization);
}

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
QUmlBehavior *QUmlClass::classifierBehavior() const
{
    return (qwrappedobject_cast<const QUmlBehavioredClassifier *>(this))->classifierBehavior();
}

void QUmlClass::setClassifierBehavior(QUmlBehavior *classifierBehavior)
{
    (qwrappedobject_cast<QUmlBehavioredClassifier *>(this))->setClassifierBehavior(classifierBehavior);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlClass
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract.
 */
bool QUmlClass::isAbstract() const
{
    // This is a read-write attribute

    Q_D(const QUmlClass);
    return d->isAbstract;
}

void QUmlClass::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    Q_D(QUmlClass);
    if (d->isAbstract != isAbstract) {
        d->isAbstract = isAbstract;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlClassifier *>(this))->setAbstract(isAbstract);
    }
    d->modifiedResettableProperties << QString::fromLatin1("isAbstract");
}

void QUmlClass::unsetAbstract()
{
    setAbstract(false);
    Q_D(QUmlClass);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

/*!
    Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class.
 */
bool QUmlClass::isActive() const
{
    // This is a read-write attribute

    Q_D(const QUmlClass);
    return d->isActive;
}

void QUmlClass::setActive(bool isActive)
{
    // This is a read-write attribute

    Q_D(QUmlClass);
    if (d->isActive != isActive) {
        d->isActive = isActive;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isActive");
}

void QUmlClass::unsetActive()
{
    setActive(false);
    Q_D(QUmlClass);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isActive"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlClass
// ---------------------------------------------------------------

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
QList<QUmlClassifier *> QUmlClass::nestedClassifiers() const
{
    // This is a read-write association end

    Q_D(const QUmlClass);
    return d->nestedClassifiers;
}

void QUmlClass::addNestedClassifier(QUmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    Q_D(QUmlClass);
    if (!d->nestedClassifiers.contains(nestedClassifier)) {
        d->nestedClassifiers.append(nestedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(nestedClassifier));
    }
}

void QUmlClass::removeNestedClassifier(QUmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    Q_D(QUmlClass);
    if (d->nestedClassifiers.contains(nestedClassifier)) {
        d->nestedClassifiers.removeAll(nestedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(nestedClassifier));
    }
}

/*!
    Receptions that objects of this class are willing to accept.
 */
QSet<QUmlReception *> QUmlClass::ownedReceptions() const
{
    // This is a read-write association end

    Q_D(const QUmlClass);
    return d->ownedReceptions;
}

void QUmlClass::addOwnedReception(QUmlReception *ownedReception)
{
    // This is a read-write association end

    Q_D(QUmlClass);
    if (!d->ownedReceptions.contains(ownedReception)) {
        d->ownedReceptions.insert(ownedReception);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QUmlFeature *>(ownedReception));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedReception));
    }
}

void QUmlClass::removeOwnedReception(QUmlReception *ownedReception)
{
    // This is a read-write association end

    Q_D(QUmlClass);
    if (d->ownedReceptions.contains(ownedReception)) {
        d->ownedReceptions.remove(ownedReception);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QUmlFeature *>(ownedReception));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedReception));
    }
}

/*!
    References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class.
 */
QSet<QUmlExtension *> QUmlClass::extensions() const
{
    // This is a read-only derived association end

    qWarning("QUmlClass::extensions: to be implemented (this is a derived associationend)");

    return QSet<QUmlExtension *>(); // change here to your derived return
}

/*!
    The operations owned by the class.
 */
QList<QUmlOperation *> QUmlClass::ownedOperations() const
{
    // This is a read-write association end

    Q_D(const QUmlClass);
    return d->ownedOperations;
}

void QUmlClass::addOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QUmlClass);
    if (!d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.append(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QUmlFeature *>(ownedOperation));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setClass_(this);
    }
}

void QUmlClass::removeOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QUmlClass);
    if (d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.removeAll(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QUmlFeature *>(ownedOperation));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setClass_(0);
    }
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
QList<QUmlProperty *> QUmlClass::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QUmlClass);
    return d->ownedAttributes;
}

void QUmlClass::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QUmlClass);
    if (!d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addAttribute(qwrappedobject_cast<QUmlProperty *>(ownedAttribute));

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlStructuredClassifier *>(this))->addOwnedAttribute(qwrappedobject_cast<QUmlProperty *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setClass_(this);
    }
}

void QUmlClass::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QUmlClass);
    if (d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeAttribute(qwrappedobject_cast<QUmlProperty *>(ownedAttribute));

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlStructuredClassifier *>(this))->removeOwnedAttribute(qwrappedobject_cast<QUmlProperty *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setClass_(0);
    }
}

/*!
    This gives the superclasses of a class.
 */
QSet<QUmlClass *> QUmlClass::superClasses() const
{
    // This is a read-write derived association end

    qWarning("QUmlClass::superClasses: to be implemented (this is a derived associationend)");

    return QSet<QUmlClass *>(); // change here to your derived return
}

void QUmlClass::addSuperClass(QUmlClass *superClass)
{
    // This is a read-write derived association end

    qWarning("QUmlClass::addSuperClass: to be implemented (this is a derived associationend)");
    Q_UNUSED(superClass);

    if (false) { // change to your derived inclusion criteria
        // change to your derived code

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlClassifier *>(this))->addGeneral(qwrappedobject_cast<QUmlClassifier *>(superClass));
    }
}

void QUmlClass::removeSuperClass(QUmlClass *superClass)
{
    // This is a read-write derived association end

    qWarning("QUmlClass::removeSuperClass: to be implemented (this is a derived associationend)");
    Q_UNUSED(superClass);

    if (false) { // change to your derived exclusion criteria
        // change to your derived code

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlClassifier *>(this))->removeGeneral(qwrappedobject_cast<QUmlClassifier *>(superClass));
    }
}

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QUmlNamedElement *> QUmlClass::inherit(QSet<QUmlNamedElement *> inhs) const
{
    qWarning("QUmlClass::inherit: operation to be implemented");
    Q_UNUSED(inhs);

    return QSet<QUmlNamedElement *>(); // change here to your derived return
}

void QUmlClass::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlClassifier::isAbstract");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("isActive")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("isActive")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("isActive")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("isActive")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("isActive")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("isActive")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References all the Classifiers that are defined (nested) within the Class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Receptions that objects of this class are willing to accept.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlClassifier::features QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("extensions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("extensions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("extensions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("extensions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("extensions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("extensions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlExtension::metaclass");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The operations owned by the class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlClassifier::features QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlOperation::class");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The attributes (i.e. the properties) owned by the class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlStructuredClassifier::ownedAttributes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers QUmlClassifier::attributes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlProperty::class");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This gives the superclasses of a class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlClassifier::generals");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlclass.cpp"

