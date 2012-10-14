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

#include "qclassifier.h"
#include "qclassifier_p.h"
#include "qnamespace_p.h"
#include "qredefinableelement_p.h"
#include "qelement_p.h"
#include "qnamedelement_p.h"

#include <QtUml/QClassifierTemplateParameter>
#include <QtUml/QUseCase>
#include <QtUml/QSubstitution>
#include <QtUml/QGeneralizationSet>
#include <QtUml/QRedefinableTemplateSignature>
#include <QtUml/QProperty>
#include <QtUml/QNamedElement>
#include <QtUml/QCollaborationUse>
#include <QtUml/QGeneralization>
#include <QtUml/QFeature>

QT_BEGIN_NAMESPACE_QTUML

QClassifierPrivate::QClassifierPrivate() :
    isAbstract(false),
    isFinalSpecialization(false),
    ownedUseCases(new QSet<QUseCase *>),
    powertypeExtents(new QSet<QGeneralizationSet *>),
    useCases(new QSet<QUseCase *>),
    templateParameter(0),
    redefinedClassifiers(new QSet<QClassifier *>),
    ownedTemplateSignature(0),
    collaborationUses(new QSet<QCollaborationUse *>),
    attributes(new QSet<QProperty *>),
    features(new QSet<QFeature *>),
    representation(0),
    generalizations(new QSet<QGeneralization *>),
    substitutions(new QSet<QSubstitution *>)
{
}

QClassifierPrivate::~QClassifierPrivate()
{
    delete ownedUseCases;
    delete powertypeExtents;
    delete useCases;
    delete redefinedClassifiers;
    delete ownedTemplateSignature;
    delete collaborationUses;
    delete attributes;
    delete features;
    delete generalizations;
    delete substitutions;
}

void QClassifierPrivate::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    this->isAbstract = isAbstract;
}

void QClassifierPrivate::setFinalSpecialization(bool isFinalSpecialization)
{
    // This is a read-write attribute

    this->isFinalSpecialization = isFinalSpecialization;
}

void QClassifierPrivate::addOwnedUseCase(QUseCase *ownedUseCase)
{
    // This is a read-write association end

    this->ownedUseCases->insert(ownedUseCase);

    // Adjust subsetted property(ies)
    addOwnedMember(ownedUseCase);
}

void QClassifierPrivate::removeOwnedUseCase(QUseCase *ownedUseCase)
{
    // This is a read-write association end

    this->ownedUseCases->remove(ownedUseCase);

    // Adjust subsetted property(ies)
    removeOwnedMember(ownedUseCase);
}

void QClassifierPrivate::addPowertypeExtent(QGeneralizationSet *powertypeExtent)
{
    // This is a read-write association end

    this->powertypeExtents->insert(powertypeExtent);
}

void QClassifierPrivate::removePowertypeExtent(QGeneralizationSet *powertypeExtent)
{
    // This is a read-write association end

    this->powertypeExtents->remove(powertypeExtent);
}

void QClassifierPrivate::addUseCase(QUseCase *useCase)
{
    // This is a read-write association end

    this->useCases->insert(useCase);
}

void QClassifierPrivate::removeUseCase(QUseCase *useCase)
{
    // This is a read-write association end

    this->useCases->remove(useCase);
}

void QClassifierPrivate::setTemplateParameter(QClassifierTemplateParameter *templateParameter)
{
    // This is a read-write association end

    this->templateParameter = templateParameter;
}

void QClassifierPrivate::addRedefinedClassifier(QClassifier *redefinedClassifier)
{
    // This is a read-write association end

    this->redefinedClassifiers->insert(redefinedClassifier);

    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedClassifier);
}

void QClassifierPrivate::removeRedefinedClassifier(QClassifier *redefinedClassifier)
{
    // This is a read-write association end

    this->redefinedClassifiers->remove(redefinedClassifier);

    // Adjust subsetted property(ies)
    removeRedefinedElement(redefinedClassifier);
}

void QClassifierPrivate::setOwnedTemplateSignature(QRedefinableTemplateSignature *ownedTemplateSignature)
{
    // This is a read-write association end

    this->ownedTemplateSignature = ownedTemplateSignature;
}

void QClassifierPrivate::addCollaborationUse(QCollaborationUse *collaborationUse)
{
    // This is a read-write association end

    this->collaborationUses->insert(collaborationUse);

    // Adjust subsetted property(ies)
    addOwnedElement(collaborationUse);
}

void QClassifierPrivate::removeCollaborationUse(QCollaborationUse *collaborationUse)
{
    // This is a read-write association end

    this->collaborationUses->remove(collaborationUse);

    // Adjust subsetted property(ies)
    removeOwnedElement(collaborationUse);
}

void QClassifierPrivate::addAttribute(QProperty *attribute)
{
    // This is a read-only derived-union association end

    this->attributes->insert(attribute);

    // Adjust subsetted property(ies)
    addFeature(attribute);
}

void QClassifierPrivate::removeAttribute(QProperty *attribute)
{
    // This is a read-only derived-union association end

    this->attributes->remove(attribute);

    // Adjust subsetted property(ies)
    removeFeature(attribute);
}

void QClassifierPrivate::addFeature(QFeature *feature)
{
    // This is a read-only derived-union association end

    this->features->insert(feature);

    // Adjust subsetted property(ies)
    addMember(feature);
}

void QClassifierPrivate::removeFeature(QFeature *feature)
{
    // This is a read-only derived-union association end

    this->features->remove(feature);

    // Adjust subsetted property(ies)
    removeMember(feature);
}

void QClassifierPrivate::setRepresentation(QCollaborationUse *representation)
{
    // This is a read-write association end

    // Adjust subsetted property(ies)
    removeCollaborationUse(this->representation);

    this->representation = representation;

    // Adjust subsetted property(ies)
    addCollaborationUse(representation);
}

void QClassifierPrivate::addGeneralization(QGeneralization *generalization)
{
    // This is a read-write association end

    this->generalizations->insert(generalization);

    // Adjust subsetted property(ies)
    addOwnedElement(generalization);
}

void QClassifierPrivate::removeGeneralization(QGeneralization *generalization)
{
    // This is a read-write association end

    this->generalizations->remove(generalization);

    // Adjust subsetted property(ies)
    removeOwnedElement(generalization);
}

void QClassifierPrivate::addSubstitution(QSubstitution *substitution)
{
    // This is a read-write association end

    this->substitutions->insert(substitution);

    // Adjust subsetted property(ies)
    addOwnedElement(substitution);
    addClientDependency(substitution);
}

void QClassifierPrivate::removeSubstitution(QSubstitution *substitution)
{
    // This is a read-write association end

    this->substitutions->remove(substitution);

    // Adjust subsetted property(ies)
    removeOwnedElement(substitution);
    removeClientDependency(substitution);
}

/*!
    \class QClassifier

    \inmodule QtUml

    \brief A classifier is a classification of instances - it describes a set of instances that have features in common. A classifier can specify a generalization hierarchy by referencing its general classifiers.A classifier has the capability to own use cases. Although the owning classifier typically represents the subject to which the owned use cases apply, this is not necessarily the case. In principle, the same use case can be applied to multiple subjects, as identified by the subject association role of a use case.Classifier is defined to be a kind of templateable element so that a classifier can be parameterized. It is also defined to be a kind of parameterable element so that a classifier can be a formal template parameter.A classifier has the capability to own collaboration uses. These collaboration uses link a collaboration with the classifier to give a description of the workings of the classifier.
 */

QClassifier::QClassifier()
{
}

QClassifier::~QClassifier()
{
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QClassifier::isAbstract() const
{
    // This is a read-write attribute

    QTUML_D(const QClassifier);
    return d->isAbstract;
}

void QClassifier::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    QTUML_D(QClassifier);
    if (d->isAbstract != isAbstract) {
        d->setAbstract(isAbstract);
    }
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QClassifier::isFinalSpecialization() const
{
    // This is a read-write attribute

    QTUML_D(const QClassifier);
    return d->isFinalSpecialization;
}

void QClassifier::setFinalSpecialization(bool isFinalSpecialization)
{
    // This is a read-write attribute

    QTUML_D(QClassifier);
    if (d->isFinalSpecialization != isFinalSpecialization) {
        d->setFinalSpecialization(isFinalSpecialization);
    }
}

/*!
    References the use cases owned by this classifier.
 */
const QSet<QUseCase *> *QClassifier::ownedUseCases() const
{
    // This is a read-write association end

    QTUML_D(const QClassifier);
    return d->ownedUseCases;
}

void QClassifier::addOwnedUseCase(QUseCase *ownedUseCase)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (!d->ownedUseCases->contains(ownedUseCase)) {
        d->addOwnedUseCase(ownedUseCase);
    }
}

void QClassifier::removeOwnedUseCase(QUseCase *ownedUseCase)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (d->ownedUseCases->contains(ownedUseCase)) {
        d->removeOwnedUseCase(ownedUseCase);
    }
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
const QSet<QGeneralizationSet *> *QClassifier::powertypeExtents() const
{
    // This is a read-write association end

    QTUML_D(const QClassifier);
    return d->powertypeExtents;
}

void QClassifier::addPowertypeExtent(QGeneralizationSet *powertypeExtent)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (!d->powertypeExtents->contains(powertypeExtent)) {
        d->addPowertypeExtent(powertypeExtent);

        // Adjust opposite property
        powertypeExtent->setPowertype(this);
    }
}

void QClassifier::removePowertypeExtent(QGeneralizationSet *powertypeExtent)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (d->powertypeExtents->contains(powertypeExtent)) {
        d->removePowertypeExtent(powertypeExtent);

        // Adjust opposite property
        powertypeExtent->setPowertype(0);
    }
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
const QSet<QUseCase *> *QClassifier::useCases() const
{
    // This is a read-write association end

    QTUML_D(const QClassifier);
    return d->useCases;
}

void QClassifier::addUseCase(QUseCase *useCase)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (!d->useCases->contains(useCase)) {
        d->addUseCase(useCase);

        // Adjust opposite property
        useCase->addSubject(this);
    }
}

void QClassifier::removeUseCase(QUseCase *useCase)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (d->useCases->contains(useCase)) {
        d->removeUseCase(useCase);

        // Adjust opposite property
        useCase->removeSubject(this);
    }
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QClassifierTemplateParameter *QClassifier::templateParameter() const
{
    // This is a read-write association end

    QTUML_D(const QClassifier);
    return d->templateParameter;
}

void QClassifier::setTemplateParameter(QClassifierTemplateParameter *templateParameter)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (d->templateParameter != templateParameter) {
        d->setTemplateParameter(templateParameter);

        // Adjust opposite property
        templateParameter->setParameteredElement(this);
    }
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
const QSet<QClassifier *> *QClassifier::redefinedClassifiers() const
{
    // This is a read-write association end

    QTUML_D(const QClassifier);
    return d->redefinedClassifiers;
}

void QClassifier::addRedefinedClassifier(QClassifier *redefinedClassifier)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (!d->redefinedClassifiers->contains(redefinedClassifier)) {
        d->addRedefinedClassifier(redefinedClassifier);
    }
}

void QClassifier::removeRedefinedClassifier(QClassifier *redefinedClassifier)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (d->redefinedClassifiers->contains(redefinedClassifier)) {
        d->removeRedefinedClassifier(redefinedClassifier);
    }
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QRedefinableTemplateSignature *QClassifier::ownedTemplateSignature() const
{
    // This is a read-write association end

    QTUML_D(const QClassifier);
    return d->ownedTemplateSignature;
}

void QClassifier::setOwnedTemplateSignature(QRedefinableTemplateSignature *ownedTemplateSignature)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (d->ownedTemplateSignature != ownedTemplateSignature) {
        d->setOwnedTemplateSignature(ownedTemplateSignature);

        // Adjust opposite property
        ownedTemplateSignature->setClassifier(this);
    }
}

/*!
    References the collaboration uses owned by the classifier.
 */
const QSet<QCollaborationUse *> *QClassifier::collaborationUses() const
{
    // This is a read-write association end

    QTUML_D(const QClassifier);
    return d->collaborationUses;
}

void QClassifier::addCollaborationUse(QCollaborationUse *collaborationUse)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (!d->collaborationUses->contains(collaborationUse)) {
        d->addCollaborationUse(collaborationUse);
    }
}

void QClassifier::removeCollaborationUse(QCollaborationUse *collaborationUse)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (d->collaborationUses->contains(collaborationUse)) {
        d->removeCollaborationUse(collaborationUse);
    }
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
const QSet<QProperty *> *QClassifier::attributes() const
{
    // This is a read-only derived-union association end

    QTUML_D(const QClassifier);
    return d->attributes;
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
const QSet<QFeature *> *QClassifier::features() const
{
    // This is a read-only derived-union association end

    QTUML_D(const QClassifier);
    return d->features;
}

/*!
    Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.
 */
const QSet<QClassifier *> *QClassifier::generals() const
{
    // This is a read-write derived association end

    qWarning("QClassifier::generals: to be implemented (this is a derived associationend)");

    QTUML_D(const QClassifier);
    //return <derived-return>;
}

void QClassifier::addGeneral(QClassifier *general)
{
    // This is a read-write derived association end

    qWarning("QClassifier::addGeneral: to be implemented (this is a derived associationend)");

    QTUML_D(QClassifier);
    if (true /* <derived-inclusion-criteria> */) {
        // <derived-code>
    }
}

void QClassifier::removeGeneral(QClassifier *general)
{
    // This is a read-write derived association end

    qWarning("QClassifier::removeGeneral: to be implemented (this is a derived associationend)");

    QTUML_D(QClassifier);
    if (true /* <derived-exclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QCollaborationUse *QClassifier::representation() const
{
    // This is a read-write association end

    QTUML_D(const QClassifier);
    return d->representation;
}

void QClassifier::setRepresentation(QCollaborationUse *representation)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (d->representation != representation) {
        d->setRepresentation(representation);
    }
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
const QSet<QGeneralization *> *QClassifier::generalizations() const
{
    // This is a read-write association end

    QTUML_D(const QClassifier);
    return d->generalizations;
}

void QClassifier::addGeneralization(QGeneralization *generalization)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (!d->generalizations->contains(generalization)) {
        d->addGeneralization(generalization);

        // Adjust opposite property
        generalization->setSpecific(this);
    }
}

void QClassifier::removeGeneralization(QGeneralization *generalization)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (d->generalizations->contains(generalization)) {
        d->removeGeneralization(generalization);

        // Adjust opposite property
        generalization->setSpecific(0);
    }
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
const QSet<QNamedElement *> *QClassifier::inheritedMembers() const
{
    // This is a read-only derived association end

    qWarning("QClassifier::inheritedMembers: to be implemented (this is a derived associationend)");

    QTUML_D(const QClassifier);
    //return <derived-return>;
}

/*!
    References the substitutions that are owned by this Classifier.
 */
const QSet<QSubstitution *> *QClassifier::substitutions() const
{
    // This is a read-write association end

    QTUML_D(const QClassifier);
    return d->substitutions;
}

void QClassifier::addSubstitution(QSubstitution *substitution)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (!d->substitutions->contains(substitution)) {
        d->addSubstitution(substitution);

        // Adjust opposite property
        substitution->setSubstitutingClassifier(this);
    }
}

void QClassifier::removeSubstitution(QSubstitution *substitution)
{
    // This is a read-write association end

    QTUML_D(QClassifier);
    if (d->substitutions->contains(substitution)) {
        d->removeSubstitution(substitution);

        // Adjust opposite property
        substitution->setSubstitutingClassifier(0);
    }
}

/*!
    The query allFeatures() gives all of the features in the namespace of the classifier. In general, through mechanisms such as inheritance, this will be a larger set than feature.
 */
const QSet<QFeature *> *QClassifier::allFeatures() const
{
    qWarning("QClassifier::allFeatures: operation to be implemented");
}

/*!
    The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 */
const QSet<QClassifier *> *QClassifier::allParents() const
{
    qWarning("QClassifier::allParents: operation to be implemented");
}

/*!
    The query conformsTo() gives true for a classifier that defines a type that conforms to another. This is used, for example, in the specification of signature conformance for operations.
 */
bool QClassifier::conformsTo(const QClassifier *other) const
{
    qWarning("QClassifier::conformsTo: operation to be implemented");
}

/*!
    The query hasVisibilityOf() determines whether a named element is visible in the classifier. By default all are visible. It is only called when the argument is something owned by a parent.
 */
bool QClassifier::hasVisibilityOf(const QNamedElement *n) const
{
    qWarning("QClassifier::hasVisibilityOf: operation to be implemented");
}

/*!
    The inherit operation is overridden to exclude redefined properties.The query inherit() defines how to inherit a set of elements. Here the operation is defined to inherit them all. It is intended to be redefined in circumstances where inheritance is affected by redefinition.
 */
const QSet<QNamedElement *> *QClassifier::inherit(const QSet<QNamedElement *> *inhs) const
{
    qWarning("QClassifier::inherit: operation to be implemented");
}

/*!
    The query inheritableMembers() gives all of the members of a classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
 */
const QSet<QNamedElement *> *QClassifier::inheritableMembers(const QClassifier *c) const
{
    qWarning("QClassifier::inheritableMembers: operation to be implemented");
}

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QClassifier::isTemplate() const
{
    qWarning("QClassifier::isTemplate: operation to be implemented");
}

/*!
    The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
 */
bool QClassifier::maySpecializeType(const QClassifier *c) const
{
    qWarning("QClassifier::maySpecializeType: operation to be implemented");
}

/*!
    The query parents() gives all of the immediate ancestors of a generalized Classifier.
 */
const QSet<QClassifier *> *QClassifier::parents() const
{
    qWarning("QClassifier::parents: operation to be implemented");
}

QT_END_NAMESPACE_QTUML

