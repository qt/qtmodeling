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
#include "qumlexceptionhandlerobject_p.h"

#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlObjectNode>

QT_BEGIN_NAMESPACE

QUmlExceptionHandlerObject::QUmlExceptionHandlerObject(QUmlExceptionHandler *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlExceptionHandlerObject::~QUmlExceptionHandlerObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExceptionHandlerObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExceptionHandlerObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExceptionHandlerObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ExceptionHandler]

QObject *QUmlExceptionHandlerObject::exceptionInput() const
{
    return qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->exceptionInput()->asQObject();
}

const QSet<QObject *> QUmlExceptionHandlerObject::exceptionType() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->exceptionType())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExceptionHandlerObject::handlerBody() const
{
    return qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->handlerBody()->asQObject();
}

QObject *QUmlExceptionHandlerObject::protectedNode() const
{
    return qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->protectedNode()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExceptionHandlerObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExceptionHandlerObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExceptionHandlerObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExceptionHandlerObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExceptionHandlerObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExceptionHandlerObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExceptionHandlerObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ExceptionHandler]

void QUmlExceptionHandlerObject::setExceptionInput(QObject *exceptionInput)
{
    qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->setExceptionInput(qmodelingobjectproperty_cast<QUmlObjectNode *>(exceptionInput));
}

void QUmlExceptionHandlerObject::addExceptionType(QObject *exceptionType)
{
    qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->addExceptionType(qmodelingobjectproperty_cast<QUmlClassifier *>(exceptionType));
}

void QUmlExceptionHandlerObject::removeExceptionType(QObject *exceptionType)
{
    qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->removeExceptionType(qmodelingobjectproperty_cast<QUmlClassifier *>(exceptionType));
}

void QUmlExceptionHandlerObject::setHandlerBody(QObject *handlerBody)
{
    qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->setHandlerBody(qmodelingobjectproperty_cast<QUmlExecutableNode *>(handlerBody));
}

void QUmlExceptionHandlerObject::setProtectedNode(QObject *protectedNode)
{
    qmodelingobjectproperty_cast<QUmlExceptionHandler *>(this)->setProtectedNode(qmodelingobjectproperty_cast<QUmlExecutableNode *>(protectedNode));
}

QT_END_NAMESPACE

