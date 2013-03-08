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

#include "qumlpseudostate.h"
#include "qumlpseudostate_p.h"

#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlPseudostatePrivate::QUmlPseudostatePrivate() :
    kind(QtUml::PseudostateInitial),
    state(0),
    stateMachine(0)
{
}

QUmlPseudostatePrivate::~QUmlPseudostatePrivate()
{
}

/*!
    \class QUmlPseudostate

    \inmodule QtUml

    \brief A pseudostate is an abstraction that encompasses different types of transient vertices in the state machine graph.
 */

QUmlPseudostate::QUmlPseudostate(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlVertex(*new QUmlPseudostatePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlPseudostate::QUmlPseudostate(QUmlPseudostatePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlVertex(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlPseudostate::~QUmlPseudostate()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlPseudostate
// ---------------------------------------------------------------

/*!
    Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice.
 */
QtUml::PseudostateKind QUmlPseudostate::kind() const
{
    // This is a read-write attribute

    Q_D(const QUmlPseudostate);
    return d->kind;
}

void QUmlPseudostate::setKind(QtUml::PseudostateKind kind)
{
    // This is a read-write attribute

    Q_D(QUmlPseudostate);
    if (d->kind != kind) {
        d->kind = kind;
    }
    d->modifiedResettableProperties << QString::fromLatin1("kind");
}

void QUmlPseudostate::unsetKind()
{
    setKind(QtUml::PseudostateInitial);
    Q_D(QUmlPseudostate);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("kind"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlPseudostate
// ---------------------------------------------------------------

/*!
    The State that owns this pseudostate and in which it appears.
 */
QUmlState *QUmlPseudostate::state() const
{
    // This is a read-write association end

    Q_D(const QUmlPseudostate);
    return d->state;
}

void QUmlPseudostate::setState(QUmlState *state)
{
    // This is a read-write association end

    Q_D(QUmlPseudostate);
    if (d->state != state) {
        // Adjust opposite property
        if (d->state)
            d->state->removeConnectionPoint(this);

        d->state = state;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(state));

        // Adjust opposite property
        if (state)
            state->addConnectionPoint(this);
    }
}

/*!
    The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint.
 */
QUmlStateMachine *QUmlPseudostate::stateMachine() const
{
    // This is a read-write association end

    Q_D(const QUmlPseudostate);
    return d->stateMachine;
}

void QUmlPseudostate::setStateMachine(QUmlStateMachine *stateMachine)
{
    // This is a read-write association end

    Q_D(QUmlPseudostate);
    if (d->stateMachine != stateMachine) {
        // Adjust opposite property
        if (d->stateMachine)
            d->stateMachine->removeConnectionPoint(this);

        d->stateMachine = stateMachine;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(stateMachine));

        // Adjust opposite property
        if (stateMachine)
            stateMachine->addConnectionPoint(this);
    }
}

void QUmlPseudostate::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("kind")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("kind")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("kind")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("kind")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("kind")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("kind")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("state")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("state")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("state")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The State that owns this pseudostate and in which it appears.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("state")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("state")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("state")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QState::connectionPoint");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("stateMachine")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("stateMachine")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("stateMachine")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("stateMachine")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("stateMachine")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPseudostate")][QString::fromLatin1("stateMachine")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QStateMachine::connectionPoint");

    QUmlVertex::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlpseudostate.cpp"

