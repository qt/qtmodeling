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
#include "qumllinkenddataobject_p.h"

#include <QtUml/QUmlLinkEndData>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>

QT_BEGIN_NAMESPACE

QUmlLinkEndDataObject::QUmlLinkEndDataObject(QUmlLinkEndData *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlLinkEndDataObject::~QUmlLinkEndDataObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLinkEndDataObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLinkEndDataObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLinkEndDataObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [LinkEndData]

QObject *QUmlLinkEndDataObject::end() const
{
    if (!qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->end())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->end()->asQObject();
}

const QSet<QObject *> QUmlLinkEndDataObject::qualifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlQualifierValue *element, qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->qualifiers())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLinkEndDataObject::value() const
{
    if (!qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->value())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->value()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLinkEndDataObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLinkEndDataObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLinkEndDataObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLinkEndDataObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLinkEndDataObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLinkEndDataObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLinkEndDataObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkEndData]

void QUmlLinkEndDataObject::setEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->setEnd(qmodelingobjectproperty_cast<QUmlProperty *>(end));
}

void QUmlLinkEndDataObject::addQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->addQualifier(qmodelingobjectproperty_cast<QUmlQualifierValue *>(qualifier));
}

void QUmlLinkEndDataObject::removeQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->removeQualifier(qmodelingobjectproperty_cast<QUmlQualifierValue *>(qualifier));
}

void QUmlLinkEndDataObject::setValue(QObject *value)
{
    qmodelingobjectproperty_cast<QUmlLinkEndData *>(this)->setValue(qmodelingobjectproperty_cast<QUmlInputPin *>(value));
}

QT_END_NAMESPACE

