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
//#include "qbehavioralfeature_p.h"

QT_BEGIN_NAMESPACE_QTUML

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
}

void QBehavioralFeature::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
}

/*!
    If true, then the behavioral feature does not have an implementation, and one must be supplied by a more specific element. If false, the behavioral feature must have an implementation in the classifier or one must be inherited from a more general element.
 */
bool QBehavioralFeature::isAbstract() const
{
}

void QBehavioralFeature::setAbstract(bool isAbstract)
{
}

/*!
    A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior).
 */
QList<QBehavior *> *QBehavioralFeature::method()
{
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.
 */
QList<QParameter *> *QBehavioralFeature::ownedParameter()
{
}

/*!
    The ParameterSets owned by this BehavioralFeature.
 */
QList<QParameterSet *> *QBehavioralFeature::ownedParameterSet()
{
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this feature.
 */
QList<QType *> *QBehavioralFeature::raisedException()
{
}

/*!
    The query isDistinguishableFrom() determines whether two BehavioralFeatures may coexist in the same Namespace. It specifies that they have to have different signatures.
 */
bool QBehavioralFeature::isDistinguishableFrom(const QNamedElement *n, const QNamespace *ns) const
{
}

QT_END_NAMESPACE_QTUML

