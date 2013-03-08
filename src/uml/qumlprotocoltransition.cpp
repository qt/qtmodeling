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

#include "qumlprotocoltransition.h"
#include "qumlprotocoltransition_p.h"

#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlOperation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlProtocolTransitionPrivate::QUmlProtocolTransitionPrivate() :
    postCondition(0),
    preCondition(0)
{
}

QUmlProtocolTransitionPrivate::~QUmlProtocolTransitionPrivate()
{
}

/*!
    \class QUmlProtocolTransition

    \inmodule QtUml

    \brief A protocol transition specifies a legal transition for an operation. Transitions of protocol state machines have the following information: a pre condition (guard), on trigger, and a post condition. Every protocol transition is associated to zero or one operation (referred BehavioralFeature) that belongs to the context classifier of the protocol state machine.
 */

QUmlProtocolTransition::QUmlProtocolTransition(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlTransition(*new QUmlProtocolTransitionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlProtocolTransition::QUmlProtocolTransition(QUmlProtocolTransitionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlTransition(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlProtocolTransition::~QUmlProtocolTransition()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlProtocolTransition
// ---------------------------------------------------------------

/*!
    Specifies the post condition of the transition which is the condition that should be obtained once the transition is triggered. This post condition is part of the post condition of the operation connected to the transition.
 */
QUmlConstraint *QUmlProtocolTransition::postCondition() const
{
    // This is a read-write association end

    Q_D(const QUmlProtocolTransition);
    return d->postCondition;
}

void QUmlProtocolTransition::setPostCondition(QUmlConstraint *postCondition)
{
    // This is a read-write association end

    Q_D(QUmlProtocolTransition);
    if (d->postCondition != postCondition) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QUmlConstraint *>(d->postCondition));

        d->postCondition = postCondition;

        // Adjust subsetted property(ies)
        if (postCondition) {
            (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QUmlConstraint *>(postCondition));
        }
    }
}

/*!
    This association refers to the associated operation. It is derived from the operation of the call trigger when applicable.
 */
QSet<QUmlOperation *> QUmlProtocolTransition::referred() const
{
    // This is a read-only derived association end

    qWarning("QUmlProtocolTransition::referred: to be implemented (this is a derived associationend)");

    return QSet<QUmlOperation *>(); // change here to your derived return
}

/*!
    Specifies the precondition of the transition. It specifies the condition that should be verified before triggering the transition. This guard condition added to the source state will be evaluated as part of the precondition of the operation referred by the transition if any.
 */
QUmlConstraint *QUmlProtocolTransition::preCondition() const
{
    // This is a read-write association end

    Q_D(const QUmlProtocolTransition);
    return d->preCondition;
}

void QUmlProtocolTransition::setPreCondition(QUmlConstraint *preCondition)
{
    // This is a read-write association end

    Q_D(QUmlProtocolTransition);
    if (d->preCondition != preCondition) {
        d->preCondition = preCondition;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlTransition *>(this))->setGuard(qwrappedobject_cast<QUmlConstraint *>(preCondition));
    }
}

void QUmlProtocolTransition::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("postCondition")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("postCondition")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("postCondition")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the post condition of the transition which is the condition that should be obtained once the transition is triggered. This post condition is part of the post condition of the operation connected to the transition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("postCondition")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("postCondition")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("postCondition")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("referred")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("referred")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("referred")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This association refers to the associated operation. It is derived from the operation of the call trigger when applicable.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("referred")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("referred")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("referred")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("preCondition")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("preCondition")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("preCondition")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the precondition of the transition. It specifies the condition that should be verified before triggering the transition. This guard condition added to the source state will be evaluated as part of the precondition of the operation referred by the transition if any.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("preCondition")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("preCondition")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlTransition::guard");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolTransition")][QString::fromLatin1("preCondition")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlTransition::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlprotocoltransition.cpp"

