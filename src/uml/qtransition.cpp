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

QT_BEGIN_NAMESPACE_QTUML

QTransitionPrivate::QTransitionPrivate() :
    kind(QtUml::TransitionExternal),
    guard(0),
    target(0),
    effect(0),
    container(0),
    redefinedTransition(0),
    source(0),
    triggers(new QSet<QTrigger *>)
{
}

QTransitionPrivate::~QTransitionPrivate()
{
    delete triggers;
}

/*!
    \class QTransition

    \inmodule QtUml

    \brief A transition is a directed relationship between a source vertex and a target vertex. It may be part of a compound transition, which takes the state machine from one state configuration to another, representing the complete response of the state machine to an occurrence of an event of a particular type.
 */

QTransition::QTransition(QUmlObject *parent, QUmlObject *wrapper) :
    QUmlObject(*new QTransitionPrivate, parent, wrapper),
    _wrappedRedefinableElement(new QRedefinableElement(this, this)),
    _wrappedNamespace(new QNamespace(this, this))
{
}

QTransition::QTransition(QTransitionPrivate &dd, QUmlObject *parent, QUmlObject *wrapper) :
    QUmlObject(dd, parent, wrapper),
    _wrappedRedefinableElement(new QRedefinableElement(this, this)),
    _wrappedNamespace(new QNamespace(this, this))
{
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
const QSet<QElement *> *QTransition::ownedElements() const
{
    return (qumlobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QTransition::owner() const
{
    return (qumlobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QTransition::ownedComments() const
{
    return (qumlobject_cast<const QElement *>(this))->ownedComments();
}

void QTransition::addOwnedComment(QComment *ownedComment)
{
    (qumlobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QTransition::removeOwnedComment(QComment *ownedComment)
{
    (qumlobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QTransition::name() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->name();
}

void QTransition::setName(QString name)
{
    (qumlobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QTransition::visibility() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->visibility();
}

void QTransition::setVisibility(QtUml::VisibilityKind visibility)
{
    (qumlobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QTransition::qualifiedName() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QTransition::nameExpression() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QTransition::setNameExpression(QStringExpression *nameExpression)
{
    (qumlobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QTransition::namespace_() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QTransition::clientDependencies() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QTransition::addClientDependency(QDependency *clientDependency)
{
    (qumlobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QTransition::removeClientDependency(QDependency *clientDependency)
{
    (qumlobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QTransition::isLeaf() const
{
    return (qumlobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QTransition::setLeaf(bool isLeaf)
{
    (qumlobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QRedefinableElement *> *QTransition::redefinedElements() const
{
    return (qumlobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QPackageImport *> *QTransition::packageImports() const
{
    return (qumlobject_cast<const QNamespace *>(this))->packageImports();
}

void QTransition::addPackageImport(QPackageImport *packageImport)
{
    (qumlobject_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QTransition::removePackageImport(QPackageImport *packageImport)
{
    (qumlobject_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QNamedElement *> *QTransition::members() const
{
    return (qumlobject_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QPackageableElement *> *QTransition::importedMembers() const
{
    return (qumlobject_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QElementImport *> *QTransition::elementImports() const
{
    return (qumlobject_cast<const QNamespace *>(this))->elementImports();
}

void QTransition::addElementImport(QElementImport *elementImport)
{
    (qumlobject_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QTransition::removeElementImport(QElementImport *elementImport)
{
    (qumlobject_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QConstraint *> *QTransition::ownedRules() const
{
    return (qumlobject_cast<const QNamespace *>(this))->ownedRules();
}

void QTransition::addOwnedRule(QConstraint *ownedRule)
{
    (qumlobject_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QTransition::removeOwnedRule(QConstraint *ownedRule)
{
    (qumlobject_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QNamedElement *> *QTransition::ownedMembers() const
{
    return (qumlobject_cast<const QNamespace *>(this))->ownedMembers();
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
        (qumlobject_cast<QNamespace *>(this))->removeOwnedRule(qumlobject_cast<QConstraint *>(d->guard));

        d->guard = guard;

        // Adjust subsetted property(ies)
        if (guard) {
            (qumlobject_cast<QNamespace *>(this))->addOwnedRule(qumlobject_cast<QConstraint *>(guard));
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
            (qumlobject_cast<QVertexPrivate *>(d->target->d_func()))->removeIncoming(this);

        d->target = target;

        // Adjust opposite property
        if (target)
            (qumlobject_cast<QVertexPrivate *>(target->d_func()))->addIncoming(this);
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
        (qumlobject_cast<QElementPrivate *>(d))->removeOwnedElement(qumlobject_cast<QElement *>(d->effect));

        d->effect = effect;

        // Adjust subsetted property(ies)
        if (effect) {
            (qumlobject_cast<QElementPrivate *>(d))->addOwnedElement(qumlobject_cast<QElement *>(effect));
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
        (qumlobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qumlobject_cast<QNamespace *>(container));

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
        (qumlobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinedElement(qumlobject_cast<QRedefinableElement *>(d->redefinedTransition));

        d->redefinedTransition = redefinedTransition;

        // Adjust subsetted property(ies)
        if (redefinedTransition) {
            (qumlobject_cast<QRedefinableElementPrivate *>(d))->addRedefinedElement(qumlobject_cast<QRedefinableElement *>(redefinedTransition));
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
            (qumlobject_cast<QVertexPrivate *>(d->source->d_func()))->removeOutgoing(this);

        d->source = source;

        // Adjust opposite property
        if (source)
            (qumlobject_cast<QVertexPrivate *>(source->d_func()))->addOutgoing(this);
    }
}

/*!
    Specifies the triggers that may fire the transition.
 */
const QSet<QTrigger *> *QTransition::triggers() const
{
    // This is a read-write association end

    Q_D(const QTransition);
    return d->triggers;
}

void QTransition::addTrigger(QTrigger *trigger)
{
    // This is a read-write association end

    Q_D(QTransition);
    if (!d->triggers->contains(trigger)) {
        d->triggers->insert(trigger);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QElementPrivate *>(d))->addOwnedElement(qumlobject_cast<QElement *>(trigger));
    }
}

void QTransition::removeTrigger(QTrigger *trigger)
{
    // This is a read-write association end

    Q_D(QTransition);
    if (d->triggers->contains(trigger)) {
        d->triggers->remove(trigger);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QElementPrivate *>(d))->removeOwnedElement(qumlobject_cast<QElement *>(trigger));
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

#include "moc_qtransition.cpp"

QT_END_NAMESPACE_QTUML

