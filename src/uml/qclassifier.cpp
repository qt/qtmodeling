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
#include "qnamespace_p.h"
#include "qelement_p.h"
#include "qnamespace_p.h"
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
    delete collaborationUses;
    delete attributes;
    delete features;
    delete generalizations;
    delete substitutions;
}

void QClassifierPrivate::setAbstract(bool isAbstract)
{
    this->isAbstract = isAbstract;
}

void QClassifierPrivate::setFinalSpecialization(bool isFinalSpecialization)
{
    this->isFinalSpecialization = isFinalSpecialization;
}

void QClassifierPrivate::addOwnedUseCase(const QUseCase *ownedUseCase)
{
    this->ownedUseCases->insert(const_cast<QUseCase *>(ownedUseCase));

    // Adjust subsetted property(ies)
    addOwnedMember(ownedUseCase);
}

void QClassifierPrivate::removeOwnedUseCase(const QUseCase *ownedUseCase)
{
    this->ownedUseCases->remove(const_cast<QUseCase *>(ownedUseCase));

    // Adjust subsetted property(ies)
    removeOwnedMember(ownedUseCase);
}

void QClassifierPrivate::addPowertypeExtent(const QGeneralizationSet *powertypeExtent)
{
    this->powertypeExtents->insert(const_cast<QGeneralizationSet *>(powertypeExtent));
}

void QClassifierPrivate::removePowertypeExtent(const QGeneralizationSet *powertypeExtent)
{
    this->powertypeExtents->remove(const_cast<QGeneralizationSet *>(powertypeExtent));
}

void QClassifierPrivate::addUseCase(const QUseCase *useCase)
{
    this->useCases->insert(const_cast<QUseCase *>(useCase));
}

void QClassifierPrivate::removeUseCase(const QUseCase *useCase)
{
    this->useCases->remove(const_cast<QUseCase *>(useCase));
}

void QClassifierPrivate::setTemplateParameter(const QClassifierTemplateParameter *templateParameter)
{
    this->templateParameter = const_cast<QClassifierTemplateParameter *>(templateParameter);
}

void QClassifierPrivate::addRedefinedClassifier(const QClassifier *redefinedClassifier)
{
    this->redefinedClassifiers->insert(const_cast<QClassifier *>(redefinedClassifier));

    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedClassifier);
}

void QClassifierPrivate::removeRedefinedClassifier(const QClassifier *redefinedClassifier)
{
    this->redefinedClassifiers->remove(const_cast<QClassifier *>(redefinedClassifier));

    // Adjust subsetted property(ies)
    removeRedefinedElement(redefinedClassifier);
}

void QClassifierPrivate::setOwnedTemplateSignature(const QRedefinableTemplateSignature *ownedTemplateSignature)
{
    this->ownedTemplateSignature = const_cast<QRedefinableTemplateSignature *>(ownedTemplateSignature);
}

void QClassifierPrivate::addCollaborationUse(const QCollaborationUse *collaborationUse)
{
    this->collaborationUses->insert(const_cast<QCollaborationUse *>(collaborationUse));

    // Adjust subsetted property(ies)
    addOwnedElement(collaborationUse);
}

void QClassifierPrivate::removeCollaborationUse(const QCollaborationUse *collaborationUse)
{
    this->collaborationUses->remove(const_cast<QCollaborationUse *>(collaborationUse));

    // Adjust subsetted property(ies)
    removeOwnedElement(collaborationUse);
}

void QClassifierPrivate::addAttribute(const QProperty *attribute)
{
    this->attributes->insert(const_cast<QProperty *>(attribute));

    // Adjust subsetted property(ies)
    addFeature(attribute);
}

void QClassifierPrivate::removeAttribute(const QProperty *attribute)
{
    this->attributes->remove(const_cast<QProperty *>(attribute));

    // Adjust subsetted property(ies)
    removeFeature(attribute);
}

void QClassifierPrivate::addFeature(const QFeature *feature)
{
    this->features->insert(const_cast<QFeature *>(feature));

    // Adjust subsetted property(ies)
    addMember(feature);
}

void QClassifierPrivate::removeFeature(const QFeature *feature)
{
    this->features->remove(const_cast<QFeature *>(feature));

    // Adjust subsetted property(ies)
    removeMember(feature);
}

void QClassifierPrivate::setRepresentation(const QCollaborationUse *representation)
{
    // Adjust subsetted property(ies)
    removeCollaborationUse(this->representation);

    this->representation = const_cast<QCollaborationUse *>(representation);

    // Adjust subsetted property(ies)
    addCollaborationUse(representation);
}

void QClassifierPrivate::addGeneralization(const QGeneralization *generalization)
{
    this->generalizations->insert(const_cast<QGeneralization *>(generalization));

    // Adjust subsetted property(ies)
    addOwnedElement(generalization);
}

void QClassifierPrivate::removeGeneralization(const QGeneralization *generalization)
{
    this->generalizations->remove(const_cast<QGeneralization *>(generalization));

    // Adjust subsetted property(ies)
    removeOwnedElement(generalization);
}

void QClassifierPrivate::addSubstitution(const QSubstitution *substitution)
{
    this->substitutions->insert(const_cast<QSubstitution *>(substitution));

    // Adjust subsetted property(ies)
    addOwnedElement(substitution);
    addClientDependency(substitution);
}

void QClassifierPrivate::removeSubstitution(const QSubstitution *substitution)
{
    this->substitutions->remove(const_cast<QSubstitution *>(substitution));

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
    d_umlptr = new QClassifierPrivate;
}

QClassifier::~QClassifier()
{
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QClassifier::isAbstract() const
{
    Q_D(const QClassifier);
    return d->isAbstract;
}

void QClassifier::setAbstract(bool isAbstract)
{
    Q_D(QClassifier);
    d->setAbstract(isAbstract);
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QClassifier::isFinalSpecialization() const
{
    Q_D(const QClassifier);
    return d->isFinalSpecialization;
}

void QClassifier::setFinalSpecialization(bool isFinalSpecialization)
{
    Q_D(QClassifier);
    d->setFinalSpecialization(isFinalSpecialization);
}

/*!
    References the use cases owned by this classifier.
 */
const QSet<QUseCase *> *QClassifier::ownedUseCases() const
{
    Q_D(const QClassifier);
    return d->ownedUseCases;
}

void QClassifier::addOwnedUseCase(const QUseCase *ownedUseCase)
{
    Q_D(QClassifier);
    d->addOwnedUseCase(const_cast<QUseCase *>(ownedUseCase));
}

void QClassifier::removeOwnedUseCase(const QUseCase *ownedUseCase)
{
    Q_D(QClassifier);
    d->removeOwnedUseCase(const_cast<QUseCase *>(ownedUseCase));
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
const QSet<QGeneralizationSet *> *QClassifier::powertypeExtents() const
{
    Q_D(const QClassifier);
    return d->powertypeExtents;
}

void QClassifier::addPowertypeExtent(const QGeneralizationSet *powertypeExtent)
{
    Q_D(QClassifier);
    d->addPowertypeExtent(const_cast<QGeneralizationSet *>(powertypeExtent));
}

void QClassifier::removePowertypeExtent(const QGeneralizationSet *powertypeExtent)
{
    Q_D(QClassifier);
    d->removePowertypeExtent(const_cast<QGeneralizationSet *>(powertypeExtent));
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
const QSet<QUseCase *> *QClassifier::useCases() const
{
    Q_D(const QClassifier);
    return d->useCases;
}

void QClassifier::addUseCase(const QUseCase *useCase)
{
    Q_D(QClassifier);
    d->addUseCase(const_cast<QUseCase *>(useCase));
}

void QClassifier::removeUseCase(const QUseCase *useCase)
{
    Q_D(QClassifier);
    d->removeUseCase(const_cast<QUseCase *>(useCase));
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QClassifierTemplateParameter *QClassifier::templateParameter() const
{
    Q_D(const QClassifier);
    return d->templateParameter;
}

void QClassifier::setTemplateParameter(const QClassifierTemplateParameter *templateParameter)
{
    Q_D(QClassifier);
    d->setTemplateParameter(const_cast<QClassifierTemplateParameter *>(templateParameter));
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
const QSet<QClassifier *> *QClassifier::redefinedClassifiers() const
{
    Q_D(const QClassifier);
    return d->redefinedClassifiers;
}

void QClassifier::addRedefinedClassifier(const QClassifier *redefinedClassifier)
{
    Q_D(QClassifier);
    d->addRedefinedClassifier(const_cast<QClassifier *>(redefinedClassifier));
}

void QClassifier::removeRedefinedClassifier(const QClassifier *redefinedClassifier)
{
    Q_D(QClassifier);
    d->removeRedefinedClassifier(const_cast<QClassifier *>(redefinedClassifier));
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QRedefinableTemplateSignature *QClassifier::ownedTemplateSignature() const
{
    Q_D(const QClassifier);
    return d->ownedTemplateSignature;
}

void QClassifier::setOwnedTemplateSignature(const QRedefinableTemplateSignature *ownedTemplateSignature)
{
    Q_D(QClassifier);
    d->setOwnedTemplateSignature(const_cast<QRedefinableTemplateSignature *>(ownedTemplateSignature));
}

/*!
    References the collaboration uses owned by the classifier.
 */
const QSet<QCollaborationUse *> *QClassifier::collaborationUses() const
{
    Q_D(const QClassifier);
    return d->collaborationUses;
}

void QClassifier::addCollaborationUse(const QCollaborationUse *collaborationUse)
{
    Q_D(QClassifier);
    d->addCollaborationUse(const_cast<QCollaborationUse *>(collaborationUse));
}

void QClassifier::removeCollaborationUse(const QCollaborationUse *collaborationUse)
{
    Q_D(QClassifier);
    d->removeCollaborationUse(const_cast<QCollaborationUse *>(collaborationUse));
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
const QSet<QProperty *> *QClassifier::attributes() const
{
    Q_D(const QClassifier);
    return d->attributes;
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
const QSet<QFeature *> *QClassifier::features() const
{
    Q_D(const QClassifier);
    return d->features;
}

/*!
    Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.
 */
const QSet<QClassifier *> *QClassifier::generals() const
{
    qWarning("QClassifier::generals: to be implemented (this is a derived associationend)");
}

void QClassifier::addGeneral(const QClassifier *general)
{
    qWarning("QClassifier::addGeneral: to be implemented (this is a derived associationend)");
}

void QClassifier::removeGeneral(const QClassifier *general)
{
    qWarning("QClassifier::removeGeneral: to be implemented (this is a derived associationend)");
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QCollaborationUse *QClassifier::representation() const
{
    Q_D(const QClassifier);
    return d->representation;
}

void QClassifier::setRepresentation(const QCollaborationUse *representation)
{
    Q_D(QClassifier);
    d->setRepresentation(const_cast<QCollaborationUse *>(representation));
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
const QSet<QGeneralization *> *QClassifier::generalizations() const
{
    Q_D(const QClassifier);
    return d->generalizations;
}

void QClassifier::addGeneralization(const QGeneralization *generalization)
{
    Q_D(QClassifier);
    d->addGeneralization(const_cast<QGeneralization *>(generalization));
}

void QClassifier::removeGeneralization(const QGeneralization *generalization)
{
    Q_D(QClassifier);
    d->removeGeneralization(const_cast<QGeneralization *>(generalization));
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
const QSet<QNamedElement *> *QClassifier::inheritedMembers() const
{
    qWarning("QClassifier::inheritedMembers: to be implemented (this is a derived associationend)");
}

/*!
    References the substitutions that are owned by this Classifier.
 */
const QSet<QSubstitution *> *QClassifier::substitutions() const
{
    Q_D(const QClassifier);
    return d->substitutions;
}

void QClassifier::addSubstitution(const QSubstitution *substitution)
{
    Q_D(QClassifier);
    d->addSubstitution(const_cast<QSubstitution *>(substitution));
}

void QClassifier::removeSubstitution(const QSubstitution *substitution)
{
    Q_D(QClassifier);
    d->removeSubstitution(const_cast<QSubstitution *>(substitution));
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
