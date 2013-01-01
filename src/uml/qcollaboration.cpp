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

#include "qcollaboration.h"
#include "qcollaboration_p.h"

#include <QtUml/QConnectableElement>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QCollaborationPrivate::QCollaborationPrivate()
{
}

QCollaborationPrivate::~QCollaborationPrivate()
{
}

/*!
    \class QCollaboration

    \inmodule QtUml

    \brief A collaboration use represents the application of the pattern described by a collaboration to a specific situation involving specific classes or instances playing the roles of the collaboration.
 */

QCollaboration::QCollaboration(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(*new QCollaborationPrivate, parent, wrapper),
    _wrappedStructuredClassifier(new QStructuredClassifier(this, this)),
    _wrappedBehavioredClassifier(new QBehavioredClassifier(this, this))
{
    setPropertyData();
}

QCollaboration::QCollaboration(QCollaborationPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(dd, parent, wrapper),
    _wrappedStructuredClassifier(new QStructuredClassifier(this, this)),
    _wrappedBehavioredClassifier(new QBehavioredClassifier(this, this))
{
    setPropertyData();
}

QCollaboration::~QCollaboration()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QCollaboration::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QCollaboration::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QCollaboration::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QCollaboration::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QCollaboration::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QCollaboration::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QCollaboration::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QCollaboration::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QCollaboration::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QCollaboration::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QCollaboration::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QCollaboration::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QCollaboration::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QCollaboration::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QPackageImport *> QCollaboration::packageImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->packageImports();
}

void QCollaboration::addPackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QCollaboration::removePackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QNamedElement *> QCollaboration::members() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QPackageableElement *> QCollaboration::importedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QElementImport *> QCollaboration::elementImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->elementImports();
}

void QCollaboration::addElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QCollaboration::removeElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QConstraint *> QCollaboration::ownedRules() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedRules();
}

void QCollaboration::addOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QCollaboration::removeOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QNamedElement *> QCollaboration::ownedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QCollaboration::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QParameterableElement *>(this))->owningTemplateParameter();
}

void QCollaboration::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QCollaboration::visibility() const
{
    return (qwrappedobject_cast<const QPackageableElement *>(this))->visibility();
}

void QCollaboration::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QPackageableElement *>(this))->setVisibility(visibility);
}

void QCollaboration::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QPackage *QCollaboration::package() const
{
    return (qwrappedobject_cast<const QType *>(this))->package();
}

void QCollaboration::setPackage(QPackage *package)
{
    (qwrappedobject_cast<QType *>(this))->setPackage(package);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QCollaboration::isLeaf() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QCollaboration::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QCollaboration::unsetLeaf()
{
    setLeaf(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QRedefinableElement *> QCollaboration::redefinedElements() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QClassifier *> QCollaboration::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional bindings from this element to templates.
 */
QSet<QTemplateBinding *> QCollaboration::templateBindings() const
{
    return (qwrappedobject_cast<const QTemplateableElement *>(this))->templateBindings();
}

void QCollaboration::addTemplateBinding(QTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QCollaboration::removeTemplateBinding(QTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QClassifier
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QCollaboration::isAbstract() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->isAbstract();
}

void QCollaboration::setAbstract(bool isAbstract)
{
    (qwrappedobject_cast<QClassifier *>(this))->setAbstract(isAbstract);
}

void QCollaboration::unsetAbstract()
{
    setAbstract(false);
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QCollaboration::isFinalSpecialization() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->isFinalSpecialization();
}

void QCollaboration::setFinalSpecialization(bool isFinalSpecialization)
{
    (qwrappedobject_cast<QClassifier *>(this))->setFinalSpecialization(isFinalSpecialization);
}

void QCollaboration::unsetFinalSpecialization()
{
    setFinalSpecialization(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QClassifier
// ---------------------------------------------------------------

/*!
    References the use cases owned by this classifier.
 */
QSet<QUseCase *> QCollaboration::ownedUseCases() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->ownedUseCases();
}

void QCollaboration::addOwnedUseCase(QUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QClassifier *>(this))->addOwnedUseCase(ownedUseCase);
}

void QCollaboration::removeOwnedUseCase(QUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeOwnedUseCase(ownedUseCase);
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
QSet<QGeneralizationSet *> QCollaboration::powertypeExtents() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->powertypeExtents();
}

void QCollaboration::addPowertypeExtent(QGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QClassifier *>(this))->addPowertypeExtent(powertypeExtent);
}

void QCollaboration::removePowertypeExtent(QGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QClassifier *>(this))->removePowertypeExtent(powertypeExtent);
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
QSet<QUseCase *> QCollaboration::useCases() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->useCases();
}

void QCollaboration::addUseCase(QUseCase *useCase)
{
    (qwrappedobject_cast<QClassifier *>(this))->addUseCase(useCase);
}

void QCollaboration::removeUseCase(QUseCase *useCase)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeUseCase(useCase);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QClassifierTemplateParameter *QCollaboration::templateParameter() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->templateParameter();
}

void QCollaboration::setTemplateParameter(QClassifierTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QClassifier *>(this))->setTemplateParameter(templateParameter);
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QSet<QClassifier *> QCollaboration::redefinedClassifiers() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->redefinedClassifiers();
}

void QCollaboration::addRedefinedClassifier(QClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QClassifier *>(this))->addRedefinedClassifier(redefinedClassifier);
}

void QCollaboration::removeRedefinedClassifier(QClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeRedefinedClassifier(redefinedClassifier);
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QRedefinableTemplateSignature *QCollaboration::ownedTemplateSignature() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->ownedTemplateSignature();
}

void QCollaboration::setOwnedTemplateSignature(QRedefinableTemplateSignature *ownedTemplateSignature)
{
    (qwrappedobject_cast<QClassifier *>(this))->setOwnedTemplateSignature(ownedTemplateSignature);
}

/*!
    References the collaboration uses owned by the classifier.
 */
QSet<QCollaborationUse *> QCollaboration::collaborationUses() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->collaborationUses();
}

void QCollaboration::addCollaborationUse(QCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QClassifier *>(this))->addCollaborationUse(collaborationUse);
}

void QCollaboration::removeCollaborationUse(QCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeCollaborationUse(collaborationUse);
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
QSet<QProperty *> QCollaboration::attributes() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->attributes();
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
QSet<QFeature *> QCollaboration::features() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->features();
}

/*!
    Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.
 */
QSet<QClassifier *> QCollaboration::generals() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->generals();
}

void QCollaboration::addGeneral(QClassifier *general)
{
    (qwrappedobject_cast<QClassifier *>(this))->addGeneral(general);
}

void QCollaboration::removeGeneral(QClassifier *general)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeGeneral(general);
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QCollaborationUse *QCollaboration::representation() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->representation();
}

void QCollaboration::setRepresentation(QCollaborationUse *representation)
{
    (qwrappedobject_cast<QClassifier *>(this))->setRepresentation(representation);
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QSet<QGeneralization *> QCollaboration::generalizations() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->generalizations();
}

void QCollaboration::addGeneralization(QGeneralization *generalization)
{
    (qwrappedobject_cast<QClassifier *>(this))->addGeneralization(generalization);
}

void QCollaboration::removeGeneralization(QGeneralization *generalization)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeGeneralization(generalization);
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
QSet<QNamedElement *> QCollaboration::inheritedMembers() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->inheritedMembers();
}

/*!
    References the substitutions that are owned by this Classifier.
 */
QSet<QSubstitution *> QCollaboration::substitutions() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->substitutions();
}

void QCollaboration::addSubstitution(QSubstitution *substitution)
{
    (qwrappedobject_cast<QClassifier *>(this))->addSubstitution(substitution);
}

void QCollaboration::removeSubstitution(QSubstitution *substitution)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeSubstitution(substitution);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QStructuredClassifier
// ---------------------------------------------------------------

/*!
    References the roles that instances may play in this classifier.
 */
QSet<QConnectableElement *> QCollaboration::roles() const
{
    return (qwrappedobject_cast<const QStructuredClassifier *>(this))->roles();
}

/*!
    References the properties owned by the classifier.
 */
QList<QProperty *> QCollaboration::ownedAttributes() const
{
    return (qwrappedobject_cast<const QStructuredClassifier *>(this))->ownedAttributes();
}

void QCollaboration::addOwnedAttribute(QProperty *ownedAttribute)
{
    (qwrappedobject_cast<QStructuredClassifier *>(this))->addOwnedAttribute(ownedAttribute);
}

void QCollaboration::removeOwnedAttribute(QProperty *ownedAttribute)
{
    (qwrappedobject_cast<QStructuredClassifier *>(this))->removeOwnedAttribute(ownedAttribute);
}

/*!
    References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true.
 */
QSet<QProperty *> QCollaboration::parts() const
{
    return (qwrappedobject_cast<const QStructuredClassifier *>(this))->parts();
}

/*!
    References the connectors owned by the classifier.
 */
QSet<QConnector *> QCollaboration::ownedConnectors() const
{
    return (qwrappedobject_cast<const QStructuredClassifier *>(this))->ownedConnectors();
}

void QCollaboration::addOwnedConnector(QConnector *ownedConnector)
{
    (qwrappedobject_cast<QStructuredClassifier *>(this))->addOwnedConnector(ownedConnector);
}

void QCollaboration::removeOwnedConnector(QConnector *ownedConnector)
{
    (qwrappedobject_cast<QStructuredClassifier *>(this))->removeOwnedConnector(ownedConnector);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QBehavioredClassifier
// ---------------------------------------------------------------

/*!
    References behavior specifications owned by a classifier.
 */
QSet<QBehavior *> QCollaboration::ownedBehaviors() const
{
    return (qwrappedobject_cast<const QBehavioredClassifier *>(this))->ownedBehaviors();
}

void QCollaboration::addOwnedBehavior(QBehavior *ownedBehavior)
{
    (qwrappedobject_cast<QBehavioredClassifier *>(this))->addOwnedBehavior(ownedBehavior);
}

void QCollaboration::removeOwnedBehavior(QBehavior *ownedBehavior)
{
    (qwrappedobject_cast<QBehavioredClassifier *>(this))->removeOwnedBehavior(ownedBehavior);
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
QSet<QInterfaceRealization *> QCollaboration::interfaceRealizations() const
{
    return (qwrappedobject_cast<const QBehavioredClassifier *>(this))->interfaceRealizations();
}

void QCollaboration::addInterfaceRealization(QInterfaceRealization *interfaceRealization)
{
    (qwrappedobject_cast<QBehavioredClassifier *>(this))->addInterfaceRealization(interfaceRealization);
}

void QCollaboration::removeInterfaceRealization(QInterfaceRealization *interfaceRealization)
{
    (qwrappedobject_cast<QBehavioredClassifier *>(this))->removeInterfaceRealization(interfaceRealization);
}

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
QBehavior *QCollaboration::classifierBehavior() const
{
    return (qwrappedobject_cast<const QBehavioredClassifier *>(this))->classifierBehavior();
}

void QCollaboration::setClassifierBehavior(QBehavior *classifierBehavior)
{
    (qwrappedobject_cast<QBehavioredClassifier *>(this))->setClassifierBehavior(classifierBehavior);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QCollaboration
// ---------------------------------------------------------------

/*!
    References connectable elements (possibly owned by other classifiers) which represent roles that instances may play in this collaboration.
 */
QSet<QConnectableElement *> QCollaboration::collaborationRoles() const
{
    // This is a read-write association end

    Q_D(const QCollaboration);
    return d->collaborationRoles;
}

void QCollaboration::addCollaborationRole(QConnectableElement *collaborationRole)
{
    // This is a read-write association end

    Q_D(QCollaboration);
    if (!d->collaborationRoles.contains(collaborationRole)) {
        d->collaborationRoles.insert(collaborationRole);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QStructuredClassifierPrivate *>(d))->addRole(qwrappedobject_cast<QConnectableElement *>(collaborationRole));
    }
}

void QCollaboration::removeCollaborationRole(QConnectableElement *collaborationRole)
{
    // This is a read-write association end

    Q_D(QCollaboration);
    if (d->collaborationRoles.contains(collaborationRole)) {
        d->collaborationRoles.remove(collaborationRole);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QStructuredClassifierPrivate *>(d))->removeRole(qwrappedobject_cast<QConnectableElement *>(collaborationRole));
    }
}

void QCollaboration::registerMetaTypes() const
{
    qRegisterMetaType<QConnectableElement *>("QConnectableElement *");
    qRegisterMetaType<QSet<QConnectableElement *>>("QSet<QConnectableElement *>");
    qRegisterMetaType<QList<QConnectableElement *>>("QList<QConnectableElement *>");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QCollaboration::setPropertyData()
{

    QWrappedObject::propertyDataHash[QString::fromLatin1("QCollaboration")][QString::fromLatin1("collaborationRoles")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCollaboration")][QString::fromLatin1("collaborationRoles")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References connectable elements (possibly owned by other classifiers) which represent roles that instances may play in this collaboration.");

    QWrappedObject::setPropertyData();
}

#include "moc_qcollaboration.cpp"

QT_END_NAMESPACE_QTUML

