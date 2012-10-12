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
#include "qnamespace_p.h"
#include "qnamespace_p.h"
#include "qclassifier_p.h"
#include "qnamespace_p.h"
#include "qnamespace_p.h"
#include "qredefinableelement_p.h"

#include <QtUml/QConstraint>
#include <QtUml/QBehavioralFeature>
#include <QtUml/QParameterSet>
#include <QtUml/QBehavioredClassifier>
#include <QtUml/QParameter>

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

void QBehaviorPrivate::setReentrant(bool isReentrant)
{
    this->isReentrant = isReentrant;
}

void QBehaviorPrivate::setSpecification(QBehavioralFeature *specification)
{
    this->specification = specification;
}

void QBehaviorPrivate::addPostcondition(QConstraint *postcondition)
{
    this->postconditions->insert(postcondition);

    // Adjust subsetted property(ies)
    addOwnedRule(postcondition);
}

void QBehaviorPrivate::removePostcondition(QConstraint *postcondition)
{
    this->postconditions->remove(postcondition);

    // Adjust subsetted property(ies)
    removeOwnedRule(postcondition);
}

void QBehaviorPrivate::addPrecondition(QConstraint *precondition)
{
    this->preconditions->insert(precondition);

    // Adjust subsetted property(ies)
    addOwnedRule(precondition);
}

void QBehaviorPrivate::removePrecondition(QConstraint *precondition)
{
    this->preconditions->remove(precondition);

    // Adjust subsetted property(ies)
    removeOwnedRule(precondition);
}

void QBehaviorPrivate::addRedefinedBehavior(QBehavior *redefinedBehavior)
{
    this->redefinedBehaviors->insert(redefinedBehavior);

    // Adjust subsetted property(ies)
    addRedefinedClassifier(redefinedBehavior);
}

void QBehaviorPrivate::removeRedefinedBehavior(QBehavior *redefinedBehavior)
{
    this->redefinedBehaviors->remove(redefinedBehavior);

    // Adjust subsetted property(ies)
    removeRedefinedClassifier(redefinedBehavior);
}

void QBehaviorPrivate::addOwnedParameter(QParameter *ownedParameter)
{
    this->ownedParameters->append(ownedParameter);

    // Adjust subsetted property(ies)
    addOwnedMember(ownedParameter);
}

void QBehaviorPrivate::removeOwnedParameter(QParameter *ownedParameter)
{
    this->ownedParameters->removeAll(ownedParameter);

    // Adjust subsetted property(ies)
    removeOwnedMember(ownedParameter);
}

void QBehaviorPrivate::addOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    this->ownedParameterSets->insert(ownedParameterSet);

    // Adjust subsetted property(ies)
    addOwnedMember(ownedParameterSet);
}

void QBehaviorPrivate::removeOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    this->ownedParameterSets->remove(ownedParameterSet);

    // Adjust subsetted property(ies)
    removeOwnedMember(ownedParameterSet);
}

/*!
    \class QBehavior

    \inmodule QtUml

    \brief Behavior is a specification of how its context classifier changes state over time. This specification may be either a definition of possible behavior execution or emergent behavior, or a selective illustration of an interesting subset of possible executions. The latter form is typically used for capturing examples, such as a trace of a particular execution.A behavior owns zero or more parameter sets.
 */

QBehavior::QBehavior(bool createPimpl, QObject *parent)
    : QClass(createPimpl, parent)
{
}

QBehavior::~QBehavior()
{
}

/*!
    Tells whether the behavior can be invoked while it is still executing from a previous invocation.
 */
bool QBehavior::isReentrant() const
{
    QTUML_D(const QBehavior);
    return d->isReentrant;
}

void QBehavior::setReentrant(bool isReentrant)
{
    QTUML_D(QBehavior);
    if (d->isReentrant != isReentrant) {
        d->setReentrant(isReentrant);
    }
}

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
QBehavioralFeature *QBehavior::specification() const
{
    QTUML_D(const QBehavior);
    return d->specification;
}

void QBehavior::setSpecification(QBehavioralFeature *specification)
{
    QTUML_D(QBehavior);
    if (d->specification != specification) {
        d->setSpecification(specification);

        // Adjust opposite property
        specification->addMethod(this);
    }
}

/*!
    An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.
 */
const QSet<QConstraint *> *QBehavior::postconditions() const
{
    QTUML_D(const QBehavior);
    return d->postconditions;
}

void QBehavior::addPostcondition(QConstraint *postcondition)
{
    QTUML_D(QBehavior);
    if (!d->postconditions->contains(postcondition)) {
        d->addPostcondition(postcondition);
    }
}

void QBehavior::removePostcondition(QConstraint *postcondition)
{
    QTUML_D(QBehavior);
    if (d->postconditions->contains(postcondition)) {
        d->removePostcondition(postcondition);
    }
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
const QSet<QConstraint *> *QBehavior::preconditions() const
{
    QTUML_D(const QBehavior);
    return d->preconditions;
}

void QBehavior::addPrecondition(QConstraint *precondition)
{
    QTUML_D(QBehavior);
    if (!d->preconditions->contains(precondition)) {
        d->addPrecondition(precondition);
    }
}

void QBehavior::removePrecondition(QConstraint *precondition)
{
    QTUML_D(QBehavior);
    if (d->preconditions->contains(precondition)) {
        d->removePrecondition(precondition);
    }
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
const QSet<QBehavior *> *QBehavior::redefinedBehaviors() const
{
    QTUML_D(const QBehavior);
    return d->redefinedBehaviors;
}

void QBehavior::addRedefinedBehavior(QBehavior *redefinedBehavior)
{
    QTUML_D(QBehavior);
    if (!d->redefinedBehaviors->contains(redefinedBehavior)) {
        d->addRedefinedBehavior(redefinedBehavior);
    }
}

void QBehavior::removeRedefinedBehavior(QBehavior *redefinedBehavior)
{
    QTUML_D(QBehavior);
    if (d->redefinedBehaviors->contains(redefinedBehavior)) {
        d->removeRedefinedBehavior(redefinedBehavior);
    }
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
const QList<QParameter *> *QBehavior::ownedParameters() const
{
    QTUML_D(const QBehavior);
    return d->ownedParameters;
}

void QBehavior::addOwnedParameter(QParameter *ownedParameter)
{
    QTUML_D(QBehavior);
    if (!d->ownedParameters->contains(ownedParameter)) {
        d->addOwnedParameter(ownedParameter);
    }
}

void QBehavior::removeOwnedParameter(QParameter *ownedParameter)
{
    QTUML_D(QBehavior);
    if (d->ownedParameters->contains(ownedParameter)) {
        d->removeOwnedParameter(ownedParameter);
    }
}

/*!
    The ParameterSets owned by this Behavior.
 */
const QSet<QParameterSet *> *QBehavior::ownedParameterSets() const
{
    QTUML_D(const QBehavior);
    return d->ownedParameterSets;
}

void QBehavior::addOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    QTUML_D(QBehavior);
    if (!d->ownedParameterSets->contains(ownedParameterSet)) {
        d->addOwnedParameterSet(ownedParameterSet);
    }
}

void QBehavior::removeOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    QTUML_D(QBehavior);
    if (d->ownedParameterSets->contains(ownedParameterSet)) {
        d->removeOwnedParameterSet(ownedParameterSet);
    }
}

/*!
    The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.
 */
QBehavioredClassifier *QBehavior::context() const
{
    qWarning("QBehavior::context: to be implemented (this is a derived associationend)");
}

QT_END_NAMESPACE_QTUML

