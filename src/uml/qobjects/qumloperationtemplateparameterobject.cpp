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
#include "qumloperationtemplateparameterobject_p.h"

#include <QtUml/QUmlOperationTemplateParameter>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

QUmlOperationTemplateParameterObject::QUmlOperationTemplateParameterObject(QUmlOperationTemplateParameter *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlOperationTemplateParameterObject::~QUmlOperationTemplateParameterObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlOperationTemplateParameterObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOperationTemplateParameterObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlOperationTemplateParameterObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [TemplateParameter]

QObject *QUmlOperationTemplateParameterObject::default_() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->default_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->default_()->asQObject();
}

QObject *QUmlOperationTemplateParameterObject::ownedDefault() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->ownedDefault())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->ownedDefault()->asQObject();
}

QObject *QUmlOperationTemplateParameterObject::ownedParameteredElement() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->ownedParameteredElement())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->ownedParameteredElement()->asQObject();
}

QObject *QUmlOperationTemplateParameterObject::signature() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->signature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->signature()->asQObject();
}

// OWNED ATTRIBUTES [OperationTemplateParameter]

QObject *QUmlOperationTemplateParameterObject::parameteredElement() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->parameteredElement())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->parameteredElement()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlOperationTemplateParameterObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOperationTemplateParameterObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOperationTemplateParameterObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOperationTemplateParameterObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOperationTemplateParameterObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOperationTemplateParameterObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOperationTemplateParameterObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateParameter]

void QUmlOperationTemplateParameterObject::setDefault(QObject *default_)
{
    qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->setDefault(qmodelingobjectproperty_cast<QUmlParameterableElement *>(default_));
}

void QUmlOperationTemplateParameterObject::setOwnedDefault(QObject *ownedDefault)
{
    qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->setOwnedDefault(qmodelingobjectproperty_cast<QUmlParameterableElement *>(ownedDefault));
}

void QUmlOperationTemplateParameterObject::setOwnedParameteredElement(QObject *ownedParameteredElement)
{
    qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->setOwnedParameteredElement(qmodelingobjectproperty_cast<QUmlParameterableElement *>(ownedParameteredElement));
}

void QUmlOperationTemplateParameterObject::setSignature(QObject *signature)
{
    qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->setSignature(qmodelingobjectproperty_cast<QUmlTemplateSignature *>(signature));
}

// SLOTS FOR OWNED ATTRIBUTES [OperationTemplateParameter]

void QUmlOperationTemplateParameterObject::setParameteredElement(QObject *parameteredElement)
{
    qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(this)->setParameteredElement(qmodelingobjectproperty_cast<QUmlOperation *>(parameteredElement));
}

QT_END_NAMESPACE

