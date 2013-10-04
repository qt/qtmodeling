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
#include "qumlgeneralizationobject_p.h"

#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralizationSet>

QT_BEGIN_NAMESPACE

QUmlGeneralizationObject::QUmlGeneralizationObject(QUmlGeneralization *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlGeneralizationObject::~QUmlGeneralizationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlGeneralizationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlGeneralizationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlGeneralizationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlGeneralizationObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlGeneralizationObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlGeneralizationObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Generalization]

QObject *QUmlGeneralizationObject::general() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->general())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->general()->asQObject();
}

const QSet<QObject *> QUmlGeneralizationObject::generalizationSet() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->generalizationSet())
        set.insert(element->asQObject());
    return set;
}

bool QUmlGeneralizationObject::isSubstitutable() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->isSubstitutable();
}

QObject *QUmlGeneralizationObject::specific() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->specific())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->specific()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlGeneralizationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlGeneralizationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlGeneralizationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGeneralizationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGeneralizationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGeneralizationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGeneralizationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlGeneralizationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlGeneralizationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlGeneralizationObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlGeneralizationObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlGeneralizationObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlGeneralizationObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Generalization]

void QUmlGeneralizationObject::setGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->setGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlGeneralizationObject::addGeneralizationSet(QObject *generalizationSet)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->addGeneralizationSet(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(generalizationSet));
}

void QUmlGeneralizationObject::removeGeneralizationSet(QObject *generalizationSet)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->removeGeneralizationSet(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(generalizationSet));
}

void QUmlGeneralizationObject::setSubstitutable(bool isSubstitutable)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->setSubstitutable(isSubstitutable);
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->modifiedResettableProperties() << QStringLiteral("substitutable");
}

void QUmlGeneralizationObject::unsetSubstitutable()
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("substitutable"));
}

void QUmlGeneralizationObject::setSpecific(QObject *specific)
{
    qmodelingobjectproperty_cast<QUmlGeneralization *>(this)->setSpecific(qmodelingobjectproperty_cast<QUmlClassifier *>(specific));
}

QT_END_NAMESPACE

