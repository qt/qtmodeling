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

#include "qumlbehavioralfeature.h"
#include "qumlbehavioralfeature_p.h"

#include <QtUml/QUmlType>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlParameter>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlBehavioralFeaturePrivate::QUmlBehavioralFeaturePrivate() :
    concurrency(QtUml::CallConcurrencySequential),
    isAbstract(false)
{
}

QUmlBehavioralFeaturePrivate::~QUmlBehavioralFeaturePrivate()
{
}

/*!
    \class QUmlBehavioralFeature

    \inmodule QtUml

    \brief A behavioral feature is a feature of a classifier that specifies an aspect of the behavior of its instances.A behavioral feature is implemented (realized) by a behavior. A behavioral feature specifies that a classifier will respond to a designated request by invoking its implementing method.A behavioral feature owns zero or more parameter sets.
 */

QUmlBehavioralFeature::QUmlBehavioralFeature(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlBehavioralFeaturePrivate, wrapper, parent),
    _wrappedUmlNamespace(new QUmlNamespace(this)),
    _wrappedUmlFeature(new QUmlFeature(this))
{
    setPropertyData();
}

QUmlBehavioralFeature::QUmlBehavioralFeature(QUmlBehavioralFeaturePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlNamespace(new QUmlNamespace(this)),
    _wrappedUmlFeature(new QUmlFeature(this))
{
    setPropertyData();
}

QUmlBehavioralFeature::~QUmlBehavioralFeature()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlBehavioralFeature::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlBehavioralFeature::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlBehavioralFeature::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlBehavioralFeature::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlBehavioralFeature::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlBehavioralFeature::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlBehavioralFeature::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlBehavioralFeature::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlBehavioralFeature::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlBehavioralFeature::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlBehavioralFeature::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlBehavioralFeature::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlBehavioralFeature::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlBehavioralFeature::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlBehavioralFeature::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlBehavioralFeature::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlBehavioralFeature::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlBehavioralFeature::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlBehavioralFeature::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlBehavioralFeature::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlBehavioralFeature::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlBehavioralFeature::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlBehavioralFeature::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlBehavioralFeature::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlBehavioralFeature::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlBehavioralFeature::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlBehavioralFeature::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlBehavioralFeature::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlBehavioralFeature::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlBehavioralFeature::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlBehavioralFeature::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlBehavioralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlBehavioralFeature::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlBehavioralFeature::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QUmlBehavioralFeature::isStatic() const
{
    return (qwrappedobject_cast<const QUmlFeature *>(this))->isStatic();
}

void QUmlBehavioralFeature::setStatic(bool isStatic)
{
    (qwrappedobject_cast<QUmlFeature *>(this))->setStatic(isStatic);
}

void QUmlBehavioralFeature::unsetStatic()
{
    setStatic(false);
    Q_D(QUmlBehavioralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isStatic"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
QSet<QUmlClassifier *> QUmlBehavioralFeature::featuringClassifiers() const
{
    return (qwrappedobject_cast<const QUmlFeature *>(this))->featuringClassifiers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlBehavioralFeature
// ---------------------------------------------------------------

/*!
    Specifies the semantics of concurrent calls to the same passive instance (i.e., an instance originating from a class with isActive being false). Active instances control access to their own behavioral features.
 */
QtUml::CallConcurrencyKind QUmlBehavioralFeature::concurrency() const
{
    // This is a read-write attribute

    Q_D(const QUmlBehavioralFeature);
    return d->concurrency;
}

void QUmlBehavioralFeature::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    // This is a read-write attribute

    Q_D(QUmlBehavioralFeature);
    if (d->concurrency != concurrency) {
        d->concurrency = concurrency;
    }
    d->modifiedResettableProperties << QString::fromLatin1("concurrency");
}

void QUmlBehavioralFeature::unsetConcurrency()
{
    setConcurrency(QtUml::CallConcurrencySequential);
    Q_D(QUmlBehavioralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("concurrency"));
}

/*!
    If true, then the behavioral feature does not have an implementation, and one must be supplied by a more specific element. If false, the behavioral feature must have an implementation in the classifier or one must be inherited from a more general element.
 */
bool QUmlBehavioralFeature::isAbstract() const
{
    // This is a read-write attribute

    Q_D(const QUmlBehavioralFeature);
    return d->isAbstract;
}

void QUmlBehavioralFeature::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    Q_D(QUmlBehavioralFeature);
    if (d->isAbstract != isAbstract) {
        d->isAbstract = isAbstract;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isAbstract");
}

void QUmlBehavioralFeature::unsetAbstract()
{
    setAbstract(false);
    Q_D(QUmlBehavioralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlBehavioralFeature
// ---------------------------------------------------------------

/*!
    References the Types representing exceptions that may be raised during an invocation of this feature.
 */
QSet<QUmlType *> QUmlBehavioralFeature::raisedExceptions() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavioralFeature);
    return d->raisedExceptions;
}

void QUmlBehavioralFeature::addRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    Q_D(QUmlBehavioralFeature);
    if (!d->raisedExceptions.contains(raisedException)) {
        d->raisedExceptions.insert(raisedException);
    }
}

void QUmlBehavioralFeature::removeRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    Q_D(QUmlBehavioralFeature);
    if (d->raisedExceptions.contains(raisedException)) {
        d->raisedExceptions.remove(raisedException);
    }
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.
 */
QList<QUmlParameter *> QUmlBehavioralFeature::ownedParameters() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavioralFeature);
    return d->ownedParameters;
}

void QUmlBehavioralFeature::addOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QUmlBehavioralFeature);
    if (!d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.append(ownedParameter);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedParameter));
    }
}

void QUmlBehavioralFeature::removeOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QUmlBehavioralFeature);
    if (d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.removeAll(ownedParameter);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedParameter));
    }
}

/*!
    The ParameterSets owned by this BehavioralFeature.
 */
QSet<QUmlParameterSet *> QUmlBehavioralFeature::ownedParameterSets() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavioralFeature);
    return d->ownedParameterSets;
}

void QUmlBehavioralFeature::addOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    Q_D(QUmlBehavioralFeature);
    if (!d->ownedParameterSets.contains(ownedParameterSet)) {
        d->ownedParameterSets.insert(ownedParameterSet);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedParameterSet));
    }
}

void QUmlBehavioralFeature::removeOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    Q_D(QUmlBehavioralFeature);
    if (d->ownedParameterSets.contains(ownedParameterSet)) {
        d->ownedParameterSets.remove(ownedParameterSet);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedParameterSet));
    }
}

/*!
    A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior).
 */
QSet<QUmlBehavior *> QUmlBehavioralFeature::methods() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavioralFeature);
    return d->methods;
}

void QUmlBehavioralFeature::addMethod(QUmlBehavior *method)
{
    // This is a read-write association end

    Q_D(QUmlBehavioralFeature);
    if (!d->methods.contains(method)) {
        d->methods.insert(method);

        // Adjust opposite property
        method->setSpecification(this);
    }
}

void QUmlBehavioralFeature::removeMethod(QUmlBehavior *method)
{
    // This is a read-write association end

    Q_D(QUmlBehavioralFeature);
    if (d->methods.contains(method)) {
        d->methods.remove(method);

        // Adjust opposite property
        method->setSpecification(0);
    }
}

/*!
    The query isDistinguishableFrom() determines whether two BehavioralFeatures may coexist in the same Namespace. It specifies that they have to have different signatures.
 */
bool QUmlBehavioralFeature::isDistinguishableFrom(const QUmlNamedElement *n, const QUmlNamespace *ns) const
{
    qWarning("QUmlBehavioralFeature::isDistinguishableFrom: operation to be implemented");
    Q_UNUSED(n);
    Q_UNUSED(ns);

    return bool(); // change here to your derived return
}

void QUmlBehavioralFeature::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("concurrency")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("concurrency")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("concurrency")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the semantics of concurrent calls to the same passive instance (i.e., an instance originating from a class with isActive being false). Active instances control access to their own behavioral features.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("concurrency")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("concurrency")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("concurrency")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("isAbstract")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("isAbstract")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("isAbstract")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, then the behavioral feature does not have an implementation, and one must be supplied by a more specific element. If false, the behavioral feature must have an implementation in the classifier or one must be inherited from a more general element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("isAbstract")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("isAbstract")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("isAbstract")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Types representing exceptions that may be raised during an invocation of this feature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the ordered set of formal parameters of this BehavioralFeature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ParameterSets owned by this BehavioralFeature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("methods")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("methods")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("methods")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("methods")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("methods")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavioralFeature")][QString::fromLatin1("methods")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlBehavior::specification");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlbehavioralfeature.cpp"

