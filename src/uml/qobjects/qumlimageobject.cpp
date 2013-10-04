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
#include "qumlimageobject_p.h"

#include <QtUml/QUmlImage>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>

QT_BEGIN_NAMESPACE

QUmlImageObject::QUmlImageObject(QUmlImage *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlImageObject::~QUmlImageObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlImage *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlImageObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlImage *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlImageObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlImage *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlImageObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlImage *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlImage *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Image]

QString QUmlImageObject::content() const
{
    return qmodelingobjectproperty_cast<QUmlImage *>(this)->content();
}

QString QUmlImageObject::format() const
{
    return qmodelingobjectproperty_cast<QUmlImage *>(this)->format();
}

QString QUmlImageObject::location() const
{
    return qmodelingobjectproperty_cast<QUmlImage *>(this)->location();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlImageObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlImage *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlImageObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlImage *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlImageObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlImage *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlImageObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlImage *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlImageObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlImage *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlImageObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlImage *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlImageObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlImage *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Image]

void QUmlImageObject::setContent(QString content)
{
    qmodelingobjectproperty_cast<QUmlImage *>(this)->setContent(content);
}

void QUmlImageObject::setFormat(QString format)
{
    qmodelingobjectproperty_cast<QUmlImage *>(this)->setFormat(format);
}

void QUmlImageObject::setLocation(QString location)
{
    qmodelingobjectproperty_cast<QUmlImage *>(this)->setLocation(location);
}

QT_END_NAMESPACE

