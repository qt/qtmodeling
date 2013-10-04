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
#include "qumlqualifiervalueobject_p.h"

#include <QtUml/QUmlQualifierValue>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>

QT_BEGIN_NAMESPACE

QUmlQualifierValueObject::QUmlQualifierValueObject(QUmlQualifierValue *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlQualifierValueObject::~QUmlQualifierValueObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlQualifierValueObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlQualifierValueObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlQualifierValueObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [QualifierValue]

QObject *QUmlQualifierValueObject::qualifier() const
{
    if (!qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->qualifier())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->qualifier()->asQObject();
}

QObject *QUmlQualifierValueObject::value() const
{
    if (!qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->value())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->value()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlQualifierValueObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlQualifierValueObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlQualifierValueObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlQualifierValueObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlQualifierValueObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlQualifierValueObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlQualifierValueObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [QualifierValue]

void QUmlQualifierValueObject::setQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->setQualifier(qmodelingobjectproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlQualifierValueObject::setValue(QObject *value)
{
    qmodelingobjectproperty_cast<QUmlQualifierValue *>(this)->setValue(qmodelingobjectproperty_cast<QUmlInputPin *>(value));
}

QT_END_NAMESPACE

