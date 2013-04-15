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
#include "qumltransition.h"
#include "qumltransition_p.h"

#include "qumlvertex_p.h"

#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlVertex>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlBehavior>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlTransitionPrivate::QUmlTransitionPrivate() :
    kind(QtUml::TransitionExternal),
    container(0),
    guard(0),
    effect(0),
    target(0),
    redefinedTransition(0),
    source(0)
{
}

QUmlTransitionPrivate::~QUmlTransitionPrivate()
{
}

/*!
    \class QUmlTransition

    \inmodule QtUml

    \brief A transition is a directed relationship between a source vertex and a target vertex. It may be part of a compound transition, which takes the state machine from one state configuration to another, representing the complete response of the state machine to an occurrence of an event of a particular type.
 */

QUmlTransition::QUmlTransition(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlTransitionPrivate, wrapper, parent),
    _wrappedUmlRedefinableElement(new QUmlRedefinableElement(this)),
    _wrappedUmlNamespace(new QUmlNamespace(this))
{
    setPropertyData();
}

QUmlTransition::QUmlTransition(QUmlTransitionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlRedefinableElement(new QUmlRedefinableElement(this)),
    _wrappedUmlNamespace(new QUmlNamespace(this))
{
    setPropertyData();
}

QUmlTransition::~QUmlTransition()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlTransition::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlTransition::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlTransition::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlTransition::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlTransition::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlTransition::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlTransition::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlTransition::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlTransition::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlTransition::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlTransition::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlTransition::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlTransition::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlTransition::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlTransition::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlTransition::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlTransition::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlTransition::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlTransition::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlTransition);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlTransition::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlTransition::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlTransition::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlTransition::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlTransition::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlTransition::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlTransition::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlTransition::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlTransition::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlTransition::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlTransition::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlTransition::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlTransition::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlTransition
// ---------------------------------------------------------------

/*!
    Indicates the precise type of the transition.
 */
QtUml::TransitionKind QUmlTransition::kind() const
{
    // This is a read-write attribute

    Q_D(const QUmlTransition);
    return d->kind;
}

void QUmlTransition::setKind(QtUml::TransitionKind kind)
{
    // This is a read-write attribute

    Q_D(QUmlTransition);
    if (d->kind != kind) {
        d->kind = kind;
    }
    d->modifiedResettableProperties << QString::fromLatin1("kind");
}

void QUmlTransition::unsetKind()
{
    setKind(QtUml::TransitionExternal);
    Q_D(QUmlTransition);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("kind"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlTransition
// ---------------------------------------------------------------

/*!
    Designates the region that owns this transition.
 */
QUmlRegion *QUmlTransition::container() const
{
    // This is a read-write association end

    Q_D(const QUmlTransition);
    return d->container;
}

void QUmlTransition::setContainer(QUmlRegion *container)
{
    // This is a read-write association end

    Q_D(QUmlTransition);
    if (d->container != container) {
        // Adjust opposite property
        if (d->container)
            d->container->removeTransition(this);

        d->container = container;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(container));

        // Adjust opposite property
        if (container)
            container->addTransition(this);
    }
}

/*!
    References the classifier in which context this element may be redefined.
 */
QUmlClassifier *QUmlTransition::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("QUmlTransition::redefinitionContext: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    Specifies the triggers that may fire the transition.
 */
QSet<QUmlTrigger *> QUmlTransition::triggers() const
{
    // This is a read-write association end

    Q_D(const QUmlTransition);
    return d->triggers;
}

void QUmlTransition::addTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    Q_D(QUmlTransition);
    if (!d->triggers.contains(trigger)) {
        d->triggers.insert(trigger);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(trigger));
    }
}

void QUmlTransition::removeTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    Q_D(QUmlTransition);
    if (d->triggers.contains(trigger)) {
        d->triggers.remove(trigger);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(trigger));
    }
}

/*!
    A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
 */
QUmlConstraint *QUmlTransition::guard() const
{
    // This is a read-write association end

    Q_D(const QUmlTransition);
    return d->guard;
}

void QUmlTransition::setGuard(QUmlConstraint *guard)
{
    // This is a read-write association end

    Q_D(QUmlTransition);
    if (d->guard != guard) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QUmlConstraint *>(d->guard));

        d->guard = guard;

        // Adjust subsetted property(ies)
        if (guard) {
            (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QUmlConstraint *>(guard));
        }
    }
}

/*!
    Specifies an optional behavior to be performed when the transition fires.
 */
QUmlBehavior *QUmlTransition::effect() const
{
    // This is a read-write association end

    Q_D(const QUmlTransition);
    return d->effect;
}

void QUmlTransition::setEffect(QUmlBehavior *effect)
{
    // This is a read-write association end

    Q_D(QUmlTransition);
    if (d->effect != effect) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->effect));

        d->effect = effect;

        // Adjust subsetted property(ies)
        if (effect) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(effect));
        }
    }
}

/*!
    Designates the target vertex that is reached when the transition is taken.
 */
QUmlVertex *QUmlTransition::target() const
{
    // This is a read-write association end

    Q_D(const QUmlTransition);
    return d->target;
}

void QUmlTransition::setTarget(QUmlVertex *target)
{
    // This is a read-write association end

    Q_D(QUmlTransition);
    if (d->target != target) {
        // Adjust opposite property
        if (d->target)
            (qwrappedobject_cast<QUmlVertexPrivate *>(d->target->d_func()))->removeIncoming(this);

        d->target = target;

        // Adjust opposite property
        if (target)
            (qwrappedobject_cast<QUmlVertexPrivate *>(target->d_func()))->addIncoming(this);
    }
}

/*!
    The transition that is redefined by this transition.
 */
QUmlTransition *QUmlTransition::redefinedTransition() const
{
    // This is a read-write association end

    Q_D(const QUmlTransition);
    return d->redefinedTransition;
}

void QUmlTransition::setRedefinedTransition(QUmlTransition *redefinedTransition)
{
    // This is a read-write association end

    Q_D(QUmlTransition);
    if (d->redefinedTransition != redefinedTransition) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(d->redefinedTransition));

        d->redefinedTransition = redefinedTransition;

        // Adjust subsetted property(ies)
        if (redefinedTransition) {
            (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedTransition));
        }
    }
}

/*!
    Designates the originating vertex (state or pseudostate) of the transition.
 */
QUmlVertex *QUmlTransition::source() const
{
    // This is a read-write association end

    Q_D(const QUmlTransition);
    return d->source;
}

void QUmlTransition::setSource(QUmlVertex *source)
{
    // This is a read-write association end

    Q_D(QUmlTransition);
    if (d->source != source) {
        // Adjust opposite property
        if (d->source)
            (qwrappedobject_cast<QUmlVertexPrivate *>(d->source->d_func()))->removeOutgoing(this);

        d->source = source;

        // Adjust opposite property
        if (source)
            (qwrappedobject_cast<QUmlVertexPrivate *>(source->d_func()))->addOutgoing(this);
    }
}

/*!
    The query containingStateMachine() returns the state machine that contains the transition either directly or transitively.
 */
QUmlStateMachine *QUmlTransition::containingStateMachine() const
{
    qWarning("QUmlTransition::containingStateMachine: operation to be implemented");

    return 0; // change here to your derived return
}

/*!
    The query isConsistentWith() specifies that a redefining transition is consistent with a redefined transition provided that the redefining transition has the following relation to the redefined transition: A redefining transition redefines all properties of the corresponding redefined transition, except the source state and the trigger.
 */
bool QUmlTransition::isConsistentWith(const QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlTransition::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

void QUmlTransition::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("kind")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("kind")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("kind")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates the precise type of the transition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("kind")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("kind")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("kind")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("container")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("container")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("container")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the region that owns this transition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("container")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("container")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("container")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlRegion::transition");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the classifier in which context this element may be redefined.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("triggers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("triggers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("triggers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the triggers that may fire the transition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("triggers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("triggers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("triggers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("guard")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("guard")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("guard")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("guard")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("guard")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("guard")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("effect")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("effect")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("effect")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies an optional behavior to be performed when the transition fires.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("effect")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("effect")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("effect")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("target")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("target")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("target")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the target vertex that is reached when the transition is taken.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("target")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("target")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("target")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlVertex::incoming");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("redefinedTransition")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("redefinedTransition")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("redefinedTransition")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The transition that is redefined by this transition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("redefinedTransition")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("redefinedTransition")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("redefinedTransition")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("source")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("source")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("source")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the originating vertex (state or pseudostate) of the transition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("source")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("source")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTransition")][QString::fromLatin1("source")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlVertex::outgoing");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumltransition.cpp"

