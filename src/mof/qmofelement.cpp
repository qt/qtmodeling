/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qmofelement.h"
#include "qmofelement_p.h"

#include <QtMof/QMofComment>
#include <QtMof/QMofClass>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofElementPrivate::QMofElementPrivate() :
    owner(0)
{
}

QMofElementPrivate::~QMofElementPrivate()
{
}

void QMofElementPrivate::addOwnedElement(QMofElement *ownedElement)
{
    // This is a read-only derived-union association end

    if (!this->ownedElements.contains(ownedElement)) {
        this->ownedElements.insert(ownedElement);
        Q_Q(QMofElement);
        qTopLevelWrapper(ownedElement)->setParent(qTopLevelWrapper(q));

        // Adjust opposite property
        (qwrappedobject_cast<QMofElementPrivate *>(ownedElement->d_func()))->setOwner(q);
    }
}

void QMofElementPrivate::removeOwnedElement(QMofElement *ownedElement)
{
    // This is a read-only derived-union association end

    if (this->ownedElements.contains(ownedElement)) {
        this->ownedElements.remove(ownedElement);
        qTopLevelWrapper(ownedElement)->setParent(0);

        // Adjust opposite property
        (qwrappedobject_cast<QMofElementPrivate *>(ownedElement->d_func()))->setOwner(0);
    }
}

void QMofElementPrivate::setOwner(QMofElement *owner)
{
    // This is a read-only derived-union association end

    if (this->owner != owner) {
        Q_Q(QMofElement);
        // Adjust opposite property
        if (this->owner)
            (qwrappedobject_cast<QMofElementPrivate *>(this->owner->d_func()))->removeOwnedElement(q);

        this->owner = owner;

        // Adjust opposite property
        if (owner)
            (qwrappedobject_cast<QMofElementPrivate *>(owner->d_func()))->addOwnedElement(q);
    }
}

/*!
    \class QMofElement

    \inmodule QtMof

    \brief An element is a constituent of a model. As such, it has the capability of owning other elements.
 */

QMofElement::QMofElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofObject(*new QMofElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofElement::QMofElement(QMofElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofObject(dd, wrapper, parent)
{
    setPropertyData();
}

QMofElement::~QMofElement()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QMofElement *> QMofElement::ownedElements() const
{
    // This is a read-only derived-union association end

    Q_D(const QMofElement);
    return d->ownedElements;
}

/*!
    The Element that owns this element.
 */
QMofElement *QMofElement::owner() const
{
    // This is a read-only derived-union association end

    Q_D(const QMofElement);
    return d->owner;
}

/*!
    The Comments owned by this element.
 */
QSet<QMofComment *> QMofElement::ownedComments() const
{
    // This is a read-write association end

    Q_D(const QMofElement);
    return d->ownedComments;
}

void QMofElement::addOwnedComment(QMofComment *ownedComment)
{
    // This is a read-write association end

    Q_D(QMofElement);
    if (!d->ownedComments.contains(ownedComment)) {
        d->ownedComments.insert(ownedComment);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(ownedComment));
    }
}

void QMofElement::removeOwnedComment(QMofComment *ownedComment)
{
    // This is a read-write association end

    Q_D(QMofElement);
    if (d->ownedComments.contains(ownedComment)) {
        d->ownedComments.remove(ownedComment);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(ownedComment));
    }
}

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QMofElement *> QMofElement::allOwnedElements() const
{
    QSet<QMofElement *> allOwnedElements_;
    allOwnedElements(allOwnedElements_);
    return allOwnedElements_;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QMofElement::mustBeOwned() const
{
    return true;
}

QMofClass *QMofElement::getMetaClass() const
{
    qWarning("QMofElement::getMetaClass: operation to be implemented");

    return 0; // change here to your derived return
}

QMofElement *QMofElement::container() const
{
    qWarning("QMofElement::container: operation to be implemented");

    return 0; // change here to your derived return
}

bool QMofElement::isInstanceOfType(const QMofClass *type, bool includesSubtypes) const
{
    qWarning("QMofElement::isInstanceOfType: operation to be implemented");
    Q_UNUSED(type);
    Q_UNUSED(includesSubtypes);

    return bool(); // change here to your derived return
}

void QMofElement::delete_()
{
    qWarning("QMofElement::delete_: operation to be implemented");
}

void QMofElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Elements owned by this element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QElement::owner");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("owner")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("owner")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("owner")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Element that owns this element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("owner")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("owner")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("owner")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QElement::ownedElement");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Comments owned by this element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QMofObject::setPropertyData();
}

void QMofElement::allOwnedElements(QSet<QMofElement *> &allOwnedElements_) const
{
    Q_D(const QMofElement);
    allOwnedElements_.unite(d->ownedElements);
    foreach (QMofElement *element, d->ownedElements)
        element->allOwnedElements(allOwnedElements_);
}

QT_END_NAMESPACE

#include "moc_qmofelement.cpp"

