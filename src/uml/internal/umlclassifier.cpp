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

UmlClassifier::UmlClassifier() :
    _isAbstract(false),
    _isFinalSpecialization(false),
    _ownedTemplateSignature(0),
    _representation(0),
    _templateParameter(0)
{
}

// OWNED ATTRIBUTES

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

QSet<UmlFeature *> UmlClassifier::allFeatures(
    ) const
{
    qWarning("UmlClassifier::allFeatures(): to be implemented (operation)");

    return QSet<UmlFeature *> ();
}

QSet<UmlClassifier *> UmlClassifier::allParents(
    ) const
{
    qWarning("UmlClassifier::allParents(): to be implemented (operation)");

    return QSet<UmlClassifier *> ();
}

bool UmlClassifier::conformsTo(
    UmlClassifier *other) const
{
    qWarning("UmlClassifier::conformsTo(): to be implemented (operation)");

    Q_UNUSED(other);
    return bool ();
}

bool UmlClassifier::hasVisibilityOf(
    UmlNamedElement *n) const
{
    qWarning("UmlClassifier::hasVisibilityOf(): to be implemented (operation)");

    Q_UNUSED(n);
    return bool ();
}

QSet<UmlNamedElement *> UmlClassifier::inherit(
    QSet<UmlNamedElement *> inhs) const
{
    qWarning("UmlClassifier::inherit(): to be implemented (operation)");

    Q_UNUSED(inhs);
    return QSet<UmlNamedElement *> ();
}

QSet<UmlNamedElement *> UmlClassifier::inheritableMembers(
    UmlClassifier *c) const
{
    qWarning("UmlClassifier::inheritableMembers(): to be implemented (operation)");

    Q_UNUSED(c);
    return QSet<UmlNamedElement *> ();
}

bool UmlClassifier::isTemplate(
    ) const
{
    qWarning("UmlClassifier::isTemplate(): to be implemented (operation)");

    return bool ();
}

bool UmlClassifier::maySpecializeType(
    UmlClassifier *c) const
{
    qWarning("UmlClassifier::maySpecializeType(): to be implemented (operation)");

    Q_UNUSED(c);
    return bool ();
}

QSet<UmlClassifier *> UmlClassifier::parents(
    ) const
{
    qWarning("UmlClassifier::parents(): to be implemented (operation)");

    return QSet<UmlClassifier *> ();
}

