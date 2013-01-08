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

#include "qassociation.h"
#include "qassociation_p.h"

#include <QtMof/QType>
#include <QtMof/QProperty>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTMOF

QAssociationPrivate::QAssociationPrivate() :
    isDerived(false)
{
}

QAssociationPrivate::~QAssociationPrivate()
{
}

/*!
    \class QAssociation

    \inmodule QtMof

    \brief An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link. A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.
 */

QAssociation::QAssociation(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QAssociationPrivate, wrapper, parent),
    _wrappedRelationship(new QRelationship(this)),
    _wrappedClassifier(new QClassifier(this))
{
    setPropertyData();
}

QAssociation::QAssociation(QAssociationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedRelationship(new QRelationship(this)),
    _wrappedClassifier(new QClassifier(this))
{
    setPropertyData();
}

QAssociation::~QAssociation()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QAssociation::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QAssociation::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QAssociation::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QAssociation::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QAssociation::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
QSet<QElement *> QAssociation::relatedElements() const
{
    return (qwrappedobject_cast<const QRelationship *>(this))->relatedElements();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QAssociation::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QAssociation::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QAssociation::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QAssociation::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtMof::VisibilityKind QAssociation::visibility() const
{
    return (qwrappedobject_cast<const QPackageableElement *>(this))->visibility();
}

void QAssociation::setVisibility(QtMof::VisibilityKind visibility)
{
    (qwrappedobject_cast<QPackageableElement *>(this))->setVisibility(visibility);
}

void QAssociation::unsetVisibility()
{
    setVisibility(QtMof::VisibilityPublic);
    Q_D(QAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QPackage *QAssociation::package() const
{
    return (qwrappedobject_cast<const QType *>(this))->package();
}

void QAssociation::setPackage(QPackage *package)
{
    (qwrappedobject_cast<QType *>(this))->setPackage(package);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QAssociation::isLeaf() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QAssociation::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QAssociation::unsetLeaf()
{
    setLeaf(false);
    Q_D(QAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QRedefinableElement *> QAssociation::redefinedElements() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QClassifier *> QAssociation::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QPackageImport *> QAssociation::packageImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->packageImports();
}

void QAssociation::addPackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QAssociation::removePackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QNamedElement *> QAssociation::members() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QPackageableElement *> QAssociation::importedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QElementImport *> QAssociation::elementImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->elementImports();
}

void QAssociation::addElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QAssociation::removeElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QConstraint *> QAssociation::ownedRules() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedRules();
}

void QAssociation::addOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QAssociation::removeOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QNamedElement *> QAssociation::ownedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QClassifier
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QAssociation::isAbstract() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->isAbstract();
}

void QAssociation::setAbstract(bool isAbstract)
{
    (qwrappedobject_cast<QClassifier *>(this))->setAbstract(isAbstract);
}

void QAssociation::unsetAbstract()
{
    setAbstract(false);
    Q_D(QAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QAssociation::isFinalSpecialization() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->isFinalSpecialization();
}

void QAssociation::setFinalSpecialization(bool isFinalSpecialization)
{
    (qwrappedobject_cast<QClassifier *>(this))->setFinalSpecialization(isFinalSpecialization);
}

void QAssociation::unsetFinalSpecialization()
{
    setFinalSpecialization(false);
    Q_D(QAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isFinalSpecialization"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QClassifier
// ---------------------------------------------------------------

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
QSet<QProperty *> QAssociation::attributes() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->attributes();
}

/*!
    Specifies each feature defined in the classifier.
 */
QSet<QFeature *> QAssociation::features() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->features();
}

/*!
    Specifies the general Classifiers for this Classifier.
 */
QSet<QClassifier *> QAssociation::generals() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->generals();
}

void QAssociation::addGeneral(QClassifier *general)
{
    (qwrappedobject_cast<QClassifier *>(this))->addGeneral(general);
}

void QAssociation::removeGeneral(QClassifier *general)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeGeneral(general);
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QSet<QClassifier *> QAssociation::redefinedClassifiers() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->redefinedClassifiers();
}

void QAssociation::addRedefinedClassifier(QClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QClassifier *>(this))->addRedefinedClassifier(redefinedClassifier);
}

void QAssociation::removeRedefinedClassifier(QClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeRedefinedClassifier(redefinedClassifier);
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
QSet<QNamedElement *> QAssociation::inheritedMembers() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->inheritedMembers();
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QSet<QGeneralization *> QAssociation::generalizations() const
{
    return (qwrappedobject_cast<const QClassifier *>(this))->generalizations();
}

void QAssociation::addGeneralization(QGeneralization *generalization)
{
    (qwrappedobject_cast<QClassifier *>(this))->addGeneralization(generalization);
}

void QAssociation::removeGeneralization(QGeneralization *generalization)
{
    (qwrappedobject_cast<QClassifier *>(this))->removeGeneralization(generalization);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QAssociation
// ---------------------------------------------------------------

/*!
    Specifies whether the association is derived from other model elements such as other associations or constraints.
 */
bool QAssociation::isDerived() const
{
    // This is a read-write attribute

    Q_D(const QAssociation);
    return d->isDerived;
}

void QAssociation::setDerived(bool isDerived)
{
    // This is a read-write attribute

    Q_D(QAssociation);
    if (d->isDerived != isDerived) {
        d->isDerived = isDerived;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDerived");
}

void QAssociation::unsetDerived()
{
    setDerived(false);
    Q_D(QAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDerived"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QAssociation
// ---------------------------------------------------------------

/*!
    References the classifiers that are used as types of the ends of the association.
 */
QList<QType *> QAssociation::endTypes() const
{
    // This is a read-only derived association end

    qWarning("QAssociation::endTypes: to be implemented (this is a derived associationend)");

    return QList<QType *>(); // change here to your derived return
}

/*!
    The navigable ends that are owned by the association itself.
 */
QSet<QProperty *> QAssociation::navigableOwnedEnds() const
{
    // This is a read-write association end

    Q_D(const QAssociation);
    return d->navigableOwnedEnds;
}

void QAssociation::addNavigableOwnedEnd(QProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    Q_D(QAssociation);
    if (!d->navigableOwnedEnds.contains(navigableOwnedEnd)) {
        d->navigableOwnedEnds.insert(navigableOwnedEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QAssociation *>(this))->addOwnedEnd(qwrappedobject_cast<QProperty *>(navigableOwnedEnd));
    }
}

void QAssociation::removeNavigableOwnedEnd(QProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    Q_D(QAssociation);
    if (d->navigableOwnedEnds.contains(navigableOwnedEnd)) {
        d->navigableOwnedEnds.remove(navigableOwnedEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QAssociation *>(this))->removeOwnedEnd(qwrappedobject_cast<QProperty *>(navigableOwnedEnd));
    }
}

/*!
    The ends that are owned by the association itself.
 */
QList<QProperty *> QAssociation::ownedEnds() const
{
    // This is a read-write association end

    Q_D(const QAssociation);
    return d->ownedEnds;
}

void QAssociation::addOwnedEnd(QProperty *ownedEnd)
{
    // This is a read-write association end

    Q_D(QAssociation);
    if (!d->ownedEnds.contains(ownedEnd)) {
        d->ownedEnds.append(ownedEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QFeature *>(ownedEnd));
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedEnd));
        (qwrappedobject_cast<QAssociation *>(this))->addMemberEnd(qwrappedobject_cast<QProperty *>(ownedEnd));

        // Adjust opposite property
        ownedEnd->setOwningAssociation(this);
    }
}

void QAssociation::removeOwnedEnd(QProperty *ownedEnd)
{
    // This is a read-write association end

    Q_D(QAssociation);
    if (d->ownedEnds.contains(ownedEnd)) {
        d->ownedEnds.removeAll(ownedEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QFeature *>(ownedEnd));
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedEnd));
        (qwrappedobject_cast<QAssociation *>(this))->removeMemberEnd(qwrappedobject_cast<QProperty *>(ownedEnd));

        // Adjust opposite property
        ownedEnd->setOwningAssociation(0);
    }
}

/*!
    Each end represents participation of instances of the classifier connected to the end in links of the association.
 */
QList<QProperty *> QAssociation::memberEnds() const
{
    // This is a read-write association end

    Q_D(const QAssociation);
    return d->memberEnds;
}

void QAssociation::addMemberEnd(QProperty *memberEnd)
{
    // This is a read-write association end

    Q_D(QAssociation);
    if (!d->memberEnds.contains(memberEnd)) {
        d->memberEnds.append(memberEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addMember(qwrappedobject_cast<QNamedElement *>(memberEnd));

        // Adjust opposite property
        memberEnd->setAssociation(this);
    }
}

void QAssociation::removeMemberEnd(QProperty *memberEnd)
{
    // This is a read-write association end

    Q_D(QAssociation);
    if (d->memberEnds.contains(memberEnd)) {
        d->memberEnds.removeAll(memberEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeMember(qwrappedobject_cast<QNamedElement *>(memberEnd));

        // Adjust opposite property
        memberEnd->setAssociation(0);
    }
}

void QAssociation::registerMetaTypes() const
{
    qRegisterMetaType<QType *>("QType *");
    qRegisterMetaType<QSet<QType *>>("QSet<QType *>");
    qRegisterMetaType<QList<QType *>>("QList<QType *>");

    qRegisterMetaType<QProperty *>("QProperty *");
    qRegisterMetaType<QSet<QProperty *>>("QSet<QProperty *>");
    qRegisterMetaType<QList<QProperty *>>("QList<QProperty *>");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QAssociation::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the association is derived from other model elements such as other associations or constraints.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the classifiers that are used as types of the ends of the association.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRelationship::relatedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The navigable ends that are owned by the association itself.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAssociation::ownedEnds");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ends that are owned by the association itself.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QClassifier::features QNamespace::ownedMembers QAssociation::memberEnds");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QProperty::owningAssociation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Each end represents participation of instances of the classifier connected to the end in links of the association.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QProperty::association");

    QWrappedObject::setPropertyData();
}

#include "moc_qassociation.cpp"

QT_END_NAMESPACE_QTMOF

