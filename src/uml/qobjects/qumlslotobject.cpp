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
#include "qumlslotobject_p.h"

#include <QtUml/QUmlSlot>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInstanceSpecification>
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlSlotObject::QUmlSlotObject(QUmlSlot *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlSlotObject::~QUmlSlotObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlSlot *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlSlotObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlSlot *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSlotObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSlot *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSlotObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlSlot *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSlot *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Slot]

QObject *QUmlSlotObject::definingFeature() const
{
    if (!qmodelingobjectproperty_cast<QUmlSlot *>(this)->definingFeature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSlot *>(this)->definingFeature()->asQObject();
}

QObject *QUmlSlotObject::owningInstance() const
{
    if (!qmodelingobjectproperty_cast<QUmlSlot *>(this)->owningInstance())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSlot *>(this)->owningInstance()->asQObject();
}

const QList<QObject *> QUmlSlotObject::value() const
{
    QList<QObject *> list;
    foreach (QUmlValueSpecification *element, qmodelingobjectproperty_cast<QUmlSlot *>(this)->value())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlSlotObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSlot *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSlotObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlSlot *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlSlotObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSlot *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSlotObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSlot *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSlotObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSlot *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSlotObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSlot *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSlotObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlSlot *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Slot]

void QUmlSlotObject::setDefiningFeature(QObject *definingFeature)
{
    qmodelingobjectproperty_cast<QUmlSlot *>(this)->setDefiningFeature(qmodelingobjectproperty_cast<QUmlStructuralFeature *>(definingFeature));
}

void QUmlSlotObject::setOwningInstance(QObject *owningInstance)
{
    qmodelingobjectproperty_cast<QUmlSlot *>(this)->setOwningInstance(qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(owningInstance));
}

void QUmlSlotObject::addValue(QObject *value)
{
    qmodelingobjectproperty_cast<QUmlSlot *>(this)->addValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(value));
}

void QUmlSlotObject::removeValue(QObject *value)
{
    qmodelingobjectproperty_cast<QUmlSlot *>(this)->removeValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(value));
}

QT_END_NAMESPACE

