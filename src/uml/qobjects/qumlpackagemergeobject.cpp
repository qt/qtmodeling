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
#include "qumlpackagemergeobject_p.h"

#include <QtUml/QUmlPackageMerge>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlPackage>

QT_BEGIN_NAMESPACE

QUmlPackageMergeObject::QUmlPackageMergeObject(QUmlPackageMerge *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlPackageMergeObject::~QUmlPackageMergeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPackageMergeObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageMergeObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPackageMergeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlPackageMergeObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlPackageMergeObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageMergeObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [PackageMerge]

QObject *QUmlPackageMergeObject::mergedPackage() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->mergedPackage())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->mergedPackage()->asQObject();
}

QObject *QUmlPackageMergeObject::receivingPackage() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->receivingPackage())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->receivingPackage()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPackageMergeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPackageMergeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPackageMergeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPackageMergeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPackageMergeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPackageMergeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPackageMergeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlPackageMergeObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlPackageMergeObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlPackageMergeObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlPackageMergeObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlPackageMergeObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlPackageMergeObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageMerge]

void QUmlPackageMergeObject::setMergedPackage(QObject *mergedPackage)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->setMergedPackage(qmodelingobjectproperty_cast<QUmlPackage *>(mergedPackage));
}

void QUmlPackageMergeObject::setReceivingPackage(QObject *receivingPackage)
{
    qmodelingobjectproperty_cast<QUmlPackageMerge *>(this)->setReceivingPackage(qmodelingobjectproperty_cast<QUmlPackage *>(receivingPackage));
}

QT_END_NAMESPACE

