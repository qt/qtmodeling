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
#include "qumltemplatebindingobject_p.h"

#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameterSubstitution>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

QUmlTemplateBindingObject::QUmlTemplateBindingObject(QUmlTemplateBinding *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlTemplateBindingObject::~QUmlTemplateBindingObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTemplateBindingObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTemplateBindingObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTemplateBindingObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlTemplateBindingObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlTemplateBindingObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTemplateBindingObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateBinding]

QObject *QUmlTemplateBindingObject::boundElement() const
{
    if (!qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->boundElement())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->boundElement()->asQObject();
}

const QSet<QObject *> QUmlTemplateBindingObject::parameterSubstitution() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateParameterSubstitution *element, qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->parameterSubstitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTemplateBindingObject::signature() const
{
    if (!qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->signature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->signature()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTemplateBindingObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTemplateBindingObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTemplateBindingObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateBindingObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateBindingObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateBindingObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateBindingObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlTemplateBindingObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlTemplateBindingObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlTemplateBindingObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlTemplateBindingObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlTemplateBindingObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlTemplateBindingObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateBinding]

void QUmlTemplateBindingObject::setBoundElement(QObject *boundElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->setBoundElement(qmodelingobjectproperty_cast<QUmlTemplateableElement *>(boundElement));
}

void QUmlTemplateBindingObject::addParameterSubstitution(QObject *parameterSubstitution)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->addParameterSubstitution(qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(parameterSubstitution));
}

void QUmlTemplateBindingObject::removeParameterSubstitution(QObject *parameterSubstitution)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->removeParameterSubstitution(qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(parameterSubstitution));
}

void QUmlTemplateBindingObject::setSignature(QObject *signature)
{
    qmodelingobjectproperty_cast<QUmlTemplateBinding *>(this)->setSignature(qmodelingobjectproperty_cast<QUmlTemplateSignature *>(signature));
}

QT_END_NAMESPACE

