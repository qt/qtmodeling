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
#include "qumlbehavior.h"

#include <QtUml/QUmlBehavioralFeature>
#include <QtUml/QUmlBehavioredClassifier>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterSet>

/*!
    \class QUmlBehavior

    \inmodule QtUml

    \brief Behavior is a specification of how its context classifier changes state over time. This specification may be either a definition of possible behavior execution or emergent behavior, or a selective illustration of an interesting subset of possible executions. The latter form is typically used for capturing examples, such as a trace of a particular execution.A behavior owns zero or more parameter sets.
 */
QUmlBehavior::QUmlBehavior() :
    QUmlClass(false),
    _isReentrant(true),
    _specification(0)
{
}

QUmlBehavior::~QUmlBehavior()
{
}

// OWNED ATTRIBUTES

/*!
    The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.
 */
QUmlBehavioredClassifier *
QUmlBehavior::context() const
{
    // This is a read-only derived association end

    qWarning("UmlBehavior::context(): to be implemented (this is a derived association end)");

    return 0;
}

void QUmlBehavior::setContext(QUmlBehavioredClassifier *context)
{
    // This is a read-only derived association end

    qWarning("UmlBehavior::context(): to be implemented (this is a derived association end)");
    Q_UNUSED(context);

    if (false /* <derivedexclusion-criteria> */) {
        // Adjust subsetted properties
        // removeRedefinitionContext(/* <derived-code> */);

        // <derived-code>

        // Adjust subsetted properties
        if (context) {
            addRedefinitionContext(context);
        }
    }
}

/*!
    Tells whether the behavior can be invoked while it is still executing from a previous invocation.
 */
bool 
QUmlBehavior::isReentrant() const
{
    // This is a read-write property

    return _isReentrant;
}

void QUmlBehavior::setReentrant(bool isReentrant)
{
    // This is a read-write property

    if (_isReentrant != isReentrant) {
        _isReentrant = isReentrant;
    }
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
const QList<QUmlParameter *> 
QUmlBehavior::ownedParameter() const
{
    // This is a read-write association end

    return _ownedParameter;
}

void QUmlBehavior::addOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameter.contains(ownedParameter)) {
        _ownedParameter.append(ownedParameter);
        if (ownedParameter->asQObject() && this->asQObject())
            QObject::connect(ownedParameter->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedParameter(QObject *)));
        ownedParameter->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(ownedParameter);
    }
}

void QUmlBehavior::removeOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameter.contains(ownedParameter)) {
        _ownedParameter.removeAll(ownedParameter);
        if (ownedParameter->asQObject())
            ownedParameter->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameter);
    }
}

/*!
    The ParameterSets owned by this Behavior.
 */
const QSet<QUmlParameterSet *> 
QUmlBehavior::ownedParameterSet() const
{
    // This is a read-write association end

    return _ownedParameterSet;
}

void QUmlBehavior::addOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (!_ownedParameterSet.contains(ownedParameterSet)) {
        _ownedParameterSet.insert(ownedParameterSet);
        if (ownedParameterSet->asQObject() && this->asQObject())
            QObject::connect(ownedParameterSet->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedParameterSet(QObject *)));
        ownedParameterSet->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(ownedParameterSet);
    }
}

void QUmlBehavior::removeOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (_ownedParameterSet.contains(ownedParameterSet)) {
        _ownedParameterSet.remove(ownedParameterSet);
        if (ownedParameterSet->asQObject())
            ownedParameterSet->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameterSet);
    }
}

/*!
    An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.
 */
const QSet<QUmlConstraint *> 
QUmlBehavior::postcondition() const
{
    // This is a read-write association end

    return _postcondition;
}

void QUmlBehavior::addPostcondition(QUmlConstraint *postcondition)
{
    // This is a read-write association end

    if (!_postcondition.contains(postcondition)) {
        _postcondition.insert(postcondition);
        if (postcondition->asQObject() && this->asQObject())
            QObject::connect(postcondition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removePostcondition(QObject *)));
        postcondition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedRule(postcondition);
    }
}

void QUmlBehavior::removePostcondition(QUmlConstraint *postcondition)
{
    // This is a read-write association end

    if (_postcondition.contains(postcondition)) {
        _postcondition.remove(postcondition);
        if (postcondition->asQObject())
            postcondition->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedRule(postcondition);
    }
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
const QSet<QUmlConstraint *> 
QUmlBehavior::precondition() const
{
    // This is a read-write association end

    return _precondition;
}

void QUmlBehavior::addPrecondition(QUmlConstraint *precondition)
{
    // This is a read-write association end

    if (!_precondition.contains(precondition)) {
        _precondition.insert(precondition);
        if (precondition->asQObject() && this->asQObject())
            QObject::connect(precondition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removePrecondition(QObject *)));
        precondition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedRule(precondition);
    }
}

void QUmlBehavior::removePrecondition(QUmlConstraint *precondition)
{
    // This is a read-write association end

    if (_precondition.contains(precondition)) {
        _precondition.remove(precondition);
        if (precondition->asQObject())
            precondition->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedRule(precondition);
    }
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
const QSet<QUmlBehavior *> 
QUmlBehavior::redefinedBehavior() const
{
    // This is a read-write association end

    return _redefinedBehavior;
}

void QUmlBehavior::addRedefinedBehavior(QUmlBehavior *redefinedBehavior)
{
    // This is a read-write association end

    if (!_redefinedBehavior.contains(redefinedBehavior)) {
        _redefinedBehavior.insert(redefinedBehavior);
        if (redefinedBehavior->asQObject() && this->asQObject())
            QObject::connect(redefinedBehavior->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRedefinedBehavior(QObject *)));

        // Adjust subsetted properties
        addRedefinedClassifier(redefinedBehavior);
    }
}

void QUmlBehavior::removeRedefinedBehavior(QUmlBehavior *redefinedBehavior)
{
    // This is a read-write association end

    if (_redefinedBehavior.contains(redefinedBehavior)) {
        _redefinedBehavior.remove(redefinedBehavior);

        // Adjust subsetted properties
        removeRedefinedClassifier(redefinedBehavior);
    }
}

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
QUmlBehavioralFeature *
QUmlBehavior::specification() const
{
    // This is a read-write association end

    return _specification;
}

void QUmlBehavior::setSpecification(QUmlBehavioralFeature *specification)
{
    // This is a read-write association end

    if (_specification != specification) {
        _specification = specification;
        if (specification->asQObject() && this->asQObject())
            QObject::connect(specification->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSpecification()));
    }
}

