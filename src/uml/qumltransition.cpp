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

#include "private/qumltransitionobject_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlTransition

    \inmodule QtUml

    \brief A transition is a directed relationship between a source vertex and a target vertex. It may be part of a compound transition, which takes the state machine from one state configuration to another, representing the complete response of the state machine to an occurrence of an event of a particular type.
 */

/*!
    Creates a new QUmlTransition. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlTransition::QUmlTransition(bool createQModelingObject) :
    _container(0),
    _effect(0),
    _guard(0),
    _kind(QtUml::TransitionKindExternal),
    _redefinedTransition(0),
    _source(0),
    _target(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlTransitionObject(this));
}

/*!
    Destroys the QUmlTransition.
 */
QUmlTransition::~QUmlTransition()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlTransition.
*/
QModelingElement *QUmlTransition::clone() const
{
    QUmlTransition *c = new QUmlTransition;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    if (effect())
        c->setEffect(dynamic_cast<QUmlBehavior *>(effect()->clone()));
    if (guard())
        c->setGuard(dynamic_cast<QUmlConstraint *>(guard()->clone()));
    c->setKind(kind());
    foreach (QUmlTrigger *element, triggers())
        c->addTrigger(dynamic_cast<QUmlTrigger *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Designates the region that owns this transition.

    \b {Subsetted property(ies):} QUmlNamedElement::namespace_().

    \b {Opposite property(ies):} QUmlRegion::transitions().
 */
QUmlRegion *QUmlTransition::container() const
{
    // This is a read-write association end

    return _container;
}

/*!
    Adjusts container to \a container.
 */
void QUmlTransition::setContainer(QUmlRegion *container)
{
    // This is a read-write association end

    if (_container != container) {
        // Adjust subsetted properties

        _container = container;
        if (container && container->asQModelingObject() && this->asQModelingObject())
            QObject::connect(container->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setContainer()));

        // Adjust subsetted properties
        setNamespace(container);
    }
}

/*!
    Specifies an optional behavior to be performed when the transition fires.

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
QUmlBehavior *QUmlTransition::effect() const
{
    // This is a read-write association end

    return _effect;
}

/*!
    Adjusts effect to \a effect.
 */
void QUmlTransition::setEffect(QUmlBehavior *effect)
{
    // This is a read-write association end

    if (_effect != effect) {
        // Adjust subsetted properties
        removeOwnedElement(_effect);

        _effect = effect;
        if (effect && effect->asQModelingObject() && this->asQModelingObject())
            QObject::connect(effect->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setEffect()));
        effect->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (effect) {
            addOwnedElement(effect);
        }
    }
}

/*!
    A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.

    \b {Subsetted property(ies):} QUmlNamespace::ownedRules().
 */
QUmlConstraint *QUmlTransition::guard() const
{
    // This is a read-write association end

    return _guard;
}

/*!
    Adjusts guard to \a guard.
 */
void QUmlTransition::setGuard(QUmlConstraint *guard)
{
    // This is a read-write association end

    if (_guard != guard) {
        // Adjust subsetted properties
        removeOwnedRule(_guard);

        _guard = guard;
        if (guard && guard->asQModelingObject() && this->asQModelingObject())
            QObject::connect(guard->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setGuard()));
        guard->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (guard) {
            addOwnedRule(guard);
        }
    }
}

/*!
    Indicates the precise type of the transition.
 */
QtUml::TransitionKind QUmlTransition::kind() const
{
    // This is a read-write property

    return _kind;
}

/*!
    Adjusts kind to \a kind.
 */
void QUmlTransition::setKind(QtUml::TransitionKind kind)
{
    // This is a read-write property

    if (_kind != kind) {
        _kind = kind;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("kind");
    }
}

/*!
    The transition that is redefined by this transition.

    \b {Subsetted property(ies):} QUmlRedefinableElement::redefinedElements().
 */
QUmlTransition *QUmlTransition::redefinedTransition() const
{
    // This is a read-write association end

    return _redefinedTransition;
}

/*!
    Adjusts redefinedTransition to \a redefinedTransition.
 */
void QUmlTransition::setRedefinedTransition(QUmlTransition *redefinedTransition)
{
    // This is a read-write association end

    if (_redefinedTransition != redefinedTransition) {
        // Adjust subsetted properties
        removeRedefinedElement(_redefinedTransition);

        _redefinedTransition = redefinedTransition;
        if (redefinedTransition && redefinedTransition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(redefinedTransition->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setRedefinedTransition()));

        // Adjust subsetted properties
        if (redefinedTransition) {
            addRedefinedElement(redefinedTransition);
        }
    }
}

/*!
    References the classifier in which context this element may be redefined.

    \b {This is a read-only derived property.}

    \b {Redefined property(ies):} QUmlRedefinableElement::redefinitionContexts().
 */
QUmlClassifier *QUmlTransition::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("QUmlTransition::redefinitionContext(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    Adjusts redefinitionContext to \a redefinitionContext.
 */
void QUmlTransition::setRedefinitionContext(QUmlClassifier *redefinitionContext)
{
    // This is a read-only derived association end

    qWarning("QUmlTransition::setRedefinitionContext(): to be implemented (this is a derived association end)");
    Q_UNUSED(redefinitionContext);

    if (false /* <derivedexclusion-criteria> */) {
        // Adjust redefined properties        // QUmlRedefinableElement::removeRedefinitionContext(/* <derived-code> */);

        // <derived-code>

        // Adjust redefined properties
        if (redefinitionContext) {
            QUmlRedefinableElement::addRedefinitionContext(redefinitionContext);
        }
    }
}

/*!
    Designates the originating vertex (state or pseudostate) of the transition.

    \b {Opposite property(ies):} QUmlVertex::outgoings().
 */
QUmlVertex *QUmlTransition::source() const
{
    // This is a read-write association end

    return _source;
}

/*!
    Adjusts source to \a source.
 */
void QUmlTransition::setSource(QUmlVertex *source)
{
    // This is a read-write association end

    if (_source != source) {
        _source = source;
        if (source && source->asQModelingObject() && this->asQModelingObject())
            QObject::connect(source->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSource()));
    }
}

/*!
    Designates the target vertex that is reached when the transition is taken.

    \b {Opposite property(ies):} QUmlVertex::incomings().
 */
QUmlVertex *QUmlTransition::target() const
{
    // This is a read-write association end

    return _target;
}

/*!
    Adjusts target to \a target.
 */
void QUmlTransition::setTarget(QUmlVertex *target)
{
    // This is a read-write association end

    if (_target != target) {
        _target = target;
        if (target && target->asQModelingObject() && this->asQModelingObject())
            QObject::connect(target->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setTarget()));
    }
}

/*!
    Specifies the triggers that may fire the transition.

    \sa addTrigger(), removeTrigger()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
const QSet<QUmlTrigger *> QUmlTransition::triggers() const
{
    // This is a read-write association end

    return _triggers;
}

/*!
    Adds \a trigger to triggers.

    \sa triggers(), removeTrigger()
 */
void QUmlTransition::addTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    if (!_triggers.contains(trigger)) {
        _triggers.insert(trigger);
        if (trigger && trigger->asQModelingObject() && this->asQModelingObject())
            QObject::connect(trigger->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeTrigger(QObject *)));
        trigger->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(trigger);
    }
}

/*!
    Removes \a trigger from triggers.

    \sa triggers(), addTrigger()
 */
void QUmlTransition::removeTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    if (_triggers.contains(trigger)) {
        _triggers.remove(trigger);
        if (trigger->asQModelingObject())
            trigger->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(trigger);
    }
}

// OPERATIONS

/*!
    The query containingStateMachine() returns the state machine that contains the transition either directly or transitively.
 */
QUmlStateMachine *QUmlTransition::containingStateMachine() const
{
    qWarning("QUmlTransition::containingStateMachine(): to be implemented (operation)");

    return 0;
}

/*!
    The query isConsistentWith() specifies that a redefining transition is consistent with a redefined transition provided that the redefining transition has the following relation to the redefined transition: A redefining transition redefines all properties of the corresponding redefined transition, except the source state and the trigger.
 */
bool QUmlTransition::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlTransition::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

QT_END_NAMESPACE

