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
#include "qumlclassifier.h"

#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlClassifier

    \inmodule QtUml

    \brief A classifier is a classification of instances - it describes a set of instances that have features in common. A classifier can specify a generalization hierarchy by referencing its general classifiers.A classifier has the capability to own use cases. Although the owning classifier typically represents the subject to which the owned use cases apply, this is not necessarily the case. In principle, the same use case can be applied to multiple subjects, as identified by the subject association role of a use case.Classifier is defined to be a kind of templateable element so that a classifier can be parameterized. It is also defined to be a kind of parameterable element so that a classifier can be a formal template parameter.A classifier has the capability to own collaboration uses. These collaboration uses link a collaboration with the classifier to give a description of the workings of the classifier.
 */
QUmlClassifier::QUmlClassifier() :
    _isAbstract(false),
    _isFinalSpecialization(false),
    _ownedTemplateSignature(0),
    _representation(0),
    _templateParameter(0)
{
}

QModelingElement *QUmlClassifier::clone() const
{
    QUmlClassifier *c = new QUmlClassifier;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    c->setVisibility(visibility());
    if (package())
        c->setPackage(dynamic_cast<QUmlPackage *>(package()->clone()));
    c->setLeaf(isLeaf());
    foreach (QUmlTemplateBinding *element, templateBindings())
        c->addTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(element->clone()));
    foreach (QUmlCollaborationUse *element, collaborationUses())
        c->addCollaborationUse(dynamic_cast<QUmlCollaborationUse *>(element->clone()));
    foreach (QUmlGeneralization *element, generalizations())
        c->addGeneralization(dynamic_cast<QUmlGeneralization *>(element->clone()));
    c->setAbstract(isAbstract());
    c->setFinalSpecialization(isFinalSpecialization());
    if (ownedTemplateSignature())
        c->setOwnedTemplateSignature(dynamic_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature()->clone()));
    foreach (QUmlUseCase *element, ownedUseCases())
        c->addOwnedUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    foreach (QUmlGeneralizationSet *element, powertypeExtents())
        c->addPowertypeExtent(dynamic_cast<QUmlGeneralizationSet *>(element->clone()));
    foreach (QUmlClassifier *element, redefinedClassifiers())
        c->addRedefinedClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    if (representation())
        c->setRepresentation(dynamic_cast<QUmlCollaborationUse *>(representation()->clone()));
    foreach (QUmlSubstitution *element, substitutions())
        c->addSubstitution(dynamic_cast<QUmlSubstitution *>(element->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlClassifierTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlUseCase *element, useCases())
        c->addUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
const QSet<QUmlProperty *> QUmlClassifier::attributes() const
{
    // This is a read-only derived union association end

    return _attributes;
}

void QUmlClassifier::addAttribute(QUmlProperty *attribute)
{
    // This is a read-only derived union association end

    if (!_attributes.contains(attribute)) {
        _attributes.insert(attribute);
        if (attribute && attribute->asQModelingObject() && this->asQModelingObject())
            QObject::connect(attribute->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeAttribute(QObject *)));

        // Adjust subsetted properties
        addFeature(attribute);
    }
}

void QUmlClassifier::removeAttribute(QUmlProperty *attribute)
{
    // This is a read-only derived union association end

    if (_attributes.contains(attribute)) {
        _attributes.remove(attribute);

        // Adjust subsetted properties
        removeFeature(attribute);
    }
}

/*!
    References the collaboration uses owned by the classifier.
 */
const QSet<QUmlCollaborationUse *> QUmlClassifier::collaborationUses() const
{
    // This is a read-write association end

    return _collaborationUses;
}

void QUmlClassifier::addCollaborationUse(QUmlCollaborationUse *collaborationUse)
{
    // This is a read-write association end

    if (!_collaborationUses.contains(collaborationUse)) {
        _collaborationUses.insert(collaborationUse);
        if (collaborationUse && collaborationUse->asQModelingObject() && this->asQModelingObject())
            QObject::connect(collaborationUse->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeCollaborationUse(QObject *)));
        collaborationUse->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(collaborationUse);
    }
}

void QUmlClassifier::removeCollaborationUse(QUmlCollaborationUse *collaborationUse)
{
    // This is a read-write association end

    if (_collaborationUses.contains(collaborationUse)) {
        _collaborationUses.remove(collaborationUse);
        if (collaborationUse->asQModelingObject())
            collaborationUse->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(collaborationUse);
    }
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
const QSet<QUmlFeature *> QUmlClassifier::features() const
{
    // This is a read-only derived union association end

    return _features;
}

void QUmlClassifier::addFeature(QUmlFeature *feature)
{
    // This is a read-only derived union association end

    if (!_features.contains(feature)) {
        _features.insert(feature);
        if (feature && feature->asQModelingObject() && this->asQModelingObject())
            QObject::connect(feature->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeFeature(QObject *)));

        // Adjust subsetted properties
        addMember(feature);

        // Adjust opposite properties
        if (feature) {
            feature->addFeaturingClassifier(this);
        }
    }
}

void QUmlClassifier::removeFeature(QUmlFeature *feature)
{
    // This is a read-only derived union association end

    if (_features.contains(feature)) {
        _features.remove(feature);

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
const QSet<QUmlClassifier *> QUmlClassifier::generals() const
{
    // This is a read-write derived association end

    qWarning("QUmlClassifier::generals(): to be implemented (this is a derived association end)");

    return QSet<QUmlClassifier *>();
}

void QUmlClassifier::addGeneral(QUmlClassifier *general)
{
    // This is a read-write derived association end

    qWarning("QUmlClassifier::addGeneral(): to be implemented (this is a derived association end)");
    Q_UNUSED(general);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlClassifier::removeGeneral(QUmlClassifier *general)
{
    // This is a read-write derived association end

    qWarning("QUmlClassifier::removeGeneral(): to be implemented (this is a derived association end)");
    Q_UNUSED(general);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
const QSet<QUmlGeneralization *> QUmlClassifier::generalizations() const
{
    // This is a read-write association end

    return _generalizations;
}

void QUmlClassifier::addGeneralization(QUmlGeneralization *generalization)
{
    // This is a read-write association end

    if (!_generalizations.contains(generalization)) {
        _generalizations.insert(generalization);
        if (generalization && generalization->asQModelingObject() && this->asQModelingObject())
            QObject::connect(generalization->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeGeneralization(QObject *)));
        generalization->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(generalization);

        // Adjust opposite properties
        if (generalization) {
            generalization->setSpecific(this);
        }
    }
}

void QUmlClassifier::removeGeneralization(QUmlGeneralization *generalization)
{
    // This is a read-write association end

    if (_generalizations.contains(generalization)) {
        _generalizations.remove(generalization);
        if (generalization->asQModelingObject())
            generalization->asQModelingObject()->setParent(0);

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
const QSet<QUmlNamedElement *> QUmlClassifier::inheritedMembers() const
{
    // This is a read-only derived association end

    qWarning("QUmlClassifier::inheritedMembers(): to be implemented (this is a derived association end)");

    return QSet<QUmlNamedElement *>();
}

void QUmlClassifier::addInheritedMember(QUmlNamedElement *inheritedMember)
{
    // This is a read-only derived association end

    qWarning("QUmlClassifier::addInheritedMember(): to be implemented (this is a derived association end)");
    Q_UNUSED(inheritedMember);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addMember(inheritedMember);
    }
}

void QUmlClassifier::removeInheritedMember(QUmlNamedElement *inheritedMember)
{
    // This is a read-only derived association end

    qWarning("QUmlClassifier::removeInheritedMember(): to be implemented (this is a derived association end)");
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
bool QUmlClassifier::isAbstract() const
{
    // This is a read-write property

    return _isAbstract;
}

void QUmlClassifier::setAbstract(bool isAbstract)
{
    // This is a read-write property

    if (_isAbstract != isAbstract) {
        _isAbstract = isAbstract;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isAbstract");
    }
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QUmlClassifier::isFinalSpecialization() const
{
    // This is a read-write property

    return _isFinalSpecialization;
}

void QUmlClassifier::setFinalSpecialization(bool isFinalSpecialization)
{
    // This is a read-write property

    if (_isFinalSpecialization != isFinalSpecialization) {
        _isFinalSpecialization = isFinalSpecialization;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isFinalSpecialization");
    }
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlRedefinableTemplateSignature *QUmlClassifier::ownedTemplateSignature() const
{
    // This is a read-write association end

    return _ownedTemplateSignature;
}

void QUmlClassifier::setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature)
{
    // This is a read-write association end

    if (_ownedTemplateSignature != ownedTemplateSignature) {
        _ownedTemplateSignature = ownedTemplateSignature;
        if (ownedTemplateSignature && ownedTemplateSignature->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedTemplateSignature->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setOwnedTemplateSignature()));
        ownedTemplateSignature->asQModelingObject()->setParent(this->asQModelingObject());
    }
}

/*!
    References the use cases owned by this classifier.
 */
const QSet<QUmlUseCase *> QUmlClassifier::ownedUseCases() const
{
    // This is a read-write association end

    return _ownedUseCases;
}

void QUmlClassifier::addOwnedUseCase(QUmlUseCase *ownedUseCase)
{
    // This is a read-write association end

    if (!_ownedUseCases.contains(ownedUseCase)) {
        _ownedUseCases.insert(ownedUseCase);
        if (ownedUseCase && ownedUseCase->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedUseCase->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedUseCase(QObject *)));
        ownedUseCase->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(ownedUseCase);
    }
}

void QUmlClassifier::removeOwnedUseCase(QUmlUseCase *ownedUseCase)
{
    // This is a read-write association end

    if (_ownedUseCases.contains(ownedUseCase)) {
        _ownedUseCases.remove(ownedUseCase);
        if (ownedUseCase->asQModelingObject())
            ownedUseCase->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedUseCase);
    }
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
const QSet<QUmlGeneralizationSet *> QUmlClassifier::powertypeExtents() const
{
    // This is a read-write association end

    return _powertypeExtents;
}

void QUmlClassifier::addPowertypeExtent(QUmlGeneralizationSet *powertypeExtent)
{
    // This is a read-write association end

    if (!_powertypeExtents.contains(powertypeExtent)) {
        _powertypeExtents.insert(powertypeExtent);
        if (powertypeExtent && powertypeExtent->asQModelingObject() && this->asQModelingObject())
            QObject::connect(powertypeExtent->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removePowertypeExtent(QObject *)));

        // Adjust opposite properties
        if (powertypeExtent) {
            powertypeExtent->setPowertype(this);
        }
    }
}

void QUmlClassifier::removePowertypeExtent(QUmlGeneralizationSet *powertypeExtent)
{
    // This is a read-write association end

    if (_powertypeExtents.contains(powertypeExtent)) {
        _powertypeExtents.remove(powertypeExtent);

        // Adjust opposite properties
        if (powertypeExtent) {
            powertypeExtent->setPowertype(0);
        }
    }
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
const QSet<QUmlClassifier *> QUmlClassifier::redefinedClassifiers() const
{
    // This is a read-write association end

    return _redefinedClassifiers;
}

void QUmlClassifier::addRedefinedClassifier(QUmlClassifier *redefinedClassifier)
{
    // This is a read-write association end

    if (!_redefinedClassifiers.contains(redefinedClassifier)) {
        _redefinedClassifiers.insert(redefinedClassifier);
        if (redefinedClassifier && redefinedClassifier->asQModelingObject() && this->asQModelingObject())
            QObject::connect(redefinedClassifier->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRedefinedClassifier(QObject *)));

        // Adjust subsetted properties
        addRedefinedElement(redefinedClassifier);
    }
}

void QUmlClassifier::removeRedefinedClassifier(QUmlClassifier *redefinedClassifier)
{
    // This is a read-write association end

    if (_redefinedClassifiers.contains(redefinedClassifier)) {
        _redefinedClassifiers.remove(redefinedClassifier);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedClassifier);
    }
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QUmlCollaborationUse *QUmlClassifier::representation() const
{
    // This is a read-write association end

    return _representation;
}

void QUmlClassifier::setRepresentation(QUmlCollaborationUse *representation)
{
    // This is a read-write association end

    if (_representation != representation) {
        // Adjust subsetted properties
        removeCollaborationUse(_representation);

        _representation = representation;
        if (representation && representation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(representation->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setRepresentation()));

        // Adjust subsetted properties
        if (representation) {
            addCollaborationUse(representation);
        }
    }
}

/*!
    References the substitutions that are owned by this Classifier.
 */
const QSet<QUmlSubstitution *> QUmlClassifier::substitutions() const
{
    // This is a read-write association end

    return _substitutions;
}

void QUmlClassifier::addSubstitution(QUmlSubstitution *substitution)
{
    // This is a read-write association end

    if (!_substitutions.contains(substitution)) {
        _substitutions.insert(substitution);
        if (substitution && substitution->asQModelingObject() && this->asQModelingObject())
            QObject::connect(substitution->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeSubstitution(QObject *)));
        substitution->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(substitution);
        addClientDependency(substitution);

        // Adjust opposite properties
        if (substitution) {
            substitution->setSubstitutingClassifier(this);
        }
    }
}

void QUmlClassifier::removeSubstitution(QUmlSubstitution *substitution)
{
    // This is a read-write association end

    if (_substitutions.contains(substitution)) {
        _substitutions.remove(substitution);
        if (substitution->asQModelingObject())
            substitution->asQModelingObject()->setParent(0);

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
QUmlClassifierTemplateParameter *QUmlClassifier::templateParameter() const
{
    // This is a read-write association end

    return _templateParameter;
}

void QUmlClassifier::setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter)
{
    // This is a read-write association end

    if (_templateParameter != templateParameter) {
        _templateParameter = templateParameter;
        if (templateParameter && templateParameter->asQModelingObject() && this->asQModelingObject())
            QObject::connect(templateParameter->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setTemplateParameter()));
    }
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
const QSet<QUmlUseCase *> QUmlClassifier::useCases() const
{
    // This is a read-write association end

    return _useCases;
}

void QUmlClassifier::addUseCase(QUmlUseCase *useCase)
{
    // This is a read-write association end

    if (!_useCases.contains(useCase)) {
        _useCases.insert(useCase);
        if (useCase && useCase->asQModelingObject() && this->asQModelingObject())
            QObject::connect(useCase->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeUseCase(QObject *)));

        // Adjust opposite properties
        if (useCase) {
            useCase->addSubject(this);
        }
    }
}

void QUmlClassifier::removeUseCase(QUmlUseCase *useCase)
{
    // This is a read-write association end

    if (_useCases.contains(useCase)) {
        _useCases.remove(useCase);

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
QSet<QUmlFeature *> QUmlClassifier::allFeatures() const
{
    qWarning("QUmlClassifier::allFeatures(): to be implemented (operation)");

    return QSet<QUmlFeature *> ();
}

/*!
    The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 */
QSet<QUmlClassifier *> QUmlClassifier::allParents() const
{
    qWarning("QUmlClassifier::allParents(): to be implemented (operation)");

    return QSet<QUmlClassifier *> ();
}

/*!
    The query conformsTo() gives true for a classifier that defines a type that conforms to another. This is used, for example, in the specification of signature conformance for operations.
 */
bool QUmlClassifier::conformsTo(QUmlClassifier *other) const
{
    qWarning("QUmlClassifier::conformsTo(): to be implemented (operation)");

    Q_UNUSED(other);
    return bool ();
}

/*!
    The query hasVisibilityOf() determines whether a named element is visible in the classifier. By default all are visible. It is only called when the argument is something owned by a parent.
 */
bool QUmlClassifier::hasVisibilityOf(QUmlNamedElement *n) const
{
    qWarning("QUmlClassifier::hasVisibilityOf(): to be implemented (operation)");

    Q_UNUSED(n);
    return bool ();
}

/*!
    The inherit operation is overridden to exclude redefined properties.The query inherit() defines how to inherit a set of elements. Here the operation is defined to inherit them all. It is intended to be redefined in circumstances where inheritance is affected by redefinition.
 */
QSet<QUmlNamedElement *> QUmlClassifier::inherit(QSet<QUmlNamedElement *> inhs) const
{
    qWarning("QUmlClassifier::inherit(): to be implemented (operation)");

    Q_UNUSED(inhs);
    return QSet<QUmlNamedElement *> ();
}

/*!
    The query inheritableMembers() gives all of the members of a classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
 */
QSet<QUmlNamedElement *> QUmlClassifier::inheritableMembers(QUmlClassifier *c) const
{
    qWarning("QUmlClassifier::inheritableMembers(): to be implemented (operation)");

    Q_UNUSED(c);
    return QSet<QUmlNamedElement *> ();
}

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QUmlClassifier::isTemplate() const
{
    qWarning("QUmlClassifier::isTemplate(): to be implemented (operation)");

    return bool ();
}

/*!
    The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
 */
bool QUmlClassifier::maySpecializeType(QUmlClassifier *c) const
{
    qWarning("QUmlClassifier::maySpecializeType(): to be implemented (operation)");

    Q_UNUSED(c);
    return bool ();
}

/*!
    The query parents() gives all of the immediate ancestors of a generalized Classifier.
 */
QSet<QUmlClassifier *> QUmlClassifier::parents() const
{
    qWarning("QUmlClassifier::parents(): to be implemented (operation)");

    return QSet<QUmlClassifier *> ();
}

QT_END_NAMESPACE

