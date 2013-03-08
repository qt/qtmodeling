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

#include "qumlprotocolstatemachine.h"
#include "qumlprotocolstatemachine_p.h"

#include <QtUml/QUmlProtocolConformance>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlProtocolStateMachinePrivate::QUmlProtocolStateMachinePrivate()
{
}

QUmlProtocolStateMachinePrivate::~QUmlProtocolStateMachinePrivate()
{
}

/*!
    \class QUmlProtocolStateMachine

    \inmodule QtUml

    \brief A protocol state machine is always defined in the context of a classifier. It specifies which operations of the classifier can be called in which state and under which condition, thus specifying the allowed call sequences on the classifier's operations. A protocol state machine presents the possible and permitted transitions on the instances of its context classifier, together with the operations which carry the transitions. In this manner, an instance lifecycle can be created for a classifier, by specifying the order in which the operations can be activated and the states through which an instance progresses during its existence.
 */

QUmlProtocolStateMachine::QUmlProtocolStateMachine(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStateMachine(*new QUmlProtocolStateMachinePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlProtocolStateMachine::QUmlProtocolStateMachine(QUmlProtocolStateMachinePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStateMachine(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlProtocolStateMachine::~QUmlProtocolStateMachine()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlProtocolStateMachine
// ---------------------------------------------------------------

/*!
    Conformance between protocol state machines.
 */
QSet<QUmlProtocolConformance *> QUmlProtocolStateMachine::conformance() const
{
    // This is a read-write association end

    Q_D(const QUmlProtocolStateMachine);
    return d->conformance;
}

void QUmlProtocolStateMachine::addConformance(QUmlProtocolConformance *conformance)
{
    // This is a read-write association end

    Q_D(QUmlProtocolStateMachine);
    if (!d->conformance.contains(conformance)) {
        d->conformance.insert(conformance);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(conformance));

        // Adjust opposite property
        conformance->setSpecificMachine(this);
    }
}

void QUmlProtocolStateMachine::removeConformance(QUmlProtocolConformance *conformance)
{
    // This is a read-write association end

    Q_D(QUmlProtocolStateMachine);
    if (d->conformance.contains(conformance)) {
        d->conformance.remove(conformance);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(conformance));

        // Adjust opposite property
        conformance->setSpecificMachine(0);
    }
}

void QUmlProtocolStateMachine::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolStateMachine")][QString::fromLatin1("conformance")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolStateMachine")][QString::fromLatin1("conformance")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolStateMachine")][QString::fromLatin1("conformance")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Conformance between protocol state machines.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolStateMachine")][QString::fromLatin1("conformance")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolStateMachine")][QString::fromLatin1("conformance")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolStateMachine")][QString::fromLatin1("conformance")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QProtocolConformance::specificMachine");

    QUmlStateMachine::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlprotocolstatemachine.cpp"

