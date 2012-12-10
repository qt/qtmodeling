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

#include "qbehavioralfeature.h"
#include "qbehavioralfeature_p.h"

#include <QtUml/QType>
#include <QtUml/QNamedElement>
#include <QtUml/QParameterSet>
#include <QtUml/QBehavior>
#include <QtUml/QParameter>

QT_BEGIN_NAMESPACE_QTUML

QBehavioralFeaturePrivate::QBehavioralFeaturePrivate() :
    concurrency(QtUml::CallConcurrencySequential),
    isAbstract(false),
    raisedExceptions(new QSet<QType *>),
    ownedParameters(new QList<QParameter *>),
    ownedParameterSets(new QSet<QParameterSet *>),
    methods(new QSet<QBehavior *>)
{
}

QBehavioralFeaturePrivate::~QBehavioralFeaturePrivate()
{
    delete raisedExceptions;
    delete ownedParameters;
    delete ownedParameterSets;
    delete methods;
}

/*!
    \class QBehavioralFeature

    \inmodule QtUml

    \brief A behavioral feature is a feature of a classifier that specifies an aspect of the behavior of its instances.A behavioral feature is implemented (realized) by a behavior. A behavioral feature specifies that a classifier will respond to a designated request by invoking its implementing method.A behavioral feature owns zero or more parameter sets.
 */

QBehavioralFeature::QBehavioralFeature(QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QtMof::QMofObject(*new QBehavioralFeaturePrivate, parent, wrapper),
    _wrappedNamespace(new QNamespace(this, this)),
    _wrappedFeature(new QFeature(this, this))
{
}

QBehavioralFeature::QBehavioralFeature(QBehavioralFeaturePrivate &dd, QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QtMof::QMofObject(dd, parent, wrapper),
    _wrappedNamespace(new QNamespace(this, this)),
    _wrappedFeature(new QFeature(this, this))
{
}

QBehavioralFeature::~QBehavioralFeature()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QBehavioralFeature::ownedElements() const
{
    return (qmofobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QBehavioralFeature::owner() const
{
    return (qmofobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QBehavioralFeature::ownedComments() const
{
    return (qmofobject_cast<const QElement *>(this))->ownedComments();
}

void QBehavioralFeature::addOwnedComment(QComment *ownedComment)
{
    (qmofobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QBehavioralFeature::removeOwnedComment(QComment *ownedComment)
{
    (qmofobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QBehavioralFeature::name() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->name();
}

void QBehavioralFeature::setName(QString name)
{
    (qmofobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QBehavioralFeature::visibility() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->visibility();
}

void QBehavioralFeature::setVisibility(QtUml::VisibilityKind visibility)
{
    (qmofobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QBehavioralFeature::qualifiedName() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QBehavioralFeature::nameExpression() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QBehavioralFeature::setNameExpression(QStringExpression *nameExpression)
{
    (qmofobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QBehavioralFeature::namespace_() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QBehavioralFeature::clientDependencies() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QBehavioralFeature::addClientDependency(QDependency *clientDependency)
{
    (qmofobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QBehavioralFeature::removeClientDependency(QDependency *clientDependency)
{
    (qmofobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QPackageImport *> *QBehavioralFeature::packageImports() const
{
    return (qmofobject_cast<const QNamespace *>(this))->packageImports();
}

void QBehavioralFeature::addPackageImport(QPackageImport *packageImport)
{
    (qmofobject_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QBehavioralFeature::removePackageImport(QPackageImport *packageImport)
{
    (qmofobject_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QNamedElement *> *QBehavioralFeature::members() const
{
    return (qmofobject_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QPackageableElement *> *QBehavioralFeature::importedMembers() const
{
    return (qmofobject_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QElementImport *> *QBehavioralFeature::elementImports() const
{
    return (qmofobject_cast<const QNamespace *>(this))->elementImports();
}

void QBehavioralFeature::addElementImport(QElementImport *elementImport)
{
    (qmofobject_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QBehavioralFeature::removeElementImport(QElementImport *elementImport)
{
    (qmofobject_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QConstraint *> *QBehavioralFeature::ownedRules() const
{
    return (qmofobject_cast<const QNamespace *>(this))->ownedRules();
}

void QBehavioralFeature::addOwnedRule(QConstraint *ownedRule)
{
    (qmofobject_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QBehavioralFeature::removeOwnedRule(QConstraint *ownedRule)
{
    (qmofobject_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QNamedElement *> *QBehavioralFeature::ownedMembers() const
{
    return (qmofobject_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QBehavioralFeature::isLeaf() const
{
    return (qmofobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QBehavioralFeature::setLeaf(bool isLeaf)
{
    (qmofobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QRedefinableElement *> *QBehavioralFeature::redefinedElements() const
{
    return (qmofobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QClassifier *> *QBehavioralFeature::redefinitionContexts() const
{
    return (qmofobject_cast<const QRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QBehavioralFeature::isStatic() const
{
    return (qmofobject_cast<const QFeature *>(this))->isStatic();
}

void QBehavioralFeature::setStatic(bool isStatic)
{
    (qmofobject_cast<QFeature *>(this))->setStatic(isStatic);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
const QSet<QClassifier *> *QBehavioralFeature::featuringClassifiers() const
{
    return (qmofobject_cast<const QFeature *>(this))->featuringClassifiers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QBehavioralFeature
// ---------------------------------------------------------------

/*!
    Specifies the semantics of concurrent calls to the same passive instance (i.e., an instance originating from a class with isActive being false). Active instances control access to their own behavioral features.
 */
QtUml::CallConcurrencyKind QBehavioralFeature::concurrency() const
{
    // This is a read-write attribute

    Q_D(const QBehavioralFeature);
    return d->concurrency;
}

void QBehavioralFeature::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    // This is a read-write attribute

    Q_D(QBehavioralFeature);
    if (d->concurrency != concurrency) {
        d->concurrency = concurrency;
    }
}

/*!
    If true, then the behavioral feature does not have an implementation, and one must be supplied by a more specific element. If false, the behavioral feature must have an implementation in the classifier or one must be inherited from a more general element.
 */
bool QBehavioralFeature::isAbstract() const
{
    // This is a read-write attribute

    Q_D(const QBehavioralFeature);
    return d->isAbstract;
}

void QBehavioralFeature::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    Q_D(QBehavioralFeature);
    if (d->isAbstract != isAbstract) {
        d->isAbstract = isAbstract;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QBehavioralFeature
// ---------------------------------------------------------------

/*!
    References the Types representing exceptions that may be raised during an invocation of this feature.
 */
const QSet<QType *> *QBehavioralFeature::raisedExceptions() const
{
    // This is a read-write association end

    Q_D(const QBehavioralFeature);
    return d->raisedExceptions;
}

void QBehavioralFeature::addRaisedException(QType *raisedException)
{
    // This is a read-write association end

    Q_D(QBehavioralFeature);
    if (!d->raisedExceptions->contains(raisedException)) {
        d->raisedExceptions->insert(raisedException);
    }
}

void QBehavioralFeature::removeRaisedException(QType *raisedException)
{
    // This is a read-write association end

    Q_D(QBehavioralFeature);
    if (d->raisedExceptions->contains(raisedException)) {
        d->raisedExceptions->remove(raisedException);
    }
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.
 */
const QList<QParameter *> *QBehavioralFeature::ownedParameters() const
{
    // This is a read-write association end

    Q_D(const QBehavioralFeature);
    return d->ownedParameters;
}

void QBehavioralFeature::addOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QBehavioralFeature);
    if (!d->ownedParameters->contains(ownedParameter)) {
        d->ownedParameters->append(ownedParameter);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qmofobject_cast<QNamedElement *>(ownedParameter));
    }
}

void QBehavioralFeature::removeOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QBehavioralFeature);
    if (d->ownedParameters->contains(ownedParameter)) {
        d->ownedParameters->removeAll(ownedParameter);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qmofobject_cast<QNamedElement *>(ownedParameter));
    }
}

/*!
    The ParameterSets owned by this BehavioralFeature.
 */
const QSet<QParameterSet *> *QBehavioralFeature::ownedParameterSets() const
{
    // This is a read-write association end

    Q_D(const QBehavioralFeature);
    return d->ownedParameterSets;
}

void QBehavioralFeature::addOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    Q_D(QBehavioralFeature);
    if (!d->ownedParameterSets->contains(ownedParameterSet)) {
        d->ownedParameterSets->insert(ownedParameterSet);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qmofobject_cast<QNamedElement *>(ownedParameterSet));
    }
}

void QBehavioralFeature::removeOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    Q_D(QBehavioralFeature);
    if (d->ownedParameterSets->contains(ownedParameterSet)) {
        d->ownedParameterSets->remove(ownedParameterSet);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qmofobject_cast<QNamedElement *>(ownedParameterSet));
    }
}

/*!
    A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior).
 */
const QSet<QBehavior *> *QBehavioralFeature::methods() const
{
    // This is a read-write association end

    Q_D(const QBehavioralFeature);
    return d->methods;
}

void QBehavioralFeature::addMethod(QBehavior *method)
{
    // This is a read-write association end

    Q_D(QBehavioralFeature);
    if (!d->methods->contains(method)) {
        d->methods->insert(method);

        // Adjust opposite property
        method->setSpecification(this);
    }
}

void QBehavioralFeature::removeMethod(QBehavior *method)
{
    // This is a read-write association end

    Q_D(QBehavioralFeature);
    if (d->methods->contains(method)) {
        d->methods->remove(method);

        // Adjust opposite property
        method->setSpecification(0);
    }
}

/*!
    The query isDistinguishableFrom() determines whether two BehavioralFeatures may coexist in the same Namespace. It specifies that they have to have different signatures.
 */
bool QBehavioralFeature::isDistinguishableFrom(const QNamedElement *n, const QNamespace *ns) const
{
    qWarning("QBehavioralFeature::isDistinguishableFrom: operation to be implemented");
    Q_UNUSED(n);
    Q_UNUSED(ns);

    return bool(); // change here to your derived return
}

#include "moc_qbehavioralfeature.cpp"

QT_END_NAMESPACE_QTUML

