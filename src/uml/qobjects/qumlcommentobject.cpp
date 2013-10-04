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
#include "qumlcommentobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>

QT_BEGIN_NAMESPACE

QUmlCommentObject::QUmlCommentObject(QUmlComment *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlCommentObject::~QUmlCommentObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlComment *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCommentObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlComment *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommentObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlComment *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCommentObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlComment *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComment *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Comment]

const QSet<QObject *> QUmlCommentObject::annotatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlComment *>(this)->annotatedElement())
        set.insert(element->asQObject());
    return set;
}

QString QUmlCommentObject::body() const
{
    return qmodelingobjectproperty_cast<QUmlComment *>(this)->body();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCommentObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlComment *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCommentObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlComment *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCommentObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlComment *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCommentObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlComment *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCommentObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlComment *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCommentObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlComment *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCommentObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlComment *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Comment]

void QUmlCommentObject::addAnnotatedElement(QObject *annotatedElement)
{
    qmodelingobjectproperty_cast<QUmlComment *>(this)->addAnnotatedElement(qmodelingobjectproperty_cast<QUmlElement *>(annotatedElement));
}

void QUmlCommentObject::removeAnnotatedElement(QObject *annotatedElement)
{
    qmodelingobjectproperty_cast<QUmlComment *>(this)->removeAnnotatedElement(qmodelingobjectproperty_cast<QUmlElement *>(annotatedElement));
}

void QUmlCommentObject::setBody(QString body)
{
    qmodelingobjectproperty_cast<QUmlComment *>(this)->setBody(body);
}

QT_END_NAMESPACE

