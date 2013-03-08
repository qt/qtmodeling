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

#include "qumlartifact.h"
#include "qumlartifact_p.h"

#include <QtUml/QUmlOperation>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlManifestation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlArtifactPrivate::QUmlArtifactPrivate()
{
}

QUmlArtifactPrivate::~QUmlArtifactPrivate()
{
}

/*!
    \class QUmlArtifact

    \inmodule QtUml

    \brief An artifact is the source of a deployment to a node.An artifact is the specification of a physical piece of information that is used or produced by a software development process, or by deployment and operation of a system. Examples of artifacts include model files, source files, scripts, and binary executable files, a table in a database system, a development deliverable, or a word-processing document, a mail message.
 */

QUmlArtifact::QUmlArtifact(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlArtifactPrivate, wrapper, parent),
    _wrappedUmlDeployedArtifact(new QUmlDeployedArtifact(this)),
    _wrappedUmlClassifier(new QUmlClassifier(this))
{
    setPropertyData();
}

QUmlArtifact::QUmlArtifact(QUmlArtifactPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlDeployedArtifact(new QUmlDeployedArtifact(this)),
    _wrappedUmlClassifier(new QUmlClassifier(this))
{
    setPropertyData();
}

QUmlArtifact::~QUmlArtifact()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlArtifact::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlArtifact::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlArtifact::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlArtifact::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlArtifact::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlArtifact::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlArtifact::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlArtifact::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlArtifact::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlArtifact::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlArtifact::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlArtifact::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlArtifact::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlArtifact::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlArtifact::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlArtifact::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlArtifact::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlArtifact::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlArtifact::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlArtifact::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlArtifact::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlArtifact::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlArtifact::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlArtifact::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlArtifact::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlArtifact::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlArtifact::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlArtifact::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlArtifact::visibility() const
{
    return (qwrappedobject_cast<const QUmlPackageableElement *>(this))->visibility();
}

void QUmlArtifact::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlPackageableElement *>(this))->setVisibility(visibility);
}

void QUmlArtifact::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
    Q_D(QUmlArtifact);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QUmlPackage *QUmlArtifact::package() const
{
    return (qwrappedobject_cast<const QUmlType *>(this))->package();
}

void QUmlArtifact::setPackage(QUmlPackage *package)
{
    (qwrappedobject_cast<QUmlType *>(this))->setPackage(package);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlArtifact::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlArtifact::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlArtifact::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlArtifact);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlArtifact::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlArtifact::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional bindings from this element to templates.
 */
QSet<QUmlTemplateBinding *> QUmlArtifact::templateBindings() const
{
    return (qwrappedobject_cast<const QUmlTemplateableElement *>(this))->templateBindings();
}

void QUmlArtifact::addTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QUmlArtifact::removeTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlClassifier
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QUmlArtifact::isAbstract() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->isAbstract();
}

void QUmlArtifact::setAbstract(bool isAbstract)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setAbstract(isAbstract);
}

void QUmlArtifact::unsetAbstract()
{
    setAbstract(false);
    Q_D(QUmlArtifact);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QUmlArtifact::isFinalSpecialization() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->isFinalSpecialization();
}

void QUmlArtifact::setFinalSpecialization(bool isFinalSpecialization)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setFinalSpecialization(isFinalSpecialization);
}

void QUmlArtifact::unsetFinalSpecialization()
{
    setFinalSpecialization(false);
    Q_D(QUmlArtifact);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isFinalSpecialization"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlClassifier
// ---------------------------------------------------------------

/*!
    References the use cases owned by this classifier.
 */
QSet<QUmlUseCase *> QUmlArtifact::ownedUseCases() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->ownedUseCases();
}

void QUmlArtifact::addOwnedUseCase(QUmlUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addOwnedUseCase(ownedUseCase);
}

void QUmlArtifact::removeOwnedUseCase(QUmlUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeOwnedUseCase(ownedUseCase);
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
QSet<QUmlGeneralizationSet *> QUmlArtifact::powertypeExtents() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->powertypeExtents();
}

void QUmlArtifact::addPowertypeExtent(QUmlGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addPowertypeExtent(powertypeExtent);
}

void QUmlArtifact::removePowertypeExtent(QUmlGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removePowertypeExtent(powertypeExtent);
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
QSet<QUmlUseCase *> QUmlArtifact::useCases() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->useCases();
}

void QUmlArtifact::addUseCase(QUmlUseCase *useCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addUseCase(useCase);
}

void QUmlArtifact::removeUseCase(QUmlUseCase *useCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeUseCase(useCase);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlClassifierTemplateParameter *QUmlArtifact::templateParameter() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->templateParameter();
}

void QUmlArtifact::setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setTemplateParameter(templateParameter);
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QSet<QUmlClassifier *> QUmlArtifact::redefinedClassifiers() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->redefinedClassifiers();
}

void QUmlArtifact::addRedefinedClassifier(QUmlClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addRedefinedClassifier(redefinedClassifier);
}

void QUmlArtifact::removeRedefinedClassifier(QUmlClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeRedefinedClassifier(redefinedClassifier);
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlRedefinableTemplateSignature *QUmlArtifact::ownedTemplateSignature() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->ownedTemplateSignature();
}

void QUmlArtifact::setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setOwnedTemplateSignature(ownedTemplateSignature);
}

/*!
    References the collaboration uses owned by the classifier.
 */
QSet<QUmlCollaborationUse *> QUmlArtifact::collaborationUses() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->collaborationUses();
}

void QUmlArtifact::addCollaborationUse(QUmlCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addCollaborationUse(collaborationUse);
}

void QUmlArtifact::removeCollaborationUse(QUmlCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeCollaborationUse(collaborationUse);
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
QSet<QUmlProperty *> QUmlArtifact::attributes() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->attributes();
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
QSet<QUmlFeature *> QUmlArtifact::features() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->features();
}

/*!
    Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.
 */
QSet<QUmlClassifier *> QUmlArtifact::generals() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->generals();
}

void QUmlArtifact::addGeneral(QUmlClassifier *general)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addGeneral(general);
}

void QUmlArtifact::removeGeneral(QUmlClassifier *general)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeGeneral(general);
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QUmlCollaborationUse *QUmlArtifact::representation() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->representation();
}

void QUmlArtifact::setRepresentation(QUmlCollaborationUse *representation)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setRepresentation(representation);
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QSet<QUmlGeneralization *> QUmlArtifact::generalizations() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->generalizations();
}

void QUmlArtifact::addGeneralization(QUmlGeneralization *generalization)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addGeneralization(generalization);
}

void QUmlArtifact::removeGeneralization(QUmlGeneralization *generalization)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeGeneralization(generalization);
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
QSet<QUmlNamedElement *> QUmlArtifact::inheritedMembers() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->inheritedMembers();
}

/*!
    References the substitutions that are owned by this Classifier.
 */
QSet<QUmlSubstitution *> QUmlArtifact::substitutions() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->substitutions();
}

void QUmlArtifact::addSubstitution(QUmlSubstitution *substitution)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addSubstitution(substitution);
}

void QUmlArtifact::removeSubstitution(QUmlSubstitution *substitution)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeSubstitution(substitution);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlArtifact
// ---------------------------------------------------------------

/*!
    A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
 */
QString QUmlArtifact::fileName() const
{
    // This is a read-write attribute

    Q_D(const QUmlArtifact);
    return d->fileName;
}

void QUmlArtifact::setFileName(QString fileName)
{
    // This is a read-write attribute

    Q_D(QUmlArtifact);
    if (d->fileName != fileName) {
        d->fileName = fileName;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlArtifact
// ---------------------------------------------------------------

/*!
    The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
 */
QList<QUmlOperation *> QUmlArtifact::ownedOperations() const
{
    // This is a read-write association end

    Q_D(const QUmlArtifact);
    return d->ownedOperations;
}

void QUmlArtifact::addOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QUmlArtifact);
    if (!d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.append(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QUmlFeature *>(ownedOperation));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedOperation));
    }
}

void QUmlArtifact::removeOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QUmlArtifact);
    if (d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.removeAll(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QUmlFeature *>(ownedOperation));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedOperation));
    }
}

/*!
    The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.
 */
QList<QUmlProperty *> QUmlArtifact::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QUmlArtifact);
    return d->ownedAttributes;
}

void QUmlArtifact::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QUmlArtifact);
    if (!d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addAttribute(qwrappedobject_cast<QUmlProperty *>(ownedAttribute));
    }
}

void QUmlArtifact::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QUmlArtifact);
    if (d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeAttribute(qwrappedobject_cast<QUmlProperty *>(ownedAttribute));
    }
}

/*!
    The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.
 */
QSet<QUmlManifestation *> QUmlArtifact::manifestations() const
{
    // This is a read-write association end

    Q_D(const QUmlArtifact);
    return d->manifestations;
}

void QUmlArtifact::addManifestation(QUmlManifestation *manifestation)
{
    // This is a read-write association end

    Q_D(QUmlArtifact);
    if (!d->manifestations.contains(manifestation)) {
        d->manifestations.insert(manifestation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(manifestation));
        (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(qwrappedobject_cast<QUmlDependency *>(manifestation));
    }
}

void QUmlArtifact::removeManifestation(QUmlManifestation *manifestation)
{
    // This is a read-write association end

    Q_D(QUmlArtifact);
    if (d->manifestations.contains(manifestation)) {
        d->manifestations.remove(manifestation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(manifestation));
        (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(qwrappedobject_cast<QUmlDependency *>(manifestation));
    }
}

/*!
    The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.
 */
QSet<QUmlArtifact *> QUmlArtifact::nestedArtifacts() const
{
    // This is a read-write association end

    Q_D(const QUmlArtifact);
    return d->nestedArtifacts;
}

void QUmlArtifact::addNestedArtifact(QUmlArtifact *nestedArtifact)
{
    // This is a read-write association end

    Q_D(QUmlArtifact);
    if (!d->nestedArtifacts.contains(nestedArtifact)) {
        d->nestedArtifacts.insert(nestedArtifact);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(nestedArtifact));
    }
}

void QUmlArtifact::removeNestedArtifact(QUmlArtifact *nestedArtifact)
{
    // This is a read-write association end

    Q_D(QUmlArtifact);
    if (d->nestedArtifacts.contains(nestedArtifact)) {
        d->nestedArtifacts.remove(nestedArtifact);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(nestedArtifact));
    }
}

void QUmlArtifact::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("fileName")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("fileName")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("fileName")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("fileName")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("fileName")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("fileName")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Operations defined for the Artifact. The association is a specialization of the ownedMember association.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlClassifier::features QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers QUmlClassifier::attributes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("manifestations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("manifestations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("manifestations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("manifestations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("manifestations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements QUmlNamedElement::clientDependencies");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("manifestations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("nestedArtifacts")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("nestedArtifacts")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("nestedArtifacts")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("nestedArtifacts")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("nestedArtifacts")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlArtifact")][QString::fromLatin1("nestedArtifacts")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlArtifact::addClientDependency(QWrappedObjectPointer<QUmlManifestation> manifestation)
{
    addManifestation(manifestation);
}

void QUmlArtifact::removeClientDependency(QWrappedObjectPointer<QUmlManifestation> manifestation)
{
    removeManifestation(manifestation);
}

QT_END_NAMESPACE

#include "moc_qumlartifact.cpp"

