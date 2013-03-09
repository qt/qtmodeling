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

#include "qumlassociation.h"
#include "qumlassociation_p.h"

#include <QtUml/QUmlType>
#include <QtUml/QUmlProperty>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlAssociationPrivate::QUmlAssociationPrivate() :
    isDerived(false)
{
}

QUmlAssociationPrivate::~QUmlAssociationPrivate()
{
}

/*!
    \class QUmlAssociation

    \inmodule QtUml

    \brief An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link.A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link. A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.
 */

QUmlAssociation::QUmlAssociation(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlAssociationPrivate, wrapper, parent),
    _wrappedUmlClassifier(new QUmlClassifier(this)),
    _wrappedUmlRelationship(new QUmlRelationship(this))
{
    setPropertyData();
}

QUmlAssociation::QUmlAssociation(QUmlAssociationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlClassifier(new QUmlClassifier(this)),
    _wrappedUmlRelationship(new QUmlRelationship(this))
{
    setPropertyData();
}

QUmlAssociation::~QUmlAssociation()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlAssociation::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlAssociation::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlAssociation::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlAssociation::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlAssociation::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlAssociation::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlAssociation::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlAssociation::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlAssociation::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlAssociation::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlAssociation::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlAssociation::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlAssociation::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlAssociation::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlAssociation::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlAssociation::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlAssociation::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlAssociation::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlAssociation::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlAssociation::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlAssociation::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlAssociation::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlAssociation::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlAssociation::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlAssociation::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlAssociation::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlAssociation::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlAssociation::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlAssociation::visibility() const
{
    return (qwrappedobject_cast<const QUmlPackageableElement *>(this))->visibility();
}

void QUmlAssociation::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlPackageableElement *>(this))->setVisibility(visibility);
}

void QUmlAssociation::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
    Q_D(QUmlAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QUmlPackage *QUmlAssociation::package() const
{
    return (qwrappedobject_cast<const QUmlType *>(this))->package();
}

void QUmlAssociation::setPackage(QUmlPackage *package)
{
    (qwrappedobject_cast<QUmlType *>(this))->setPackage(package);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlAssociation::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlAssociation::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlAssociation::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlAssociation::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlAssociation::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional bindings from this element to templates.
 */
QSet<QUmlTemplateBinding *> QUmlAssociation::templateBindings() const
{
    return (qwrappedobject_cast<const QUmlTemplateableElement *>(this))->templateBindings();
}

void QUmlAssociation::addTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QUmlAssociation::removeTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlClassifier
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QUmlAssociation::isAbstract() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->isAbstract();
}

void QUmlAssociation::setAbstract(bool isAbstract)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setAbstract(isAbstract);
}

void QUmlAssociation::unsetAbstract()
{
    setAbstract(false);
    Q_D(QUmlAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QUmlAssociation::isFinalSpecialization() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->isFinalSpecialization();
}

void QUmlAssociation::setFinalSpecialization(bool isFinalSpecialization)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setFinalSpecialization(isFinalSpecialization);
}

void QUmlAssociation::unsetFinalSpecialization()
{
    setFinalSpecialization(false);
    Q_D(QUmlAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isFinalSpecialization"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlClassifier
// ---------------------------------------------------------------

/*!
    References the use cases owned by this classifier.
 */
QSet<QUmlUseCase *> QUmlAssociation::ownedUseCases() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->ownedUseCases();
}

void QUmlAssociation::addOwnedUseCase(QUmlUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addOwnedUseCase(ownedUseCase);
}

void QUmlAssociation::removeOwnedUseCase(QUmlUseCase *ownedUseCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeOwnedUseCase(ownedUseCase);
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
QSet<QUmlGeneralizationSet *> QUmlAssociation::powertypeExtents() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->powertypeExtents();
}

void QUmlAssociation::addPowertypeExtent(QUmlGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addPowertypeExtent(powertypeExtent);
}

void QUmlAssociation::removePowertypeExtent(QUmlGeneralizationSet *powertypeExtent)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removePowertypeExtent(powertypeExtent);
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
QSet<QUmlUseCase *> QUmlAssociation::useCases() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->useCases();
}

void QUmlAssociation::addUseCase(QUmlUseCase *useCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addUseCase(useCase);
}

void QUmlAssociation::removeUseCase(QUmlUseCase *useCase)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeUseCase(useCase);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlClassifierTemplateParameter *QUmlAssociation::templateParameter() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->templateParameter();
}

void QUmlAssociation::setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setTemplateParameter(templateParameter);
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QSet<QUmlClassifier *> QUmlAssociation::redefinedClassifiers() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->redefinedClassifiers();
}

void QUmlAssociation::addRedefinedClassifier(QUmlClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addRedefinedClassifier(redefinedClassifier);
}

void QUmlAssociation::removeRedefinedClassifier(QUmlClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeRedefinedClassifier(redefinedClassifier);
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlRedefinableTemplateSignature *QUmlAssociation::ownedTemplateSignature() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->ownedTemplateSignature();
}

void QUmlAssociation::setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setOwnedTemplateSignature(ownedTemplateSignature);
}

/*!
    References the collaboration uses owned by the classifier.
 */
QSet<QUmlCollaborationUse *> QUmlAssociation::collaborationUses() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->collaborationUses();
}

void QUmlAssociation::addCollaborationUse(QUmlCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addCollaborationUse(collaborationUse);
}

void QUmlAssociation::removeCollaborationUse(QUmlCollaborationUse *collaborationUse)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeCollaborationUse(collaborationUse);
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
QSet<QUmlProperty *> QUmlAssociation::attributes() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->attributes();
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
QSet<QUmlFeature *> QUmlAssociation::features() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->features();
}

/*!
    Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.
 */
QSet<QUmlClassifier *> QUmlAssociation::generals() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->generals();
}

void QUmlAssociation::addGeneral(QUmlClassifier *general)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addGeneral(general);
}

void QUmlAssociation::removeGeneral(QUmlClassifier *general)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeGeneral(general);
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QUmlCollaborationUse *QUmlAssociation::representation() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->representation();
}

void QUmlAssociation::setRepresentation(QUmlCollaborationUse *representation)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->setRepresentation(representation);
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QSet<QUmlGeneralization *> QUmlAssociation::generalizations() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->generalizations();
}

void QUmlAssociation::addGeneralization(QUmlGeneralization *generalization)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addGeneralization(generalization);
}

void QUmlAssociation::removeGeneralization(QUmlGeneralization *generalization)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeGeneralization(generalization);
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
QSet<QUmlNamedElement *> QUmlAssociation::inheritedMembers() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->inheritedMembers();
}

/*!
    References the substitutions that are owned by this Classifier.
 */
QSet<QUmlSubstitution *> QUmlAssociation::substitutions() const
{
    return (qwrappedobject_cast<const QUmlClassifier *>(this))->substitutions();
}

void QUmlAssociation::addSubstitution(QUmlSubstitution *substitution)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->addSubstitution(substitution);
}

void QUmlAssociation::removeSubstitution(QUmlSubstitution *substitution)
{
    (qwrappedobject_cast<QUmlClassifier *>(this))->removeSubstitution(substitution);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
QSet<QUmlElement *> QUmlAssociation::relatedElements() const
{
    return (qwrappedobject_cast<const QUmlRelationship *>(this))->relatedElements();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlAssociation
// ---------------------------------------------------------------

/*!
    Specifies whether the association is derived from other model elements such as other associations or constraints.
 */
bool QUmlAssociation::isDerived() const
{
    // This is a read-write attribute

    Q_D(const QUmlAssociation);
    return d->isDerived;
}

void QUmlAssociation::setDerived(bool isDerived)
{
    // This is a read-write attribute

    Q_D(QUmlAssociation);
    if (d->isDerived != isDerived) {
        d->isDerived = isDerived;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDerived");
}

void QUmlAssociation::unsetDerived()
{
    setDerived(false);
    Q_D(QUmlAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDerived"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlAssociation
// ---------------------------------------------------------------

/*!
    References the classifiers that are used as types of the ends of the association.
 */
QList<QUmlType *> QUmlAssociation::endTypes() const
{
    // This is a read-only derived association end

    qWarning("QUmlAssociation::endTypes: to be implemented (this is a derived associationend)");

    return QList<QUmlType *>(); // change here to your derived return
}

/*!
    The navigable ends that are owned by the association itself.
 */
QSet<QUmlProperty *> QUmlAssociation::navigableOwnedEnds() const
{
    // This is a read-write association end

    Q_D(const QUmlAssociation);
    return d->navigableOwnedEnds;
}

void QUmlAssociation::addNavigableOwnedEnd(QUmlProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    Q_D(QUmlAssociation);
    if (!d->navigableOwnedEnds.contains(navigableOwnedEnd)) {
        d->navigableOwnedEnds.insert(navigableOwnedEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlAssociation *>(this))->addOwnedEnd(qwrappedobject_cast<QUmlProperty *>(navigableOwnedEnd));
    }
}

void QUmlAssociation::removeNavigableOwnedEnd(QUmlProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    Q_D(QUmlAssociation);
    if (d->navigableOwnedEnds.contains(navigableOwnedEnd)) {
        d->navigableOwnedEnds.remove(navigableOwnedEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlAssociation *>(this))->removeOwnedEnd(qwrappedobject_cast<QUmlProperty *>(navigableOwnedEnd));
    }
}

/*!
    The ends that are owned by the association itself.
 */
QList<QUmlProperty *> QUmlAssociation::ownedEnds() const
{
    // This is a read-write association end

    Q_D(const QUmlAssociation);
    return d->ownedEnds;
}

void QUmlAssociation::addOwnedEnd(QUmlProperty *ownedEnd)
{
    // This is a read-write association end

    Q_D(QUmlAssociation);
    if (!d->ownedEnds.contains(ownedEnd)) {
        d->ownedEnds.append(ownedEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlAssociation *>(this))->addMemberEnd(qwrappedobject_cast<QUmlProperty *>(ownedEnd));
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QUmlFeature *>(ownedEnd));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedEnd));

        // Adjust opposite property
        ownedEnd->setOwningAssociation(this);
    }
}

void QUmlAssociation::removeOwnedEnd(QUmlProperty *ownedEnd)
{
    // This is a read-write association end

    Q_D(QUmlAssociation);
    if (d->ownedEnds.contains(ownedEnd)) {
        d->ownedEnds.removeAll(ownedEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlAssociation *>(this))->removeMemberEnd(qwrappedobject_cast<QUmlProperty *>(ownedEnd));
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QUmlFeature *>(ownedEnd));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedEnd));

        // Adjust opposite property
        ownedEnd->setOwningAssociation(0);
    }
}

/*!
    Each end represents participation of instances of the classifier connected to the end in links of the association.
 */
QList<QUmlProperty *> QUmlAssociation::memberEnds() const
{
    // This is a read-write association end

    Q_D(const QUmlAssociation);
    return d->memberEnds;
}

void QUmlAssociation::addMemberEnd(QUmlProperty *memberEnd)
{
    // This is a read-write association end

    Q_D(QUmlAssociation);
    if (!d->memberEnds.contains(memberEnd)) {
        d->memberEnds.append(memberEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addMember(qwrappedobject_cast<QUmlNamedElement *>(memberEnd));

        // Adjust opposite property
        memberEnd->setAssociation(this);
    }
}

void QUmlAssociation::removeMemberEnd(QUmlProperty *memberEnd)
{
    // This is a read-write association end

    Q_D(QUmlAssociation);
    if (d->memberEnds.contains(memberEnd)) {
        d->memberEnds.removeAll(memberEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeMember(qwrappedobject_cast<QUmlNamedElement *>(memberEnd));

        // Adjust opposite property
        memberEnd->setAssociation(0);
    }
}

void QUmlAssociation::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the association is derived from other model elements such as other associations or constraints.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the classifiers that are used as types of the ends of the association.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRelationship::relatedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The navigable ends that are owned by the association itself.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAssociation::ownedEnds");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ends that are owned by the association itself.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAssociation::memberEnds QUmlClassifier::features QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlProperty::owningAssociation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Each end represents participation of instances of the classifier connected to the end in links of the association.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlProperty::association");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlassociation.cpp"

