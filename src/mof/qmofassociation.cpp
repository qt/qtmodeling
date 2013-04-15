/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofassociation.h"
#include "qmofassociation_p.h"

#include <QtMof/QMofType>
#include <QtMof/QMofProperty>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofAssociationPrivate::QMofAssociationPrivate() :
    isDerived(false)
{
}

QMofAssociationPrivate::~QMofAssociationPrivate()
{
}

/*!
    \class QMofAssociation

    \inmodule QtMof

    \brief An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link. A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.
 */

QMofAssociation::QMofAssociation(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QMofAssociationPrivate, wrapper, parent),
    _wrappedMofRelationship(new QMofRelationship(this)),
    _wrappedMofClassifier(new QMofClassifier(this))
{
    setPropertyData();
}

QMofAssociation::QMofAssociation(QMofAssociationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedMofRelationship(new QMofRelationship(this)),
    _wrappedMofClassifier(new QMofClassifier(this))
{
    setPropertyData();
}

QMofAssociation::~QMofAssociation()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QMofElement *> QMofAssociation::ownedElements() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QMofElement *QMofAssociation::owner() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QMofComment *> QMofAssociation::ownedComments() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedComments();
}

void QMofAssociation::addOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->addOwnedComment(ownedComment);
}

void QMofAssociation::removeOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
QSet<QMofElement *> QMofAssociation::relatedElements() const
{
    return (qwrappedobject_cast<const QMofRelationship *>(this))->relatedElements();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QMofAssociation::name() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->name();
}

void QMofAssociation::setName(QString name)
{
    (qwrappedobject_cast<QMofNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QMofAssociation::qualifiedName() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QMofNamespace *QMofAssociation::namespace_() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtMof::VisibilityKind QMofAssociation::visibility() const
{
    return (qwrappedobject_cast<const QMofPackageableElement *>(this))->visibility();
}

void QMofAssociation::setVisibility(QtMof::VisibilityKind visibility)
{
    (qwrappedobject_cast<QMofPackageableElement *>(this))->setVisibility(visibility);
}

void QMofAssociation::unsetVisibility()
{
    setVisibility(QtMof::VisibilityPublic);
    Q_D(QMofAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QMofPackage *QMofAssociation::package() const
{
    return (qwrappedobject_cast<const QMofType *>(this))->package();
}

void QMofAssociation::setPackage(QMofPackage *package)
{
    (qwrappedobject_cast<QMofType *>(this))->setPackage(package);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QMofAssociation::isLeaf() const
{
    return (qwrappedobject_cast<const QMofRedefinableElement *>(this))->isLeaf();
}

void QMofAssociation::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QMofRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QMofAssociation::unsetLeaf()
{
    setLeaf(false);
    Q_D(QMofAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QMofRedefinableElement *> QMofAssociation::redefinedElements() const
{
    return (qwrappedobject_cast<const QMofRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QMofClassifier *> QMofAssociation::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QMofRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QMofPackageImport *> QMofAssociation::packageImports() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->packageImports();
}

void QMofAssociation::addPackageImport(QMofPackageImport *packageImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->addPackageImport(packageImport);
}

void QMofAssociation::removePackageImport(QMofPackageImport *packageImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QMofNamedElement *> QMofAssociation::members() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QMofPackageableElement *> QMofAssociation::importedMembers() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QMofElementImport *> QMofAssociation::elementImports() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->elementImports();
}

void QMofAssociation::addElementImport(QMofElementImport *elementImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->addElementImport(elementImport);
}

void QMofAssociation::removeElementImport(QMofElementImport *elementImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QMofConstraint *> QMofAssociation::ownedRules() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->ownedRules();
}

void QMofAssociation::addOwnedRule(QMofConstraint *ownedRule)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->addOwnedRule(ownedRule);
}

void QMofAssociation::removeOwnedRule(QMofConstraint *ownedRule)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QMofNamedElement *> QMofAssociation::ownedMembers() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofClassifier
// ---------------------------------------------------------------

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QMofAssociation::isAbstract() const
{
    return (qwrappedobject_cast<const QMofClassifier *>(this))->isAbstract();
}

void QMofAssociation::setAbstract(bool isAbstract)
{
    (qwrappedobject_cast<QMofClassifier *>(this))->setAbstract(isAbstract);
}

void QMofAssociation::unsetAbstract()
{
    setAbstract(false);
    Q_D(QMofAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QMofAssociation::isFinalSpecialization() const
{
    return (qwrappedobject_cast<const QMofClassifier *>(this))->isFinalSpecialization();
}

void QMofAssociation::setFinalSpecialization(bool isFinalSpecialization)
{
    (qwrappedobject_cast<QMofClassifier *>(this))->setFinalSpecialization(isFinalSpecialization);
}

void QMofAssociation::unsetFinalSpecialization()
{
    setFinalSpecialization(false);
    Q_D(QMofAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isFinalSpecialization"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofClassifier
// ---------------------------------------------------------------

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
QSet<QMofProperty *> QMofAssociation::attributes() const
{
    return (qwrappedobject_cast<const QMofClassifier *>(this))->attributes();
}

/*!
    Specifies each feature defined in the classifier.
 */
QSet<QMofFeature *> QMofAssociation::features() const
{
    return (qwrappedobject_cast<const QMofClassifier *>(this))->features();
}

/*!
    Specifies the general Classifiers for this Classifier.
 */
QSet<QMofClassifier *> QMofAssociation::generals() const
{
    return (qwrappedobject_cast<const QMofClassifier *>(this))->generals();
}

void QMofAssociation::addGeneral(QMofClassifier *general)
{
    (qwrappedobject_cast<QMofClassifier *>(this))->addGeneral(general);
}

void QMofAssociation::removeGeneral(QMofClassifier *general)
{
    (qwrappedobject_cast<QMofClassifier *>(this))->removeGeneral(general);
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QSet<QMofClassifier *> QMofAssociation::redefinedClassifiers() const
{
    return (qwrappedobject_cast<const QMofClassifier *>(this))->redefinedClassifiers();
}

void QMofAssociation::addRedefinedClassifier(QMofClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QMofClassifier *>(this))->addRedefinedClassifier(redefinedClassifier);
}

void QMofAssociation::removeRedefinedClassifier(QMofClassifier *redefinedClassifier)
{
    (qwrappedobject_cast<QMofClassifier *>(this))->removeRedefinedClassifier(redefinedClassifier);
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
QSet<QMofNamedElement *> QMofAssociation::inheritedMembers() const
{
    return (qwrappedobject_cast<const QMofClassifier *>(this))->inheritedMembers();
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QSet<QMofGeneralization *> QMofAssociation::generalizations() const
{
    return (qwrappedobject_cast<const QMofClassifier *>(this))->generalizations();
}

void QMofAssociation::addGeneralization(QMofGeneralization *generalization)
{
    (qwrappedobject_cast<QMofClassifier *>(this))->addGeneralization(generalization);
}

void QMofAssociation::removeGeneralization(QMofGeneralization *generalization)
{
    (qwrappedobject_cast<QMofClassifier *>(this))->removeGeneralization(generalization);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofAssociation
// ---------------------------------------------------------------

/*!
    Specifies whether the association is derived from other model elements such as other associations or constraints.
 */
bool QMofAssociation::isDerived() const
{
    // This is a read-write attribute

    Q_D(const QMofAssociation);
    return d->isDerived;
}

void QMofAssociation::setDerived(bool isDerived)
{
    // This is a read-write attribute

    Q_D(QMofAssociation);
    if (d->isDerived != isDerived) {
        d->isDerived = isDerived;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDerived");
}

void QMofAssociation::unsetDerived()
{
    setDerived(false);
    Q_D(QMofAssociation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDerived"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofAssociation
// ---------------------------------------------------------------

/*!
    References the classifiers that are used as types of the ends of the association.
 */
QList<QMofType *> QMofAssociation::endTypes() const
{
    // This is a read-only derived association end

    qWarning("QMofAssociation::endTypes: to be implemented (this is a derived associationend)");

    return QList<QMofType *>(); // change here to your derived return
}

/*!
    The navigable ends that are owned by the association itself.
 */
QSet<QMofProperty *> QMofAssociation::navigableOwnedEnds() const
{
    // This is a read-write association end

    Q_D(const QMofAssociation);
    return d->navigableOwnedEnds;
}

void QMofAssociation::addNavigableOwnedEnd(QMofProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    Q_D(QMofAssociation);
    if (!d->navigableOwnedEnds.contains(navigableOwnedEnd)) {
        d->navigableOwnedEnds.insert(navigableOwnedEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofAssociation *>(this))->addOwnedEnd(qwrappedobject_cast<QMofProperty *>(navigableOwnedEnd));
    }
}

void QMofAssociation::removeNavigableOwnedEnd(QMofProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    Q_D(QMofAssociation);
    if (d->navigableOwnedEnds.contains(navigableOwnedEnd)) {
        d->navigableOwnedEnds.remove(navigableOwnedEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofAssociation *>(this))->removeOwnedEnd(qwrappedobject_cast<QMofProperty *>(navigableOwnedEnd));
    }
}

/*!
    The ends that are owned by the association itself.
 */
QList<QMofProperty *> QMofAssociation::ownedEnds() const
{
    // This is a read-write association end

    Q_D(const QMofAssociation);
    return d->ownedEnds;
}

void QMofAssociation::addOwnedEnd(QMofProperty *ownedEnd)
{
    // This is a read-write association end

    Q_D(QMofAssociation);
    if (!d->ownedEnds.contains(ownedEnd)) {
        d->ownedEnds.append(ownedEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QMofFeature *>(ownedEnd));
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedEnd));
        (qwrappedobject_cast<QMofAssociation *>(this))->addMemberEnd(qwrappedobject_cast<QMofProperty *>(ownedEnd));

        // Adjust opposite property
        ownedEnd->setOwningAssociation(this);
    }
}

void QMofAssociation::removeOwnedEnd(QMofProperty *ownedEnd)
{
    // This is a read-write association end

    Q_D(QMofAssociation);
    if (d->ownedEnds.contains(ownedEnd)) {
        d->ownedEnds.removeAll(ownedEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QMofFeature *>(ownedEnd));
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedEnd));
        (qwrappedobject_cast<QMofAssociation *>(this))->removeMemberEnd(qwrappedobject_cast<QMofProperty *>(ownedEnd));

        // Adjust opposite property
        ownedEnd->setOwningAssociation(0);
    }
}

/*!
    Each end represents participation of instances of the classifier connected to the end in links of the association.
 */
QList<QMofProperty *> QMofAssociation::memberEnds() const
{
    // This is a read-write association end

    Q_D(const QMofAssociation);
    return d->memberEnds;
}

void QMofAssociation::addMemberEnd(QMofProperty *memberEnd)
{
    // This is a read-write association end

    Q_D(QMofAssociation);
    if (!d->memberEnds.contains(memberEnd)) {
        d->memberEnds.append(memberEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->addMember(qwrappedobject_cast<QMofNamedElement *>(memberEnd));

        // Adjust opposite property
        memberEnd->setAssociation(this);
    }
}

void QMofAssociation::removeMemberEnd(QMofProperty *memberEnd)
{
    // This is a read-write association end

    Q_D(QMofAssociation);
    if (d->memberEnds.contains(memberEnd)) {
        d->memberEnds.removeAll(memberEnd);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->removeMember(qwrappedobject_cast<QMofNamedElement *>(memberEnd));

        // Adjust opposite property
        memberEnd->setAssociation(0);
    }
}

void QMofAssociation::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the association is derived from other model elements such as other associations or constraints.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("isDerived")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the classifiers that are used as types of the ends of the association.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofRelationship::relatedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("endTypes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The navigable ends that are owned by the association itself.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofAssociation::ownedEnds");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("navigableOwnedEnds")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ends that are owned by the association itself.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofClassifier::features QMofNamespace::ownedMembers QMofAssociation::memberEnds");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("ownedEnds")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofProperty::owningAssociation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Each end represents participation of instances of the classifier connected to the end in links of the association.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofAssociation")][QString::fromLatin1("memberEnds")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofProperty::association");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofassociation.cpp"

