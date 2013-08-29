/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "umlclassifier_p.h"

#include "private/umlclassifiertemplateparameter_p.h"
#include "private/umlcollaborationuse_p.h"
#include "private/umlfeature_p.h"
#include "private/umlgeneralization_p.h"
#include "private/umlgeneralizationset_p.h"
#include "private/umlnamedelement_p.h"
#include "private/umlproperty_p.h"
#include "private/umlredefinabletemplatesignature_p.h"
#include "private/umlsubstitution_p.h"
#include "private/umlusecase_p.h"

/*!
    \class UmlClassifier

    \inmodule QtUml

    \brief A classifier is a classification of instances - it describes a set of instances that have features in common. A classifier can specify a generalization hierarchy by referencing its general classifiers.A classifier has the capability to own use cases. Although the owning classifier typically represents the subject to which the owned use cases apply, this is not necessarily the case. In principle, the same use case can be applied to multiple subjects, as identified by the subject association role of a use case.Classifier is defined to be a kind of templateable element so that a classifier can be parameterized. It is also defined to be a kind of parameterable element so that a classifier can be a formal template parameter.A classifier has the capability to own collaboration uses. These collaboration uses link a collaboration with the classifier to give a description of the workings of the classifier.
 */

UmlClassifier::UmlClassifier() :
    _isAbstract(false),
    _isFinalSpecialization(false),
    _ownedTemplateSignature(0),
    _representation(0),
    _templateParameter(0)
{
}

// OWNED ATTRIBUTES

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
const QSet<UmlProperty *> UmlClassifier::attribute() const
{
    // This is a read-only derived union association end

    return _attribute;
}

void UmlClassifier::addAttribute(UmlProperty *attribute)
{
    // This is a read-only derived union association end

    if (!_attribute.contains(attribute)) {
        _attribute.insert(attribute);

        // Adjust subsetted properties
        addFeature(attribute);
    }
}

void UmlClassifier::removeAttribute(UmlProperty *attribute)
{
    // This is a read-only derived union association end

    if (_attribute.contains(attribute)) {
        _attribute.remove(attribute);

        // Adjust subsetted properties
        removeFeature(attribute);
    }
}

/*!
    References the collaboration uses owned by the classifier.
 */
const QSet<UmlCollaborationUse *> UmlClassifier::collaborationUse() const
{
    // This is a read-write association end

    return _collaborationUse;
}

void UmlClassifier::addCollaborationUse(UmlCollaborationUse *collaborationUse)
{
    // This is a read-write association end

    if (!_collaborationUse.contains(collaborationUse)) {
        _collaborationUse.insert(collaborationUse);

        // Adjust subsetted properties
        addOwnedElement(collaborationUse);
    }
}

void UmlClassifier::removeCollaborationUse(UmlCollaborationUse *collaborationUse)
{
    // This is a read-write association end

    if (_collaborationUse.contains(collaborationUse)) {
        _collaborationUse.remove(collaborationUse);

        // Adjust subsetted properties
        removeOwnedElement(collaborationUse);
    }
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
const QSet<UmlFeature *> UmlClassifier::feature() const
{
    // This is a read-only derived union association end

    return _feature;
}

void UmlClassifier::addFeature(UmlFeature *feature)
{
    // This is a read-only derived union association end

    if (!_feature.contains(feature)) {
        _feature.insert(feature);

        // Adjust subsetted properties
        addMember(feature);

        // Adjust opposite properties
        if (feature) {
            feature->addFeaturingClassifier(this);
        }
    }
}

void UmlClassifier::removeFeature(UmlFeature *feature)
{
    // This is a read-only derived union association end

    if (_feature.contains(feature)) {
        _feature.remove(feature);

        // Adjust subsetted properties
        removeMember(feature);

        // Adjust opposite properties
        if (feature) {
            feature->removeFeaturingClassifier(this);
        }
    }
}

/*!
    Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.
 */
const QSet<UmlClassifier *> UmlClassifier::general() const
{
    // This is a read-write derived association end

    qWarning("UmlClassifier::general(): to be implemented (this is a derived association end)");

    return QSet<UmlClassifier *>();
}

void UmlClassifier::addGeneral(UmlClassifier *general)
{
    // This is a read-write derived association end

    qWarning("UmlClassifier::general(): to be implemented (this is a derived association end)");
    Q_UNUSED(general);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void UmlClassifier::removeGeneral(UmlClassifier *general)
{
    // This is a read-write derived association end

    qWarning("UmlClassifier::general(): to be implemented (this is a derived association end)");
    Q_UNUSED(general);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
const QSet<UmlGeneralization *> UmlClassifier::generalization() const
{
    // This is a read-write association end

    return _generalization;
}

void UmlClassifier::addGeneralization(UmlGeneralization *generalization)
{
    // This is a read-write association end

    if (!_generalization.contains(generalization)) {
        _generalization.insert(generalization);

        // Adjust subsetted properties
        addOwnedElement(generalization);

        // Adjust opposite properties
        if (generalization) {
            generalization->setSpecific(this);
        }
    }
}

void UmlClassifier::removeGeneralization(UmlGeneralization *generalization)
{
    // This is a read-write association end

    if (_generalization.contains(generalization)) {
        _generalization.remove(generalization);

        // Adjust subsetted properties
        removeOwnedElement(generalization);

        // Adjust opposite properties
        if (generalization) {
            generalization->setSpecific(0);
        }
    }
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
const QSet<UmlNamedElement *> UmlClassifier::inheritedMember() const
{
    // This is a read-only derived association end

    qWarning("UmlClassifier::inheritedMember(): to be implemented (this is a derived association end)");

    return QSet<UmlNamedElement *>();
}

void UmlClassifier::addInheritedMember(UmlNamedElement *inheritedMember)
{
    // This is a read-only derived association end

    qWarning("UmlClassifier::inheritedMember(): to be implemented (this is a derived association end)");
    Q_UNUSED(inheritedMember);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addMember(inheritedMember);
    }
}

void UmlClassifier::removeInheritedMember(UmlNamedElement *inheritedMember)
{
    // This is a read-only derived association end

    qWarning("UmlClassifier::inheritedMember(): to be implemented (this is a derived association end)");
    Q_UNUSED(inheritedMember);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removeMember(inheritedMember);
    }
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool UmlClassifier::isAbstract() const
{
    // This is a read-write property

    return _isAbstract;
}

void UmlClassifier::setAbstract(bool isAbstract)
{
    // This is a read-write property

    if (_isAbstract != isAbstract) {
        _isAbstract = isAbstract;
    }
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool UmlClassifier::isFinalSpecialization() const
{
    // This is a read-write property

    return _isFinalSpecialization;
}

void UmlClassifier::setFinalSpecialization(bool isFinalSpecialization)
{
    // This is a read-write property

    if (_isFinalSpecialization != isFinalSpecialization) {
        _isFinalSpecialization = isFinalSpecialization;
    }
}

/*!
    The optional template signature specifying the formal template parameters.
 */
UmlRedefinableTemplateSignature *UmlClassifier::ownedTemplateSignature() const
{
    // This is a read-write association end

    return _ownedTemplateSignature;
}

void UmlClassifier::setOwnedTemplateSignature(UmlRedefinableTemplateSignature *ownedTemplateSignature)
{
    // This is a read-write association end

    if (_ownedTemplateSignature != ownedTemplateSignature) {
        _ownedTemplateSignature = ownedTemplateSignature;
    }
}

/*!
    References the use cases owned by this classifier.
 */
const QSet<UmlUseCase *> UmlClassifier::ownedUseCase() const
{
    // This is a read-write association end

    return _ownedUseCase;
}

void UmlClassifier::addOwnedUseCase(UmlUseCase *ownedUseCase)
{
    // This is a read-write association end

    if (!_ownedUseCase.contains(ownedUseCase)) {
        _ownedUseCase.insert(ownedUseCase);

        // Adjust subsetted properties
        addOwnedMember(ownedUseCase);
    }
}

void UmlClassifier::removeOwnedUseCase(UmlUseCase *ownedUseCase)
{
    // This is a read-write association end

    if (_ownedUseCase.contains(ownedUseCase)) {
        _ownedUseCase.remove(ownedUseCase);

        // Adjust subsetted properties
        removeOwnedMember(ownedUseCase);
    }
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
const QSet<UmlGeneralizationSet *> UmlClassifier::powertypeExtent() const
{
    // This is a read-write association end

    return _powertypeExtent;
}

void UmlClassifier::addPowertypeExtent(UmlGeneralizationSet *powertypeExtent)
{
    // This is a read-write association end

    if (!_powertypeExtent.contains(powertypeExtent)) {
        _powertypeExtent.insert(powertypeExtent);

        // Adjust opposite properties
        if (powertypeExtent) {
            powertypeExtent->setPowertype(this);
        }
    }
}

void UmlClassifier::removePowertypeExtent(UmlGeneralizationSet *powertypeExtent)
{
    // This is a read-write association end

    if (_powertypeExtent.contains(powertypeExtent)) {
        _powertypeExtent.remove(powertypeExtent);

        // Adjust opposite properties
        if (powertypeExtent) {
            powertypeExtent->setPowertype(0);
        }
    }
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
const QSet<UmlClassifier *> UmlClassifier::redefinedClassifier() const
{
    // This is a read-write association end

    return _redefinedClassifier;
}

void UmlClassifier::addRedefinedClassifier(UmlClassifier *redefinedClassifier)
{
    // This is a read-write association end

    if (!_redefinedClassifier.contains(redefinedClassifier)) {
        _redefinedClassifier.insert(redefinedClassifier);

        // Adjust subsetted properties
        addRedefinedElement(redefinedClassifier);
    }
}

void UmlClassifier::removeRedefinedClassifier(UmlClassifier *redefinedClassifier)
{
    // This is a read-write association end

    if (_redefinedClassifier.contains(redefinedClassifier)) {
        _redefinedClassifier.remove(redefinedClassifier);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedClassifier);
    }
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
UmlCollaborationUse *UmlClassifier::representation() const
{
    // This is a read-write association end

    return _representation;
}

void UmlClassifier::setRepresentation(UmlCollaborationUse *representation)
{
    // This is a read-write association end

    if (_representation != representation) {
        // Adjust subsetted properties
        removeCollaborationUse(_representation);

        _representation = representation;

        // Adjust subsetted properties
        if (representation) {
            addCollaborationUse(representation);
        }
    }
}

/*!
    References the substitutions that are owned by this Classifier.
 */
const QSet<UmlSubstitution *> UmlClassifier::substitution() const
{
    // This is a read-write association end

    return _substitution;
}

void UmlClassifier::addSubstitution(UmlSubstitution *substitution)
{
    // This is a read-write association end

    if (!_substitution.contains(substitution)) {
        _substitution.insert(substitution);

        // Adjust subsetted properties
        addOwnedElement(substitution);
        addClientDependency(substitution);

        // Adjust opposite properties
        if (substitution) {
            substitution->setSubstitutingClassifier(this);
        }
    }
}

void UmlClassifier::removeSubstitution(UmlSubstitution *substitution)
{
    // This is a read-write association end

    if (_substitution.contains(substitution)) {
        _substitution.remove(substitution);

        // Adjust subsetted properties
        removeOwnedElement(substitution);
        removeClientDependency(substitution);

        // Adjust opposite properties
        if (substitution) {
            substitution->setSubstitutingClassifier(0);
        }
    }
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
UmlClassifierTemplateParameter *UmlClassifier::templateParameter() const
{
    // This is a read-write association end

    return _templateParameter;
}

void UmlClassifier::setTemplateParameter(UmlClassifierTemplateParameter *templateParameter)
{
    // This is a read-write association end

    if (_templateParameter != templateParameter) {
        _templateParameter = templateParameter;
    }
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
const QSet<UmlUseCase *> UmlClassifier::useCase() const
{
    // This is a read-write association end

    return _useCase;
}

void UmlClassifier::addUseCase(UmlUseCase *useCase)
{
    // This is a read-write association end

    if (!_useCase.contains(useCase)) {
        _useCase.insert(useCase);

        // Adjust opposite properties
        if (useCase) {
            useCase->addSubject(this);
        }
    }
}

void UmlClassifier::removeUseCase(UmlUseCase *useCase)
{
    // This is a read-write association end

    if (_useCase.contains(useCase)) {
        _useCase.remove(useCase);

        // Adjust opposite properties
        if (useCase) {
            useCase->removeSubject(this);
        }
    }
}

// OPERATIONS

/*!
    The query allFeatures() gives all of the features in the namespace of the classifier. In general, through mechanisms such as inheritance, this will be a larger set than feature.
 */
QSet<UmlFeature *> UmlClassifier::allFeatures(
    ) const
{
    qWarning("UmlClassifier::allFeatures(): to be implemented (operation)");

    return QSet<UmlFeature *> ();
}

/*!
    The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 */
QSet<UmlClassifier *> UmlClassifier::allParents(
    ) const
{
    qWarning("UmlClassifier::allParents(): to be implemented (operation)");

    return QSet<UmlClassifier *> ();
}

/*!
    The query conformsTo() gives true for a classifier that defines a type that conforms to another. This is used, for example, in the specification of signature conformance for operations.
 */
bool UmlClassifier::conformsTo(
    UmlClassifier *other) const
{
    qWarning("UmlClassifier::conformsTo(): to be implemented (operation)");

    Q_UNUSED(other);
    return bool ();
}

/*!
    The query hasVisibilityOf() determines whether a named element is visible in the classifier. By default all are visible. It is only called when the argument is something owned by a parent.
 */
bool UmlClassifier::hasVisibilityOf(
    UmlNamedElement *n) const
{
    qWarning("UmlClassifier::hasVisibilityOf(): to be implemented (operation)");

    Q_UNUSED(n);
    return bool ();
}

/*!
    The inherit operation is overridden to exclude redefined properties.The query inherit() defines how to inherit a set of elements. Here the operation is defined to inherit them all. It is intended to be redefined in circumstances where inheritance is affected by redefinition.
 */
QSet<UmlNamedElement *> UmlClassifier::inherit(
    QSet<UmlNamedElement *> inhs) const
{
    qWarning("UmlClassifier::inherit(): to be implemented (operation)");

    Q_UNUSED(inhs);
    return QSet<UmlNamedElement *> ();
}

/*!
    The query inheritableMembers() gives all of the members of a classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
 */
QSet<UmlNamedElement *> UmlClassifier::inheritableMembers(
    UmlClassifier *c) const
{
    qWarning("UmlClassifier::inheritableMembers(): to be implemented (operation)");

    Q_UNUSED(c);
    return QSet<UmlNamedElement *> ();
}

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool UmlClassifier::isTemplate(
    ) const
{
    qWarning("UmlClassifier::isTemplate(): to be implemented (operation)");

    return bool ();
}

/*!
    The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
 */
bool UmlClassifier::maySpecializeType(
    UmlClassifier *c) const
{
    qWarning("UmlClassifier::maySpecializeType(): to be implemented (operation)");

    Q_UNUSED(c);
    return bool ();
}

/*!
    The query parents() gives all of the immediate ancestors of a generalized Classifier.
 */
QSet<UmlClassifier *> UmlClassifier::parents(
    ) const
{
    qWarning("UmlClassifier::parents(): to be implemented (operation)");

    return QSet<UmlClassifier *> ();
}

