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

#include "qbehavior.h"
#include "qbehavior_p.h"

#include <QtUml/QBehavioralFeature>
#include <QtUml/QConstraint>
#include <QtUml/QParameter>
#include <QtUml/QBehavioredClassifier>
#include <QtUml/QParameterSet>

QT_BEGIN_NAMESPACE_QTUML

QBehaviorPrivate::QBehaviorPrivate() :
    isReentrant(true),
    specification(0),
    postconditions(new QSet<QConstraint *>),
    preconditions(new QSet<QConstraint *>),
    redefinedBehaviors(new QSet<QBehavior *>),
    ownedParameters(new QList<QParameter *>),
    ownedParameterSets(new QSet<QParameterSet *>)
{
}

QBehaviorPrivate::~QBehaviorPrivate()
{
    delete postconditions;
    delete preconditions;
    delete redefinedBehaviors;
    delete ownedParameters;
    delete ownedParameterSets;
}

/*!
    \class QBehavior

    \inmodule QtUml

    \brief Behavior is a specification of how its context classifier changes state over time. This specification may be either a definition of possible behavior execution or emergent behavior, or a selective illustration of an interesting subset of possible executions. The latter form is typically used for capturing examples, such as a trace of a particular execution.A behavior owns zero or more parameter sets.
 */

QBehavior::QBehavior(QUmlObject *parent, QUmlObject *wrapper) :
    QClass(*new QBehaviorPrivate, parent, wrapper)
{
}

QBehavior::QBehavior(QBehaviorPrivate &dd, QUmlObject *parent, QUmlObject *wrapper) :
    QClass(dd, parent, wrapper)
{
}

QBehavior::~QBehavior()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QBehavior
// ---------------------------------------------------------------

/*!
    Tells whether the behavior can be invoked while it is still executing from a previous invocation.
 */
bool QBehavior::isReentrant() const
{
    // This is a read-write attribute

    Q_D(const QBehavior);
    return d->isReentrant;
}

void QBehavior::setReentrant(bool isReentrant)
{
    // This is a read-write attribute

    Q_D(QBehavior);
    if (d->isReentrant != isReentrant) {
        d->isReentrant = isReentrant;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QBehavior
// ---------------------------------------------------------------

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
QBehavioralFeature *QBehavior::specification() const
{
    // This is a read-write association end

    Q_D(const QBehavior);
    return d->specification;
}

void QBehavior::setSpecification(QBehavioralFeature *specification)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (d->specification != specification) {
        // Adjust opposite property
        if (d->specification)
            d->specification->removeMethod(this);

        d->specification = specification;

        // Adjust opposite property
        if (specification)
            specification->addMethod(this);
    }
}

/*!
    An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.
 */
const QSet<QConstraint *> *QBehavior::postconditions() const
{
    // This is a read-write association end

    Q_D(const QBehavior);
    return d->postconditions;
}

void QBehavior::addPostcondition(QConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (!d->postconditions->contains(postcondition)) {
        d->postconditions->insert(postcondition);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespace *>(this))->addOwnedRule(qumlobject_cast<QConstraint *>(postcondition));
    }
}

void QBehavior::removePostcondition(QConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (d->postconditions->contains(postcondition)) {
        d->postconditions->remove(postcondition);
        postcondition->setParent(0);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespace *>(this))->removeOwnedRule(qumlobject_cast<QConstraint *>(postcondition));
    }
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
const QSet<QConstraint *> *QBehavior::preconditions() const
{
    // This is a read-write association end

    Q_D(const QBehavior);
    return d->preconditions;
}

void QBehavior::addPrecondition(QConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (!d->preconditions->contains(precondition)) {
        d->preconditions->insert(precondition);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespace *>(this))->addOwnedRule(qumlobject_cast<QConstraint *>(precondition));
    }
}

void QBehavior::removePrecondition(QConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (d->preconditions->contains(precondition)) {
        d->preconditions->remove(precondition);
        precondition->setParent(0);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespace *>(this))->removeOwnedRule(qumlobject_cast<QConstraint *>(precondition));
    }
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
const QSet<QBehavior *> *QBehavior::redefinedBehaviors() const
{
    // This is a read-write association end

    Q_D(const QBehavior);
    return d->redefinedBehaviors;
}

void QBehavior::addRedefinedBehavior(QBehavior *redefinedBehavior)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (!d->redefinedBehaviors->contains(redefinedBehavior)) {
        d->redefinedBehaviors->insert(redefinedBehavior);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QClassifier *>(this))->addRedefinedClassifier(qumlobject_cast<QClassifier *>(redefinedBehavior));
    }
}

void QBehavior::removeRedefinedBehavior(QBehavior *redefinedBehavior)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (d->redefinedBehaviors->contains(redefinedBehavior)) {
        d->redefinedBehaviors->remove(redefinedBehavior);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QClassifier *>(this))->removeRedefinedClassifier(qumlobject_cast<QClassifier *>(redefinedBehavior));
    }
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
const QList<QParameter *> *QBehavior::ownedParameters() const
{
    // This is a read-write association end

    Q_D(const QBehavior);
    return d->ownedParameters;
}

void QBehavior::addOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (!d->ownedParameters->contains(ownedParameter)) {
        d->ownedParameters->append(ownedParameter);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qumlobject_cast<QNamedElement *>(ownedParameter));
    }
}

void QBehavior::removeOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (d->ownedParameters->contains(ownedParameter)) {
        d->ownedParameters->removeAll(ownedParameter);
        ownedParameter->setParent(0);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qumlobject_cast<QNamedElement *>(ownedParameter));
    }
}

/*!
    The ParameterSets owned by this Behavior.
 */
const QSet<QParameterSet *> *QBehavior::ownedParameterSets() const
{
    // This is a read-write association end

    Q_D(const QBehavior);
    return d->ownedParameterSets;
}

void QBehavior::addOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (!d->ownedParameterSets->contains(ownedParameterSet)) {
        d->ownedParameterSets->insert(ownedParameterSet);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qumlobject_cast<QNamedElement *>(ownedParameterSet));
    }
}

void QBehavior::removeOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (d->ownedParameterSets->contains(ownedParameterSet)) {
        d->ownedParameterSets->remove(ownedParameterSet);
        ownedParameterSet->setParent(0);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qumlobject_cast<QNamedElement *>(ownedParameterSet));
    }
}

/*!
    The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.
 */
QBehavioredClassifier *QBehavior::context() const
{
    // This is a read-only derived association end

    qWarning("QBehavior::context: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

// Overriden methods for subsetted properties

void QBehavior::addRedefinedClassifier(QUmlPointer<QBehavior> redefinedBehavior)
{
    addRedefinedBehavior(redefinedBehavior);
}

void QBehavior::removeRedefinedClassifier(QUmlPointer<QBehavior> redefinedBehavior)
{
    removeRedefinedBehavior(redefinedBehavior);
}

#include "moc_qbehavior.cpp"

QT_END_NAMESPACE_QTUML

