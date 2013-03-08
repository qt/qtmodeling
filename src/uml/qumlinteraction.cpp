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

#include "qumlinteraction.h"
#include "qumlinteraction_p.h"

#include <QtUml/QUmlMessage>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlAction>
#include <QtUml/QUmlGate>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlInteractionPrivate::QUmlInteractionPrivate()
{
}

QUmlInteractionPrivate::~QUmlInteractionPrivate()
{
}

/*!
    \class QUmlInteraction

    \inmodule QtUml

    \brief An interaction is a unit of behavior that focuses on the observable exchange of information between connectable elements.
 */

QUmlInteraction::QUmlInteraction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlInteractionPrivate, wrapper, parent),
    _wrappedUmlBehavior(new QUmlBehavior(this)),
    _wrappedUmlInteractionFragment(new QUmlInteractionFragment(this))
{
    setPropertyData();
}

QUmlInteraction::QUmlInteraction(QUmlInteractionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlBehavior(new QUmlBehavior(this)),
    _wrappedUmlInteractionFragment(new QUmlInteractionFragment(this))
{
    setPropertyData();
}

QUmlInteraction::~QUmlInteraction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlBehavior
// ---------------------------------------------------------------

/*!
    Tells whether the behavior can be invoked while it is still executing from a previous invocation.
 */
bool QUmlInteraction::isReentrant() const
{
    return (qwrappedobject_cast<const QUmlBehavior *>(this))->isReentrant();
}

void QUmlInteraction::setReentrant(bool isReentrant)
{
    (qwrappedobject_cast<QUmlBehavior *>(this))->setReentrant(isReentrant);
}

void QUmlInteraction::unsetReentrant()
{
    setReentrant(true);
    Q_D(QUmlInteraction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isReentrant"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlBehavior
// ---------------------------------------------------------------

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
QUmlBehavioralFeature *QUmlInteraction::specification() const
{
    return (qwrappedobject_cast<const QUmlBehavior *>(this))->specification();
}

void QUmlInteraction::setSpecification(QUmlBehavioralFeature *specification)
{
    (qwrappedobject_cast<QUmlBehavior *>(this))->setSpecification(specification);
}

/*!
    An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.
 */
QSet<QUmlConstraint *> QUmlInteraction::postconditions() const
{
    return (qwrappedobject_cast<const QUmlBehavior *>(this))->postconditions();
}

void QUmlInteraction::addPostcondition(QUmlConstraint *postcondition)
{
    (qwrappedobject_cast<QUmlBehavior *>(this))->addPostcondition(postcondition);
}

void QUmlInteraction::removePostcondition(QUmlConstraint *postcondition)
{
    (qwrappedobject_cast<QUmlBehavior *>(this))->removePostcondition(postcondition);
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
QSet<QUmlConstraint *> QUmlInteraction::preconditions() const
{
    return (qwrappedobject_cast<const QUmlBehavior *>(this))->preconditions();
}

void QUmlInteraction::addPrecondition(QUmlConstraint *precondition)
{
    (qwrappedobject_cast<QUmlBehavior *>(this))->addPrecondition(precondition);
}

void QUmlInteraction::removePrecondition(QUmlConstraint *precondition)
{
    (qwrappedobject_cast<QUmlBehavior *>(this))->removePrecondition(precondition);
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
QSet<QUmlBehavior *> QUmlInteraction::redefinedBehaviors() const
{
    return (qwrappedobject_cast<const QUmlBehavior *>(this))->redefinedBehaviors();
}

void QUmlInteraction::addRedefinedBehavior(QUmlBehavior *redefinedBehavior)
{
    (qwrappedobject_cast<QUmlBehavior *>(this))->addRedefinedBehavior(redefinedBehavior);
}

void QUmlInteraction::removeRedefinedBehavior(QUmlBehavior *redefinedBehavior)
{
    (qwrappedobject_cast<QUmlBehavior *>(this))->removeRedefinedBehavior(redefinedBehavior);
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
QList<QUmlParameter *> QUmlInteraction::ownedParameters() const
{
    return (qwrappedobject_cast<const QUmlBehavior *>(this))->ownedParameters();
}

void QUmlInteraction::addOwnedParameter(QUmlParameter *ownedParameter)
{
    (qwrappedobject_cast<QUmlBehavior *>(this))->addOwnedParameter(ownedParameter);
}

void QUmlInteraction::removeOwnedParameter(QUmlParameter *ownedParameter)
{
    (qwrappedobject_cast<QUmlBehavior *>(this))->removeOwnedParameter(ownedParameter);
}

/*!
    The ParameterSets owned by this Behavior.
 */
QSet<QUmlParameterSet *> QUmlInteraction::ownedParameterSets() const
{
    return (qwrappedobject_cast<const QUmlBehavior *>(this))->ownedParameterSets();
}

void QUmlInteraction::addOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    (qwrappedobject_cast<QUmlBehavior *>(this))->addOwnedParameterSet(ownedParameterSet);
}

void QUmlInteraction::removeOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    (qwrappedobject_cast<QUmlBehavior *>(this))->removeOwnedParameterSet(ownedParameterSet);
}

/*!
    The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.
 */
QUmlBehavioredClassifier *QUmlInteraction::context() const
{
    return (qwrappedobject_cast<const QUmlBehavior *>(this))->context();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlInteraction::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlInteraction::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlInteraction::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlInteraction::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlInteraction::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlInteraction::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlInteraction::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlInteraction::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlInteraction::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlInteraction::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlInteraction::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlInteraction::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlInteraction::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlInteraction::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlInteraction::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlInteraction::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlInteractionFragment
// ---------------------------------------------------------------

/*!
    The general ordering relationships contained in this fragment.
 */
QSet<QUmlGeneralOrdering *> QUmlInteraction::generalOrderings() const
{
    return (qwrappedobject_cast<const QUmlInteractionFragment *>(this))->generalOrderings();
}

void QUmlInteraction::addGeneralOrdering(QUmlGeneralOrdering *generalOrdering)
{
    (qwrappedobject_cast<QUmlInteractionFragment *>(this))->addGeneralOrdering(generalOrdering);
}

void QUmlInteraction::removeGeneralOrdering(QUmlGeneralOrdering *generalOrdering)
{
    (qwrappedobject_cast<QUmlInteractionFragment *>(this))->removeGeneralOrdering(generalOrdering);
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QUmlInteraction *QUmlInteraction::enclosingInteraction() const
{
    return (qwrappedobject_cast<const QUmlInteractionFragment *>(this))->enclosingInteraction();
}

void QUmlInteraction::setEnclosingInteraction(QUmlInteraction *enclosingInteraction)
{
    (qwrappedobject_cast<QUmlInteractionFragment *>(this))->setEnclosingInteraction(enclosingInteraction);
}

/*!
    References the Lifelines that the InteractionFragment involves.
 */
QSet<QUmlLifeline *> QUmlInteraction::covered() const
{
    return (qwrappedobject_cast<const QUmlInteractionFragment *>(this))->covered();
}

void QUmlInteraction::addCovered(QUmlLifeline *covered)
{
    (qwrappedobject_cast<QUmlInteractionFragment *>(this))->addCovered(covered);
}

void QUmlInteraction::removeCovered(QUmlLifeline *covered)
{
    (qwrappedobject_cast<QUmlInteractionFragment *>(this))->removeCovered(covered);
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QUmlInteractionOperand *QUmlInteraction::enclosingOperand() const
{
    return (qwrappedobject_cast<const QUmlInteractionFragment *>(this))->enclosingOperand();
}

void QUmlInteraction::setEnclosingOperand(QUmlInteractionOperand *enclosingOperand)
{
    (qwrappedobject_cast<QUmlInteractionFragment *>(this))->setEnclosingOperand(enclosingOperand);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlInteraction
// ---------------------------------------------------------------

/*!
    Actions owned by the Interaction.
 */
QSet<QUmlAction *> QUmlInteraction::actions() const
{
    // This is a read-write association end

    Q_D(const QUmlInteraction);
    return d->actions;
}

void QUmlInteraction::addAction(QUmlAction *action)
{
    // This is a read-write association end

    Q_D(QUmlInteraction);
    if (!d->actions.contains(action)) {
        d->actions.insert(action);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(action));
    }
}

void QUmlInteraction::removeAction(QUmlAction *action)
{
    // This is a read-write association end

    Q_D(QUmlInteraction);
    if (d->actions.contains(action)) {
        d->actions.remove(action);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(action));
    }
}

/*!
    The Messages contained in this Interaction.
 */
QSet<QUmlMessage *> QUmlInteraction::messages() const
{
    // This is a read-write association end

    Q_D(const QUmlInteraction);
    return d->messages;
}

void QUmlInteraction::addMessage(QUmlMessage *message)
{
    // This is a read-write association end

    Q_D(QUmlInteraction);
    if (!d->messages.contains(message)) {
        d->messages.insert(message);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(message));

        // Adjust opposite property
        message->setInteraction(this);
    }
}

void QUmlInteraction::removeMessage(QUmlMessage *message)
{
    // This is a read-write association end

    Q_D(QUmlInteraction);
    if (d->messages.contains(message)) {
        d->messages.remove(message);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(message));

        // Adjust opposite property
        message->setInteraction(0);
    }
}

/*!
    Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.
 */
QSet<QUmlGate *> QUmlInteraction::formalGates() const
{
    // This is a read-write association end

    Q_D(const QUmlInteraction);
    return d->formalGates;
}

void QUmlInteraction::addFormalGate(QUmlGate *formalGate)
{
    // This is a read-write association end

    Q_D(QUmlInteraction);
    if (!d->formalGates.contains(formalGate)) {
        d->formalGates.insert(formalGate);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(formalGate));
    }
}

void QUmlInteraction::removeFormalGate(QUmlGate *formalGate)
{
    // This is a read-write association end

    Q_D(QUmlInteraction);
    if (d->formalGates.contains(formalGate)) {
        d->formalGates.remove(formalGate);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(formalGate));
    }
}

/*!
    The ordered set of fragments in the Interaction.
 */
QList<QUmlInteractionFragment *> QUmlInteraction::fragments() const
{
    // This is a read-write association end

    Q_D(const QUmlInteraction);
    return d->fragments;
}

void QUmlInteraction::addFragment(QUmlInteractionFragment *fragment)
{
    // This is a read-write association end

    Q_D(QUmlInteraction);
    if (!d->fragments.contains(fragment)) {
        d->fragments.append(fragment);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(fragment));

        // Adjust opposite property
        fragment->setEnclosingInteraction(this);
    }
}

void QUmlInteraction::removeFragment(QUmlInteractionFragment *fragment)
{
    // This is a read-write association end

    Q_D(QUmlInteraction);
    if (d->fragments.contains(fragment)) {
        d->fragments.removeAll(fragment);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(fragment));

        // Adjust opposite property
        fragment->setEnclosingInteraction(0);
    }
}

/*!
    Specifies the participants in this Interaction.
 */
QSet<QUmlLifeline *> QUmlInteraction::lifelines() const
{
    // This is a read-write association end

    Q_D(const QUmlInteraction);
    return d->lifelines;
}

void QUmlInteraction::addLifeline(QUmlLifeline *lifeline)
{
    // This is a read-write association end

    Q_D(QUmlInteraction);
    if (!d->lifelines.contains(lifeline)) {
        d->lifelines.insert(lifeline);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(lifeline));

        // Adjust opposite property
        lifeline->setInteraction(this);
    }
}

void QUmlInteraction::removeLifeline(QUmlLifeline *lifeline)
{
    // This is a read-write association end

    Q_D(QUmlInteraction);
    if (d->lifelines.contains(lifeline)) {
        d->lifelines.remove(lifeline);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(lifeline));

        // Adjust opposite property
        lifeline->setInteraction(0);
    }
}

void QUmlInteraction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("actions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("actions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("actions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Actions owned by the Interaction.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("actions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("actions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("actions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("messages")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("messages")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("messages")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Messages contained in this Interaction.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("messages")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("messages")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("messages")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMessage::interaction");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("formalGates")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("formalGates")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("formalGates")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("formalGates")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("formalGates")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("formalGates")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("fragments")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("fragments")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("fragments")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ordered set of fragments in the Interaction.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("fragments")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("fragments")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("fragments")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QInteractionFragment::enclosingInteraction");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("lifelines")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("lifelines")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("lifelines")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the participants in this Interaction.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("lifelines")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("lifelines")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteraction")][QString::fromLatin1("lifelines")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QLifeline::interaction");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlinteraction.cpp"

