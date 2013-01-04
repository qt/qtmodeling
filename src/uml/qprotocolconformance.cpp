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

#include "qprotocolconformance.h"
#include "qprotocolconformance_p.h"

#include <QtUml/QProtocolStateMachine>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QProtocolConformancePrivate::QProtocolConformancePrivate() :
    specificMachine(0),
    generalMachine(0)
{
}

QProtocolConformancePrivate::~QProtocolConformancePrivate()
{
}

/*!
    \class QProtocolConformance

    \inmodule QtUml

    \brief Protocol state machines can be redefined into more specific protocol state machines, or into behavioral state machines. Protocol conformance declares that the specific protocol state machine specifies a protocol that conforms to the general state machine one, or that the specific behavioral state machine abide by the protocol of the general protocol state machine.
 */

QProtocolConformance::QProtocolConformance(QWrappedObject *wrapper, QWrappedObject *parent) :
    QDirectedRelationship(*new QProtocolConformancePrivate, wrapper, parent)
{
    setPropertyData();
}

QProtocolConformance::QProtocolConformance(QProtocolConformancePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QDirectedRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QProtocolConformance::~QProtocolConformance()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QProtocolConformance
// ---------------------------------------------------------------

/*!
    Specifies the state machine which conforms to the general state machine.
 */
QProtocolStateMachine *QProtocolConformance::specificMachine() const
{
    // This is a read-write association end

    Q_D(const QProtocolConformance);
    return d->specificMachine;
}

void QProtocolConformance::setSpecificMachine(QProtocolStateMachine *specificMachine)
{
    // This is a read-write association end

    Q_D(QProtocolConformance);
    if (d->specificMachine != specificMachine) {
        // Adjust opposite property
        if (d->specificMachine)
            d->specificMachine->removeConformance(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QElement *>(d->specificMachine));

        d->specificMachine = specificMachine;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(specificMachine));
        if (specificMachine) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QElement *>(specificMachine));
        }

        // Adjust opposite property
        if (specificMachine)
            specificMachine->addConformance(this);
    }
}

/*!
    Specifies the protocol state machine to which the specific state machine conforms.
 */
QProtocolStateMachine *QProtocolConformance::generalMachine() const
{
    // This is a read-write association end

    Q_D(const QProtocolConformance);
    return d->generalMachine;
}

void QProtocolConformance::setGeneralMachine(QProtocolStateMachine *generalMachine)
{
    // This is a read-write association end

    Q_D(QProtocolConformance);
    if (d->generalMachine != generalMachine) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QElement *>(d->generalMachine));

        d->generalMachine = generalMachine;

        // Adjust subsetted property(ies)
        if (generalMachine) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QElement *>(generalMachine));
        }
    }
}

void QProtocolConformance::registerMetaTypes() const
{
    qRegisterMetaType<QProtocolStateMachine *>("QProtocolStateMachine *");
    qRegisterMetaType<QSet<QProtocolStateMachine *>>("QSet<QProtocolStateMachine *>");
    qRegisterMetaType<QList<QProtocolStateMachine *>>("QList<QProtocolStateMachine *>");

    QDirectedRelationship::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QProtocolConformance::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProtocolConformance")][QString::fromLatin1("specificMachine")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProtocolConformance")][QString::fromLatin1("specificMachine")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProtocolConformance")][QString::fromLatin1("specificMachine")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the state machine which conforms to the general state machine.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProtocolConformance")][QString::fromLatin1("specificMachine")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProtocolConformance")][QString::fromLatin1("specificMachine")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::owner QDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProtocolConformance")][QString::fromLatin1("specificMachine")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QProtocolStateMachine::conformance");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProtocolConformance")][QString::fromLatin1("generalMachine")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProtocolConformance")][QString::fromLatin1("generalMachine")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProtocolConformance")][QString::fromLatin1("generalMachine")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the protocol state machine to which the specific state machine conforms.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProtocolConformance")][QString::fromLatin1("generalMachine")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProtocolConformance")][QString::fromLatin1("generalMachine")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProtocolConformance")][QString::fromLatin1("generalMachine")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QDirectedRelationship::setPropertyData();
}

#include "moc_qprotocolconformance.cpp"

QT_END_NAMESPACE_QTUML

