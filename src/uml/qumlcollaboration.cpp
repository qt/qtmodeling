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

#include "qumlcollaboration.h"
#include "qumlcollaboration_p.h"

#include <QtUml/QUmlConnectableElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlCollaborationPrivate::QUmlCollaborationPrivate()
{
}

QUmlCollaborationPrivate::~QUmlCollaborationPrivate()
{
}

/*!
    \class QUmlCollaboration

    \inmodule QtUml

    \brief A collaboration use represents the application of the pattern described by a collaboration to a specific situation involving specific classes or instances playing the roles of the collaboration.
 */

QUmlCollaboration::QUmlCollaboration(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlCollaborationPrivate, wrapper, parent),
    _wrappedUmlStructuredClassifier(new QUmlStructuredClassifier(this)),
    _wrappedUmlBehavioredClassifier(new QUmlBehavioredClassifier(this))
{
    setPropertyData();
}

QUmlCollaboration::QUmlCollaboration(QUmlCollaborationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlStructuredClassifier(new QUmlStructuredClassifier(this)),
    _wrappedUmlBehavioredClassifier(new QUmlBehavioredClassifier(this))
{
    setPropertyData();
}

QUmlCollaboration::~QUmlCollaboration()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlCollaboration::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlCollaboration::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlCollaboration::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlCollaboration::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlCollaboration::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlCollaboration::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlCollaboration::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlCollaboration::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlCollaboration::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlCollaboration::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlCollaboration::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlCollaboration::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlCollaboration::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlCollaboration::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlCollaboration::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlCollaboration::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlCollaboration::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlCollaboration::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlCollaboration::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlCollaboration::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlCollaboration::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlCollaboration::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlCollaboration::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlCollaboration::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlCollaboration::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlCollaboration::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlCollaboration::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlCollaboration::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlCollaboration::visibility() const
{
    return (qwrappedobject_cast<const QUmlPackageableElement *>(this))->visibility();
}

void QUmlCollaboration::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlPackageableElement *>(this))->setVisibility(visibility);
}

void QUmlCollaboration::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
    Q_D(QUmlCollaboration);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QUmlPackage *QUmlCollaboration::package() const
{
    return (qwrappedobject_cast<const QUmlType *>(this))->package();
}

void QUmlCollaboration::setPackage(QUmlPackage *package)
{
    (qwrappedobject_cast<QUmlType *>(this))->setPackage(package);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlCollaboration::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlCollaboration::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlCollaboration::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlCollaboration);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlCollaboration::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlCollaboration::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional bindings from this element to templates.
 */
QSet<QUmlTemplateBinding *> QUmlCollaboration::templateBindings() const
{
    return (qwrappedobject_cast<const QUmlTemplateableElement *>(this))->templateBindings();
}

void QUmlCollaboration::addTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QUmlCollaboration::removeTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlClassifier
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QUmlCollaboration::isAbstract() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->isAbstract();
}

void QUmlCollaboration::setAbstract(bool isAbstract)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setAbstract(isAbstract);
}

void QUmlCollaboration::unsetAbstract()
{
    setAbstract(false);
    Q_D(QUmlCollaboration);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QUmlCollaboration::isFinalSpecialization() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->isFinalSpecialization();
}

void QUmlCollaboration::setFinalSpecialization(bool isFinalSpecialization)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setFinalSpecialization(isFinalSpecialization);
}

void QUmlCollaboration::unsetFinalSpecialization()
{
    setFinalSpecialization(false);
    Q_D(QUmlCollaboration);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isFinalSpecialization"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlClassifier
// ---------------------------------------------------------------

/*!
    References the use cases owned by this classifier.
 */
QSet<QUmlUseCase *> QUmlCollaboration::ownedUseCases() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->ownedUseCases();
}

void QUmlCollaboration::addOwnedUseCase(QUmlUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addOwnedUseCase(ownedUseCase);
}

void QUmlCollaboration::removeOwnedUseCase(QUmlUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeOwnedUseCase(ownedUseCase);
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
QSet<QUmlGeneralizationSet *> QUmlCollaboration::powertypeExtents() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->powertypeExtents();
}

void QUmlCollaboration::addPowertypeExtent(QUmlGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addPowertypeExtent(powertypeExtent);
}

void QUmlCollaboration::removePowertypeExtent(QUmlGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removePowertypeExtent(powertypeExtent);
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
QSet<QUmlUseCase *> QUmlCollaboration::useCases() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->useCases();
}

void QUmlCollaboration::addUseCase(QUmlUseCase *useCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addUseCase(useCase);
}

void QUmlCollaboration::removeUseCase(QUmlUseCase *useCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeUseCase(useCase);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlClassifierTemplateParameter *QUmlCollaboration::templateParameter() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->templateParameter();
}

void QUmlCollaboration::setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setTemplateParameter(templateParameter);
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QSet<QUmlClassifier *> QUmlCollaboration::redefinedClassifiers() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->redefinedClassifiers();
}

void QUmlCollaboration::addRedefinedClassifier(QUmlClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addRedefinedClassifier(redefinedClassifier);
}

void QUmlCollaboration::removeRedefinedClassifier(QUmlClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeRedefinedClassifier(redefinedClassifier);
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlRedefinableTemplateSignature *QUmlCollaboration::ownedTemplateSignature() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->ownedTemplateSignature();
}

void QUmlCollaboration::setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setOwnedTemplateSignature(ownedTemplateSignature);
}

/*!
    References the collaboration uses owned by the classifier.
 */
QSet<QUmlCollaborationUse *> QUmlCollaboration::collaborationUses() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->collaborationUses();
}

void QUmlCollaboration::addCollaborationUse(QUmlCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addCollaborationUse(collaborationUse);
}

void QUmlCollaboration::removeCollaborationUse(QUmlCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeCollaborationUse(collaborationUse);
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
QSet<QUmlProperty *> QUmlCollaboration::attributes() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->attributes();
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
QSet<QUmlFeature *> QUmlCollaboration::features() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->features();
}

/*!
    Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.
 */
QSet<QUmlClassifier *> QUmlCollaboration::generals() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->generals();
}

void QUmlCollaboration::addGeneral(QUmlClassifier *general)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addGeneral(general);
}

void QUmlCollaboration::removeGeneral(QUmlClassifier *general)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeGeneral(general);
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QUmlCollaborationUse *QUmlCollaboration::representation() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->representation();
}

void QUmlCollaboration::setRepresentation(QUmlCollaborationUse *representation)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setRepresentation(representation);
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QSet<QUmlGeneralization *> QUmlCollaboration::generalizations() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->generalizations();
}

void QUmlCollaboration::addGeneralization(QUmlGeneralization *generalization)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addGeneralization(generalization);
}

void QUmlCollaboration::removeGeneralization(QUmlGeneralization *generalization)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeGeneralization(generalization);
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
QSet<QUmlNamedElement *> QUmlCollaboration::inheritedMembers() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->inheritedMembers();
}

/*!
    References the substitutions that are owned by this Classifier.
 */
QSet<QUmlSubstitution *> QUmlCollaboration::substitutions() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->substitutions();
}

void QUmlCollaboration::addSubstitution(QUmlSubstitution *substitution)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addSubstitution(substitution);
}

void QUmlCollaboration::removeSubstitution(QUmlSubstitution *substitution)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeSubstitution(substitution);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlStructuredClassifier
// ---------------------------------------------------------------

/*!
    References the roles that instances may play in this classifier.
 */
QSet<QUmlConnectableElement *> QUmlCollaboration::roles() const
{
    return (qwrappedobject_cast<const QUmlStructuredClassifier *>(this))->roles();
}

/*!
    References the properties owned by the classifier.
 */
QList<QUmlProperty *> QUmlCollaboration::ownedAttributes() const
{
    return (qwrappedobject_cast<const QUmlStructuredClassifier *>(this))->ownedAttributes();
}

void QUmlCollaboration::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    (qwrappedobject_cast<QUmlStructuredClassifier *>(this))->addOwnedAttribute(ownedAttribute);
}

void QUmlCollaboration::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    (qwrappedobject_cast<QUmlStructuredClassifier *>(this))->removeOwnedAttribute(ownedAttribute);
}

/*!
    References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true.
 */
QSet<QUmlProperty *> QUmlCollaboration::parts() const
{
    return (qwrappedobject_cast<const QUmlStructuredClassifier *>(this))->parts();
}

/*!
    References the connectors owned by the classifier.
 */
QSet<QUmlConnector *> QUmlCollaboration::ownedConnectors() const
{
    return (qwrappedobject_cast<const QUmlStructuredClassifier *>(this))->ownedConnectors();
}

void QUmlCollaboration::addOwnedConnector(QUmlConnector *ownedConnector)
{
    (qwrappedobject_cast<QUmlStructuredClassifier *>(this))->addOwnedConnector(ownedConnector);
}

void QUmlCollaboration::removeOwnedConnector(QUmlConnector *ownedConnector)
{
    (qwrappedobject_cast<QUmlStructuredClassifier *>(this))->removeOwnedConnector(ownedConnector);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlBehavioredClassifier
// ---------------------------------------------------------------

/*!
    References behavior specifications owned by a classifier.
 */
QSet<QUmlBehavior *> QUmlCollaboration::ownedBehaviors() const
{
    return (qwrappedobject_cast<const QUmlBehavioredClassifier *>(this))->ownedBehaviors();
}

void QUmlCollaboration::addOwnedBehavior(QUmlBehavior *ownedBehavior)
{
    (qwrappedobject_cast<QUmlBehavioredClassifier *>(this))->addOwnedBehavior(ownedBehavior);
}

void QUmlCollaboration::removeOwnedBehavior(QUmlBehavior *ownedBehavior)
{
    (qwrappedobject_cast<QUmlBehavioredClassifier *>(this))->removeOwnedBehavior(ownedBehavior);
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
QSet<QUmlInterfaceRealization *> QUmlCollaboration::interfaceRealizations() const
{
    return (qwrappedobject_cast<const QUmlBehavioredClassifier *>(this))->interfaceRealizations();
}

void QUmlCollaboration::addInterfaceRealization(QUmlInterfaceRealization *interfaceRealization)
{
    (qwrappedobject_cast<QUmlBehavioredClassifier *>(this))->addInterfaceRealization(interfaceRealization);
}

void QUmlCollaboration::removeInterfaceRealization(QUmlInterfaceRealization *interfaceRealization)
{
    (qwrappedobject_cast<QUmlBehavioredClassifier *>(this))->removeInterfaceRealization(interfaceRealization);
}

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
QUmlBehavior *QUmlCollaboration::classifierBehavior() const
{
    return (qwrappedobject_cast<const QUmlBehavioredClassifier *>(this))->classifierBehavior();
}

void QUmlCollaboration::setClassifierBehavior(QUmlBehavior *classifierBehavior)
{
    (qwrappedobject_cast<QUmlBehavioredClassifier *>(this))->setClassifierBehavior(classifierBehavior);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlCollaboration
// ---------------------------------------------------------------

/*!
    References connectable elements (possibly owned by other classifiers) which represent roles that instances may play in this collaboration.
 */
QSet<QUmlConnectableElement *> QUmlCollaboration::collaborationRoles() const
{
    // This is a read-write association end

    Q_D(const QUmlCollaboration);
    return d->collaborationRoles;
}

void QUmlCollaboration::addCollaborationRole(QUmlConnectableElement *collaborationRole)
{
    // This is a read-write association end

    Q_D(QUmlCollaboration);
    if (!d->collaborationRoles.contains(collaborationRole)) {
        d->collaborationRoles.insert(collaborationRole);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlStructuredClassifierPrivate *>(d))->addRole(qwrappedobject_cast<QUmlConnectableElement *>(collaborationRole));
    }
}

void QUmlCollaboration::removeCollaborationRole(QUmlConnectableElement *collaborationRole)
{
    // This is a read-write association end

    Q_D(QUmlCollaboration);
    if (d->collaborationRoles.contains(collaborationRole)) {
        d->collaborationRoles.remove(collaborationRole);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlStructuredClassifierPrivate *>(d))->removeRole(qwrappedobject_cast<QUmlConnectableElement *>(collaborationRole));
    }
}

void QUmlCollaboration::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaboration")][QString::fromLatin1("collaborationRoles")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaboration")][QString::fromLatin1("collaborationRoles")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaboration")][QString::fromLatin1("collaborationRoles")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References connectable elements (possibly owned by other classifiers) which represent roles that instances may play in this collaboration.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaboration")][QString::fromLatin1("collaborationRoles")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaboration")][QString::fromLatin1("collaborationRoles")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlStructuredClassifier::roles");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaboration")][QString::fromLatin1("collaborationRoles")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlcollaboration.cpp"

