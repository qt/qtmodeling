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

#include "qumlbehavior.h"
#include "qumlbehavior_p.h"

#include <QtUml/QUmlBehavioralFeature>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlBehavioredClassifier>
#include <QtUml/QUmlParameterSet>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlBehaviorPrivate::QUmlBehaviorPrivate() :
    isReentrant(true),
    specification(0)
{
}

QUmlBehaviorPrivate::~QUmlBehaviorPrivate()
{
}

/*!
    \class QUmlBehavior

    \inmodule QtUml

    \brief Behavior is a specification of how its context classifier changes state over time. This specification may be either a definition of possible behavior execution or emergent behavior, or a selective illustration of an interesting subset of possible executions. The latter form is typically used for capturing examples, such as a trace of a particular execution.A behavior owns zero or more parameter sets.
 */

QUmlBehavior::QUmlBehavior(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClass(*new QUmlBehaviorPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlBehavior::QUmlBehavior(QUmlBehaviorPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClass(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlBehavior::~QUmlBehavior()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlBehavior
// ---------------------------------------------------------------

/*!
    Tells whether the behavior can be invoked while it is still executing from a previous invocation.
 */
bool QUmlBehavior::isReentrant() const
{
    // This is a read-write attribute

    Q_D(const QUmlBehavior);
    return d->isReentrant;
}

void QUmlBehavior::setReentrant(bool isReentrant)
{
    // This is a read-write attribute

    Q_D(QUmlBehavior);
    if (d->isReentrant != isReentrant) {
        d->isReentrant = isReentrant;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isReentrant");
}

void QUmlBehavior::unsetReentrant()
{
    setReentrant(true);
    Q_D(QUmlBehavior);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isReentrant"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlBehavior
// ---------------------------------------------------------------

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
QUmlBehavioralFeature *QUmlBehavior::specification() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavior);
    return d->specification;
}

void QUmlBehavior::setSpecification(QUmlBehavioralFeature *specification)
{
    // This is a read-write association end

    Q_D(QUmlBehavior);
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
QSet<QUmlConstraint *> QUmlBehavior::postconditions() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavior);
    return d->postconditions;
}

void QUmlBehavior::addPostcondition(QUmlConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QUmlBehavior);
    if (!d->postconditions.contains(postcondition)) {
        d->postconditions.insert(postcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QUmlConstraint *>(postcondition));
    }
}

void QUmlBehavior::removePostcondition(QUmlConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QUmlBehavior);
    if (d->postconditions.contains(postcondition)) {
        d->postconditions.remove(postcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QUmlConstraint *>(postcondition));
    }
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
QSet<QUmlConstraint *> QUmlBehavior::preconditions() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavior);
    return d->preconditions;
}

void QUmlBehavior::addPrecondition(QUmlConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QUmlBehavior);
    if (!d->preconditions.contains(precondition)) {
        d->preconditions.insert(precondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QUmlConstraint *>(precondition));
    }
}

void QUmlBehavior::removePrecondition(QUmlConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QUmlBehavior);
    if (d->preconditions.contains(precondition)) {
        d->preconditions.remove(precondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QUmlConstraint *>(precondition));
    }
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
QSet<QUmlBehavior *> QUmlBehavior::redefinedBehaviors() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavior);
    return d->redefinedBehaviors;
}

void QUmlBehavior::addRedefinedBehavior(QUmlBehavior *redefinedBehavior)
{
    // This is a read-write association end

    Q_D(QUmlBehavior);
    if (!d->redefinedBehaviors.contains(redefinedBehavior)) {
        d->redefinedBehaviors.insert(redefinedBehavior);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifier *>(this))->addRedefinedClassifier(qwrappedobject_cast<QUmlClassifier *>(redefinedBehavior));
    }
}

void QUmlBehavior::removeRedefinedBehavior(QUmlBehavior *redefinedBehavior)
{
    // This is a read-write association end

    Q_D(QUmlBehavior);
    if (d->redefinedBehaviors.contains(redefinedBehavior)) {
        d->redefinedBehaviors.remove(redefinedBehavior);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifier *>(this))->removeRedefinedClassifier(qwrappedobject_cast<QUmlClassifier *>(redefinedBehavior));
    }
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
QList<QUmlParameter *> QUmlBehavior::ownedParameters() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavior);
    return d->ownedParameters;
}

void QUmlBehavior::addOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QUmlBehavior);
    if (!d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.append(ownedParameter);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedParameter));
    }
}

void QUmlBehavior::removeOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QUmlBehavior);
    if (d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.removeAll(ownedParameter);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedParameter));
    }
}

/*!
    The ParameterSets owned by this Behavior.
 */
QSet<QUmlParameterSet *> QUmlBehavior::ownedParameterSets() const
{
    // This is a read-write association end

    Q_D(const QUmlBehavior);
    return d->ownedParameterSets;
}

void QUmlBehavior::addOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    Q_D(QUmlBehavior);
    if (!d->ownedParameterSets.contains(ownedParameterSet)) {
        d->ownedParameterSets.insert(ownedParameterSet);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedParameterSet));
    }
}

void QUmlBehavior::removeOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    Q_D(QUmlBehavior);
    if (d->ownedParameterSets.contains(ownedParameterSet)) {
        d->ownedParameterSets.remove(ownedParameterSet);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedParameterSet));
    }
}

/*!
    The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.
 */
QUmlBehavioredClassifier *QUmlBehavior::context() const
{
    // This is a read-only derived association end

    qWarning("QUmlBehavior::context: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

void QUmlBehavior::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("isReentrant")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("isReentrant")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("isReentrant")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the behavior can be invoked while it is still executing from a previous invocation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("isReentrant")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("isReentrant")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("isReentrant")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("specification")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("specification")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("specification")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("specification")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("specification")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("specification")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlBehavioralFeature::method");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("postconditions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("postconditions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("postconditions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("postconditions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("postconditions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("postconditions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("preconditions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("preconditions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("preconditions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("preconditions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("preconditions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("preconditions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("redefinedBehaviors")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("redefinedBehaviors")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("redefinedBehaviors")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("redefinedBehaviors")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("redefinedBehaviors")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlClassifier::redefinedClassifiers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("redefinedBehaviors")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ParameterSets owned by this Behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("context")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("context")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("context")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("context")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("context")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehavior")][QString::fromLatin1("context")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlClass::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlBehavior::addRedefinedClassifier(QWrappedObjectPointer<QUmlBehavior> redefinedBehavior)
{
    addRedefinedBehavior(redefinedBehavior);
}

void QUmlBehavior::removeRedefinedClassifier(QWrappedObjectPointer<QUmlBehavior> redefinedBehavior)
{
    removeRedefinedBehavior(redefinedBehavior);
}

QT_END_NAMESPACE

#include "moc_qumlbehavior.cpp"

