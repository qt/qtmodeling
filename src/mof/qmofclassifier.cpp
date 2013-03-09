/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qmofclassifier.h"
#include "qmofclassifier_p.h"

#include "qmoffeature_p.h"

#include <QtMof/QMofGeneralization>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofProperty>
#include <QtMof/QMofFeature>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofClassifierPrivate::QMofClassifierPrivate() :
    isAbstract(false),
    isFinalSpecialization(false)
{
}

QMofClassifierPrivate::~QMofClassifierPrivate()
{
}

void QMofClassifierPrivate::addAttribute(QMofProperty *attribute)
{
    // This is a read-only derived-union association end

    if (!this->attributes.contains(attribute)) {
        this->attributes.insert(attribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofClassifierPrivate *>(this))->addFeature(qwrappedobject_cast<QMofFeature *>(attribute));
    }
}

void QMofClassifierPrivate::removeAttribute(QMofProperty *attribute)
{
    // This is a read-only derived-union association end

    if (this->attributes.contains(attribute)) {
        this->attributes.remove(attribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofClassifierPrivate *>(this))->removeFeature(qwrappedobject_cast<QMofFeature *>(attribute));
    }
}

void QMofClassifierPrivate::addFeature(QMofFeature *feature)
{
    // This is a read-only derived-union association end

    if (!this->features.contains(feature)) {
        this->features.insert(feature);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(this))->addMember(qwrappedobject_cast<QMofNamedElement *>(feature));

        // Adjust opposite property
        Q_Q(QMofClassifier);
        (qwrappedobject_cast<QMofFeaturePrivate *>(feature->d_func()))->addFeaturingClassifier(q);
    }
}

void QMofClassifierPrivate::removeFeature(QMofFeature *feature)
{
    // This is a read-only derived-union association end

    if (this->features.contains(feature)) {
        this->features.remove(feature);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(this))->removeMember(qwrappedobject_cast<QMofNamedElement *>(feature));

        // Adjust opposite property
        Q_Q(QMofClassifier);
        if (feature)
            (qwrappedobject_cast<QMofFeaturePrivate *>(feature->d_func()))->removeFeaturingClassifier(q);
    }
}

/*!
    \class QMofClassifier

    \inmodule QtMof

    \brief A classifier is a classification of instances - it describes a set of instances that have features in common. A classifier can specify a generalization hierarchy by referencing its general classifiers.
 */

QMofClassifier::QMofClassifier(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QMofClassifierPrivate, wrapper, parent),
    _wrappedMofType(new QMofType(this)),
    _wrappedMofRedefinableElement(new QMofRedefinableElement(this)),
    _wrappedMofNamespace(new QMofNamespace(this))
{
    setPropertyData();
}

QMofClassifier::QMofClassifier(QMofClassifierPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedMofType(new QMofType(this)),
    _wrappedMofRedefinableElement(new QMofRedefinableElement(this)),
    _wrappedMofNamespace(new QMofNamespace(this))
{
    setPropertyData();
}

QMofClassifier::~QMofClassifier()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QMofElement *> QMofClassifier::ownedElements() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QMofElement *QMofClassifier::owner() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QMofComment *> QMofClassifier::ownedComments() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedComments();
}

void QMofClassifier::addOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->addOwnedComment(ownedComment);
}

void QMofClassifier::removeOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QMofClassifier::name() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->name();
}

void QMofClassifier::setName(QString name)
{
    (qwrappedobject_cast<QMofNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QMofClassifier::qualifiedName() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QMofNamespace *QMofClassifier::namespace_() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtMof::VisibilityKind QMofClassifier::visibility() const
{
    return (qwrappedobject_cast<const QMofPackageableElement *>(this))->visibility();
}

void QMofClassifier::setVisibility(QtMof::VisibilityKind visibility)
{
    (qwrappedobject_cast<QMofPackageableElement *>(this))->setVisibility(visibility);
}

void QMofClassifier::unsetVisibility()
{
    setVisibility(QtMof::VisibilityPublic);
    Q_D(QMofClassifier);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QMofPackage *QMofClassifier::package() const
{
    return (qwrappedobject_cast<const QMofType *>(this))->package();
}

void QMofClassifier::setPackage(QMofPackage *package)
{
    (qwrappedobject_cast<QMofType *>(this))->setPackage(package);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QMofClassifier::isLeaf() const
{
    return (qwrappedobject_cast<const QMofRedefinableElement *>(this))->isLeaf();
}

void QMofClassifier::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QMofRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QMofClassifier::unsetLeaf()
{
    setLeaf(false);
    Q_D(QMofClassifier);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QMofRedefinableElement *> QMofClassifier::redefinedElements() const
{
    return (qwrappedobject_cast<const QMofRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QMofClassifier *> QMofClassifier::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QMofRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QMofPackageImport *> QMofClassifier::packageImports() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->packageImports();
}

void QMofClassifier::addPackageImport(QMofPackageImport *packageImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->addPackageImport(packageImport);
}

void QMofClassifier::removePackageImport(QMofPackageImport *packageImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QMofNamedElement *> QMofClassifier::members() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QMofPackageableElement *> QMofClassifier::importedMembers() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QMofElementImport *> QMofClassifier::elementImports() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->elementImports();
}

void QMofClassifier::addElementImport(QMofElementImport *elementImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->addElementImport(elementImport);
}

void QMofClassifier::removeElementImport(QMofElementImport *elementImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QMofConstraint *> QMofClassifier::ownedRules() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->ownedRules();
}

void QMofClassifier::addOwnedRule(QMofConstraint *ownedRule)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->addOwnedRule(ownedRule);
}

void QMofClassifier::removeOwnedRule(QMofConstraint *ownedRule)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QMofNamedElement *> QMofClassifier::ownedMembers() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofClassifier
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QMofClassifier::isAbstract() const
{
    // This is a read-write attribute

    Q_D(const QMofClassifier);
    return d->isAbstract;
}

void QMofClassifier::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    Q_D(QMofClassifier);
    if (d->isAbstract != isAbstract) {
        d->isAbstract = isAbstract;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isAbstract");
}

void QMofClassifier::unsetAbstract()
{
    setAbstract(false);
    Q_D(QMofClassifier);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QMofClassifier::isFinalSpecialization() const
{
    // This is a read-write attribute

    Q_D(const QMofClassifier);
    return d->isFinalSpecialization;
}

void QMofClassifier::setFinalSpecialization(bool isFinalSpecialization)
{
    // This is a read-write attribute

    Q_D(QMofClassifier);
    if (d->isFinalSpecialization != isFinalSpecialization) {
        d->isFinalSpecialization = isFinalSpecialization;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isFinalSpecialization");
}

void QMofClassifier::unsetFinalSpecialization()
{
    setFinalSpecialization(false);
    Q_D(QMofClassifier);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isFinalSpecialization"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofClassifier
// ---------------------------------------------------------------

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
QSet<QMofProperty *> QMofClassifier::attributes() const
{
    // This is a read-only derived-union association end

    Q_D(const QMofClassifier);
    return d->attributes;
}

/*!
    Specifies each feature defined in the classifier.
 */
QSet<QMofFeature *> QMofClassifier::features() const
{
    // This is a read-only derived-union association end

    Q_D(const QMofClassifier);
    return d->features;
}

/*!
    Specifies the general Classifiers for this Classifier.
 */
QSet<QMofClassifier *> QMofClassifier::generals() const
{
    // This is a read-write derived association end

    qWarning("QMofClassifier::generals: to be implemented (this is a derived associationend)");

    return QSet<QMofClassifier *>(); // change here to your derived return
}

void QMofClassifier::addGeneral(QMofClassifier *general)
{
    // This is a read-write derived association end

    qWarning("QMofClassifier::addGeneral: to be implemented (this is a derived associationend)");
    Q_UNUSED(general);

    if (false) { // change to your derived inclusion criteria
        // change to your derived code
    }
}

void QMofClassifier::removeGeneral(QMofClassifier *general)
{
    // This is a read-write derived association end

    qWarning("QMofClassifier::removeGeneral: to be implemented (this is a derived associationend)");
    Q_UNUSED(general);

    if (false) { // change to your derived exclusion criteria
        // change to your derived code
    }
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QSet<QMofClassifier *> QMofClassifier::redefinedClassifiers() const
{
    // This is a read-write association end

    Q_D(const QMofClassifier);
    return d->redefinedClassifiers;
}

void QMofClassifier::addRedefinedClassifier(QMofClassifier *redefinedClassifier)
{
    // This is a read-write association end

    Q_D(QMofClassifier);
    if (!d->redefinedClassifiers.contains(redefinedClassifier)) {
        d->redefinedClassifiers.insert(redefinedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QMofRedefinableElement *>(redefinedClassifier));
    }
}

void QMofClassifier::removeRedefinedClassifier(QMofClassifier *redefinedClassifier)
{
    // This is a read-write association end

    Q_D(QMofClassifier);
    if (d->redefinedClassifiers.contains(redefinedClassifier)) {
        d->redefinedClassifiers.remove(redefinedClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QMofRedefinableElement *>(redefinedClassifier));
    }
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
QSet<QMofNamedElement *> QMofClassifier::inheritedMembers() const
{
    // This is a read-only derived association end

    qWarning("QMofClassifier::inheritedMembers: to be implemented (this is a derived associationend)");

    return QSet<QMofNamedElement *>(); // change here to your derived return
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QSet<QMofGeneralization *> QMofClassifier::generalizations() const
{
    // This is a read-write association end

    Q_D(const QMofClassifier);
    return d->generalizations;
}

void QMofClassifier::addGeneralization(QMofGeneralization *generalization)
{
    // This is a read-write association end

    Q_D(QMofClassifier);
    if (!d->generalizations.contains(generalization)) {
        d->generalizations.insert(generalization);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(generalization));

        // Adjust opposite property
        generalization->setSpecific(this);
    }
}

void QMofClassifier::removeGeneralization(QMofGeneralization *generalization)
{
    // This is a read-write association end

    Q_D(QMofClassifier);
    if (d->generalizations.contains(generalization)) {
        d->generalizations.remove(generalization);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(generalization));

        // Adjust opposite property
        generalization->setSpecific(0);
    }
}

/*!
    The query allFeatures() gives all of the features in the namespace of the classifier. In general, through mechanisms such as inheritance, this will be a larger set than feature.
 */
QSet<QMofFeature *> QMofClassifier::allFeatures() const
{
    qWarning("QMofClassifier::allFeatures: operation to be implemented");

    return QSet<QMofFeature *>(); // change here to your derived return
}

/*!
    The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 */
QSet<QMofClassifier *> QMofClassifier::allParents() const
{
    qWarning("QMofClassifier::allParents: operation to be implemented");

    return QSet<QMofClassifier *>(); // change here to your derived return
}

/*!
    The query conformsTo() gives true for a classifier that defines a type that conforms to another. This is used, for example, in the specification of signature conformance for operations.
 */
bool QMofClassifier::conformsTo(const QMofClassifier *other) const
{
    qWarning("QMofClassifier::conformsTo: operation to be implemented");
    Q_UNUSED(other);

    return bool(); // change here to your derived return
}

/*!
    The query hasVisibilityOf() determines whether a named element is visible in the classifier. By default all are visible. It is only called when the argument is something owned by a parent.
 */
bool QMofClassifier::hasVisibilityOf(const QMofNamedElement *n) const
{
    qWarning("QMofClassifier::hasVisibilityOf: operation to be implemented");
    Q_UNUSED(n);

    return bool(); // change here to your derived return
}

/*!
    The query inherit() defines how to inherit a set of elements. Here the operation is defined to inherit them all. It is intended to be redefined in circumstances where inheritance is affected by redefinition.
 */
QSet<QMofNamedElement *> QMofClassifier::inherit(QSet<QMofNamedElement *> inhs) const
{
    qWarning("QMofClassifier::inherit: operation to be implemented");
    Q_UNUSED(inhs);

    return QSet<QMofNamedElement *>(); // change here to your derived return
}

/*!
    The query inheritableMembers() gives all of the members of a classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
 */
QSet<QMofNamedElement *> QMofClassifier::inheritableMembers(const QMofClassifier *c) const
{
    qWarning("QMofClassifier::inheritableMembers: operation to be implemented");
    Q_UNUSED(c);

    return QSet<QMofNamedElement *>(); // change here to your derived return
}

/*!
    The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
 */
bool QMofClassifier::maySpecializeType(const QMofClassifier *c) const
{
    qWarning("QMofClassifier::maySpecializeType: operation to be implemented");
    Q_UNUSED(c);

    return bool(); // change here to your derived return
}

/*!
    The query parents() gives all of the immediate ancestors of a generalized Classifier.
 */
QSet<QMofClassifier *> QMofClassifier::parents() const
{
    qWarning("QMofClassifier::parents: operation to be implemented");

    return QSet<QMofClassifier *>(); // change here to your derived return
}

void QMofClassifier::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("isAbstract")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("isFinalSpecialization")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofClassifier::features");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("attributes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("features")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("features")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("features")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies each feature defined in the classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("features")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("features")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("features")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofFeature::featuringClassifier");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the general Classifiers for this Classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("generals")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Classifiers that are redefined by this Classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("redefinedClassifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies all elements inherited by this classifier from the general classifiers.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("inheritedMembers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofClassifier")][QString::fromLatin1("generalizations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofGeneralization::specific");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofclassifier.cpp"

