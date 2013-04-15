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
#include "qmofbehavioralfeature.h"
#include "qmofbehavioralfeature_p.h"

#include <QtMof/QMofParameter>
#include <QtMof/QMofType>
#include <QtMof/QMofNamedElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofBehavioralFeaturePrivate::QMofBehavioralFeaturePrivate()
{
}

QMofBehavioralFeaturePrivate::~QMofBehavioralFeaturePrivate()
{
}

/*!
    \class QMofBehavioralFeature

    \inmodule QtMof

    \brief A behavioral feature is a feature of a classifier that specifies an aspect of the behavior of its instances.
 */

QMofBehavioralFeature::QMofBehavioralFeature(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QMofBehavioralFeaturePrivate, wrapper, parent),
    _wrappedMofFeature(new QMofFeature(this)),
    _wrappedMofNamespace(new QMofNamespace(this))
{
    setPropertyData();
}

QMofBehavioralFeature::QMofBehavioralFeature(QMofBehavioralFeaturePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedMofFeature(new QMofFeature(this)),
    _wrappedMofNamespace(new QMofNamespace(this))
{
    setPropertyData();
}

QMofBehavioralFeature::~QMofBehavioralFeature()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QMofElement *> QMofBehavioralFeature::ownedElements() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QMofElement *QMofBehavioralFeature::owner() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QMofComment *> QMofBehavioralFeature::ownedComments() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedComments();
}

void QMofBehavioralFeature::addOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->addOwnedComment(ownedComment);
}

void QMofBehavioralFeature::removeOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QMofBehavioralFeature::name() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->name();
}

void QMofBehavioralFeature::setName(QString name)
{
    (qwrappedobject_cast<QMofNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtMof::VisibilityKind QMofBehavioralFeature::visibility() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->visibility();
}

void QMofBehavioralFeature::setVisibility(QtMof::VisibilityKind visibility)
{
    (qwrappedobject_cast<QMofNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QMofBehavioralFeature::qualifiedName() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QMofNamespace *QMofBehavioralFeature::namespace_() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QMofBehavioralFeature::isLeaf() const
{
    return (qwrappedobject_cast<const QMofRedefinableElement *>(this))->isLeaf();
}

void QMofBehavioralFeature::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QMofRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QMofBehavioralFeature::unsetLeaf()
{
    setLeaf(false);
    Q_D(QMofBehavioralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QMofRedefinableElement *> QMofBehavioralFeature::redefinedElements() const
{
    return (qwrappedobject_cast<const QMofRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QMofClassifier *> QMofBehavioralFeature::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QMofRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QMofBehavioralFeature::isStatic() const
{
    return (qwrappedobject_cast<const QMofFeature *>(this))->isStatic();
}

void QMofBehavioralFeature::setStatic(bool isStatic)
{
    (qwrappedobject_cast<QMofFeature *>(this))->setStatic(isStatic);
}

void QMofBehavioralFeature::unsetStatic()
{
    setStatic(false);
    Q_D(QMofBehavioralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isStatic"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
QSet<QMofClassifier *> QMofBehavioralFeature::featuringClassifiers() const
{
    return (qwrappedobject_cast<const QMofFeature *>(this))->featuringClassifiers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QMofPackageImport *> QMofBehavioralFeature::packageImports() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->packageImports();
}

void QMofBehavioralFeature::addPackageImport(QMofPackageImport *packageImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->addPackageImport(packageImport);
}

void QMofBehavioralFeature::removePackageImport(QMofPackageImport *packageImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QMofNamedElement *> QMofBehavioralFeature::members() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QMofPackageableElement *> QMofBehavioralFeature::importedMembers() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QMofElementImport *> QMofBehavioralFeature::elementImports() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->elementImports();
}

void QMofBehavioralFeature::addElementImport(QMofElementImport *elementImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->addElementImport(elementImport);
}

void QMofBehavioralFeature::removeElementImport(QMofElementImport *elementImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QMofConstraint *> QMofBehavioralFeature::ownedRules() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->ownedRules();
}

void QMofBehavioralFeature::addOwnedRule(QMofConstraint *ownedRule)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->addOwnedRule(ownedRule);
}

void QMofBehavioralFeature::removeOwnedRule(QMofConstraint *ownedRule)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QMofNamedElement *> QMofBehavioralFeature::ownedMembers() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofBehavioralFeature
// ---------------------------------------------------------------

/*!
    References the Types representing exceptions that may be raised during an invocation of this feature.
 */
QSet<QMofType *> QMofBehavioralFeature::raisedExceptions() const
{
    // This is a read-write association end

    Q_D(const QMofBehavioralFeature);
    return d->raisedExceptions;
}

void QMofBehavioralFeature::addRaisedException(QMofType *raisedException)
{
    // This is a read-write association end

    Q_D(QMofBehavioralFeature);
    if (!d->raisedExceptions.contains(raisedException)) {
        d->raisedExceptions.insert(raisedException);
    }
}

void QMofBehavioralFeature::removeRaisedException(QMofType *raisedException)
{
    // This is a read-write association end

    Q_D(QMofBehavioralFeature);
    if (d->raisedExceptions.contains(raisedException)) {
        d->raisedExceptions.remove(raisedException);
    }
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.
 */
QList<QMofParameter *> QMofBehavioralFeature::ownedParameters() const
{
    // This is a read-write association end

    Q_D(const QMofBehavioralFeature);
    return d->ownedParameters;
}

void QMofBehavioralFeature::addOwnedParameter(QMofParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QMofBehavioralFeature);
    if (!d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.append(ownedParameter);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedParameter));
    }
}

void QMofBehavioralFeature::removeOwnedParameter(QMofParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QMofBehavioralFeature);
    if (d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.removeAll(ownedParameter);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedParameter));
    }
}

/*!
    The query isDistinguishableFrom() determines whether two BehavioralFeatures may coexist in the same Namespace. It specifies that they have to have different signatures.
 */
bool QMofBehavioralFeature::isDistinguishableFrom(const QMofNamedElement *n, const QMofNamespace *ns) const
{
    qWarning("QMofBehavioralFeature::isDistinguishableFrom: operation to be implemented");
    Q_UNUSED(n);
    Q_UNUSED(ns);

    return bool(); // change here to your derived return
}

void QMofBehavioralFeature::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofBehavioralFeature")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofBehavioralFeature")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofBehavioralFeature")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Types representing exceptions that may be raised during an invocation of this feature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofBehavioralFeature")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofBehavioralFeature")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofBehavioralFeature")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofBehavioralFeature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofBehavioralFeature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofBehavioralFeature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the ordered set of formal parameters of this BehavioralFeature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofBehavioralFeature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofBehavioralFeature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofBehavioralFeature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofbehavioralfeature.cpp"

