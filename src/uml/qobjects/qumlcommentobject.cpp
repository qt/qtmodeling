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
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>

QT_BEGIN_NAMESPACE

QUmlCommentObject::QUmlCommentObject(QUmlComment *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlCommentObject::~QUmlCommentObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlComment *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCommentObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlComment *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommentObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlComment *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCommentObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlComment *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlComment *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Comment]

const QSet<QObject *> QUmlCommentObject::annotatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlComment *>(this)->annotatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlCommentObject::body() const
{
    return qmodelingelementproperty_cast<QUmlComment *>(this)->body();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCommentObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlComment *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCommentObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlComment *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCommentObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlComment *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCommentObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlComment *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCommentObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlComment *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCommentObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlComment *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCommentObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlComment *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Comment]

void QUmlCommentObject::addAnnotatedElement(QObject *annotatedElement)
{
    qmodelingelementproperty_cast<QUmlComment *>(this)->addAnnotatedElement(qmodelingelementproperty_cast<QUmlElement *>(annotatedElement));
}

void QUmlCommentObject::removeAnnotatedElement(QObject *annotatedElement)
{
    qmodelingelementproperty_cast<QUmlComment *>(this)->removeAnnotatedElement(qmodelingelementproperty_cast<QUmlElement *>(annotatedElement));
}

void QUmlCommentObject::setBody(QString body)
{
    qmodelingelementproperty_cast<QUmlComment *>(this)->setBody(body);
}


void QUmlCommentObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlComment");
    d->groupProperties.insert(QStringLiteral("QUmlComment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("annotatedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlComment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("body"))));
}

void QUmlCommentObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, annotatedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, annotatedElements, PropertyClassRole, QStringLiteral("QUmlComment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, annotatedElements, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, annotatedElements, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, annotatedElements, DocumentationRole, QStringLiteral("References the Element(s) being commented."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, annotatedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, annotatedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, annotatedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, body, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, body, PropertyClassRole, QStringLiteral("QUmlComment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, body, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, body, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, body, DocumentationRole, QStringLiteral("Specifies a string that is the comment."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, body, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, body, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComment, body, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

