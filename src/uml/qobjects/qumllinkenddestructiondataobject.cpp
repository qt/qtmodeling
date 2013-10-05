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
#include "qumllinkenddestructiondataobject_p.h"

#include <QtUml/QUmlLinkEndDestructionData>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>

QT_BEGIN_NAMESPACE

QUmlLinkEndDestructionDataObject::QUmlLinkEndDestructionDataObject(QUmlLinkEndDestructionData *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlLinkEndDestructionDataObject::~QUmlLinkEndDestructionDataObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLinkEndDestructionDataObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLinkEndDestructionDataObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLinkEndDestructionDataObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [LinkEndData]

QObject *QUmlLinkEndDestructionDataObject::end() const
{
    if (!qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->end())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->end()->asQObject();
}

const QSet<QObject *> QUmlLinkEndDestructionDataObject::qualifier() const
{
    QSet<QObject *> set;
    foreach (QUmlQualifierValue *element, qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->qualifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLinkEndDestructionDataObject::value() const
{
    if (!qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->value())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->value()->asQObject();
}

// OWNED ATTRIBUTES [LinkEndDestructionData]

QObject *QUmlLinkEndDestructionDataObject::destroyAt() const
{
    if (!qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->destroyAt())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->destroyAt()->asQObject();
}

bool QUmlLinkEndDestructionDataObject::isDestroyDuplicates() const
{
    return qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->isDestroyDuplicates();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLinkEndDestructionDataObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLinkEndDestructionDataObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLinkEndDestructionDataObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLinkEndDestructionDataObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLinkEndDestructionDataObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLinkEndDestructionDataObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLinkEndDestructionDataObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkEndData]

void QUmlLinkEndDestructionDataObject::setEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->setEnd(qmodelingobjectproperty_cast<QUmlProperty *>(end));
}

void QUmlLinkEndDestructionDataObject::addQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->addQualifier(qmodelingobjectproperty_cast<QUmlQualifierValue *>(qualifier));
}

void QUmlLinkEndDestructionDataObject::removeQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->removeQualifier(qmodelingobjectproperty_cast<QUmlQualifierValue *>(qualifier));
}

void QUmlLinkEndDestructionDataObject::setValue(QObject *value)
{
    qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->setValue(qmodelingobjectproperty_cast<QUmlInputPin *>(value));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkEndDestructionData]

void QUmlLinkEndDestructionDataObject::setDestroyAt(QObject *destroyAt)
{
    qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->setDestroyAt(qmodelingobjectproperty_cast<QUmlInputPin *>(destroyAt));
}

void QUmlLinkEndDestructionDataObject::setDestroyDuplicates(bool isDestroyDuplicates)
{
    qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->setDestroyDuplicates(isDestroyDuplicates);
}

void QUmlLinkEndDestructionDataObject::unsetDestroyDuplicates()
{
    qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("destroyDuplicates"));
}

QT_END_NAMESPACE

