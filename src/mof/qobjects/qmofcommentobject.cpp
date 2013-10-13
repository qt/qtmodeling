/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofcommentobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofComment>
#include <QtMof/QMofClass>
#include <QtMof/QMofElement>

QT_BEGIN_NAMESPACE

QMofCommentObject::QMofCommentObject(QMofComment *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofCommentObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofComment *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofCommentObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofComment *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofCommentObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofComment *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofComment *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Comment]

const QSet<QObject *> QMofCommentObject::annotatedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofComment *>(this)->annotatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QString QMofCommentObject::body() const
{
    return qmodelingelementproperty_cast<QMofComment *>(this)->body();
}

// OPERATIONS [Element]

QSet<QObject *> QMofCommentObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofComment *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofCommentObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofComment *>(this)->mustBeOwned();
}

QObject *QMofCommentObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofComment *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofComment *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofCommentObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofComment *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofComment *>(this)->container()->asQModelingObject();
}

bool QMofCommentObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofComment *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofCommentObject::delete_()
{
    return qmodelingelementproperty_cast<QMofComment *>(this)->delete_();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofCommentObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofComment *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofCommentObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofComment *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofCommentObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofComment *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofCommentObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofComment *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofCommentObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofComment *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Comment]

void QMofCommentObject::addAnnotatedElement(QObject *annotatedElement)
{
    qmodelingelementproperty_cast<QMofComment *>(this)->addAnnotatedElement(qmodelingelementproperty_cast<QMofElement *>(annotatedElement));
}

void QMofCommentObject::removeAnnotatedElement(QObject *annotatedElement)
{
    qmodelingelementproperty_cast<QMofComment *>(this)->removeAnnotatedElement(qmodelingelementproperty_cast<QMofElement *>(annotatedElement));
}

void QMofCommentObject::setBody(QString body)
{
    qmodelingelementproperty_cast<QMofComment *>(this)->setBody(body);
}


void QMofCommentObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMofElement");
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QMofComment");
    d->groupProperties.insert(QStringLiteral("QMofComment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("annotatedElements"))));
    d->groupProperties.insert(QStringLiteral("QMofComment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("body"))));
}

void QMofCommentObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QMofComment, annotatedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, annotatedElements, PropertyClassRole, QStringLiteral("QMofComment"));
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, annotatedElements, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, annotatedElements, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, annotatedElements, DocumentationRole, QStringLiteral("References the Element(s) being commented."));
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, annotatedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, annotatedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, annotatedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofComment, body, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, body, PropertyClassRole, QStringLiteral("QMofComment"));
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, body, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, body, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, body, DocumentationRole, QStringLiteral("Specifies a string that is the comment."));
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, body, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, body, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofComment, body, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

