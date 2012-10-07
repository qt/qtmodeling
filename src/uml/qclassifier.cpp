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

class QClassifierPrivate
{
public:
    explicit QClassifierPrivate();
    virtual ~QClassifierPrivate();

    bool isAbstract;
    bool isFinalSpecialization;
    QSet<QProperty *> *attributes;
    QSet<QCollaborationUse *> *collaborationUses;
    QSet<QFeature *> *features;
    QSet<QGeneralization *> *generalizations;
    QRedefinableTemplateSignature *ownedTemplateSignature;
    QSet<QUseCase *> *ownedUseCases;
    QSet<QGeneralizationSet *> *powertypeExtents;
    QSet<QClassifier *> *redefinedClassifiers;
    QCollaborationUse *representation;
    QSet<QSubstitution *> *substitutions;
    QClassifierTemplateParameter *templateParameter;
    QSet<QUseCase *> *useCases;
};

QClassifierPrivate::QClassifierPrivate() :
    isAbstract(false),
    isFinalSpecialization(false),
    attributes(new QSet<QProperty *>),
    collaborationUses(new QSet<QCollaborationUse *>),
    features(new QSet<QFeature *>),
    generalizations(new QSet<QGeneralization *>),
    ownedTemplateSignature(0),
    ownedUseCases(new QSet<QUseCase *>),
    powertypeExtents(new QSet<QGeneralizationSet *>),
    redefinedClassifiers(new QSet<QClassifier *>),
    representation(0),
    substitutions(new QSet<QSubstitution *>),
    templateParameter(0),
    useCases(new QSet<QUseCase *>)
{
}

QClassifierPrivate::~QClassifierPrivate()
{
    delete attributes;
    delete collaborationUses;
    delete features;
    delete generalizations;
    delete ownedUseCases;
    delete powertypeExtents;
    delete redefinedClassifiers;
    delete substitutions;
    delete useCases;
}

/*!
    \class QClassifier

    \inmodule QtUml

    \brief A classifier is a classification of instances - it describes a set of instances that have features in common. A classifier can specify a generalization hierarchy by referencing its general classifiers.A classifier has the capability to own use cases. Although the owning classifier typically represents the subject to which the owned use cases apply, this is not necessarily the case. In principle, the same use case can be applied to multiple subjects, as identified by the subject association role of a use case.Classifier is defined to be a kind of templateable element so that a classifier can be parameterized. It is also defined to be a kind of parameterable element so that a classifier can be a formal template parameter.A classifier has the capability to own collaboration uses. These collaboration uses link a collaboration with the classifier to give a description of the workings of the classifier.
 */

QClassifier::QClassifier()
    : d_ptr(new QClassifierPrivate)
{
}

QClassifier::~QClassifier()
{
    delete d_ptr;
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QClassifier::isAbstract() const
{
    return d_ptr->isAbstract;
}

void QClassifier::setAbstract(bool isAbstract)
{
    d_ptr->isAbstract = isAbstract;
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QClassifier::isFinalSpecialization() const
{
    return d_ptr->isFinalSpecialization;
}

void QClassifier::setFinalSpecialization(bool isFinalSpecialization)
{
    d_ptr->isFinalSpecialization = isFinalSpecialization;
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
const QSet<QProperty *> *QClassifier::attributes() const
{
    return d_ptr->attributes;
}

void QClassifier::addAttribute(const QProperty *attribute)
{
    d_ptr->attributes->insert(const_cast<QProperty *>(attribute));
    // Adjust subsetted property(ies)
    addFeature(attribute);
}

void QClassifier::removeAttribute(const QProperty *attribute)
{
    d_ptr->attributes->remove(const_cast<QProperty *>(attribute));
    // Adjust subsetted property(ies)
    removeFeature(attribute);
}

/*!
    References the collaboration uses owned by the classifier.
 */
const QSet<QCollaborationUse *> *QClassifier::collaborationUses() const
{
    return d_ptr->collaborationUses;
}

void QClassifier::addCollaborationUse(const QCollaborationUse *collaborationUse)
{
    d_ptr->collaborationUses->insert(const_cast<QCollaborationUse *>(collaborationUse));
    // Adjust subsetted property(ies)
    addOwnedElement(collaborationUse);
}

void QClassifier::removeCollaborationUse(const QCollaborationUse *collaborationUse)
{
    d_ptr->collaborationUses->remove(const_cast<QCollaborationUse *>(collaborationUse));
    // Adjust subsetted property(ies)
    removeOwnedElement(collaborationUse);
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
const QSet<QFeature *> *QClassifier::features() const
{
    return d_ptr->features;
}

void QClassifier::addFeature(const QFeature *feature)
{
    d_ptr->features->insert(const_cast<QFeature *>(feature));
    // Adjust subsetted property(ies)
    addMember(feature);
}

void QClassifier::removeFeature(const QFeature *feature)
{
    d_ptr->features->remove(const_cast<QFeature *>(feature));
    // Adjust subsetted property(ies)
    removeMember(feature);
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
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
const QSet<QGeneralization *> *QClassifier::generalizations() const
{
    return d_ptr->generalizations;
}

void QClassifier::addGeneralization(const QGeneralization *generalization)
{
    d_ptr->generalizations->insert(const_cast<QGeneralization *>(generalization));
    // Adjust subsetted property(ies)
    addOwnedElement(generalization);
}

void QClassifier::removeGeneralization(const QGeneralization *generalization)
{
    d_ptr->generalizations->remove(const_cast<QGeneralization *>(generalization));
    // Adjust subsetted property(ies)
    removeOwnedElement(generalization);
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
const QSet<QNamedElement *> *QClassifier::inheritedMembers() const
{
    qWarning("QClassifier::inheritedMembers: to be implemented (this is a derived associationend)");
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QRedefinableTemplateSignature *QClassifier::ownedTemplateSignature() const
{
    return d_ptr->ownedTemplateSignature;
}

void QClassifier::setOwnedTemplateSignature(const QRedefinableTemplateSignature *ownedTemplateSignature)
{
    d_ptr->ownedTemplateSignature = const_cast<QRedefinableTemplateSignature *>(ownedTemplateSignature);
}

/*!
    References the use cases owned by this classifier.
 */
const QSet<QUseCase *> *QClassifier::ownedUseCases() const
{
    return d_ptr->ownedUseCases;
}

void QClassifier::addOwnedUseCase(const QUseCase *ownedUseCase)
{
    d_ptr->ownedUseCases->insert(const_cast<QUseCase *>(ownedUseCase));
    // Adjust subsetted property(ies)
    addOwnedMember(ownedUseCase);
}

void QClassifier::removeOwnedUseCase(const QUseCase *ownedUseCase)
{
    d_ptr->ownedUseCases->remove(const_cast<QUseCase *>(ownedUseCase));
    // Adjust subsetted property(ies)
    removeOwnedMember(ownedUseCase);
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
const QSet<QGeneralizationSet *> *QClassifier::powertypeExtents() const
{
    return d_ptr->powertypeExtents;
}

void QClassifier::addPowertypeExtent(const QGeneralizationSet *powertypeExtent)
{
    d_ptr->powertypeExtents->insert(const_cast<QGeneralizationSet *>(powertypeExtent));
}

void QClassifier::removePowertypeExtent(const QGeneralizationSet *powertypeExtent)
{
    d_ptr->powertypeExtents->remove(const_cast<QGeneralizationSet *>(powertypeExtent));
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
const QSet<QClassifier *> *QClassifier::redefinedClassifiers() const
{
    return d_ptr->redefinedClassifiers;
}

void QClassifier::addRedefinedClassifier(const QClassifier *redefinedClassifier)
{
    d_ptr->redefinedClassifiers->insert(const_cast<QClassifier *>(redefinedClassifier));
    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedClassifier);
}

void QClassifier::removeRedefinedClassifier(const QClassifier *redefinedClassifier)
{
    d_ptr->redefinedClassifiers->remove(const_cast<QClassifier *>(redefinedClassifier));
    // Adjust subsetted property(ies)
    removeRedefinedElement(redefinedClassifier);
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QCollaborationUse *QClassifier::representation() const
{
    return d_ptr->representation;
}

void QClassifier::setRepresentation(const QCollaborationUse *representation)
{
    d_ptr->representation = const_cast<QCollaborationUse *>(representation);
}

/*!
    References the substitutions that are owned by this Classifier.
 */
const QSet<QSubstitution *> *QClassifier::substitutions() const
{
    return d_ptr->substitutions;
}

void QClassifier::addSubstitution(const QSubstitution *substitution)
{
    d_ptr->substitutions->insert(const_cast<QSubstitution *>(substitution));
    // Adjust subsetted property(ies)
    addOwnedElement(substitution);
    addClientDependency(substitution);
}

void QClassifier::removeSubstitution(const QSubstitution *substitution)
{
    d_ptr->substitutions->remove(const_cast<QSubstitution *>(substitution));
    // Adjust subsetted property(ies)
    removeOwnedElement(substitution);
    removeClientDependency(substitution);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QClassifierTemplateParameter *QClassifier::templateParameter() const
{
    return d_ptr->templateParameter;
}

void QClassifier::setTemplateParameter(const QClassifierTemplateParameter *templateParameter)
{
    d_ptr->templateParameter = const_cast<QClassifierTemplateParameter *>(templateParameter);
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
const QSet<QUseCase *> *QClassifier::useCases() const
{
    return d_ptr->useCases;
}

void QClassifier::addUseCase(const QUseCase *useCase)
{
    d_ptr->useCases->insert(const_cast<QUseCase *>(useCase));
}

void QClassifier::removeUseCase(const QUseCase *useCase)
{
    d_ptr->useCases->remove(const_cast<QUseCase *>(useCase));
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

