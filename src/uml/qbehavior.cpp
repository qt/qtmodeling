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

void QBehaviorPrivate::setSpecification(const QBehavioralFeature *specification)
{
    this->specification = const_cast<QBehavioralFeature *>(specification);
}

void QBehaviorPrivate::addPostcondition(const QConstraint *postcondition)
{
    this->postconditions->insert(const_cast<QConstraint *>(postcondition));

    // Adjust subsetted property(ies)
    addOwnedRule(postcondition);
}

void QBehaviorPrivate::removePostcondition(const QConstraint *postcondition)
{
    this->postconditions->remove(const_cast<QConstraint *>(postcondition));

    // Adjust subsetted property(ies)
    removeOwnedRule(postcondition);
}

void QBehaviorPrivate::addPrecondition(const QConstraint *precondition)
{
    this->preconditions->insert(const_cast<QConstraint *>(precondition));

    // Adjust subsetted property(ies)
    addOwnedRule(precondition);
}

void QBehaviorPrivate::removePrecondition(const QConstraint *precondition)
{
    this->preconditions->remove(const_cast<QConstraint *>(precondition));

    // Adjust subsetted property(ies)
    removeOwnedRule(precondition);
}

void QBehaviorPrivate::addRedefinedBehavior(const QBehavior *redefinedBehavior)
{
    this->redefinedBehaviors->insert(const_cast<QBehavior *>(redefinedBehavior));

    // Adjust subsetted property(ies)
    addRedefinedClassifier(redefinedBehavior);
}

void QBehaviorPrivate::removeRedefinedBehavior(const QBehavior *redefinedBehavior)
{
    this->redefinedBehaviors->remove(const_cast<QBehavior *>(redefinedBehavior));

    // Adjust subsetted property(ies)
    removeRedefinedClassifier(redefinedBehavior);
}

void QBehaviorPrivate::addOwnedParameter(const QParameter *ownedParameter)
{
    this->ownedParameters->append(const_cast<QParameter *>(ownedParameter));

    // Adjust subsetted property(ies)
    addOwnedMember(ownedParameter);
}

void QBehaviorPrivate::removeOwnedParameter(const QParameter *ownedParameter)
{
    this->ownedParameters->removeAll(const_cast<QParameter *>(ownedParameter));

    // Adjust subsetted property(ies)
    removeOwnedMember(ownedParameter);
}

void QBehaviorPrivate::addOwnedParameterSet(const QParameterSet *ownedParameterSet)
{
    this->ownedParameterSets->insert(const_cast<QParameterSet *>(ownedParameterSet));

    // Adjust subsetted property(ies)
    addOwnedMember(ownedParameterSet);
}

void QBehaviorPrivate::removeOwnedParameterSet(const QParameterSet *ownedParameterSet)
{
    this->ownedParameterSets->remove(const_cast<QParameterSet *>(ownedParameterSet));

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
    if (createPimpl)
        d_umlptr = new QBehaviorPrivate;
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
    d->setReentrant(isReentrant);
}

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
QBehavioralFeature *QBehavior::specification() const
{
    QTUML_D(const QBehavior);
    return d->specification;
}

void QBehavior::setSpecification(const QBehavioralFeature *specification)
{
    QTUML_D(QBehavior);
    d->setSpecification(const_cast<QBehavioralFeature *>(specification));
}

/*!
    An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.
 */
const QSet<QConstraint *> *QBehavior::postconditions() const
{
    QTUML_D(const QBehavior);
    return d->postconditions;
}

void QBehavior::addPostcondition(const QConstraint *postcondition)
{
    QTUML_D(QBehavior);
    d->addPostcondition(const_cast<QConstraint *>(postcondition));
}

void QBehavior::removePostcondition(const QConstraint *postcondition)
{
    QTUML_D(QBehavior);
    d->removePostcondition(const_cast<QConstraint *>(postcondition));
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
const QSet<QConstraint *> *QBehavior::preconditions() const
{
    QTUML_D(const QBehavior);
    return d->preconditions;
}

void QBehavior::addPrecondition(const QConstraint *precondition)
{
    QTUML_D(QBehavior);
    d->addPrecondition(const_cast<QConstraint *>(precondition));
}

void QBehavior::removePrecondition(const QConstraint *precondition)
{
    QTUML_D(QBehavior);
    d->removePrecondition(const_cast<QConstraint *>(precondition));
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
const QSet<QBehavior *> *QBehavior::redefinedBehaviors() const
{
    QTUML_D(const QBehavior);
    return d->redefinedBehaviors;
}

void QBehavior::addRedefinedBehavior(const QBehavior *redefinedBehavior)
{
    QTUML_D(QBehavior);
    d->addRedefinedBehavior(const_cast<QBehavior *>(redefinedBehavior));
}

void QBehavior::removeRedefinedBehavior(const QBehavior *redefinedBehavior)
{
    QTUML_D(QBehavior);
    d->removeRedefinedBehavior(const_cast<QBehavior *>(redefinedBehavior));
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
const QList<QParameter *> *QBehavior::ownedParameters() const
{
    QTUML_D(const QBehavior);
    return d->ownedParameters;
}

void QBehavior::addOwnedParameter(const QParameter *ownedParameter)
{
    QTUML_D(QBehavior);
    d->addOwnedParameter(const_cast<QParameter *>(ownedParameter));
}

void QBehavior::removeOwnedParameter(const QParameter *ownedParameter)
{
    QTUML_D(QBehavior);
    d->removeOwnedParameter(const_cast<QParameter *>(ownedParameter));
}

/*!
    The ParameterSets owned by this Behavior.
 */
const QSet<QParameterSet *> *QBehavior::ownedParameterSets() const
{
    QTUML_D(const QBehavior);
    return d->ownedParameterSets;
}

void QBehavior::addOwnedParameterSet(const QParameterSet *ownedParameterSet)
{
    QTUML_D(QBehavior);
    d->addOwnedParameterSet(const_cast<QParameterSet *>(ownedParameterSet));
}

void QBehavior::removeOwnedParameterSet(const QParameterSet *ownedParameterSet)
{
    QTUML_D(QBehavior);
    d->removeOwnedParameterSet(const_cast<QParameterSet *>(ownedParameterSet));
}

/*!
    The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.
 */
QBehavioredClassifier *QBehavior::context() const
{
    qWarning("QBehavior::context: to be implemented (this is a derived associationend)");
}

QT_END_NAMESPACE_QTUML

