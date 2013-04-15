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
#include "qumlelement.h"
#include "qumlelement_p.h"

#include <QtUml/QUmlComment>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlElementPrivate::QUmlElementPrivate() :
    owner(0)
{
}

QUmlElementPrivate::~QUmlElementPrivate()
{
}

void QUmlElementPrivate::addOwnedElement(QUmlElement *ownedElement)
{
    // This is a read-only derived-union association end

    if (!this->ownedElements.contains(ownedElement)) {
        this->ownedElements.insert(ownedElement);
        Q_Q(QUmlElement);
        qTopLevelWrapper(ownedElement)->setParent(qTopLevelWrapper(q));

        // Adjust opposite property
        (qwrappedobject_cast<QUmlElementPrivate *>(ownedElement->d_func()))->setOwner(q);
    }
}

void QUmlElementPrivate::removeOwnedElement(QUmlElement *ownedElement)
{
    // This is a read-only derived-union association end

    if (this->ownedElements.contains(ownedElement)) {
        this->ownedElements.remove(ownedElement);
        qTopLevelWrapper(ownedElement)->setParent(0);

        // Adjust opposite property
        (qwrappedobject_cast<QUmlElementPrivate *>(ownedElement->d_func()))->setOwner(0);
    }
}

void QUmlElementPrivate::setOwner(QUmlElement *owner)
{
    // This is a read-only derived-union association end

    if (this->owner != owner) {
        Q_Q(QUmlElement);
        // Adjust opposite property
        if (this->owner)
            (qwrappedobject_cast<QUmlElementPrivate *>(this->owner->d_func()))->removeOwnedElement(q);

        this->owner = owner;

        // Adjust opposite property
        if (owner)
            (qwrappedobject_cast<QUmlElementPrivate *>(owner->d_func()))->addOwnedElement(q);
    }
}

/*!
    \class QUmlElement

    \inmodule QtUml

    \brief An element is a constituent of a model. As such, it has the capability of owning other elements.
 */

QUmlElement::QUmlElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlElement::QUmlElement(QUmlElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlElement::~QUmlElement()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlElement::ownedElements() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlElement);
    return d->ownedElements;
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlElement::owner() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlElement);
    return d->owner;
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlElement::ownedComments() const
{
    // This is a read-write association end

    Q_D(const QUmlElement);
    return d->ownedComments;
}

void QUmlElement::addOwnedComment(QUmlComment *ownedComment)
{
    // This is a read-write association end

    Q_D(QUmlElement);
    if (!d->ownedComments.contains(ownedComment)) {
        d->ownedComments.insert(ownedComment);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(ownedComment));
    }
}

void QUmlElement::removeOwnedComment(QUmlComment *ownedComment)
{
    // This is a read-write association end

    Q_D(QUmlElement);
    if (d->ownedComments.contains(ownedComment)) {
        d->ownedComments.remove(ownedComment);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(ownedComment));
    }
}

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlElement::allOwnedElements() const
{
    QSet<QUmlElement *> allOwnedElements_;
    allOwnedElements(allOwnedElements_);
    return allOwnedElements_;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlElement::mustBeOwned() const
{
    return true;
}

void QUmlElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Elements owned by this element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlElement::owner");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("owner")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("owner")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("owner")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Element that owns this element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("owner")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("owner")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("owner")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlElement::ownedElement");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Comments owned by this element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

void QUmlElement::allOwnedElements(QSet<QUmlElement *> &allOwnedElements_) const
{
    Q_D(const QUmlElement);
    allOwnedElements_.unite(d->ownedElements);
    foreach (QUmlElement *element, d->ownedElements)
        element->allOwnedElements(allOwnedElements_);
}

QT_END_NAMESPACE

#include "moc_qumlelement.cpp"

