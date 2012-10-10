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

#include "qinteractionuse.h"
#include "qinteractionuse_p.h"
#include "qelement_p.h"
#include "qelement_p.h"
#include "qelement_p.h"

#include <QtUml/QProperty>
#include <QtUml/QInteraction>
#include <QtUml/QGate>
#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QInteractionUsePrivate::QInteractionUsePrivate() :
    actualGates(new QSet<QGate *>),
    returnValue(0),
    refersTo(0),
    arguments(new QList<QValueSpecification *>),
    returnValueRecipient(0)
{
}

QInteractionUsePrivate::~QInteractionUsePrivate()
{
    delete actualGates;
    delete arguments;
}
  
void QInteractionUsePrivate::addActualGate(const QGate *actualGate) 
{   
    this->actualGates->insert(const_cast<QGate *>(actualGate)); 

    // Adjust subsetted property(ies)
    addOwnedElement(actualGate); 
}
 
void QInteractionUsePrivate::removeActualGate(const QGate *actualGate) 
{    
    this->actualGates->remove(const_cast<QGate *>(actualGate)); 

    // Adjust subsetted property(ies)
    removeOwnedElement(actualGate);
}
  
void QInteractionUsePrivate::setReturnValue(const QValueSpecification *returnValue) 
{  
    this->returnValue = const_cast<QValueSpecification *>(returnValue);   
}
  
void QInteractionUsePrivate::setRefersTo(const QInteraction *refersTo) 
{  
    this->refersTo = const_cast<QInteraction *>(refersTo);   
}
  
void QInteractionUsePrivate::addArgument(const QValueSpecification *argument) 
{   
    this->arguments->append(const_cast<QValueSpecification *>(argument)); 

    // Adjust subsetted property(ies)
    addOwnedElement(argument); 
}
 
void QInteractionUsePrivate::removeArgument(const QValueSpecification *argument) 
{    
    this->arguments->removeAll(const_cast<QValueSpecification *>(argument)); 

    // Adjust subsetted property(ies)
    removeOwnedElement(argument);
}
  
void QInteractionUsePrivate::setReturnValueRecipient(const QProperty *returnValueRecipient) 
{  
    this->returnValueRecipient = const_cast<QProperty *>(returnValueRecipient);   
}

/*!
    \class QInteractionUse

    \inmodule QtUml

    \brief An interaction use refers to an interaction. The interaction use is a shorthand for copying the contents of the referenced interaction where the interaction use is. To be accurate the copying must take into account substituting parameters with arguments and connect the formal gates with the actual ones.
 */

QInteractionUse::QInteractionUse(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QInteractionUsePrivate;
}

QInteractionUse::QInteractionUse(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QInteractionUsePrivate;
}

QInteractionUse::~QInteractionUse()
{
}

/*!
    The actual gates of the InteractionUse
 */
const QSet<QGate *> *QInteractionUse::actualGates() const
{
    Q_D(const QInteractionUse);
    return d->actualGates;
}

void QInteractionUse::addActualGate(const QGate *actualGate)
{
    Q_D(QInteractionUse);
    d->addActualGate(const_cast<QGate *>(actualGate));
}

void QInteractionUse::removeActualGate(const QGate *actualGate)
{
    Q_D(QInteractionUse);
    d->removeActualGate(const_cast<QGate *>(actualGate));
}

/*!
    The value of the executed Interaction.
 */
QValueSpecification *QInteractionUse::returnValue() const
{
    Q_D(const QInteractionUse);
    return d->returnValue;
}

void QInteractionUse::setReturnValue(const QValueSpecification *returnValue)
{
    Q_D(QInteractionUse);
    d->setReturnValue(const_cast<QValueSpecification *>(returnValue));
}

/*!
    Refers to the Interaction that defines its meaning
 */
QInteraction *QInteractionUse::refersTo() const
{
    Q_D(const QInteractionUse);
    return d->refersTo;
}

void QInteractionUse::setRefersTo(const QInteraction *refersTo)
{
    Q_D(QInteractionUse);
    d->setRefersTo(const_cast<QInteraction *>(refersTo));
}

/*!
    The actual arguments of the Interaction
 */
const QList<QValueSpecification *> *QInteractionUse::arguments() const
{
    Q_D(const QInteractionUse);
    return d->arguments;
}

void QInteractionUse::addArgument(const QValueSpecification *argument)
{
    Q_D(QInteractionUse);
    d->addArgument(const_cast<QValueSpecification *>(argument));
}

void QInteractionUse::removeArgument(const QValueSpecification *argument)
{
    Q_D(QInteractionUse);
    d->removeArgument(const_cast<QValueSpecification *>(argument));
}

/*!
    The recipient of the return value.
 */
QProperty *QInteractionUse::returnValueRecipient() const
{
    Q_D(const QInteractionUse);
    return d->returnValueRecipient;
}

void QInteractionUse::setReturnValueRecipient(const QProperty *returnValueRecipient)
{
    Q_D(QInteractionUse);
    d->setReturnValueRecipient(const_cast<QProperty *>(returnValueRecipient));
}

#include "moc_qinteractionuse.cpp"

QT_END_NAMESPACE_QTUML

