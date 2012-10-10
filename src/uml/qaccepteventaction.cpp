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

#include "qaccepteventaction.h"
#include "qaccepteventaction_p.h"
#include "qelement_p.h"
#include "qaction_p.h"

#include <QtUml/QOutputPin>
#include <QtUml/QTrigger>

QT_BEGIN_NAMESPACE_QTUML

QAcceptEventActionPrivate::QAcceptEventActionPrivate() :
    isUnmarshall(false),
    triggers(new QSet<QTrigger *>),
    results(new QSet<QOutputPin *>)
{
}

QAcceptEventActionPrivate::~QAcceptEventActionPrivate()
{
    delete triggers;
    delete results;
}

void QAcceptEventActionPrivate::setUnmarshall(bool isUnmarshall)
{
    this->isUnmarshall = isUnmarshall;
}
  
void QAcceptEventActionPrivate::addTrigger(const QTrigger *trigger) 
{   
    this->triggers->insert(const_cast<QTrigger *>(trigger)); 

    // Adjust subsetted property(ies)
    addOwnedElement(trigger); 
}
 
void QAcceptEventActionPrivate::removeTrigger(const QTrigger *trigger) 
{    
    this->triggers->remove(const_cast<QTrigger *>(trigger)); 

    // Adjust subsetted property(ies)
    removeOwnedElement(trigger);
}
  
void QAcceptEventActionPrivate::addResult(const QOutputPin *result) 
{   
    this->results->insert(const_cast<QOutputPin *>(result)); 

    // Adjust subsetted property(ies)
    addOutput(result); 
}
 
void QAcceptEventActionPrivate::removeResult(const QOutputPin *result) 
{    
    this->results->remove(const_cast<QOutputPin *>(result)); 

    // Adjust subsetted property(ies)
    removeOutput(result);
}

/*!
    \class QAcceptEventAction

    \inmodule QtUml

    \brief A accept event action is an action that waits for the occurrence of an event meeting specified conditions.
 */

QAcceptEventAction::QAcceptEventAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QAcceptEventActionPrivate;
}

QAcceptEventAction::QAcceptEventAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QAcceptEventActionPrivate;
}

QAcceptEventAction::~QAcceptEventAction()
{
}

/*!
    Indicates whether there is a single output pin for the event, or multiple output pins for attributes of the event.
 */
bool QAcceptEventAction::isUnmarshall() const
{
    Q_D(const QAcceptEventAction);
    return d->isUnmarshall;
}

void QAcceptEventAction::setUnmarshall(bool isUnmarshall)
{
    Q_D(QAcceptEventAction);
    d->setUnmarshall(isUnmarshall);
}

/*!
    The type of events accepted by the action, as specified by triggers. For triggers with signal events, a signal of the specified type or any subtype of the specified signal type is accepted.
 */
const QSet<QTrigger *> *QAcceptEventAction::triggers() const
{
    Q_D(const QAcceptEventAction);
    return d->triggers;
}

void QAcceptEventAction::addTrigger(const QTrigger *trigger)
{
    Q_D(QAcceptEventAction);
    d->addTrigger(const_cast<QTrigger *>(trigger));
}

void QAcceptEventAction::removeTrigger(const QTrigger *trigger)
{
    Q_D(QAcceptEventAction);
    d->removeTrigger(const_cast<QTrigger *>(trigger));
}

/*!
    Pins holding the received event objects or their attributes. Event objects may be copied in transmission, so identity might not be preserved.
 */
const QSet<QOutputPin *> *QAcceptEventAction::results() const
{
    Q_D(const QAcceptEventAction);
    return d->results;
}

void QAcceptEventAction::addResult(const QOutputPin *result)
{
    Q_D(QAcceptEventAction);
    d->addResult(const_cast<QOutputPin *>(result));
}

void QAcceptEventAction::removeResult(const QOutputPin *result)
{
    Q_D(QAcceptEventAction);
    d->removeResult(const_cast<QOutputPin *>(result));
}

#include "moc_qaccepteventaction.cpp"

QT_END_NAMESPACE_QTUML

