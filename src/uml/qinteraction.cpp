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

#include "qinteraction.h"
#include "qinteraction_p.h"

#include <QtUml/QMessage>
#include <QtUml/QLifeline>
#include <QtUml/QAction>
#include <QtUml/QGate>

QT_BEGIN_NAMESPACE_QTUML

QInteractionPrivate::QInteractionPrivate() :
    actions(new QSet<QAction *>),
    messages(new QSet<QMessage *>),
    formalGates(new QSet<QGate *>),
    fragments(new QList<QInteractionFragment *>),
    lifelines(new QSet<QLifeline *>)
{
}

QInteractionPrivate::~QInteractionPrivate()
{
    delete actions;
    delete messages;
    delete formalGates;
    delete fragments;
    delete lifelines;
}

/*!
    \class QInteraction

    \inmodule QtUml

    \brief An interaction is a unit of behavior that focuses on the observable exchange of information between connectable elements.
 */

QInteraction::QInteraction(QObject *parent) :
    QObject(*new QInteractionPrivate, parent),
    _wrappedBehavior(new QBehavior(this)),
    _wrappedInteractionFragment(new QInteractionFragment(this))
{
}

QInteraction::QInteraction(QInteractionPrivate &dd, QObject *parent) :
    QObject(dd, parent),
    _wrappedBehavior(new QBehavior(this)),
    _wrappedInteractionFragment(new QInteractionFragment(this))
{
}

QInteraction::~QInteraction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QBehavior
// ---------------------------------------------------------------

/*!
    Tells whether the behavior can be invoked while it is still executing from a previous invocation.
 */
bool QInteraction::isReentrant() const
{
    return (qtuml_object_cast<const QBehavior *>(this))->isReentrant();
}

void QInteraction::setReentrant(bool isReentrant)
{
    (qtuml_object_cast<QBehavior *>(this))->setReentrant(isReentrant);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QBehavior
// ---------------------------------------------------------------

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
QBehavioralFeature *QInteraction::specification() const
{
    return (qtuml_object_cast<const QBehavior *>(this))->specification();
}

void QInteraction::setSpecification(QBehavioralFeature *specification)
{
    (qtuml_object_cast<QBehavior *>(this))->setSpecification(specification);
}

/*!
    An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.
 */
const QSet<QConstraint *> *QInteraction::postconditions() const
{
    return (qtuml_object_cast<const QBehavior *>(this))->postconditions();
}

void QInteraction::addPostcondition(QConstraint *postcondition)
{
    (qtuml_object_cast<QBehavior *>(this))->addPostcondition(postcondition);
}

void QInteraction::removePostcondition(QConstraint *postcondition)
{
    (qtuml_object_cast<QBehavior *>(this))->removePostcondition(postcondition);
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
const QSet<QConstraint *> *QInteraction::preconditions() const
{
    return (qtuml_object_cast<const QBehavior *>(this))->preconditions();
}

void QInteraction::addPrecondition(QConstraint *precondition)
{
    (qtuml_object_cast<QBehavior *>(this))->addPrecondition(precondition);
}

void QInteraction::removePrecondition(QConstraint *precondition)
{
    (qtuml_object_cast<QBehavior *>(this))->removePrecondition(precondition);
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
const QSet<QBehavior *> *QInteraction::redefinedBehaviors() const
{
    return (qtuml_object_cast<const QBehavior *>(this))->redefinedBehaviors();
}

void QInteraction::addRedefinedBehavior(QBehavior *redefinedBehavior)
{
    (qtuml_object_cast<QBehavior *>(this))->addRedefinedBehavior(redefinedBehavior);
}

void QInteraction::removeRedefinedBehavior(QBehavior *redefinedBehavior)
{
    (qtuml_object_cast<QBehavior *>(this))->removeRedefinedBehavior(redefinedBehavior);
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
const QList<QParameter *> *QInteraction::ownedParameters() const
{
    return (qtuml_object_cast<const QBehavior *>(this))->ownedParameters();
}

void QInteraction::addOwnedParameter(QParameter *ownedParameter)
{
    (qtuml_object_cast<QBehavior *>(this))->addOwnedParameter(ownedParameter);
}

void QInteraction::removeOwnedParameter(QParameter *ownedParameter)
{
    (qtuml_object_cast<QBehavior *>(this))->removeOwnedParameter(ownedParameter);
}

/*!
    The ParameterSets owned by this Behavior.
 */
const QSet<QParameterSet *> *QInteraction::ownedParameterSets() const
{
    return (qtuml_object_cast<const QBehavior *>(this))->ownedParameterSets();
}

void QInteraction::addOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    (qtuml_object_cast<QBehavior *>(this))->addOwnedParameterSet(ownedParameterSet);
}

void QInteraction::removeOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    (qtuml_object_cast<QBehavior *>(this))->removeOwnedParameterSet(ownedParameterSet);
}

/*!
    The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.
 */
QBehavioredClassifier *QInteraction::context() const
{
    return (qtuml_object_cast<const QBehavior *>(this))->context();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QInteraction::ownedElements() const
{
    return (qtuml_object_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QInteraction::owner() const
{
    return (qtuml_object_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QInteraction::ownedComments() const
{
    return (qtuml_object_cast<const QElement *>(this))->ownedComments();
}

void QInteraction::addOwnedComment(QComment *ownedComment)
{
    (qtuml_object_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QInteraction::removeOwnedComment(QComment *ownedComment)
{
    (qtuml_object_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QInteraction::name() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->name();
}

void QInteraction::setName(QString name)
{
    (qtuml_object_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QInteraction::visibility() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->visibility();
}

void QInteraction::setVisibility(QtUml::VisibilityKind visibility)
{
    (qtuml_object_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QInteraction::qualifiedName() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QInteraction::nameExpression() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->nameExpression();
}

void QInteraction::setNameExpression(QStringExpression *nameExpression)
{
    (qtuml_object_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QInteraction::namespace_() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QInteraction::clientDependencies() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->clientDependencies();
}

void QInteraction::addClientDependency(QDependency *clientDependency)
{
    (qtuml_object_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QInteraction::removeClientDependency(QDependency *clientDependency)
{
    (qtuml_object_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QInteractionFragment
// ---------------------------------------------------------------

/*!
    The general ordering relationships contained in this fragment.
 */
const QSet<QGeneralOrdering *> *QInteraction::generalOrderings() const
{
    return (qtuml_object_cast<const QInteractionFragment *>(this))->generalOrderings();
}

void QInteraction::addGeneralOrdering(QGeneralOrdering *generalOrdering)
{
    (qtuml_object_cast<QInteractionFragment *>(this))->addGeneralOrdering(generalOrdering);
}

void QInteraction::removeGeneralOrdering(QGeneralOrdering *generalOrdering)
{
    (qtuml_object_cast<QInteractionFragment *>(this))->removeGeneralOrdering(generalOrdering);
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QInteraction *QInteraction::enclosingInteraction() const
{
    return (qtuml_object_cast<const QInteractionFragment *>(this))->enclosingInteraction();
}

void QInteraction::setEnclosingInteraction(QInteraction *enclosingInteraction)
{
    (qtuml_object_cast<QInteractionFragment *>(this))->setEnclosingInteraction(enclosingInteraction);
}

/*!
    References the Lifelines that the InteractionFragment involves.
 */
const QSet<QLifeline *> *QInteraction::covered() const
{
    return (qtuml_object_cast<const QInteractionFragment *>(this))->covered();
}

void QInteraction::addCovered(QLifeline *covered)
{
    (qtuml_object_cast<QInteractionFragment *>(this))->addCovered(covered);
}

void QInteraction::removeCovered(QLifeline *covered)
{
    (qtuml_object_cast<QInteractionFragment *>(this))->removeCovered(covered);
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QInteractionOperand *QInteraction::enclosingOperand() const
{
    return (qtuml_object_cast<const QInteractionFragment *>(this))->enclosingOperand();
}

void QInteraction::setEnclosingOperand(QInteractionOperand *enclosingOperand)
{
    (qtuml_object_cast<QInteractionFragment *>(this))->setEnclosingOperand(enclosingOperand);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInteraction
// ---------------------------------------------------------------

/*!
    Actions owned by the Interaction.
 */
const QSet<QAction *> *QInteraction::actions() const
{
    // This is a read-write association end

    Q_D(const QInteraction);
    return d->actions;
}

void QInteraction::addAction(QAction *action)
{
    // This is a read-write association end

    Q_D(QInteraction);
    if (!d->actions->contains(action)) {
        d->actions->insert(action);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->addOwnedElement(qtuml_object_cast<QElement *>(action));
    }
}

void QInteraction::removeAction(QAction *action)
{
    // This is a read-write association end

    Q_D(QInteraction);
    if (d->actions->contains(action)) {
        d->actions->remove(action);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->removeOwnedElement(qtuml_object_cast<QElement *>(action));
    }
}

/*!
    The Messages contained in this Interaction.
 */
const QSet<QMessage *> *QInteraction::messages() const
{
    // This is a read-write association end

    Q_D(const QInteraction);
    return d->messages;
}

void QInteraction::addMessage(QMessage *message)
{
    // This is a read-write association end

    Q_D(QInteraction);
    if (!d->messages->contains(message)) {
        d->messages->insert(message);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->addOwnedMember(qtuml_object_cast<QNamedElement *>(message));

        // Adjust opposite property
        message->setInteraction(this);
    }
}

void QInteraction::removeMessage(QMessage *message)
{
    // This is a read-write association end

    Q_D(QInteraction);
    if (d->messages->contains(message)) {
        d->messages->remove(message);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->removeOwnedMember(qtuml_object_cast<QNamedElement *>(message));

        // Adjust opposite property
        message->setInteraction(0);
    }
}

/*!
    Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.
 */
const QSet<QGate *> *QInteraction::formalGates() const
{
    // This is a read-write association end

    Q_D(const QInteraction);
    return d->formalGates;
}

void QInteraction::addFormalGate(QGate *formalGate)
{
    // This is a read-write association end

    Q_D(QInteraction);
    if (!d->formalGates->contains(formalGate)) {
        d->formalGates->insert(formalGate);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->addOwnedMember(qtuml_object_cast<QNamedElement *>(formalGate));
    }
}

void QInteraction::removeFormalGate(QGate *formalGate)
{
    // This is a read-write association end

    Q_D(QInteraction);
    if (d->formalGates->contains(formalGate)) {
        d->formalGates->remove(formalGate);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->removeOwnedMember(qtuml_object_cast<QNamedElement *>(formalGate));
    }
}

/*!
    The ordered set of fragments in the Interaction.
 */
const QList<QInteractionFragment *> *QInteraction::fragments() const
{
    // This is a read-write association end

    Q_D(const QInteraction);
    return d->fragments;
}

void QInteraction::addFragment(QInteractionFragment *fragment)
{
    // This is a read-write association end

    Q_D(QInteraction);
    if (!d->fragments->contains(fragment)) {
        d->fragments->append(fragment);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->addOwnedMember(qtuml_object_cast<QNamedElement *>(fragment));

        // Adjust opposite property
        fragment->setEnclosingInteraction(this);
    }
}

void QInteraction::removeFragment(QInteractionFragment *fragment)
{
    // This is a read-write association end

    Q_D(QInteraction);
    if (d->fragments->contains(fragment)) {
        d->fragments->removeAll(fragment);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->removeOwnedMember(qtuml_object_cast<QNamedElement *>(fragment));

        // Adjust opposite property
        fragment->setEnclosingInteraction(0);
    }
}

/*!
    Specifies the participants in this Interaction.
 */
const QSet<QLifeline *> *QInteraction::lifelines() const
{
    // This is a read-write association end

    Q_D(const QInteraction);
    return d->lifelines;
}

void QInteraction::addLifeline(QLifeline *lifeline)
{
    // This is a read-write association end

    Q_D(QInteraction);
    if (!d->lifelines->contains(lifeline)) {
        d->lifelines->insert(lifeline);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->addOwnedMember(qtuml_object_cast<QNamedElement *>(lifeline));

        // Adjust opposite property
        lifeline->setInteraction(this);
    }
}

void QInteraction::removeLifeline(QLifeline *lifeline)
{
    // This is a read-write association end

    Q_D(QInteraction);
    if (d->lifelines->contains(lifeline)) {
        d->lifelines->remove(lifeline);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->removeOwnedMember(qtuml_object_cast<QNamedElement *>(lifeline));

        // Adjust opposite property
        lifeline->setInteraction(0);
    }
}

#include "moc_qinteraction.cpp"

QT_END_NAMESPACE_QTUML

