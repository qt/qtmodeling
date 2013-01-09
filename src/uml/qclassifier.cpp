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

#include "qfeature_p.h"

#include <QtUml/QRedefinableTemplateSignature>
#include <QtUml/QClassifierTemplateParameter>
#include <QtUml/QUseCase>
#include <QtUml/QSubstitution>
#include <QtUml/QGeneralizationSet>
#include <QtUml/QNamedElement>
#include <QtUml/QProperty>
#include <QtUml/QGeneralization>
#include <QtUml/QCollaborationUse>
#include <QtUml/QFeature>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QClassifierPrivate::QClassifierPrivate() :
    isAbstract(false),
    isFinalSpecialization(false),
    templateParameter(0),
    ownedTemplateSignature(0),
    representation(0)
{
}

QClassifierPrivate::~QClassifierPrivate()
{
}

void QClassifierPrivate::addAttribute(QProperty *attribute)
{
    // This is a read-only derived-union association end

    if (!this->attributes.contains(attribute)) {
        this->attributes.insert(attribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(this))->addFeature(qwrappedobject_cast<QFeature *>(attribute));
    }
}

void QClassifierPrivate::removeAttribute(QProperty *attribute)
{
    // This is a read-only derived-union association end

    if (this->attributes.contains(attribute)) {
        this->attributes.remove(attribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(this))->removeFeature(qwrappedobject_cast<QFeature *>(attribute));
    }
}

void QClassifierPrivate::addFeature(QFeature *feature)
{
    // This is a read-only derived-union association end

    if (!this->features.contains(feature)) {
        this->features.insert(feature);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(this))->addMember(qwrappedobject_cast<QNamedElement *>(feature));

        // Adjust opposite property
        Q_Q(QClassifier);
        (qwrappedobject_cast<QFeaturePrivate *>(feature->d_func()))->addFeaturingClassifier(q);
    }
}

void QClassifierPrivate::removeFeature(QFeature *feature)
{
    // This is a read-only derived-union association end

    if (this->features.contains(feature)) {
        this->features.remove(feature);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(this))->removeMember(qwrappedobject_cast<QNamedElement *>(feature));

        // Adjust opposite property
        Q_Q(QClassifier);
        if (feature)
            (qwrappedobject_cast<QFeaturePrivate *>(feature->d_func()))->removeFeaturingClassifier(q);
    }
}

/*!
    \class QClassifier

    \inmodule QtUml

    \brief A classifier is a classification of instances - it describes a set of instances that have features in common. A classifier can specify a generalization hierarchy by referencing its general classifiers.A classifier has the capability to own use cases. Although the owning classifier typically represents the subject to which the owned use cases apply, this is not necessarily the case. In principle, the same use case can be applied to multiple subjects, as identified by the subject association role of a use case.Classifier is defined to be a kind of templateable element so that a classifier can be parameterized. It is also defined to be a kind of parameterable element so that a classifier can be a formal template parameter.A classifier has the capability to own collaboration uses. These collaboration uses link a collaboration with the classifier to give a description of the workings of the classifier.
 */

QClassifier::QClassifier(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QClassifierPrivate, wrapper, parent),
    _wrappedNamespace(new QNamespace(this)),
    _wrappedType(new QType(this)),
    _wrappedRedefinableElement(new QRedefinableElement(this)),
    _wrappedTemplateableElement(new QTemplateableElement(this))
{
    setPropertyData();
}

QClassifier::QClassifier(QClassifierPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedNamespace(new QNamespace(this)),
    _wrappedType(new QType(this)),
    _wrappedRedefinableElement(new QRedefinableElement(this)),
    _wrappedTemplateableElement(new QTemplateableElement(this))
{
    setPropertyData();
}

QClassifier::~QClassifier()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QClassifier::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QClassifier::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QClassifier::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QClassifier::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QClassifier::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QClassifier::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QClassifier::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QClassifier::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QClassifier::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QClassifier::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QClassifier::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QClassifier::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QClassifier::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QClassifier::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QPackageImport *> QClassifier::packageImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->packageImports();
}

void QClassifier::addPackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QClassifier::removePackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QNamedElement *> QClassifier::members() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QPackageableElement *> QClassifier::importedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QElementImport *> QClassifier::elementImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->elementImports();
}

void QClassifier::addElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QClassifier::removeElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QConstraint *> QClassifier::ownedRules() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedRules();
}

void QClassifier::addOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QClassifier::removeOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QNamedElement *> QClassifier::ownedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QClassifier::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QParameterableElement *>(this))->owningTemplateParameter();
}

void QClassifier::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QClassifier::visibility() const
{
    return (qwrappedobject_cast<const QPackageableElement *>(this))->visibility();
}

void QClassifier::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QPackageableElement *>(this))->setVisibility(visibility);
}

void QClassifier::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
    Q_D(QClassifier);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QPackage *QClassifier::package() const
{
    return (qwrappedobject_cast<const QType *>(this))->package();
}

void QClassifier::setPackage(QPackage *package)
{
    (qwrappedobject_cast<QType *>(this))->setPackage(package);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QClassifier::isLeaf() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QClassifier::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QClassifier::unsetLeaf()
{
    setLeaf(false);
    Q_D(QClassifier);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QRedefinableElement *> QClassifier::redefinedElements() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QClassifier *> QClassifier::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional bindings from this element to templates.
 */
QSet<QTemplateBinding *> QClassifier::templateBindings() const
{
    return (qwrappedobject_cast<const QTemplateableElement *>(this))->templateBindings();
}

void QClassifier::addTemplateBinding(QTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QClassifier::removeTemplateBinding(QTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QClassifier
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QClassifier::isAbstract() const
{
    // This is a read-write attribute

    Q_D(const QClassifier);
    return d->isAbstract;
}

void QClassifier::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    Q_D(QClassifier);
    if (d->isAbstract != isAbstract) {
        d->isAbstract = isAbstract;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isAbstract");
}

void QClassifier::unsetAbstract()
{
    setAbstract(false);
    Q_D(QClassifier);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QClassifier::isFinalSpecialization() const
{
    // This is a read-write attribute

    Q_D(const QClassifier);
    return d->isFinalSpecialization;
}

void QClassifier::setFinalSpecialization(bool isFinalSpecialization)
{
    // This is a read-write attribute

    Q_D(QClassifier);
    if (d->isFinalSpecialization != isFinalSpecialization) {
        d->isFinalSpecialization = isFinalSpecialization;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isFinalSpecialization");
}

void QClassifier::unsetFinalSpecialization()
{
    setFinalSpecialization(false);
    Q_D(QClassifier);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isFinalSpecialization"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QClassifier
// ---------------------------------------------------------------

/*!
    References the use cases owned by this classifier.
 */
QSet<QUseCase *> QClassifier::ownedUseCases() const
{
    // This is a read-write association end

    Q_D(const QClassifier);
    return d->ownedUseCases;
}

void QClassifier::addOwnedUseCase(QUseCase *ownedUseCase)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (!d->ownedUseCases.contains(ownedUseCase)) {
        d->ownedUseCases.insert(ownedUseCase);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedUseCase));
    }
}

void QClassifier::removeOwnedUseCase(QUseCase *ownedUseCase)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (d->ownedUseCases.contains(ownedUseCase)) {
        d->ownedUseCases.remove(ownedUseCase);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedUseCase));
    }
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
QSet<QGeneralizationSet *> QClassifier::powertypeExtents() const
{
    // This is a read-write association end

    Q_D(const QClassifier);
    return d->powertypeExtents;
}

void QClassifier::addPowertypeExtent(QGeneralizationSet *powertypeExtent)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (!d->powertypeExtents.contains(powertypeExtent)) {
        d->powertypeExtents.insert(powertypeExtent);

        // Adjust opposite property
        powertypeExtent->setPowertype(this);
    }
}

void QClassifier::removePowertypeExtent(QGeneralizationSet *powertypeExtent)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (d->powertypeExtents.contains(powertypeExtent)) {
        d->powertypeExtents.remove(powertypeExtent);

        // Adjust opposite property
        powertypeExtent->setPowertype(0);
    }
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
QSet<QUseCase *> QClassifier::useCases() const
{
    // This is a read-write association end

    Q_D(const QClassifier);
    return d->useCases;
}

void QClassifier::addUseCase(QUseCase *useCase)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (!d->useCases.contains(useCase)) {
        d->useCases.insert(useCase);

        // Adjust opposite property
        useCase->addSubject(this);
    }
}

void QClassifier::removeUseCase(QUseCase *useCase)
{
    // This is a read-write association end

    Q_D(QClassifier);
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
QClassifierTemplateParameter *QClassifier::templateParameter() const
{
    // This is a read-write association end

    Q_D(const QClassifier);
    return d->templateParameter;
}

void QClassifier::setTemplateParameter(QClassifierTemplateParameter *templateParameter)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (d->templateParameter != templateParameter) {
        // Adjust opposite property

        d->templateParameter = templateParameter;

        // Adjust opposite property
        templateParameter->setParameteredElement(this);
    }
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QSet<QClassifier *> QClassifier::redefinedClassifiers() const
{
    // This is a read-write association end

    Q_D(const QClassifier);
    return d->redefinedClassifiers;
}

void QClassifier::addRedefinedClassifier(QClassifier *redefinedClassifier)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (!d->redefinedClassifiers.contains(redefinedClassifier)) {
        d->redefinedClassifiers.insert(redefinedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(redefinedClassifier));
    }
}

void QClassifier::removeRedefinedClassifier(QClassifier *redefinedClassifier)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (d->redefinedClassifiers.contains(redefinedClassifier)) {
        d->redefinedClassifiers.remove(redefinedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(redefinedClassifier));
    }
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QRedefinableTemplateSignature *QClassifier::ownedTemplateSignature() const
{
    // This is a read-write association end

    Q_D(const QClassifier);
    return d->ownedTemplateSignature;
}

void QClassifier::setOwnedTemplateSignature(QRedefinableTemplateSignature *ownedTemplateSignature)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (d->ownedTemplateSignature != ownedTemplateSignature) {
        // Adjust opposite property

        if (d->ownedTemplateSignature)
            qTopLevelWrapper(d->ownedTemplateSignature)->setParent(0);
        d->ownedTemplateSignature = ownedTemplateSignature;
        qTopLevelWrapper(ownedTemplateSignature)->setParent(qTopLevelWrapper(this));

        // Adjust opposite property
        ownedTemplateSignature->setClassifier(this);
    }
}

/*!
    References the collaboration uses owned by the classifier.
 */
QSet<QCollaborationUse *> QClassifier::collaborationUses() const
{
    // This is a read-write association end

    Q_D(const QClassifier);
    return d->collaborationUses;
}

void QClassifier::addCollaborationUse(QCollaborationUse *collaborationUse)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (!d->collaborationUses.contains(collaborationUse)) {
        d->collaborationUses.insert(collaborationUse);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(collaborationUse));
    }
}

void QClassifier::removeCollaborationUse(QCollaborationUse *collaborationUse)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (d->collaborationUses.contains(collaborationUse)) {
        d->collaborationUses.remove(collaborationUse);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(collaborationUse));
    }
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
QSet<QProperty *> QClassifier::attributes() const
{
    // This is a read-only derived-union association end

    Q_D(const QClassifier);
    return d->attributes;
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
QSet<QFeature *> QClassifier::features() const
{
    // This is a read-only derived-union association end

    Q_D(const QClassifier);
    return d->features;
}

/*!
    Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.
 */
QSet<QClassifier *> QClassifier::generals() const
{
    // This is a read-write derived association end

    qWarning("QClassifier::generals: to be implemented (this is a derived associationend)");

    return QSet<QClassifier *>(); // change here to your derived return
}

void QClassifier::addGeneral(QClassifier *general)
{
    // This is a read-write derived association end

    qWarning("QClassifier::addGeneral: to be implemented (this is a derived associationend)");
    Q_UNUSED(general);

    if (false) { // change to your derived inclusion criteria
        // change to your derived code
    }
}

void QClassifier::removeGeneral(QClassifier *general)
{
    // This is a read-write derived association end

    qWarning("QClassifier::removeGeneral: to be implemented (this is a derived associationend)");
    Q_UNUSED(general);

    if (false) { // change to your derived exclusion criteria
        // change to your derived code
    }
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QCollaborationUse *QClassifier::representation() const
{
    // This is a read-write association end

    Q_D(const QClassifier);
    return d->representation;
}

void QClassifier::setRepresentation(QCollaborationUse *representation)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (d->representation != representation) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifier *>(this))->removeCollaborationUse(qwrappedobject_cast<QCollaborationUse *>(d->representation));

        d->representation = representation;

        // Adjust subsetted property(ies)
        if (representation) {
            (qwrappedobject_cast<QClassifier *>(this))->addCollaborationUse(qwrappedobject_cast<QCollaborationUse *>(representation));
        }
    }
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QSet<QGeneralization *> QClassifier::generalizations() const
{
    // This is a read-write association end

    Q_D(const QClassifier);
    return d->generalizations;
}

void QClassifier::addGeneralization(QGeneralization *generalization)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (!d->generalizations.contains(generalization)) {
        d->generalizations.insert(generalization);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(generalization));

        // Adjust opposite property
        generalization->setSpecific(this);
    }
}

void QClassifier::removeGeneralization(QGeneralization *generalization)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (d->generalizations.contains(generalization)) {
        d->generalizations.remove(generalization);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(generalization));

        // Adjust opposite property
        generalization->setSpecific(0);
    }
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
QSet<QNamedElement *> QClassifier::inheritedMembers() const
{
    // This is a read-only derived association end

    qWarning("QClassifier::inheritedMembers: to be implemented (this is a derived associationend)");

    return QSet<QNamedElement *>(); // change here to your derived return
}

/*!
    References the substitutions that are owned by this Classifier.
 */
QSet<QSubstitution *> QClassifier::substitutions() const
{
    // This is a read-write association end

    Q_D(const QClassifier);
    return d->substitutions;
}

void QClassifier::addSubstitution(QSubstitution *substitution)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (!d->substitutions.contains(substitution)) {
        d->substitutions.insert(substitution);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(substitution));
        (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(qwrappedobject_cast<QDependency *>(substitution));

        // Adjust opposite property
        substitution->setSubstitutingClassifier(this);
    }
}

void QClassifier::removeSubstitution(QSubstitution *substitution)
{
    // This is a read-write association end

    Q_D(QClassifier);
    if (d->substitutions.contains(substitution)) {
        d->substitutions.remove(substitution);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(substitution));
        (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(qwrappedobject_cast<QDependency *>(substitution));

        // Adjust opposite property
        substitution->setSubstitutingClassifier(0);
    }
}

/*!
    The query allFeatures() gives all of the features in the namespace of the classifier. In general, through mechanisms such as inheritance, this will be a larger set than feature.
 */
QSet<QFeature *> QClassifier::allFeatures() const
{
    qWarning("QClassifier::allFeatures: operation to be implemented");

    return QSet<QFeature *>(); // change here to your derived return
}

/*!
    The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 */
QSet<QClassifier *> QClassifier::allParents() const
{
    qWarning("QClassifier::allParents: operation to be implemented");

    return QSet<QClassifier *>(); // change here to your derived return
}

/*!
    The query conformsTo() gives true for a classifier that defines a type that conforms to another. This is used, for example, in the specification of signature conformance for operations.
 */
bool QClassifier::conformsTo(const QClassifier *other) const
{
    qWarning("QClassifier::conformsTo: operation to be implemented");
    Q_UNUSED(other);

    return bool(); // change here to your derived return
}

/*!
    The query hasVisibilityOf() determines whether a named element is visible in the classifier. By default all are visible. It is only called when the argument is something owned by a parent.
 */
bool QClassifier::hasVisibilityOf(const QNamedElement *n) const
{
    qWarning("QClassifier::hasVisibilityOf: operation to be implemented");
    Q_UNUSED(n);

    return bool(); // change here to your derived return
}

/*!
    The inherit operation is overridden to exclude redefined properties.The query inherit() defines how to inherit a set of elements. Here the operation is defined to inherit them all. It is intended to be redefined in circumstances where inheritance is affected by redefinition.
 */
QSet<QNamedElement *> QClassifier::inherit(QSet<QNamedElement *> inhs) const
{
    qWarning("QClassifier::inherit: operation to be implemented");
    Q_UNUSED(inhs);

    return QSet<QNamedElement *>(); // change here to your derived return
}

/*!
    The query inheritableMembers() gives all of the members of a classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
 */
QSet<QNamedElement *> QClassifier::inheritableMembers(const QClassifier *c) const
{
    qWarning("QClassifier::inheritableMembers: operation to be implemented");
    Q_UNUSED(c);

    return QSet<QNamedElement *>(); // change here to your derived return
}

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QClassifier::isTemplate() const
{
    qWarning("QClassifier::isTemplate: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
 */
bool QClassifier::maySpecializeType(const QClassifier *c) const
{
    qWarning("QClassifier::maySpecializeType: operation to be implemented");
    Q_UNUSED(c);

    return bool(); // change here to your derived return
}

/*!
    The query parents() gives all of the immediate ancestors of a generalized Classifier.
 */
QSet<QClassifier *> QClassifier::parents() const
{
    qWarning("QClassifier::parents: operation to be implemented");

    return QSet<QClassifier *>(); // change here to your derived return
}

void QClassifier::registerMetaTypes() const
{
    qRegisterMetaType<QRedefinableTemplateSignature *>("QRedefinableTemplateSignature *");
    qRegisterMetaType<QSet<QRedefinableTemplateSignature *>>("QSet<QRedefinableTemplateSignature *>");
    qRegisterMetaType<QList<QRedefinableTemplateSignature *>>("QList<QRedefinableTemplateSignature *>");

    qRegisterMetaType<QClassifierTemplateParameter *>("QClassifierTemplateParameter *");
    qRegisterMetaType<QSet<QClassifierTemplateParameter *>>("QSet<QClassifierTemplateParameter *>");
    qRegisterMetaType<QList<QClassifierTemplateParameter *>>("QList<QClassifierTemplateParameter *>");

    qRegisterMetaType<QUseCase *>("QUseCase *");
    qRegisterMetaType<QSet<QUseCase *>>("QSet<QUseCase *>");
    qRegisterMetaType<QList<QUseCase *>>("QList<QUseCase *>");

    qRegisterMetaType<QSubstitution *>("QSubstitution *");
    qRegisterMetaType<QSet<QSubstitution *>>("QSet<QSubstitution *>");
    qRegisterMetaType<QList<QSubstitution *>>("QList<QSubstitution *>");

    qRegisterMetaType<QGeneralizationSet *>("QGeneralizationSet *");
    qRegisterMetaType<QSet<QGeneralizationSet *>>("QSet<QGeneralizationSet *>");
    qRegisterMetaType<QList<QGeneralizationSet *>>("QList<QGeneralizationSet *>");

    qRegisterMetaType<QNamedElement *>("QNamedElement *");
    qRegisterMetaType<QSet<QNamedElement *>>("QSet<QNamedElement *>");
    qRegisterMetaType<QList<QNamedElement *>>("QList<QNamedElement *>");

    qRegisterMetaType<QProperty *>("QProperty *");
    qRegisterMetaType<QSet<QProperty *>>("QSet<QProperty *>");
    qRegisterMetaType<QList<QProperty *>>("QList<QProperty *>");

    qRegisterMetaType<QGeneralization *>("QGeneralization *");
    qRegisterMetaType<QSet<QGeneralization *>>("QSet<QGeneralization *>");
    qRegisterMetaType<QList<QGeneralization *>>("QList<QGeneralization *>");

    qRegisterMetaType<QCollaborationUse *>("QCollaborationUse *");
    qRegisterMetaType<QSet<QCollaborationUse *>>("QSet<QCollaborationUse *>");
    qRegisterMetaType<QList<QCollaborationUse *>>("QList<QCollaborationUse *>");

    qRegisterMetaType<QFeature *>("QFeature *");
    qRegisterMetaType<QSet<QFeature *>>("QSet<QFeature *>");
    qRegisterMetaType<QList<QFeature *>>("QList<QFeature *>");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QClassifier::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("ownedUseCases")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("ownedUseCases")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("ownedUseCases")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the use cases owned by this classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("ownedUseCases")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("ownedUseCases")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("ownedUseCases")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("powertypeExtents")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("powertypeExtents")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("powertypeExtents")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the GeneralizationSet of which the associated Classifier is a power type.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("powertypeExtents")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("powertypeExtents")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("powertypeExtents")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QGeneralizationSet::powertype");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("useCases")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("useCases")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("useCases")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of use cases for which this Classifier is the subject.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("useCases")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("useCases")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("useCases")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUseCase::subject");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("templateParameter")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("templateParameter")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("templateParameter")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The template parameter that exposes this element as a formal parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("templateParameter")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QParameterableElement::templateParameter");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("templateParameter")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("templateParameter")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QClassifierTemplateParameter::parameteredElement");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Classifiers that are redefined by this Classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The optional template signature specifying the formal template parameters.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QTemplateableElement::ownedTemplateSignature");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QRedefinableTemplateSignature::classifier");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("collaborationUses")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("collaborationUses")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("collaborationUses")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the collaboration uses owned by the classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("collaborationUses")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("collaborationUses")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("collaborationUses")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QClassifier::features");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("features")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("features")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("features")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("features")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("features")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("features")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QFeature::featuringClassifier");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("representation")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("representation")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("representation")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References a collaboration use which indicates the collaboration that represents this classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("representation")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("representation")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QClassifier::collaborationUses");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("representation")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QGeneralization::specific");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies all elements inherited by this classifier from the general classifiers.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("substitutions")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("substitutions")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("substitutions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the substitutions that are owned by this Classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("substitutions")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("substitutions")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements QNamedElement::clientDependencies");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClassifier")][QString::fromLatin1("substitutions")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QSubstitution::substitutingClassifier");

    QWrappedObject::setPropertyData();
}

// Overriden methods for subsetted properties

void QClassifier::addClientDependency(QWrappedObjectPointer<QSubstitution> substitution)
{
    addSubstitution(substitution);
}

void QClassifier::removeClientDependency(QWrappedObjectPointer<QSubstitution> substitution)
{
    removeSubstitution(substitution);
}

#include "moc_qclassifier.cpp"

QT_END_NAMESPACE_QTUML

