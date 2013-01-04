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

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QBehaviorPrivate::QBehaviorPrivate() :
    isReentrant(true),
    specification(0)
{
}

QBehaviorPrivate::~QBehaviorPrivate()
{
}

/*!
    \class QBehavior

    \inmodule QtUml

    \brief Behavior is a specification of how its context classifier changes state over time. This specification may be either a definition of possible behavior execution or emergent behavior, or a selective illustration of an interesting subset of possible executions. The latter form is typically used for capturing examples, such as a trace of a particular execution.A behavior owns zero or more parameter sets.
 */

QBehavior::QBehavior(QWrappedObject *wrapper, QWrappedObject *parent) :
    QClass(*new QBehaviorPrivate, wrapper, parent)
{
    setPropertyData();
}

QBehavior::QBehavior(QBehaviorPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QClass(dd, wrapper, parent)
{
    setPropertyData();
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

void QBehavior::unsetReentrant()
{
    setReentrant(true);
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
QSet<QConstraint *> QBehavior::postconditions() const
{
    // This is a read-write association end

    Q_D(const QBehavior);
    return d->postconditions;
}

void QBehavior::addPostcondition(QConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (!d->postconditions.contains(postcondition)) {
        d->postconditions.insert(postcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QConstraint *>(postcondition));
    }
}

void QBehavior::removePostcondition(QConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (d->postconditions.contains(postcondition)) {
        d->postconditions.remove(postcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QConstraint *>(postcondition));
    }
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
QSet<QConstraint *> QBehavior::preconditions() const
{
    // This is a read-write association end

    Q_D(const QBehavior);
    return d->preconditions;
}

void QBehavior::addPrecondition(QConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (!d->preconditions.contains(precondition)) {
        d->preconditions.insert(precondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QConstraint *>(precondition));
    }
}

void QBehavior::removePrecondition(QConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (d->preconditions.contains(precondition)) {
        d->preconditions.remove(precondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QConstraint *>(precondition));
    }
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
QSet<QBehavior *> QBehavior::redefinedBehaviors() const
{
    // This is a read-write association end

    Q_D(const QBehavior);
    return d->redefinedBehaviors;
}

void QBehavior::addRedefinedBehavior(QBehavior *redefinedBehavior)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (!d->redefinedBehaviors.contains(redefinedBehavior)) {
        d->redefinedBehaviors.insert(redefinedBehavior);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifier *>(this))->addRedefinedClassifier(qwrappedobject_cast<QClassifier *>(redefinedBehavior));
    }
}

void QBehavior::removeRedefinedBehavior(QBehavior *redefinedBehavior)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (d->redefinedBehaviors.contains(redefinedBehavior)) {
        d->redefinedBehaviors.remove(redefinedBehavior);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QClassifier *>(this))->removeRedefinedClassifier(qwrappedobject_cast<QClassifier *>(redefinedBehavior));
    }
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
QList<QParameter *> QBehavior::ownedParameters() const
{
    // This is a read-write association end

    Q_D(const QBehavior);
    return d->ownedParameters;
}

void QBehavior::addOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (!d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.append(ownedParameter);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedParameter));
    }
}

void QBehavior::removeOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.removeAll(ownedParameter);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedParameter));
    }
}

/*!
    The ParameterSets owned by this Behavior.
 */
QSet<QParameterSet *> QBehavior::ownedParameterSets() const
{
    // This is a read-write association end

    Q_D(const QBehavior);
    return d->ownedParameterSets;
}

void QBehavior::addOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (!d->ownedParameterSets.contains(ownedParameterSet)) {
        d->ownedParameterSets.insert(ownedParameterSet);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedParameterSet));
    }
}

void QBehavior::removeOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    Q_D(QBehavior);
    if (d->ownedParameterSets.contains(ownedParameterSet)) {
        d->ownedParameterSets.remove(ownedParameterSet);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedParameterSet));
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

void QBehavior::registerMetaTypes() const
{
    qRegisterMetaType<QBehavioralFeature *>("QBehavioralFeature *");
    qRegisterMetaType<QSet<QBehavioralFeature *>>("QSet<QBehavioralFeature *>");
    qRegisterMetaType<QList<QBehavioralFeature *>>("QList<QBehavioralFeature *>");

    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QConstraint *>");
    qRegisterMetaType<QList<QConstraint *>>("QList<QConstraint *>");

    qRegisterMetaType<QParameter *>("QParameter *");
    qRegisterMetaType<QSet<QParameter *>>("QSet<QParameter *>");
    qRegisterMetaType<QList<QParameter *>>("QList<QParameter *>");

    qRegisterMetaType<QBehavioredClassifier *>("QBehavioredClassifier *");
    qRegisterMetaType<QSet<QBehavioredClassifier *>>("QSet<QBehavioredClassifier *>");
    qRegisterMetaType<QList<QBehavioredClassifier *>>("QList<QBehavioredClassifier *>");

    qRegisterMetaType<QParameterSet *>("QParameterSet *");
    qRegisterMetaType<QSet<QParameterSet *>>("QSet<QParameterSet *>");
    qRegisterMetaType<QList<QParameterSet *>>("QList<QParameterSet *>");

    QClass::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QBehavior::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("isReentrant")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("isReentrant")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("isReentrant")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the behavior can be invoked while it is still executing from a previous invocation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("isReentrant")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("isReentrant")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("isReentrant")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("specification")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("specification")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("specification")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("specification")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("specification")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("specification")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QBehavioralFeature::method");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("postconditions")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("postconditions")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("postconditions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("postconditions")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("postconditions")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("postconditions")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("preconditions")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("preconditions")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("preconditions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("preconditions")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("preconditions")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("preconditions")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("redefinedBehaviors")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("redefinedBehaviors")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("redefinedBehaviors")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("redefinedBehaviors")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("redefinedBehaviors")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QClassifier::redefinedClassifiers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("redefinedBehaviors")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ParameterSets owned by this Behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("ownedParameterSets")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("context")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("context")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("context")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("context")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("context")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBehavior")][QString::fromLatin1("context")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QClass::setPropertyData();
}

// Overriden methods for subsetted properties

void QBehavior::addRedefinedClassifier(QWrappedObjectPointer<QBehavior> redefinedBehavior)
{
    addRedefinedBehavior(redefinedBehavior);
}

void QBehavior::removeRedefinedClassifier(QWrappedObjectPointer<QBehavior> redefinedBehavior)
{
    removeRedefinedBehavior(redefinedBehavior);
}

#include "moc_qbehavior.cpp"

QT_END_NAMESPACE_QTUML

