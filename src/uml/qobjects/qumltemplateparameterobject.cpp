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
#include "qumltemplateparameterobject_p.h"

#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

QUmlTemplateParameterObject::QUmlTemplateParameterObject(QUmlTemplateParameter *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlTemplateParameterObject::~QUmlTemplateParameterObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTemplateParameterObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTemplateParameterObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTemplateParameterObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [TemplateParameter]

QObject *QUmlTemplateParameterObject::default_() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->default_()->asQObject();
}

QObject *QUmlTemplateParameterObject::ownedDefault() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->ownedDefault()->asQObject();
}

QObject *QUmlTemplateParameterObject::ownedParameteredElement() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->ownedParameteredElement()->asQObject();
}

QObject *QUmlTemplateParameterObject::parameteredElement() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->parameteredElement()->asQObject();
}

QObject *QUmlTemplateParameterObject::signature() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->signature()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTemplateParameterObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTemplateParameterObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTemplateParameterObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateParameterObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateParameterObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateParameterObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateParameterObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateParameter]

void QUmlTemplateParameterObject::setDefault(QObject *default_)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->setDefault(qmodelingobjectproperty_cast<QUmlParameterableElement *>(default_));
}

void QUmlTemplateParameterObject::setOwnedDefault(QObject *ownedDefault)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->setOwnedDefault(qmodelingobjectproperty_cast<QUmlParameterableElement *>(ownedDefault));
}

void QUmlTemplateParameterObject::setOwnedParameteredElement(QObject *ownedParameteredElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->setOwnedParameteredElement(qmodelingobjectproperty_cast<QUmlParameterableElement *>(ownedParameteredElement));
}

void QUmlTemplateParameterObject::setParameteredElement(QObject *parameteredElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->setParameteredElement(qmodelingobjectproperty_cast<QUmlParameterableElement *>(parameteredElement));
}

void QUmlTemplateParameterObject::setSignature(QObject *signature)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameter *>(this)->setSignature(qmodelingobjectproperty_cast<QUmlTemplateSignature *>(signature));
}

QT_END_NAMESPACE

