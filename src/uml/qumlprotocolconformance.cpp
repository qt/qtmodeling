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

#include "qumlprotocolconformance.h"
#include "qumlprotocolconformance_p.h"

#include <QtUml/QUmlProtocolStateMachine>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlProtocolConformancePrivate::QUmlProtocolConformancePrivate() :
    specificMachine(0),
    generalMachine(0)
{
}

QUmlProtocolConformancePrivate::~QUmlProtocolConformancePrivate()
{
}

/*!
    \class QUmlProtocolConformance

    \inmodule QtUml

    \brief Protocol state machines can be redefined into more specific protocol state machines, or into behavioral state machines. Protocol conformance declares that the specific protocol state machine specifies a protocol that conforms to the general state machine one, or that the specific behavioral state machine abide by the protocol of the general protocol state machine.
 */

QUmlProtocolConformance::QUmlProtocolConformance(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDirectedRelationship(*new QUmlProtocolConformancePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlProtocolConformance::QUmlProtocolConformance(QUmlProtocolConformancePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDirectedRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlProtocolConformance::~QUmlProtocolConformance()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlProtocolConformance
// ---------------------------------------------------------------

/*!
    Specifies the state machine which conforms to the general state machine.
 */
QUmlProtocolStateMachine *QUmlProtocolConformance::specificMachine() const
{
    // This is a read-write association end

    Q_D(const QUmlProtocolConformance);
    return d->specificMachine;
}

void QUmlProtocolConformance::setSpecificMachine(QUmlProtocolStateMachine *specificMachine)
{
    // This is a read-write association end

    Q_D(QUmlProtocolConformance);
    if (d->specificMachine != specificMachine) {
        // Adjust opposite property
        if (d->specificMachine)
            d->specificMachine->removeConformance(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QUmlElement *>(d->specificMachine));

        d->specificMachine = specificMachine;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(specificMachine));
        if (specificMachine) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QUmlElement *>(specificMachine));
        }

        // Adjust opposite property
        if (specificMachine)
            specificMachine->addConformance(this);
    }
}

/*!
    Specifies the protocol state machine to which the specific state machine conforms.
 */
QUmlProtocolStateMachine *QUmlProtocolConformance::generalMachine() const
{
    // This is a read-write association end

    Q_D(const QUmlProtocolConformance);
    return d->generalMachine;
}

void QUmlProtocolConformance::setGeneralMachine(QUmlProtocolStateMachine *generalMachine)
{
    // This is a read-write association end

    Q_D(QUmlProtocolConformance);
    if (d->generalMachine != generalMachine) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QUmlElement *>(d->generalMachine));

        d->generalMachine = generalMachine;

        // Adjust subsetted property(ies)
        if (generalMachine) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QUmlElement *>(generalMachine));
        }
    }
}

void QUmlProtocolConformance::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolConformance")][QString::fromLatin1("specificMachine")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolConformance")][QString::fromLatin1("specificMachine")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolConformance")][QString::fromLatin1("specificMachine")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the state machine which conforms to the general state machine.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolConformance")][QString::fromLatin1("specificMachine")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolConformance")][QString::fromLatin1("specificMachine")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner QUmlDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolConformance")][QString::fromLatin1("specificMachine")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlProtocolStateMachine::conformance");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolConformance")][QString::fromLatin1("generalMachine")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolConformance")][QString::fromLatin1("generalMachine")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolConformance")][QString::fromLatin1("generalMachine")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the protocol state machine to which the specific state machine conforms.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolConformance")][QString::fromLatin1("generalMachine")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolConformance")][QString::fromLatin1("generalMachine")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProtocolConformance")][QString::fromLatin1("generalMachine")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlDirectedRelationship::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlprotocolconformance.cpp"

