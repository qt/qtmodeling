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

#include "qbehavioralfeature.h"
#include "qbehavioralfeature_p.h"

#include <QtUml/QType>
#include <QtUml/QNamedElement>
#include <QtUml/QParameterSet>
#include <QtUml/QBehavior>
#include <QtUml/QParameter>

QT_BEGIN_NAMESPACE_QTUML

QBehavioralFeaturePrivate::QBehavioralFeaturePrivate() :
    concurrency(QtUml::CallConcurrencySequential),
    isAbstract(false),
    raisedExceptions(new QSet<QType *>),
    ownedParameters(new QList<QParameter *>),
    ownedParameterSets(new QSet<QParameterSet *>),
    methods(new QSet<QBehavior *>)
{
}

QBehavioralFeaturePrivate::~QBehavioralFeaturePrivate()
{
    delete raisedExceptions;
    delete ownedParameters;
    delete ownedParameterSets;
    delete methods;
}

/*!
    \class QBehavioralFeature

    \inmodule QtUml

    \brief A behavioral feature is a feature of a classifier that specifies an aspect of the behavior of its instances.A behavioral feature is implemented (realized) by a behavior. A behavioral feature specifies that a classifier will respond to a designated request by invoking its implementing method.A behavioral feature owns zero or more parameter sets.
 */

QBehavioralFeature::QBehavioralFeature()
{
}

QBehavioralFeature::~QBehavioralFeature()
{
}

/*!
    Specifies the semantics of concurrent calls to the same passive instance (i.e., an instance originating from a class with isActive being false). Active instances control access to their own behavioral features.
 */
QtUml::CallConcurrencyKind QBehavioralFeature::concurrency() const
{
    // This is a read-write attribute

    QTUML_D(const QBehavioralFeature);
    return d->concurrency;
}

void QBehavioralFeature::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    // This is a read-write attribute

    QTUML_D(QBehavioralFeature);
    if (d->concurrency != concurrency) {
        d->concurrency = concurrency;
    }
}

/*!
    If true, then the behavioral feature does not have an implementation, and one must be supplied by a more specific element. If false, the behavioral feature must have an implementation in the classifier or one must be inherited from a more general element.
 */
bool QBehavioralFeature::isAbstract() const
{
    // This is a read-write attribute

    QTUML_D(const QBehavioralFeature);
    return d->isAbstract;
}

void QBehavioralFeature::setAbstract(bool isAbstract)
{
    // This is a read-write attribute

    QTUML_D(QBehavioralFeature);
    if (d->isAbstract != isAbstract) {
        d->isAbstract = isAbstract;
    }
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this feature.
 */
const QSet<QType *> *QBehavioralFeature::raisedExceptions() const
{
    // This is a read-write association end

    QTUML_D(const QBehavioralFeature);
    return d->raisedExceptions;
}

void QBehavioralFeature::addRaisedException(QType *raisedException)
{
    // This is a read-write association end

    QTUML_D(QBehavioralFeature);
    if (!d->raisedExceptions->contains(raisedException)) {
        d->raisedExceptions->insert(raisedException);
    }
}

void QBehavioralFeature::removeRaisedException(QType *raisedException)
{
    // This is a read-write association end

    QTUML_D(QBehavioralFeature);
    if (d->raisedExceptions->contains(raisedException)) {
        d->raisedExceptions->remove(raisedException);
    }
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.
 */
const QList<QParameter *> *QBehavioralFeature::ownedParameters() const
{
    // This is a read-write association end

    QTUML_D(const QBehavioralFeature);
    return d->ownedParameters;
}

void QBehavioralFeature::addOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    QTUML_D(QBehavioralFeature);
    if (!d->ownedParameters->contains(ownedParameter)) {
        d->ownedParameters->append(ownedParameter);

        // Adjust subsetted property(ies)
        d->QNamespacePrivate::addOwnedMember(dynamic_cast<QNamedElement *>(ownedParameter));
    }
}

void QBehavioralFeature::removeOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    QTUML_D(QBehavioralFeature);
    if (d->ownedParameters->contains(ownedParameter)) {
        d->ownedParameters->removeAll(ownedParameter);

        // Adjust subsetted property(ies)
        d->QNamespacePrivate::removeOwnedMember(dynamic_cast<QNamedElement *>(ownedParameter));
    }
}

/*!
    The ParameterSets owned by this BehavioralFeature.
 */
const QSet<QParameterSet *> *QBehavioralFeature::ownedParameterSets() const
{
    // This is a read-write association end

    QTUML_D(const QBehavioralFeature);
    return d->ownedParameterSets;
}

void QBehavioralFeature::addOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    QTUML_D(QBehavioralFeature);
    if (!d->ownedParameterSets->contains(ownedParameterSet)) {
        d->ownedParameterSets->insert(ownedParameterSet);

        // Adjust subsetted property(ies)
        d->QNamespacePrivate::addOwnedMember(dynamic_cast<QNamedElement *>(ownedParameterSet));
    }
}

void QBehavioralFeature::removeOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    QTUML_D(QBehavioralFeature);
    if (d->ownedParameterSets->contains(ownedParameterSet)) {
        d->ownedParameterSets->remove(ownedParameterSet);

        // Adjust subsetted property(ies)
        d->QNamespacePrivate::removeOwnedMember(dynamic_cast<QNamedElement *>(ownedParameterSet));
    }
}

/*!
    A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior).
 */
const QSet<QBehavior *> *QBehavioralFeature::methods() const
{
    // This is a read-write association end

    QTUML_D(const QBehavioralFeature);
    return d->methods;
}

void QBehavioralFeature::addMethod(QBehavior *method)
{
    // This is a read-write association end

    QTUML_D(QBehavioralFeature);
    if (!d->methods->contains(method)) {
        d->methods->insert(method);

        // Adjust opposite property
        method->setSpecification(this);
    }
}

void QBehavioralFeature::removeMethod(QBehavior *method)
{
    // This is a read-write association end

    QTUML_D(QBehavioralFeature);
    if (d->methods->contains(method)) {
        d->methods->remove(method);

        // Adjust opposite property
        method->setSpecification(0);
    }
}

/*!
    The query isDistinguishableFrom() determines whether two BehavioralFeatures may coexist in the same Namespace. It specifies that they have to have different signatures.
 */
bool QBehavioralFeature::isDistinguishableFrom(const QNamedElement *n, const QNamespace *ns) const
{
    qWarning("QBehavioralFeature::isDistinguishableFrom: operation to be implemented");
}

QT_END_NAMESPACE_QTUML

