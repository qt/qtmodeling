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

#include "qclass.h"
#include "qclass_p.h"

#include "qextension_p.h"

#include <QtUml/QReception>
#include <QtUml/QNamedElement>
#include <QtUml/QOperation>
#include <QtUml/QClassifier>
#include <QtUml/QExtension>
#include <QtUml/QProperty>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QClassPrivate::QClassPrivate() :
    isAbstract(false),
    isActive(false)
{
}

QClassPrivate::~QClassPrivate()
{
}

void QClassPrivate::addExtension(QExtension *extension)
{
    // This is a read-only derived association end

    qWarning("QClass::addExtension: to be implemented (this is a derived associationend)");
    Q_UNUSED(extension);

    if (false /* <derivedinclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QClass);
        (qwrappedobject_cast<QExtensionPrivate *>(extension->d_func()))->setMetaclass(q);
    }
}

void QClassPrivate::removeExtension(QExtension *extension)
{
    // This is a read-only derived association end

    qWarning("QClass::removeExtension: to be implemented (this is a derived associationend)");
    Q_UNUSED(extension);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        (qwrappedobject_cast<QExtensionPrivate *>(extension->d_func()))->setMetaclass(0);
    }
}

/*!
    \class QClass

    \inmodule QtUml

    \brief A class may be designated as active (i.e., each of its instances having its own thread of control) or passive (i.e., each of its instances executing within the context of some other object). A class may also specify which signals the instances of this class handle.A class describes a set of objects that share the same specifications of features, constraints, and semantics.A class has the capability to have an internal structure and ports.Class has derived association that indicates how it may be extended through one or more stereotypes. Stereotype is the only kind of metaclass that cannot be extended by stereotypes.
 */

QClass::QClass(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(*new QClassPrivate, parent, wrapper),
    _wrappedEncapsulatedClassifier(new QEncapsulatedClassifier(this, this)),
    _wrappedBehavioredClassifier(new QBehavioredClassifier(this, this))
{
    setPropertyData();
}

QClass::QClass(QClassPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(dd, parent, wrapper),
    _wrappedEncapsulatedClassifier(new QEncapsulatedClassifier(this, this)),
    _wrappedBehavioredClassifier(new QBehavioredClassifier(this, this))
{
    setPropertyData();
}

QClass::~QClass()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QClass::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QClass::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QClass::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QClass::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QClass::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QClass::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QClass::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QClass::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QClass::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QClass::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QClass::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QClass::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QClass::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QClass::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QPackageImport *> QClass::packageImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->packageImports();
}

void QClass::addPackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QClass::removePackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QNamedElement *> QClass::members() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QPackageableElement *> QClass::importedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QElementImport *> QClass::elementImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->elementImports();
}

void QClass::addElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QClass::removeElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QConstraint *> QClass::ownedRules() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedRules();
}

void QClass::addOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QClass::removeOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QNamedElement *> QClass::ownedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QClass::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QParameterableElement *>(this))->owningTemplateParameter();
}

void QClass::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QClass::visibility() const
{
    return (qwrappedobject_cast<const QPackageableElement *>(this))->visibility();
}

void QClass::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QPackageableElement *>(this))->setVisibility(visibility);
}

void QClass::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QPackage *QClass::package() const
{
    return (qwrappedobject_cast<const QType *>(this))->package();
}

void QClass::setPackage(QPackage *package)
{
    (qwrappedobject_cast<QType *>(this))->setPackage(package);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QClass::isLeaf() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QClass::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QClass::unsetLeaf()
{
    setLeaf(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QRedefinableElement *> QClass::redefinedElements() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QClassifier *> QClass::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional bindings from this element to templates.
 */
QSet<QTemplateBinding *> QClass::templateBindings() const
{
    return (qwrappedobject_cast<const QTemplateableElement *>(this))->templateBindings();
}

void QClass::addTemplateBinding(QTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QClass::removeTemplateBinding(QTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QClassifier
// ---------------------------------------------------------------

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QClass::isFinalSpecialization() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->isFinalSpecialization();
}

void QClass::setFinalSpecialization(bool isFinalSpecialization)
{
    (qwrappedobject_cast<QClassifier *>(this))->setFinalSpecialization(isFinalSpecialization);
}

void QClass::unsetFinalSpecialization()
{
    setFinalSpecialization(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QClassifier
// ---------------------------------------------------------------

/*!
    References the use cases owned by this classifier.
 */
QSet<QUseCase *> QClass::ownedUseCases() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->ownedUseCases();
}

void QClass::addOwnedUseCase(QUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QClassifier *>(this))->addOwnedUseCase(ownedUseCase);
}

void QClass::removeOwnedUseCase(QUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeOwnedUseCase(ownedUseCase);
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
QSet<QGeneralizationSet *> QClass::powertypeExtents() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->powertypeExtents();
}

void QClass::addPowertypeExtent(QGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QClassifier *>(this))->addPowertypeExtent(powertypeExtent);
}

void QClass::removePowertypeExtent(QGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QClassifier *>(this))->removePowertypeExtent(powertypeExtent);
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
QSet<QUseCase *> QClass::useCases() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->useCases();
}

void QClass::addUseCase(QUseCase *useCase)
{
    (qwrappedobject_cast<QClassifier *>(this))->addUseCase(useCase);
}

void QClass::removeUseCase(QUseCase *useCase)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeUseCase(useCase);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QClassifierTemplateParameter *QClass::templateParameter() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->templateParameter();
}

void QClass::setTemplateParameter(QClassifierTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QClassifier *>(this))->setTemplateParameter(templateParameter);
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QSet<QClassifier *> QClass::redefinedClassifiers() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->redefinedClassifiers();
}

void QClass::addRedefinedClassifier(QClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QClassifier *>(this))->addRedefinedClassifier(redefinedClassifier);
}

void QClass::removeRedefinedClassifier(QClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeRedefinedClassifier(redefinedClassifier);
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QRedefinableTemplateSignature *QClass::ownedTemplateSignature() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->ownedTemplateSignature();
}

void QClass::setOwnedTemplateSignature(QRedefinableTemplateSignature *ownedTemplateSignature)
{
    (qwrappedobject_cast<QClassifier *>(this))->setOwnedTemplateSignature(ownedTemplateSignature);
}

/*!
    References the collaboration uses owned by the classifier.
 */
QSet<QCollaborationUse *> QClass::collaborationUses() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->collaborationUses();
}

void QClass::addCollaborationUse(QCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QClassifier *>(this))->addCollaborationUse(collaborationUse);
}

void QClass::removeCollaborationUse(QCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeCollaborationUse(collaborationUse);
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
QSet<QProperty *> QClass::attributes() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->attributes();
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
QSet<QFeature *> QClass::features() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->features();
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QCollaborationUse *QClass::representation() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->representation();
}

void QClass::setRepresentation(QCollaborationUse *representation)
{
    (qwrappedobject_cast<QClassifier *>(this))->setRepresentation(representation);
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QSet<QGeneralization *> QClass::generalizations() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->generalizations();
}

void QClass::addGeneralization(QGeneralization *generalization)
{
    (qwrappedobject_cast<QClassifier *>(this))->addGeneralization(generalization);
}

void QClass::removeGeneralization(QGeneralization *generalization)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeGeneralization(generalization);
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
QSet<QNamedElement *> QClass::inheritedMembers() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->inheritedMembers();
}

/*!
    References the substitutions that are owned by this Classifier.
 */
QSet<QSubstitution *> QClass::substitutions() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->substitutions();
}

void QClass::addSubstitution(QSubstitution *substitution)
{
    (qwrappedobject_cast<QClassifier *>(this))->addSubstitution(substitution);
}

void QClass::removeSubstitution(QSubstitution *substitution)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeSubstitution(substitution);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QStructuredClassifier
// ---------------------------------------------------------------

/*!
    References the roles that instances may play in this classifier.
 */
QSet<QConnectableElement *> QClass::roles() const
{
    return (qwrappedobject_cast<const QStructuredClassifier *>(this))->roles();
}

/*!
    References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true.
 */
QSet<QProperty *> QClass::parts() const
{
    return (qwrappedobject_cast<const QStructuredClassifier *>(this))->parts();
}

/*!
    References the connectors owned by the classifier.
 */
QSet<QConnector *> QClass::ownedConnectors() const
{
    return (qwrappedobject_cast<const QStructuredClassifier *>(this))->ownedConnectors();
}

void QClass::addOwnedConnector(QConnector *ownedConnector)
{
    (qwrappedobject_cast<QStructuredClassifier *>(this))->addOwnedConnector(ownedConnector);
}

void QClass::removeOwnedConnector(QConnector *ownedConnector)
{
    (qwrappedobject_cast<QStructuredClassifier *>(this))->removeOwnedConnector(ownedConnector);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QEncapsulatedClassifier
// ---------------------------------------------------------------

/*!
    References a set of ports that an encapsulated classifier owns.
 */
QSet<QPort *> QClass::ownedPorts() const
{
    return (qwrappedobject_cast<const QEncapsulatedClassifier *>(this))->ownedPorts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QBehavioredClassifier
// ---------------------------------------------------------------

/*!
    References behavior specifications owned by a classifier.
 */
QSet<QBehavior *> QClass::ownedBehaviors() const
{
    return (qwrappedobject_cast<const QBehavioredClassifier *>(this))->ownedBehaviors();
}

void QClass::addOwnedBehavior(QBehavior *ownedBehavior)
{
    (qwrappedobject_cast<QBehavioredClassifier *>(this))->addOwnedBehavior(ownedBehavior);
}

void QClass::removeOwnedBehavior(QBehavior *ownedBehavior)
{
    (qwrappedobject_cast<QBehavioredClassifier *>(this))->removeOwnedBehavior(ownedBehavior);
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
QSet<QInterfaceRealization *> QClass::interfaceRealizations() const
{
    return (qwrappedobject_cast<const QBehavioredClassifier *>(this))->interfaceRealizations();
}

void QClass::addInterfaceRealization(QInterfaceRealization *interfaceRealization)
{
    (qwrappedobject_cast<QBehavioredClassifier *>(this))->addInterfaceRealization(interfaceRealization);
}

void QClass::removeInterfaceRealization(QInterfaceRealization *interfaceRealization)
{
    (qwrappedobject_cast<QBehavioredClassifier *>(this))->removeInterfaceRealization(interfaceRealization);
}

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
QBehavior *QClass::classifierBehavior() const
{
    return (qwrappedobject_cast<const QBehavioredClassifier *>(this))->classifierBehavior();
}

void QClass::setClassifierBehavior(QBehavior *classifierBehavior)
{
    (qwrappedobject_cast<QBehavioredClassifier *>(this))->setClassifierBehavior(classifierBehavior);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QClass
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract.
 */
bool QClass::isAbstract() const
{
    // This is a read-write attribute

    Q_D(const QClass);
    return d->isAbstract;
}

void QClass::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    Q_D(QClass);
    if (d->isAbstract != isAbstract) {
        d->isAbstract = isAbstract;
    }
}

void QClass::unsetAbstract()
{
    setAbstract(false);
}

/*!
    Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class.
 */
bool QClass::isActive() const
{
    // This is a read-write attribute

    Q_D(const QClass);
    return d->isActive;
}

void QClass::setActive(bool isActive)
{
    // This is a read-write attribute

    Q_D(QClass);
    if (d->isActive != isActive) {
        d->isActive = isActive;
    }
}

void QClass::unsetActive()
{
    setActive(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QClass
// ---------------------------------------------------------------

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
QList<QClassifier *> QClass::nestedClassifiers() const
{
    // This is a read-write association end

    Q_D(const QClass);
    return d->nestedClassifiers;
}

void QClass::addNestedClassifier(QClassifier *nestedClassifier)
{
    // This is a read-write association end

    Q_D(QClass);
    if (!d->nestedClassifiers.contains(nestedClassifier)) {
        d->nestedClassifiers.append(nestedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(nestedClassifier));
    }
}

void QClass::removeNestedClassifier(QClassifier *nestedClassifier)
{
    // This is a read-write association end

    Q_D(QClass);
    if (d->nestedClassifiers.contains(nestedClassifier)) {
        d->nestedClassifiers.removeAll(nestedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(nestedClassifier));
    }
}

/*!
    Receptions that objects of this class are willing to accept.
 */
QSet<QReception *> QClass::ownedReceptions() const
{
    // This is a read-write association end

    Q_D(const QClass);
    return d->ownedReceptions;
}

void QClass::addOwnedReception(QReception *ownedReception)
{
    // This is a read-write association end

    Q_D(QClass);
    if (!d->ownedReceptions.contains(ownedReception)) {
        d->ownedReceptions.insert(ownedReception);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QFeature *>(ownedReception));
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedReception));
    }
}

void QClass::removeOwnedReception(QReception *ownedReception)
{
    // This is a read-write association end

    Q_D(QClass);
    if (d->ownedReceptions.contains(ownedReception)) {
        d->ownedReceptions.remove(ownedReception);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QFeature *>(ownedReception));
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedReception));
    }
}

/*!
    References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class.
 */
QSet<QExtension *> QClass::extensions() const
{
    // This is a read-only derived association end

    qWarning("QClass::extensions: to be implemented (this is a derived associationend)");

    return QSet<QExtension *>(); // change here to your derived return
}

/*!
    The operations owned by the class.
 */
QList<QOperation *> QClass::ownedOperations() const
{
    // This is a read-write association end

    Q_D(const QClass);
    return d->ownedOperations;
}

void QClass::addOwnedOperation(QOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QClass);
    if (!d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.append(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QFeature *>(ownedOperation));
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setClass_(this);
    }
}

void QClass::removeOwnedOperation(QOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QClass);
    if (d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.removeAll(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QFeature *>(ownedOperation));
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setClass_(0);
    }
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
QList<QProperty *> QClass::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QClass);
    return d->ownedAttributes;
}

void QClass::addOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QClass);
    if (!d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QClassifierPrivate *>(d))->addAttribute(qwrappedobject_cast<QProperty *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setClass_(this);
    }
}

void QClass::removeOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QClass);
    if (d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QClassifierPrivate *>(d))->removeAttribute(qwrappedobject_cast<QProperty *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setClass_(0);
    }
}

/*!
    This gives the superclasses of a class.
 */
QSet<QClass *> QClass::superClasses() const
{
    // This is a read-write derived association end

    qWarning("QClass::superClasses: to be implemented (this is a derived associationend)");

    return QSet<QClass *>(); // change here to your derived return
}

void QClass::addSuperClass(QClass *superClass)
{
    // This is a read-write derived association end

    qWarning("QClass::addSuperClass: to be implemented (this is a derived associationend)");
    Q_UNUSED(superClass);

    if (false) { // change to your derived inclusion criteria
        // change to your derived code
    }
}

void QClass::removeSuperClass(QClass *superClass)
{
    // This is a read-write derived association end

    qWarning("QClass::removeSuperClass: to be implemented (this is a derived associationend)");
    Q_UNUSED(superClass);

    if (false) { // change to your derived exclusion criteria
        // change to your derived code
    }
}

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QNamedElement *> QClass::inherit(QSet<QNamedElement *> inhs) const
{
    qWarning("QClass::inherit: operation to be implemented");
    Q_UNUSED(inhs);

    return QSet<QNamedElement *>(); // change here to your derived return
}

void QClass::registerMetaTypes() const
{
    qRegisterMetaType<QReception *>("QReception *");
    qRegisterMetaType<QSet<QReception *>>("QSet<QReception *>");
    qRegisterMetaType<QList<QReception *>>("QList<QReception *>");

    qRegisterMetaType<QNamedElement *>("QNamedElement *");
    qRegisterMetaType<QSet<QNamedElement *>>("QSet<QNamedElement *>");
    qRegisterMetaType<QList<QNamedElement *>>("QList<QNamedElement *>");

    qRegisterMetaType<QOperation *>("QOperation *");
    qRegisterMetaType<QSet<QOperation *>>("QSet<QOperation *>");
    qRegisterMetaType<QList<QOperation *>>("QList<QOperation *>");

    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QClassifier *>");
    qRegisterMetaType<QList<QClassifier *>>("QList<QClassifier *>");

    qRegisterMetaType<QExtension *>("QExtension *");
    qRegisterMetaType<QSet<QExtension *>>("QSet<QExtension *>");
    qRegisterMetaType<QList<QExtension *>>("QList<QExtension *>");

    qRegisterMetaType<QProperty *>("QProperty *");
    qRegisterMetaType<QSet<QProperty *>>("QSet<QProperty *>");
    qRegisterMetaType<QList<QProperty *>>("QList<QProperty *>");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QClass::setPropertyData()
{

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("isActive")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("isActive")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("nestedClassifiers")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References all the Classifiers that are defined (nested) within the Class.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedReceptions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Receptions that objects of this class are willing to accept.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("extensions")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("extensions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The operations owned by the class.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The attributes (i.e. the properties) owned by the class.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClass")][QString::fromLatin1("superClasses")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This gives the superclasses of a class.");

    QWrappedObject::setPropertyData();
}

#include "moc_qclass.cpp"

QT_END_NAMESPACE_QTUML

