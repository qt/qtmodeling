/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlprotocolconformanceobject_p.h"

#include <QtUml/QUmlProtocolConformance>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlProtocolStateMachine>

QT_BEGIN_NAMESPACE

QUmlProtocolConformanceObject::QUmlProtocolConformanceObject(QUmlProtocolConformance *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlProtocolConformanceObject::~QUmlProtocolConformanceObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlProtocolConformanceObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolConformanceObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlProtocolConformanceObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlProtocolConformanceObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlProtocolConformanceObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolConformanceObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ProtocolConformance]

QObject *QUmlProtocolConformanceObject::generalMachine() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->generalMachine())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->generalMachine()->asQObject();
}

QObject *QUmlProtocolConformanceObject::specificMachine() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->specificMachine())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->specificMachine()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlProtocolConformanceObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlProtocolConformanceObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProtocolConformanceObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProtocolConformanceObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProtocolConformanceObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProtocolConformanceObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProtocolConformanceObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlProtocolConformanceObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlProtocolConformanceObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlProtocolConformanceObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlProtocolConformanceObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlProtocolConformanceObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlProtocolConformanceObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [ProtocolConformance]

void QUmlProtocolConformanceObject::setGeneralMachine(QObject *generalMachine)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->setGeneralMachine(qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(generalMachine));
}

void QUmlProtocolConformanceObject::setSpecificMachine(QObject *specificMachine)
{
    qmodelingobjectproperty_cast<QUmlProtocolConformance *>(this)->setSpecificMachine(qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(specificMachine));
}

QT_END_NAMESPACE

