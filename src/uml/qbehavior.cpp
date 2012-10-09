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

/*!
    \class QBehavior

    \inmodule QtUml

    \brief Behavior is a specification of how its context classifier changes state over time. This specification may be either a definition of possible behavior execution or emergent behavior, or a selective illustration of an interesting subset of possible executions. The latter form is typically used for capturing examples, such as a trace of a particular execution.A behavior owns zero or more parameter sets.
 */

QBehavior::QBehavior(QObject *parent)
    : QClass(parent), d_ptr(new QBehaviorPrivate)
{
}

QBehavior::~QBehavior()
{
    delete d_ptr;
}

/*!
    Tells whether the behavior can be invoked while it is still executing from a previous invocation.
 */
bool QBehavior::isReentrant() const
{
    return d_ptr->isReentrant;
}

void QBehavior::setReentrant(bool isReentrant)
{
    d_ptr->isReentrant = isReentrant;
}

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
QBehavioralFeature *QBehavior::specification() const
{
    return d_ptr->specification;
}

void QBehavior::setSpecification(const QBehavioralFeature *specification)
{
    d_ptr->specification = const_cast<QBehavioralFeature *>(specification);
}

/*!
    An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.
 */
const QSet<QConstraint *> *QBehavior::postconditions() const
{
    return d_ptr->postconditions;
}

void QBehavior::addPostcondition(const QConstraint *postcondition)
{
    d_ptr->postconditions->insert(const_cast<QConstraint *>(postcondition));
}

void QBehavior::removePostcondition(const QConstraint *postcondition)
{
    d_ptr->postconditions->remove(const_cast<QConstraint *>(postcondition));
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
const QSet<QConstraint *> *QBehavior::preconditions() const
{
    return d_ptr->preconditions;
}

void QBehavior::addPrecondition(const QConstraint *precondition)
{
    d_ptr->preconditions->insert(const_cast<QConstraint *>(precondition));
}

void QBehavior::removePrecondition(const QConstraint *precondition)
{
    d_ptr->preconditions->remove(const_cast<QConstraint *>(precondition));
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
const QSet<QBehavior *> *QBehavior::redefinedBehaviors() const
{
    return d_ptr->redefinedBehaviors;
}

void QBehavior::addRedefinedBehavior(const QBehavior *redefinedBehavior)
{
    d_ptr->redefinedBehaviors->insert(const_cast<QBehavior *>(redefinedBehavior));
}

void QBehavior::removeRedefinedBehavior(const QBehavior *redefinedBehavior)
{
    d_ptr->redefinedBehaviors->remove(const_cast<QBehavior *>(redefinedBehavior));
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
const QList<QParameter *> *QBehavior::ownedParameters() const
{
    return d_ptr->ownedParameters;
}

void QBehavior::addOwnedParameter(const QParameter *ownedParameter)
{
    d_ptr->ownedParameters->append(const_cast<QParameter *>(ownedParameter));
}

void QBehavior::removeOwnedParameter(const QParameter *ownedParameter)
{
    d_ptr->ownedParameters->removeAll(const_cast<QParameter *>(ownedParameter));
}

/*!
    The ParameterSets owned by this Behavior.
 */
const QSet<QParameterSet *> *QBehavior::ownedParameterSets() const
{
    return d_ptr->ownedParameterSets;
}

void QBehavior::addOwnedParameterSet(const QParameterSet *ownedParameterSet)
{
    d_ptr->ownedParameterSets->insert(const_cast<QParameterSet *>(ownedParameterSet));
}

void QBehavior::removeOwnedParameterSet(const QParameterSet *ownedParameterSet)
{
    d_ptr->ownedParameterSets->remove(const_cast<QParameterSet *>(ownedParameterSet));
}

/*!
    The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.
 */
QBehavioredClassifier *QBehavior::context() const
{
    qWarning("QBehavior::context: to be implemented (this is a derived associationend)");
}

QT_END_NAMESPACE_QTUML

