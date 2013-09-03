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
#include "qumlprofileapplicationobject_p.h"

#include <QtUml/QUmlProfileApplication>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlProfile>

QT_BEGIN_NAMESPACE

QUmlProfileApplicationObject::QUmlProfileApplicationObject(QUmlProfileApplication *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlProfileApplicationObject::~QUmlProfileApplicationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlProfileApplicationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileApplicationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlProfileApplicationObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlProfileApplicationObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlProfileApplicationObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileApplicationObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ProfileApplication]

QObject *QUmlProfileApplicationObject::appliedProfile() const
{
    return qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->appliedProfile()->asQObject();
}

QObject *QUmlProfileApplicationObject::applyingPackage() const
{
    return qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->applyingPackage()->asQObject();
}

bool QUmlProfileApplicationObject::isStrict() const
{
    return qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->isStrict();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlProfileApplicationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlProfileApplicationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProfileApplicationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProfileApplicationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProfileApplicationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProfileApplicationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProfileApplicationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlProfileApplicationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlProfileApplicationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlProfileApplicationObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlProfileApplicationObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlProfileApplicationObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlProfileApplicationObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [ProfileApplication]

void QUmlProfileApplicationObject::setAppliedProfile(QObject *appliedProfile)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->setAppliedProfile(qmodelingobjectproperty_cast<QUmlProfile *>(appliedProfile));
}

void QUmlProfileApplicationObject::setApplyingPackage(QObject *applyingPackage)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->setApplyingPackage(qmodelingobjectproperty_cast<QUmlPackage *>(applyingPackage));
}

void QUmlProfileApplicationObject::setStrict(bool isStrict)
{
    qmodelingobjectproperty_cast<QUmlProfileApplication *>(this)->setStrict(isStrict);
}
    
QT_END_NAMESPACE

