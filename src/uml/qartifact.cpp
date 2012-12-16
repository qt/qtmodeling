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

#include "qartifact.h"
#include "qartifact_p.h"

#include <QtUml/QOperation>
#include <QtUml/QProperty>
#include <QtUml/QManifestation>

QT_BEGIN_NAMESPACE_QTUML

QArtifactPrivate::QArtifactPrivate() :
    ownedOperations(new QList<QOperation *>),
    ownedAttributes(new QList<QProperty *>),
    manifestations(new QSet<QManifestation *>),
    nestedArtifacts(new QSet<QArtifact *>)
{
}

QArtifactPrivate::~QArtifactPrivate()
{
    delete ownedOperations;
    delete ownedAttributes;
    delete manifestations;
    delete nestedArtifacts;
}

/*!
    \class QArtifact

    \inmodule QtUml

    \brief An artifact is the source of a deployment to a node.An artifact is the specification of a physical piece of information that is used or produced by a software development process, or by deployment and operation of a system. Examples of artifacts include model files, source files, scripts, and binary executable files, a table in a database system, a development deliverable, or a word-processing document, a mail message.
 */

QArtifact::QArtifact(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(*new QArtifactPrivate, parent, wrapper),
    _wrappedDeployedArtifact(new QDeployedArtifact(this, this)),
    _wrappedClassifier(new QClassifier(this, this))
{
}

QArtifact::QArtifact(QArtifactPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(dd, parent, wrapper),
    _wrappedDeployedArtifact(new QDeployedArtifact(this, this)),
    _wrappedClassifier(new QClassifier(this, this))
{
}

QArtifact::~QArtifact()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QArtifact::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QArtifact::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QArtifact::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QArtifact::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QArtifact::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QArtifact::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QArtifact::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QArtifact::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QArtifact::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QArtifact::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QArtifact::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QArtifact::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QArtifact::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QArtifact::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QPackageImport *> *QArtifact::packageImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->packageImports();
}

void QArtifact::addPackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QArtifact::removePackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QNamedElement *> *QArtifact::members() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QPackageableElement *> *QArtifact::importedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QElementImport *> *QArtifact::elementImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->elementImports();
}

void QArtifact::addElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QArtifact::removeElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QConstraint *> *QArtifact::ownedRules() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedRules();
}

void QArtifact::addOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QArtifact::removeOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QNamedElement *> *QArtifact::ownedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QArtifact::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QParameterableElement *>(this))->owningTemplateParameter();
}

void QArtifact::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QArtifact::visibility() const
{
    return (qwrappedobject_cast<const QPackageableElement *>(this))->visibility();
}

void QArtifact::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QPackageableElement *>(this))->setVisibility(visibility);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QPackage *QArtifact::package() const
{
    return (qwrappedobject_cast<const QType *>(this))->package();
}

void QArtifact::setPackage(QPackage *package)
{
    (qwrappedobject_cast<QType *>(this))->setPackage(package);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QArtifact::isLeaf() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QArtifact::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QRedefinableElement *> *QArtifact::redefinedElements() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QClassifier *> *QArtifact::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional bindings from this element to templates.
 */
const QSet<QTemplateBinding *> *QArtifact::templateBindings() const
{
    return (qwrappedobject_cast<const QTemplateableElement *>(this))->templateBindings();
}

void QArtifact::addTemplateBinding(QTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QArtifact::removeTemplateBinding(QTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QClassifier
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QArtifact::isAbstract() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->isAbstract();
}

void QArtifact::setAbstract(bool isAbstract)
{
    (qwrappedobject_cast<QClassifier *>(this))->setAbstract(isAbstract);
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QArtifact::isFinalSpecialization() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->isFinalSpecialization();
}

void QArtifact::setFinalSpecialization(bool isFinalSpecialization)
{
    (qwrappedobject_cast<QClassifier *>(this))->setFinalSpecialization(isFinalSpecialization);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QClassifier
// ---------------------------------------------------------------

/*!
    References the use cases owned by this classifier.
 */
const QSet<QUseCase *> *QArtifact::ownedUseCases() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->ownedUseCases();
}

void QArtifact::addOwnedUseCase(QUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QClassifier *>(this))->addOwnedUseCase(ownedUseCase);
}

void QArtifact::removeOwnedUseCase(QUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeOwnedUseCase(ownedUseCase);
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
const QSet<QGeneralizationSet *> *QArtifact::powertypeExtents() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->powertypeExtents();
}

void QArtifact::addPowertypeExtent(QGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QClassifier *>(this))->addPowertypeExtent(powertypeExtent);
}

void QArtifact::removePowertypeExtent(QGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QClassifier *>(this))->removePowertypeExtent(powertypeExtent);
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
const QSet<QUseCase *> *QArtifact::useCases() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->useCases();
}

void QArtifact::addUseCase(QUseCase *useCase)
{
    (qwrappedobject_cast<QClassifier *>(this))->addUseCase(useCase);
}

void QArtifact::removeUseCase(QUseCase *useCase)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeUseCase(useCase);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QClassifierTemplateParameter *QArtifact::templateParameter() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->templateParameter();
}

void QArtifact::setTemplateParameter(QClassifierTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QClassifier *>(this))->setTemplateParameter(templateParameter);
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
const QSet<QClassifier *> *QArtifact::redefinedClassifiers() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->redefinedClassifiers();
}

void QArtifact::addRedefinedClassifier(QClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QClassifier *>(this))->addRedefinedClassifier(redefinedClassifier);
}

void QArtifact::removeRedefinedClassifier(QClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeRedefinedClassifier(redefinedClassifier);
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QRedefinableTemplateSignature *QArtifact::ownedTemplateSignature() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->ownedTemplateSignature();
}

void QArtifact::setOwnedTemplateSignature(QRedefinableTemplateSignature *ownedTemplateSignature)
{
    (qwrappedobject_cast<QClassifier *>(this))->setOwnedTemplateSignature(ownedTemplateSignature);
}

/*!
    References the collaboration uses owned by the classifier.
 */
const QSet<QCollaborationUse *> *QArtifact::collaborationUses() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->collaborationUses();
}

void QArtifact::addCollaborationUse(QCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QClassifier *>(this))->addCollaborationUse(collaborationUse);
}

void QArtifact::removeCollaborationUse(QCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeCollaborationUse(collaborationUse);
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
const QSet<QProperty *> *QArtifact::attributes() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->attributes();
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
const QSet<QFeature *> *QArtifact::features() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->features();
}

/*!
    Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.
 */
const QSet<QClassifier *> *QArtifact::generals() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->generals();
}

void QArtifact::addGeneral(QClassifier *general)
{
    (qwrappedobject_cast<QClassifier *>(this))->addGeneral(general);
}

void QArtifact::removeGeneral(QClassifier *general)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeGeneral(general);
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QCollaborationUse *QArtifact::representation() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->representation();
}

void QArtifact::setRepresentation(QCollaborationUse *representation)
{
    (qwrappedobject_cast<QClassifier *>(this))->setRepresentation(representation);
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
const QSet<QGeneralization *> *QArtifact::generalizations() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->generalizations();
}

void QArtifact::addGeneralization(QGeneralization *generalization)
{
    (qwrappedobject_cast<QClassifier *>(this))->addGeneralization(generalization);
}

void QArtifact::removeGeneralization(QGeneralization *generalization)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeGeneralization(generalization);
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
const QSet<QNamedElement *> *QArtifact::inheritedMembers() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->inheritedMembers();
}

/*!
    References the substitutions that are owned by this Classifier.
 */
const QSet<QSubstitution *> *QArtifact::substitutions() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->substitutions();
}

void QArtifact::addSubstitution(QSubstitution *substitution)
{
    (qwrappedobject_cast<QClassifier *>(this))->addSubstitution(substitution);
}

void QArtifact::removeSubstitution(QSubstitution *substitution)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeSubstitution(substitution);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QArtifact
// ---------------------------------------------------------------

/*!
    A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
 */
QString QArtifact::fileName() const
{
    // This is a read-write attribute

    Q_D(const QArtifact);
    return d->fileName;
}

void QArtifact::setFileName(QString fileName)
{
    // This is a read-write attribute

    Q_D(QArtifact);
    if (d->fileName != fileName) {
        d->fileName = fileName;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QArtifact
// ---------------------------------------------------------------

/*!
    The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
 */
const QList<QOperation *> *QArtifact::ownedOperations() const
{
    // This is a read-write association end

    Q_D(const QArtifact);
    return d->ownedOperations;
}

void QArtifact::addOwnedOperation(QOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QArtifact);
    if (!d->ownedOperations->contains(ownedOperation)) {
        d->ownedOperations->append(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QFeature *>(ownedOperation));
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedOperation));
    }
}

void QArtifact::removeOwnedOperation(QOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QArtifact);
    if (d->ownedOperations->contains(ownedOperation)) {
        d->ownedOperations->removeAll(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QFeature *>(ownedOperation));
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedOperation));
    }
}

/*!
    The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.
 */
const QList<QProperty *> *QArtifact::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QArtifact);
    return d->ownedAttributes;
}

void QArtifact::addOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QArtifact);
    if (!d->ownedAttributes->contains(ownedAttribute)) {
        d->ownedAttributes->append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QClassifierPrivate *>(d))->addAttribute(qwrappedobject_cast<QProperty *>(ownedAttribute));
    }
}

void QArtifact::removeOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QArtifact);
    if (d->ownedAttributes->contains(ownedAttribute)) {
        d->ownedAttributes->removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QClassifierPrivate *>(d))->removeAttribute(qwrappedobject_cast<QProperty *>(ownedAttribute));
    }
}

/*!
    The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.
 */
const QSet<QManifestation *> *QArtifact::manifestations() const
{
    // This is a read-write association end

    Q_D(const QArtifact);
    return d->manifestations;
}

void QArtifact::addManifestation(QManifestation *manifestation)
{
    // This is a read-write association end

    Q_D(QArtifact);
    if (!d->manifestations->contains(manifestation)) {
        d->manifestations->insert(manifestation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(manifestation));
        (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(qwrappedobject_cast<QDependency *>(manifestation));
    }
}

void QArtifact::removeManifestation(QManifestation *manifestation)
{
    // This is a read-write association end

    Q_D(QArtifact);
    if (d->manifestations->contains(manifestation)) {
        d->manifestations->remove(manifestation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(manifestation));
        (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(qwrappedobject_cast<QDependency *>(manifestation));
    }
}

/*!
    The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.
 */
const QSet<QArtifact *> *QArtifact::nestedArtifacts() const
{
    // This is a read-write association end

    Q_D(const QArtifact);
    return d->nestedArtifacts;
}

void QArtifact::addNestedArtifact(QArtifact *nestedArtifact)
{
    // This is a read-write association end

    Q_D(QArtifact);
    if (!d->nestedArtifacts->contains(nestedArtifact)) {
        d->nestedArtifacts->insert(nestedArtifact);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(nestedArtifact));
    }
}

void QArtifact::removeNestedArtifact(QArtifact *nestedArtifact)
{
    // This is a read-write association end

    Q_D(QArtifact);
    if (d->nestedArtifacts->contains(nestedArtifact)) {
        d->nestedArtifacts->remove(nestedArtifact);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(nestedArtifact));
    }
}

void QArtifact::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QArtifact) *>("QT_PREPEND_NAMESPACE_QTUML(QArtifact) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QArtifact) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QArtifact) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QArtifact) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QArtifact) *> *");
    qRegisterMetaType<QArtifact *>("QArtifact *");
    qRegisterMetaType<const QSet<QArtifact *> *>("const QSet<QArtifact *> *");
    qRegisterMetaType<const QList<QArtifact *> *>("const QList<QArtifact *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QOperation) *>("QT_PREPEND_NAMESPACE_QTUML(QOperation) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QOperation) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QOperation) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QOperation) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QOperation) *> *");
    qRegisterMetaType<QOperation *>("QOperation *");
    qRegisterMetaType<const QSet<QOperation *> *>("const QSet<QOperation *> *");
    qRegisterMetaType<const QList<QOperation *> *>("const QList<QOperation *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QProperty) *>("QT_PREPEND_NAMESPACE_QTUML(QProperty) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QProperty) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QProperty) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QProperty) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QProperty) *> *");
    qRegisterMetaType<QProperty *>("QProperty *");
    qRegisterMetaType<const QSet<QProperty *> *>("const QSet<QProperty *> *");
    qRegisterMetaType<const QList<QProperty *> *>("const QList<QProperty *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QManifestation) *>("QT_PREPEND_NAMESPACE_QTUML(QManifestation) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QManifestation) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QManifestation) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QManifestation) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QManifestation) *> *");
    qRegisterMetaType<QManifestation *>("QManifestation *");
    qRegisterMetaType<const QSet<QManifestation *> *>("const QSet<QManifestation *> *");
    qRegisterMetaType<const QList<QManifestation *> *>("const QList<QManifestation *> *");


    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

// Overriden methods for subsetted properties

void QArtifact::addClientDependency(QWrappedObjectPointer<QManifestation> manifestation)
{
    addManifestation(manifestation);
}

void QArtifact::removeClientDependency(QWrappedObjectPointer<QManifestation> manifestation)
{
    removeManifestation(manifestation);
}

#include "moc_qartifact.cpp"

QT_END_NAMESPACE_QTUML

