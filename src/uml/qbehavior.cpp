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
//#include "qbehavior_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QBehavior

    \inmodule QtUml

    \brief Behavior is a specification of how its context classifier changes state over time. This specification may be either a definition of possible behavior execution or emergent behavior, or a selective illustration of an interesting subset of possible executions. The latter form is typically used for capturing examples, such as a trace of a particular execution.A behavior owns zero or more parameter sets.
 */

QBehavior::QBehavior(QObject *parent)
    : QClass(parent)
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
}

void QBehavior::setReentrant(bool isReentrant)
{
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
const QList<QParameter *> *QBehavior::ownedParameters() const
{
}

void QBehavior::addOwnedParameter(const QParameter *ownedParameter)
{
}

void QBehavior::removeOwnedParameter(const QParameter *ownedParameter)
{
}

/*!
    The ParameterSets owned by this Behavior.
 */
const QSet<QParameterSet *> *QBehavior::ownedParameterSets() const
{
}

void QBehavior::addOwnedParameterSet(const QParameterSet *ownedParameterSet)
{
}

void QBehavior::removeOwnedParameterSet(const QParameterSet *ownedParameterSet)
{
}

/*!
    An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.
 */
const QSet<QConstraint *> *QBehavior::postconditions() const
{
}

void QBehavior::addPostcondition(const QConstraint *postcondition)
{
}

void QBehavior::removePostcondition(const QConstraint *postcondition)
{
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
const QSet<QConstraint *> *QBehavior::preconditions() const
{
}

void QBehavior::addPrecondition(const QConstraint *precondition)
{
}

void QBehavior::removePrecondition(const QConstraint *precondition)
{
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
const QSet<QBehavior *> *QBehavior::redefinedBehaviors() const
{
}

void QBehavior::addRedefinedBehavior(const QBehavior *redefinedBehavior)
{
}

void QBehavior::removeRedefinedBehavior(const QBehavior *redefinedBehavior)
{
}

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
QBehavioralFeature *QBehavior::specification() const
{
}

void QBehavior::setSpecification(const QBehavioralFeature *specification)
{
}

/*!
    Missing derivation for Behavior::/context : BehavioredClassifier
 */
QBehavioredClassifier *QBehavior::context() const
{
}

QT_END_NAMESPACE_QTUML

