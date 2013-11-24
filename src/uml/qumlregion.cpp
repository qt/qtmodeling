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
#include "qumlregion.h"

#include "private/qumlregionobject_p.h"

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
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlRegion

    \inmodule QtUml

    \brief A region is an orthogonal part of either a composite state or a state machine. It contains states and transitions.
 */

/*!
    Creates a new QUmlRegion. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlRegion::QUmlRegion(bool createQModelingObject) :
    _extendedRegion(0),
    _state(0),
    _stateMachine(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlRegionObject(this));
}

/*!
    Returns a deep-copied clone of the QUmlRegion.
*/
QModelingElement *QUmlRegion::clone() const
{
    QUmlRegion *c = new QUmlRegion;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
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
    if (extendedRegion())
        c->setExtendedRegion(dynamic_cast<QUmlRegion *>(extendedRegion()->clone()));
    if (state())
        c->setState(dynamic_cast<QUmlState *>(state()->clone()));
    if (stateMachine())
        c->setStateMachine(dynamic_cast<QUmlStateMachine *>(stateMachine()->clone()));
    foreach (QUmlVertex *element, subvertices())
        c->addSubvertex(dynamic_cast<QUmlVertex *>(element->clone()));
    foreach (QUmlTransition *element, transitions())
        c->addTransition(dynamic_cast<QUmlTransition *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The region of which this region is an extension.

    \b {Subsetted property(ies):} QUmlRedefinableElement::redefinedElements().
 */
QUmlRegion *QUmlRegion::extendedRegion() const
{
    // This is a read-write association end

    return _extendedRegion;
}

/*!
    Adjusts extendedRegion to \a extendedRegion.
 */
void QUmlRegion::setExtendedRegion(QUmlRegion *extendedRegion)
{
    // This is a read-write association end

    if (_extendedRegion != extendedRegion) {
        // Adjust subsetted properties
        removeRedefinedElement(_extendedRegion);

        _extendedRegion = extendedRegion;
        if (extendedRegion && extendedRegion->asQModelingObject() && this->asQModelingObject())
            QObject::connect(extendedRegion->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setExtendedRegion()));

        // Adjust subsetted properties
        if (extendedRegion) {
            addRedefinedElement(extendedRegion);
        }
    }
}

/*!
    References the classifier in which context this element may be redefined.

    \b {This is a read-only derived property.}

    \b {Redefined property(ies):} QUmlRedefinableElement::redefinitionContexts().
 */
QUmlClassifier *QUmlRegion::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("QUmlRegion::redefinitionContext(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    Adjusts redefinitionContext to \a redefinitionContext.
 */
void QUmlRegion::setRedefinitionContext(QUmlClassifier *redefinitionContext)
{
    // This is a read-only derived association end

    qWarning("QUmlRegion::setRedefinitionContext(): to be implemented (this is a derived association end)");
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
    The State that owns the Region. If a Region is owned by a State, then it cannot also be owned by a StateMachine.

    \b {Subsetted property(ies):} QUmlNamedElement::namespace_().

    \b {Opposite property(ies):} QUmlState::regions().
 */
QUmlState *QUmlRegion::state() const
{
    // This is a read-write association end

    return _state;
}

/*!
    Adjusts state to \a state.
 */
void QUmlRegion::setState(QUmlState *state)
{
    // This is a read-write association end

    if (_state != state) {
        // Adjust subsetted properties

        _state = state;
        if (state && state->asQModelingObject() && this->asQModelingObject())
            QObject::connect(state->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setState()));

        // Adjust subsetted properties
        setNamespace(state);
    }
}

/*!
    The StateMachine that owns the Region. If a Region is owned by a StateMachine, then it cannot also be owned by a State.

    \b {Subsetted property(ies):} QUmlNamedElement::namespace_().

    \b {Opposite property(ies):} QUmlStateMachine::regions().
 */
QUmlStateMachine *QUmlRegion::stateMachine() const
{
    // This is a read-write association end

    return _stateMachine;
}

/*!
    Adjusts stateMachine to \a stateMachine.
 */
void QUmlRegion::setStateMachine(QUmlStateMachine *stateMachine)
{
    // This is a read-write association end

    if (_stateMachine != stateMachine) {
        // Adjust subsetted properties

        _stateMachine = stateMachine;
        if (stateMachine && stateMachine->asQModelingObject() && this->asQModelingObject())
            QObject::connect(stateMachine->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setStateMachine()));

        // Adjust subsetted properties
        setNamespace(stateMachine);
    }
}

/*!
    The set of vertices that are owned by this region.

    \sa addSubvertex(), removeSubvertex()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers().

    \b {Opposite property(ies):} QUmlVertex::container().
 */
const QSet<QUmlVertex *> QUmlRegion::subvertices() const
{
    // This is a read-write association end

    return _subvertices;
}

/*!
    Adds \a subvertex to subvertices.

    \sa subvertices(), removeSubvertex()
 */
void QUmlRegion::addSubvertex(QUmlVertex *subvertex)
{
    // This is a read-write association end

    if (!_subvertices.contains(subvertex)) {
        _subvertices.insert(subvertex);
        if (subvertex && subvertex->asQModelingObject() && this->asQModelingObject())
            QObject::connect(subvertex->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeSubvertex(QObject *)));
        subvertex->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(subvertex);

        // Adjust opposite properties
        if (subvertex) {
            subvertex->setContainer(this);
        }
    }
}

/*!
    Removes \a subvertex from subvertices.

    \sa subvertices(), addSubvertex()
 */
void QUmlRegion::removeSubvertex(QUmlVertex *subvertex)
{
    // This is a read-write association end

    if (_subvertices.contains(subvertex)) {
        _subvertices.remove(subvertex);
        if (subvertex->asQModelingObject())
            subvertex->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(subvertex);

        // Adjust opposite properties
        if (subvertex) {
            subvertex->setContainer(0);
        }
    }
}

/*!
    The set of transitions owned by the region.

    \sa addTransition(), removeTransition()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers().

    \b {Opposite property(ies):} QUmlTransition::container().
 */
const QSet<QUmlTransition *> QUmlRegion::transitions() const
{
    // This is a read-write association end

    return _transitions;
}

/*!
    Adds \a transition to transitions.

    \sa transitions(), removeTransition()
 */
void QUmlRegion::addTransition(QUmlTransition *transition)
{
    // This is a read-write association end

    if (!_transitions.contains(transition)) {
        _transitions.insert(transition);
        if (transition && transition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(transition->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeTransition(QObject *)));
        transition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(transition);

        // Adjust opposite properties
        if (transition) {
            transition->setContainer(this);
        }
    }
}

/*!
    Removes \a transition from transitions.

    \sa transitions(), addTransition()
 */
void QUmlRegion::removeTransition(QUmlTransition *transition)
{
    // This is a read-write association end

    if (_transitions.contains(transition)) {
        _transitions.remove(transition);
        if (transition->asQModelingObject())
            transition->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(transition);

        // Adjust opposite properties
        if (transition) {
            transition->setContainer(0);
        }
    }
}

// OPERATIONS

/*!
    The operation belongsToPSM () checks if the region belongs to a protocol state machine
 */
bool QUmlRegion::belongsToPSM() const
{
    qWarning("QUmlRegion::belongsToPSM(): to be implemented (operation)");

    return bool ();
}

/*!
    The operation containingStateMachine() returns the sate machine in which this Region is defined
 */
QUmlStateMachine *QUmlRegion::containingStateMachine() const
{
    qWarning("QUmlRegion::containingStateMachine(): to be implemented (operation)");

    return 0;
}

/*!
    The query isConsistentWith() specifies that a redefining region is consistent with a redefined region provided that the redefining region is an extension of the redefined region, i.e. it adds vertices and transitions and it redefines states and transitions of the redefined region.
 */
bool QUmlRegion::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlRegion::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a region are properly related to the redefinition contexts of the specified region to allow this element to redefine the other. The containing statemachine/state of a redefining region must redefine the containing statemachine/state of the redefined region.
 */
bool QUmlRegion::isRedefinitionContextValid(QUmlRegion *redefined) const
{
    qWarning("QUmlRegion::isRedefinitionContextValid(): to be implemented (operation)");

    Q_UNUSED(redefined);
    return bool ();
}

QT_END_NAMESPACE

