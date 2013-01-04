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

#include "qtransition.h"
#include "qtransition_p.h"

#include "qvertex_p.h"

#include <QtUml/QTrigger>
#include <QtUml/QVertex>
#include <QtUml/QStateMachine>
#include <QtUml/QClassifier>
#include <QtUml/QRegion>
#include <QtUml/QConstraint>
#include <QtUml/QBehavior>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QTransitionPrivate::QTransitionPrivate() :
    kind(QtUml::TransitionExternal),
    guard(0),
    target(0),
    effect(0),
    container(0),
    redefinedTransition(0),
    source(0)
{
}

QTransitionPrivate::~QTransitionPrivate()
{
}

/*!
    \class QTransition

    \inmodule QtUml

    \brief A transition is a directed relationship between a source vertex and a target vertex. It may be part of a compound transition, which takes the state machine from one state configuration to another, representing the complete response of the state machine to an occurrence of an event of a particular type.
 */

QTransition::QTransition(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QTransitionPrivate, wrapper, parent),
    _wrappedRedefinableElement(new QRedefinableElement(this)),
    _wrappedNamespace(new QNamespace(this))
{
    setPropertyData();
}

QTransition::QTransition(QTransitionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedRedefinableElement(new QRedefinableElement(this)),
    _wrappedNamespace(new QNamespace(this))
{
    setPropertyData();
}

QTransition::~QTransition()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QTransition::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QTransition::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QTransition::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QTransition::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QTransition::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QTransition::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QTransition::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QTransition::visibility() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->visibility();
}

void QTransition::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QTransition::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QTransition::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QTransition::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QTransition::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QTransition::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QTransition::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QTransition::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QTransition::isLeaf() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QTransition::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QTransition::unsetLeaf()
{
    setLeaf(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QRedefinableElement *> QTransition::redefinedElements() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QPackageImport *> QTransition::packageImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->packageImports();
}

void QTransition::addPackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QTransition::removePackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QNamedElement *> QTransition::members() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QPackageableElement *> QTransition::importedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QElementImport *> QTransition::elementImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->elementImports();
}

void QTransition::addElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QTransition::removeElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QConstraint *> QTransition::ownedRules() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedRules();
}

void QTransition::addOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QTransition::removeOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QNamedElement *> QTransition::ownedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QTransition
// ---------------------------------------------------------------

/*!
    Indicates the precise type of the transition.
 */
QtUml::TransitionKind QTransition::kind() const
{
    // This is a read-write attribute

    Q_D(const QTransition);
    return d->kind;
}

void QTransition::setKind(QtUml::TransitionKind kind)
{
    // This is a read-write attribute

    Q_D(QTransition);
    if (d->kind != kind) {
        d->kind = kind;
    }
}

void QTransition::unsetKind()
{
    setKind(QtUml::TransitionExternal);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QTransition
// ---------------------------------------------------------------

/*!
    A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
 */
QConstraint *QTransition::guard() const
{
    // This is a read-write association end

    Q_D(const QTransition);
    return d->guard;
}

void QTransition::setGuard(QConstraint *guard)
{
    // This is a read-write association end

    Q_D(QTransition);
    if (d->guard != guard) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QConstraint *>(d->guard));

        d->guard = guard;

        // Adjust subsetted property(ies)
        if (guard) {
            (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QConstraint *>(guard));
        }
    }
}

/*!
    Designates the target vertex that is reached when the transition is taken.
 */
QVertex *QTransition::target() const
{
    // This is a read-write association end

    Q_D(const QTransition);
    return d->target;
}

void QTransition::setTarget(QVertex *target)
{
    // This is a read-write association end

    Q_D(QTransition);
    if (d->target != target) {
        // Adjust opposite property
        if (d->target)
            (qwrappedobject_cast<QVertexPrivate *>(d->target->d_func()))->removeIncoming(this);

        d->target = target;

        // Adjust opposite property
        if (target)
            (qwrappedobject_cast<QVertexPrivate *>(target->d_func()))->addIncoming(this);
    }
}

/*!
    Specifies an optional behavior to be performed when the transition fires.
 */
QBehavior *QTransition::effect() const
{
    // This is a read-write association end

    Q_D(const QTransition);
    return d->effect;
}

void QTransition::setEffect(QBehavior *effect)
{
    // This is a read-write association end

    Q_D(QTransition);
    if (d->effect != effect) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->effect));

        d->effect = effect;

        // Adjust subsetted property(ies)
        if (effect) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(effect));
        }
    }
}

/*!
    Designates the region that owns this transition.
 */
QRegion *QTransition::container() const
{
    // This is a read-write association end

    Q_D(const QTransition);
    return d->container;
}

void QTransition::setContainer(QRegion *container)
{
    // This is a read-write association end

    Q_D(QTransition);
    if (d->container != container) {
        // Adjust opposite property
        if (d->container)
            d->container->removeTransition(this);

        d->container = container;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(container));

        // Adjust opposite property
        if (container)
            container->addTransition(this);
    }
}

/*!
    References the classifier in which context this element may be redefined.
 */
QClassifier *QTransition::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("QTransition::redefinitionContext: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The transition that is redefined by this transition.
 */
QTransition *QTransition::redefinedTransition() const
{
    // This is a read-write association end

    Q_D(const QTransition);
    return d->redefinedTransition;
}

void QTransition::setRedefinedTransition(QTransition *redefinedTransition)
{
    // This is a read-write association end

    Q_D(QTransition);
    if (d->redefinedTransition != redefinedTransition) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(d->redefinedTransition));

        d->redefinedTransition = redefinedTransition;

        // Adjust subsetted property(ies)
        if (redefinedTransition) {
            (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(redefinedTransition));
        }
    }
}

/*!
    Designates the originating vertex (state or pseudostate) of the transition.
 */
QVertex *QTransition::source() const
{
    // This is a read-write association end

    Q_D(const QTransition);
    return d->source;
}

void QTransition::setSource(QVertex *source)
{
    // This is a read-write association end

    Q_D(QTransition);
    if (d->source != source) {
        // Adjust opposite property
        if (d->source)
            (qwrappedobject_cast<QVertexPrivate *>(d->source->d_func()))->removeOutgoing(this);

        d->source = source;

        // Adjust opposite property
        if (source)
            (qwrappedobject_cast<QVertexPrivate *>(source->d_func()))->addOutgoing(this);
    }
}

/*!
    Specifies the triggers that may fire the transition.
 */
QSet<QTrigger *> QTransition::triggers() const
{
    // This is a read-write association end

    Q_D(const QTransition);
    return d->triggers;
}

void QTransition::addTrigger(QTrigger *trigger)
{
    // This is a read-write association end

    Q_D(QTransition);
    if (!d->triggers.contains(trigger)) {
        d->triggers.insert(trigger);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(trigger));
    }
}

void QTransition::removeTrigger(QTrigger *trigger)
{
    // This is a read-write association end

    Q_D(QTransition);
    if (d->triggers.contains(trigger)) {
        d->triggers.remove(trigger);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(trigger));
    }
}

/*!
    The query containingStateMachine() returns the state machine that contains the transition either directly or transitively.
 */
QStateMachine *QTransition::containingStateMachine() const
{
    qWarning("QTransition::containingStateMachine: operation to be implemented");

    return 0; // change here to your derived return
}

/*!
    The query isConsistentWith() specifies that a redefining transition is consistent with a redefined transition provided that the redefining transition has the following relation to the redefined transition: A redefining transition redefines all properties of the corresponding redefined transition, except the source state and the trigger.
 */
bool QTransition::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QTransition::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

void QTransition::registerMetaTypes() const
{
    qRegisterMetaType<QTrigger *>("QTrigger *");
    qRegisterMetaType<QSet<QTrigger *>>("QSet<QTrigger *>");
    qRegisterMetaType<QList<QTrigger *>>("QList<QTrigger *>");

    qRegisterMetaType<QVertex *>("QVertex *");
    qRegisterMetaType<QSet<QVertex *>>("QSet<QVertex *>");
    qRegisterMetaType<QList<QVertex *>>("QList<QVertex *>");

    qRegisterMetaType<QStateMachine *>("QStateMachine *");
    qRegisterMetaType<QSet<QStateMachine *>>("QSet<QStateMachine *>");
    qRegisterMetaType<QList<QStateMachine *>>("QList<QStateMachine *>");

    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QClassifier *>");
    qRegisterMetaType<QList<QClassifier *>>("QList<QClassifier *>");

    qRegisterMetaType<QRegion *>("QRegion *");
    qRegisterMetaType<QSet<QRegion *>>("QSet<QRegion *>");
    qRegisterMetaType<QList<QRegion *>>("QList<QRegion *>");

    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QConstraint *>");
    qRegisterMetaType<QList<QConstraint *>>("QList<QConstraint *>");

    qRegisterMetaType<QBehavior *>("QBehavior *");
    qRegisterMetaType<QSet<QBehavior *>>("QSet<QBehavior *>");
    qRegisterMetaType<QList<QBehavior *>>("QList<QBehavior *>");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QTransition::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("kind")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("kind")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("kind")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates the precise type of the transition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("kind")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("kind")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("kind")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("guard")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("guard")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("guard")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("guard")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("guard")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("guard")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("target")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("target")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("target")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the target vertex that is reached when the transition is taken.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("target")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("target")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("target")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QVertex::incoming");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("effect")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("effect")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("effect")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies an optional behavior to be performed when the transition fires.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("effect")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("effect")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("effect")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("container")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("container")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("container")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the region that owns this transition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("container")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("container")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("container")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QRegion::transition");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the classifier in which context this element may be redefined.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("redefinedTransition")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("redefinedTransition")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("redefinedTransition")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The transition that is redefined by this transition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("redefinedTransition")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("redefinedTransition")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("redefinedTransition")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("source")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("source")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("source")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the originating vertex (state or pseudostate) of the transition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("source")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("source")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("source")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QVertex::outgoing");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("triggers")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("triggers")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("triggers")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the triggers that may fire the transition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("triggers")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("triggers")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTransition")][QString::fromLatin1("triggers")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

#include "moc_qtransition.cpp"

QT_END_NAMESPACE_QTUML

