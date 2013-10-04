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
#include "qumltemplatesignatureobject_p.h"

#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlTemplateSignatureObject::QUmlTemplateSignatureObject(QUmlTemplateSignature *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlTemplateSignatureObject::~QUmlTemplateSignatureObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTemplateSignatureObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTemplateSignatureObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTemplateSignatureObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [TemplateSignature]

const QList<QObject *> QUmlTemplateSignatureObject::ownedParameter() const
{
    QList<QObject *> list;
    foreach (QUmlTemplateParameter *element, qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->ownedParameter())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlTemplateSignatureObject::parameter() const
{
    QList<QObject *> list;
    foreach (QUmlTemplateParameter *element, qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->parameter())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlTemplateSignatureObject::template_() const
{
    if (!qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->template_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->template_()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTemplateSignatureObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTemplateSignatureObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTemplateSignatureObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateSignatureObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateSignatureObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateSignatureObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateSignatureObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateSignature]

void QUmlTemplateSignatureObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->addOwnedParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(ownedParameter));
}

void QUmlTemplateSignatureObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->removeOwnedParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(ownedParameter));
}

void QUmlTemplateSignatureObject::addParameter(QObject *parameter)
{
    qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->addParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(parameter));
}

void QUmlTemplateSignatureObject::removeParameter(QObject *parameter)
{
    qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->removeParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(parameter));
}

void QUmlTemplateSignatureObject::setTemplate(QObject *template_)
{
    qmodelingobjectproperty_cast<QUmlTemplateSignature *>(this)->setTemplate(qmodelingobjectproperty_cast<QUmlTemplateableElement *>(template_));
}

QT_END_NAMESPACE

