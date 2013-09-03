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
#include "qumllinkendcreationdataobject_p.h"

#include <QtUml/QUmlLinkEndCreationData>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>

QT_BEGIN_NAMESPACE

QUmlLinkEndCreationDataObject::QUmlLinkEndCreationDataObject(QUmlLinkEndCreationData *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlLinkEndCreationDataObject::~QUmlLinkEndCreationDataObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLinkEndCreationDataObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLinkEndCreationDataObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLinkEndCreationDataObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [LinkEndData]

QObject *QUmlLinkEndCreationDataObject::end() const
{
    return qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->end()->asQObject();
}

const QSet<QObject *> QUmlLinkEndCreationDataObject::qualifier() const
{
    QSet<QObject *> set;
    foreach (QUmlQualifierValue *element, qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->qualifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLinkEndCreationDataObject::value() const
{
    return qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->value()->asQObject();
}

// OWNED ATTRIBUTES [LinkEndCreationData]

QObject *QUmlLinkEndCreationDataObject::insertAt() const
{
    return qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->insertAt()->asQObject();
}

bool QUmlLinkEndCreationDataObject::isReplaceAll() const
{
    return qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->isReplaceAll();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLinkEndCreationDataObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLinkEndCreationDataObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLinkEndCreationDataObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLinkEndCreationDataObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLinkEndCreationDataObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLinkEndCreationDataObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLinkEndCreationDataObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkEndData]

void QUmlLinkEndCreationDataObject::setEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->setEnd(qmodelingobjectproperty_cast<QUmlProperty *>(end));
}

void QUmlLinkEndCreationDataObject::addQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->addQualifier(qmodelingobjectproperty_cast<QUmlQualifierValue *>(qualifier));
}

void QUmlLinkEndCreationDataObject::removeQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->removeQualifier(qmodelingobjectproperty_cast<QUmlQualifierValue *>(qualifier));
}

void QUmlLinkEndCreationDataObject::setValue(QObject *value)
{
    qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->setValue(qmodelingobjectproperty_cast<QUmlInputPin *>(value));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkEndCreationData]

void QUmlLinkEndCreationDataObject::setInsertAt(QObject *insertAt)
{
    qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->setInsertAt(qmodelingobjectproperty_cast<QUmlInputPin *>(insertAt));
}

void QUmlLinkEndCreationDataObject::setReplaceAll(bool isReplaceAll)
{
    qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(this)->setReplaceAll(isReplaceAll);
}
    
QT_END_NAMESPACE

