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
#include "qumlclassifier_p.h"

#include "qumlfeature_p.h"

#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlUseCase>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlFeature>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlClassifierPrivate::QUmlClassifierPrivate() :
    isAbstract(false),
    isFinalSpecialization(false),
    templateParameter(0),
    ownedTemplateSignature(0),
    representation(0)
{
}

QUmlClassifierPrivate::~QUmlClassifierPrivate()
{
}

void QUmlClassifierPrivate::addAttribute(QUmlProperty *attribute)
{
    // This is a read-only derived-union association end

    if (!this->attributes.contains(attribute)) {
        this->attributes.insert(attribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(this))->addFeature(qwrappedobject_cast<QUmlFeature *>(attribute));
    }
}

void QUmlClassifierPrivate::removeAttribute(QUmlProperty *attribute)
{
    // This is a read-only derived-union association end

    if (this->attributes.contains(attribute)) {
        this->attributes.remove(attribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(this))->removeFeature(qwrappedobject_cast<QUmlFeature *>(attribute));
    }
}

void QUmlClassifierPrivate::addFeature(QUmlFeature *feature)
{
    // This is a read-only derived-union association end

    if (!this->features.contains(feature)) {
        this->features.insert(feature);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(this))->addMember(qwrappedobject_cast<QUmlNamedElement *>(feature));

        // Adjust opposite property
        Q_Q(QUmlClassifier);
        (qwrappedobject_cast<QUmlFeaturePrivate *>(feature->d_func()))->addFeaturingClassifier(q);
    }
}

void QUmlClassifierPrivate::removeFeature(QUmlFeature *feature)
{
    // This is a read-only derived-union association end

    if (this->features.contains(feature)) {
        this->features.remove(feature);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(this))->removeMember(qwrappedobject_cast<QUmlNamedElement *>(feature));

        // Adjust opposite property
        Q_Q(QUmlClassifier);
        if (feature)
            (qwrappedobject_cast<QUmlFeaturePrivate *>(feature->d_func()))->removeFeaturingClassifier(q);
    }
}

/*!
    \class QUmlClassifier

    \inmodule QtUml

    \brief A classifier is a classification of instances - it describes a set of instances that have features in common. A classifier can specify a generalization hierarchy by referencing its general classifiers.A classifier has the capability to own use cases. Although the owning classifier typically represents the subject to which the owned use cases apply, this is not necessarily the case. In principle, the same use case can be applied to multiple subjects, as identified by the subject association role of a use case.Classifier is defined to be a kind of templateable element so that a classifier can be parameterized. It is also defined to be a kind of parameterable element so that a classifier can be a formal template parameter.A classifier has the capability to own collaboration uses. These collaboration uses link a collaboration with the classifier to give a description of the workings of the classifier.
 */

QUmlClassifier::QUmlClassifier(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlClassifierPrivate, wrapper, parent),
    _wrappedUmlNamespace(new QUmlNamespace(this)),
    _wrappedUmlType(new QUmlType(this)),
    _wrappedUmlRedefinableElement(new QUmlRedefinableElement(this)),
    _wrappedUmlTemplateableElement(new QUmlTemplateableElement(this))
{
    setPropertyData();
}

QUmlClassifier::QUmlClassifier(QUmlClassifierPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlNamespace(new QUmlNamespace(this)),
    _wrappedUmlType(new QUmlType(this)),
    _wrappedUmlRedefinableElement(new QUmlRedefinableElement(this)),
    _wrappedUmlTemplateableElement(new QUmlTemplateableElement(this))
{
    setPropertyData();
}

QUmlClassifier::~QUmlClassifier()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlClassifier::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlClassifier::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlClassifier::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlClassifier::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlClassifier::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlClassifier::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlClassifier::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlClassifier::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlClassifier::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlClassifier::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlClassifier::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlClassifier::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlClassifier::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlClassifier::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlClassifier::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlClassifier::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlClassifier::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlClassifier::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlClassifier::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlClassifier::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlClassifier::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlClassifier::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlClassifier::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlClassifier::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlClassifier::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlClassifier::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlClassifier::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlClassifier::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlClassifier::visibility() const
{
    return (qwrappedobject_cast<const QUmlPackageableElement *>(this))->visibility();
}

void QUmlClassifier::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlPackageableElement *>(this))->setVisibility(visibility);
}

void QUmlClassifier::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
    Q_D(QUmlClassifier);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QUmlPackage *QUmlClassifier::package() const
{
    return (qwrappedobject_cast<const QUmlType *>(this))->package();
}

void QUmlClassifier::setPackage(QUmlPackage *package)
{
    (qwrappedobject_cast<QUmlType *>(this))->setPackage(package);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlClassifier::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlClassifier::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlClassifier::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlClassifier);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlClassifier::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlClassifier::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional bindings from this element to templates.
 */
QSet<QUmlTemplateBinding *> QUmlClassifier::templateBindings() const
{
    return (qwrappedobject_cast<const QUmlTemplateableElement *>(this))->templateBindings();
}

void QUmlClassifier::addTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QUmlClassifier::removeTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlClassifier
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QUmlClassifier::isAbstract() const
{
    // This is a read-write attribute

    Q_D(const QUmlClassifier);
    return d->isAbstract;
}

void QUmlClassifier::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    Q_D(QUmlClassifier);
    if (d->isAbstract != isAbstract) {
        d->isAbstract = isAbstract;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isAbstract");
}

void QUmlClassifier::unsetAbstract()
{
    setAbstract(false);
    Q_D(QUmlClassifier);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QUmlClassifier::isFinalSpecialization() const
{
    // This is a read-write attribute

    Q_D(const QUmlClassifier);
    return d->isFinalSpecialization;
}

void QUmlClassifier::setFinalSpecialization(bool isFinalSpecialization)
{
    // This is a read-write attribute

    Q_D(QUmlClassifier);
    if (d->isFinalSpecialization != isFinalSpecialization) {
        d->isFinalSpecialization = isFinalSpecialization;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isFinalSpecialization");
}

void QUmlClassifier::unsetFinalSpecialization()
{
    setFinalSpecialization(false);
    Q_D(QUmlClassifier);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isFinalSpecialization"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlClassifier
// ---------------------------------------------------------------

/*!
    References the use cases owned by this classifier.
 */
QSet<QUmlUseCase *> QUmlClassifier::ownedUseCases() const
{
    // This is a read-write association end

    Q_D(const QUmlClassifier);
    return d->ownedUseCases;
}

void QUmlClassifier::addOwnedUseCase(QUmlUseCase *ownedUseCase)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (!d->ownedUseCases.contains(ownedUseCase)) {
        d->ownedUseCases.insert(ownedUseCase);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedUseCase));
    }
}

void QUmlClassifier::removeOwnedUseCase(QUmlUseCase *ownedUseCase)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (d->ownedUseCases.contains(ownedUseCase)) {
        d->ownedUseCases.remove(ownedUseCase);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedUseCase));
    }
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
QSet<QUmlGeneralizationSet *> QUmlClassifier::powertypeExtents() const
{
    // This is a read-write association end

    Q_D(const QUmlClassifier);
    return d->powertypeExtents;
}

void QUmlClassifier::addPowertypeExtent(QUmlGeneralizationSet *powertypeExtent)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (!d->powertypeExtents.contains(powertypeExtent)) {
        d->powertypeExtents.insert(powertypeExtent);

        // Adjust opposite property
        powertypeExtent->setPowertype(this);
    }
}

void QUmlClassifier::removePowertypeExtent(QUmlGeneralizationSet *powertypeExtent)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (d->powertypeExtents.contains(powertypeExtent)) {
        d->powertypeExtents.remove(powertypeExtent);

        // Adjust opposite property
        powertypeExtent->setPowertype(0);
    }
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
QSet<QUmlUseCase *> QUmlClassifier::useCases() const
{
    // This is a read-write association end

    Q_D(const QUmlClassifier);
    return d->useCases;
}

void QUmlClassifier::addUseCase(QUmlUseCase *useCase)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (!d->useCases.contains(useCase)) {
        d->useCases.insert(useCase);

        // Adjust opposite property
        useCase->addSubject(this);
    }
}

void QUmlClassifier::removeUseCase(QUmlUseCase *useCase)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (d->useCases.contains(useCase)) {
        d->useCases.remove(useCase);

        // Adjust opposite property
        if (useCase)
            useCase->removeSubject(this);
    }
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlClassifierTemplateParameter *QUmlClassifier::templateParameter() const
{
    // This is a read-write association end

    Q_D(const QUmlClassifier);
    return d->templateParameter;
}

void QUmlClassifier::setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (d->templateParameter != templateParameter) {
        // Adjust opposite property

        d->templateParameter = templateParameter;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlParameterableElement *>(this))->setTemplateParameter(qwrappedobject_cast<QUmlTemplateParameter *>(templateParameter));

        // Adjust opposite property
        templateParameter->setParameteredElement(this);
    }
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QSet<QUmlClassifier *> QUmlClassifier::redefinedClassifiers() const
{
    // This is a read-write association end

    Q_D(const QUmlClassifier);
    return d->redefinedClassifiers;
}

void QUmlClassifier::addRedefinedClassifier(QUmlClassifier *redefinedClassifier)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (!d->redefinedClassifiers.contains(redefinedClassifier)) {
        d->redefinedClassifiers.insert(redefinedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedClassifier));
    }
}

void QUmlClassifier::removeRedefinedClassifier(QUmlClassifier *redefinedClassifier)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (d->redefinedClassifiers.contains(redefinedClassifier)) {
        d->redefinedClassifiers.remove(redefinedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedClassifier));
    }
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlRedefinableTemplateSignature *QUmlClassifier::ownedTemplateSignature() const
{
    // This is a read-write association end

    Q_D(const QUmlClassifier);
    return d->ownedTemplateSignature;
}

void QUmlClassifier::setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (d->ownedTemplateSignature != ownedTemplateSignature) {
        // Adjust opposite property

        if (d->ownedTemplateSignature)
            qTopLevelWrapper(d->ownedTemplateSignature)->setParent(0);
        d->ownedTemplateSignature = ownedTemplateSignature;
        qTopLevelWrapper(ownedTemplateSignature)->setParent(qTopLevelWrapper(this));

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlTemplateableElement *>(this))->setOwnedTemplateSignature(qwrappedobject_cast<QUmlTemplateSignature *>(ownedTemplateSignature));

        // Adjust opposite property
        ownedTemplateSignature->setClassifier(this);
    }
}

/*!
    References the collaboration uses owned by the classifier.
 */
QSet<QUmlCollaborationUse *> QUmlClassifier::collaborationUses() const
{
    // This is a read-write association end

    Q_D(const QUmlClassifier);
    return d->collaborationUses;
}

void QUmlClassifier::addCollaborationUse(QUmlCollaborationUse *collaborationUse)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (!d->collaborationUses.contains(collaborationUse)) {
        d->collaborationUses.insert(collaborationUse);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(collaborationUse));
    }
}

void QUmlClassifier::removeCollaborationUse(QUmlCollaborationUse *collaborationUse)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (d->collaborationUses.contains(collaborationUse)) {
        d->collaborationUses.remove(collaborationUse);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(collaborationUse));
    }
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
QSet<QUmlProperty *> QUmlClassifier::attributes() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlClassifier);
    return d->attributes;
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
QSet<QUmlFeature *> QUmlClassifier::features() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlClassifier);
    return d->features;
}

/*!
    Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.
 */
QSet<QUmlClassifier *> QUmlClassifier::generals() const
{
    // This is a read-write derived association end

    qWarning("QUmlClassifier::generals: to be implemented (this is a derived associationend)");

    return QSet<QUmlClassifier *>(); // change here to your derived return
}

void QUmlClassifier::addGeneral(QUmlClassifier *general)
{
    // This is a read-write derived association end

    qWarning("QUmlClassifier::addGeneral: to be implemented (this is a derived associationend)");
    Q_UNUSED(general);

    if (false) { // change to your derived inclusion criteria
        // change to your derived code
    }
}

void QUmlClassifier::removeGeneral(QUmlClassifier *general)
{
    // This is a read-write derived association end

    qWarning("QUmlClassifier::removeGeneral: to be implemented (this is a derived associationend)");
    Q_UNUSED(general);

    if (false) { // change to your derived exclusion criteria
        // change to your derived code
    }
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QUmlCollaborationUse *QUmlClassifier::representation() const
{
    // This is a read-write association end

    Q_D(const QUmlClassifier);
    return d->representation;
}

void QUmlClassifier::setRepresentation(QUmlCollaborationUse *representation)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (d->representation != representation) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifier *>(this))->removeCollaborationUse(qwrappedobject_cast<QUmlCollaborationUse *>(d->representation));

        d->representation = representation;

        // Adjust subsetted property(ies)
        if (representation) {
            (qwrappedobject_cast<QUmlClassifier *>(this))->addCollaborationUse(qwrappedobject_cast<QUmlCollaborationUse *>(representation));
        }
    }
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QSet<QUmlGeneralization *> QUmlClassifier::generalizations() const
{
    // This is a read-write association end

    Q_D(const QUmlClassifier);
    return d->generalizations;
}

void QUmlClassifier::addGeneralization(QUmlGeneralization *generalization)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (!d->generalizations.contains(generalization)) {
        d->generalizations.insert(generalization);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(generalization));

        // Adjust opposite property
        generalization->setSpecific(this);
    }
}

void QUmlClassifier::removeGeneralization(QUmlGeneralization *generalization)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (d->generalizations.contains(generalization)) {
        d->generalizations.remove(generalization);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(generalization));

        // Adjust opposite property
        generalization->setSpecific(0);
    }
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
QSet<QUmlNamedElement *> QUmlClassifier::inheritedMembers() const
{
    // This is a read-only derived association end

    qWarning("QUmlClassifier::inheritedMembers: to be implemented (this is a derived associationend)");

    return QSet<QUmlNamedElement *>(); // change here to your derived return
}

/*!
    References the substitutions that are owned by this Classifier.
 */
QSet<QUmlSubstitution *> QUmlClassifier::substitutions() const
{
    // This is a read-write association end

    Q_D(const QUmlClassifier);
    return d->substitutions;
}

void QUmlClassifier::addSubstitution(QUmlSubstitution *substitution)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (!d->substitutions.contains(substitution)) {
        d->substitutions.insert(substitution);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(substitution));
        (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(qwrappedobject_cast<QUmlDependency *>(substitution));

        // Adjust opposite property
        substitution->setSubstitutingClassifier(this);
    }
}

void QUmlClassifier::removeSubstitution(QUmlSubstitution *substitution)
{
    // This is a read-write association end

    Q_D(QUmlClassifier);
    if (d->substitutions.contains(substitution)) {
        d->substitutions.remove(substitution);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(substitution));
        (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(qwrappedobject_cast<QUmlDependency *>(substitution));

        // Adjust opposite property
        substitution->setSubstitutingClassifier(0);
    }
}

/*!
    The query allFeatures() gives all of the features in the namespace of the classifier. In general, through mechanisms such as inheritance, this will be a larger set than feature.
 */
QSet<QUmlFeature *> QUmlClassifier::allFeatures() const
{
    qWarning("QUmlClassifier::allFeatures: operation to be implemented");

    return QSet<QUmlFeature *>(); // change here to your derived return
}

/*!
    The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 */
QSet<QUmlClassifier *> QUmlClassifier::allParents() const
{
    qWarning("QUmlClassifier::allParents: operation to be implemented");

    return QSet<QUmlClassifier *>(); // change here to your derived return
}

/*!
    The query conformsTo() gives true for a classifier that defines a type that conforms to another. This is used, for example, in the specification of signature conformance for operations.
 */
bool QUmlClassifier::conformsTo(const QUmlClassifier *other) const
{
    qWarning("QUmlClassifier::conformsTo: operation to be implemented");
    Q_UNUSED(other);

    return bool(); // change here to your derived return
}

/*!
    The query hasVisibilityOf() determines whether a named element is visible in the classifier. By default all are visible. It is only called when the argument is something owned by a parent.
 */
bool QUmlClassifier::hasVisibilityOf(const QUmlNamedElement *n) const
{
    qWarning("QUmlClassifier::hasVisibilityOf: operation to be implemented");
    Q_UNUSED(n);

    return bool(); // change here to your derived return
}

/*!
    The inherit operation is overridden to exclude redefined properties.The query inherit() defines how to inherit a set of elements. Here the operation is defined to inherit them all. It is intended to be redefined in circumstances where inheritance is affected by redefinition.
 */
QSet<QUmlNamedElement *> QUmlClassifier::inherit(QSet<QUmlNamedElement *> inhs) const
{
    qWarning("QUmlClassifier::inherit: operation to be implemented");
    Q_UNUSED(inhs);

    return QSet<QUmlNamedElement *>(); // change here to your derived return
}

/*!
    The query inheritableMembers() gives all of the members of a classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
 */
QSet<QUmlNamedElement *> QUmlClassifier::inheritableMembers(const QUmlClassifier *c) const
{
    qWarning("QUmlClassifier::inheritableMembers: operation to be implemented");
    Q_UNUSED(c);

    return QSet<QUmlNamedElement *>(); // change here to your derived return
}

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QUmlClassifier::isTemplate() const
{
    qWarning("QUmlClassifier::isTemplate: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
 */
bool QUmlClassifier::maySpecializeType(const QUmlClassifier *c) const
{
    qWarning("QUmlClassifier::maySpecializeType: operation to be implemented");
    Q_UNUSED(c);

    return bool(); // change here to your derived return
}

/*!
    The query parents() gives all of the immediate ancestors of a generalized Classifier.
 */
QSet<QUmlClassifier *> QUmlClassifier::parents() const
{
    qWarning("QUmlClassifier::parents: operation to be implemented");

    return QSet<QUmlClassifier *>(); // change here to your derived return
}

void QUmlClassifier::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("ownedUseCases")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("ownedUseCases")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("ownedUseCases")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the use cases owned by this classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("ownedUseCases")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("ownedUseCases")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("ownedUseCases")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("powertypeExtents")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("powertypeExtents")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("powertypeExtents")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the GeneralizationSet of which the associated Classifier is a power type.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("powertypeExtents")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("powertypeExtents")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("powertypeExtents")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlGeneralizationSet::powertype");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("useCases")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("useCases")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("useCases")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of use cases for which this Classifier is the subject.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("useCases")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("useCases")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("useCases")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlUseCase::subject");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("templateParameter")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("templateParameter")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("templateParameter")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The template parameter that exposes this element as a formal parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("templateParameter")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlParameterableElement::templateParameter");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("templateParameter")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("templateParameter")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlClassifierTemplateParameter::parameteredElement");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Classifiers that are redefined by this Classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The optional template signature specifying the formal template parameters.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlTemplateableElement::ownedTemplateSignature");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlRedefinableTemplateSignature::classifier");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("collaborationUses")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("collaborationUses")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("collaborationUses")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the collaboration uses owned by the classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("collaborationUses")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("collaborationUses")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("collaborationUses")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlClassifier::features");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("features")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("features")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("features")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("features")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("features")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("features")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlFeature::featuringClassifier");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("representation")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("representation")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("representation")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References a collaboration use which indicates the collaboration that represents this classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("representation")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("representation")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlClassifier::collaborationUses");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("representation")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlGeneralization::specific");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies all elements inherited by this classifier from the general classifiers.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("substitutions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("substitutions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("substitutions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the substitutions that are owned by this Classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("substitutions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("substitutions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements QUmlNamedElement::clientDependencies");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClassifier")][QString::fromLatin1("substitutions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlSubstitution::substitutingClassifier");

    QWrappedObject::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlClassifier::addClientDependency(QWrappedObjectPointer<QUmlSubstitution> substitution)
{
    addSubstitution(substitution);
}

void QUmlClassifier::removeClientDependency(QWrappedObjectPointer<QUmlSubstitution> substitution)
{
    removeSubstitution(substitution);
}

QT_END_NAMESPACE

#include "moc_qumlclassifier.cpp"

