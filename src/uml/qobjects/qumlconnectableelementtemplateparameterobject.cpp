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
#include "qumlconnectableelementtemplateparameterobject_p.h"

#include <QtUml/QUmlConnectableElementTemplateParameter>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

QUmlConnectableElementTemplateParameterObject::QUmlConnectableElementTemplateParameterObject(QUmlConnectableElementTemplateParameter *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlConnectableElementTemplateParameterObject::~QUmlConnectableElementTemplateParameterObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConnectableElementTemplateParameterObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConnectableElementTemplateParameterObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlConnectableElementTemplateParameterObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [TemplateParameter]

QObject *QUmlConnectableElementTemplateParameterObject::default_() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->default_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->default_()->asQObject();
}

QObject *QUmlConnectableElementTemplateParameterObject::ownedDefault() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->ownedDefault())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->ownedDefault()->asQObject();
}

QObject *QUmlConnectableElementTemplateParameterObject::ownedParameteredElement() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->ownedParameteredElement())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->ownedParameteredElement()->asQObject();
}

QObject *QUmlConnectableElementTemplateParameterObject::signature() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->signature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->signature()->asQObject();
}

// OWNED ATTRIBUTES [ConnectableElementTemplateParameter]

QObject *QUmlConnectableElementTemplateParameterObject::parameteredElement() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->parameteredElement())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->parameteredElement()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConnectableElementTemplateParameterObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConnectableElementTemplateParameterObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConnectableElementTemplateParameterObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectableElementTemplateParameterObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectableElementTemplateParameterObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectableElementTemplateParameterObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectableElementTemplateParameterObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateParameter]

void QUmlConnectableElementTemplateParameterObject::setDefault(QObject *default_)
{
    qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->setDefault(qmodelingobjectproperty_cast<QUmlParameterableElement *>(default_));
}

void QUmlConnectableElementTemplateParameterObject::setOwnedDefault(QObject *ownedDefault)
{
    qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->setOwnedDefault(qmodelingobjectproperty_cast<QUmlParameterableElement *>(ownedDefault));
}

void QUmlConnectableElementTemplateParameterObject::setOwnedParameteredElement(QObject *ownedParameteredElement)
{
    qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->setOwnedParameteredElement(qmodelingobjectproperty_cast<QUmlParameterableElement *>(ownedParameteredElement));
}

void QUmlConnectableElementTemplateParameterObject::setSignature(QObject *signature)
{
    qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->setSignature(qmodelingobjectproperty_cast<QUmlTemplateSignature *>(signature));
}

// SLOTS FOR OWNED ATTRIBUTES [ConnectableElementTemplateParameter]

void QUmlConnectableElementTemplateParameterObject::setParameteredElement(QObject *parameteredElement)
{
    qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->setParameteredElement(qmodelingobjectproperty_cast<QUmlConnectableElement *>(parameteredElement));
}

QT_END_NAMESPACE

