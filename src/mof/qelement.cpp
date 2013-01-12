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

#include "qelement.h"
#include "qelement_p.h"

#include <QtMof/QComment>
#include <QtMof/QClass>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTMOF

QElementPrivate::QElementPrivate() :
    owner(0)
{
}

QElementPrivate::~QElementPrivate()
{
}

void QElementPrivate::addOwnedElement(QElement *ownedElement)
{
    // This is a read-only derived-union association end

    if (!this->ownedElements.contains(ownedElement)) {
        this->ownedElements.insert(ownedElement);
        Q_Q(QElement);
        qTopLevelWrapper(ownedElement)->setParent(qTopLevelWrapper(q));

        // Adjust opposite property
        (qwrappedobject_cast<QElementPrivate *>(ownedElement->d_func()))->setOwner(q);
    }
}

void QElementPrivate::removeOwnedElement(QElement *ownedElement)
{
    // This is a read-only derived-union association end

    if (this->ownedElements.contains(ownedElement)) {
        this->ownedElements.remove(ownedElement);
        qTopLevelWrapper(ownedElement)->setParent(0);

        // Adjust opposite property
        (qwrappedobject_cast<QElementPrivate *>(ownedElement->d_func()))->setOwner(0);
    }
}

void QElementPrivate::setOwner(QElement *owner)
{
    // This is a read-only derived-union association end

    if (this->owner != owner) {
        Q_Q(QElement);
        // Adjust opposite property
        if (this->owner)
            (qwrappedobject_cast<QElementPrivate *>(this->owner->d_func()))->removeOwnedElement(q);

        this->owner = owner;

        // Adjust opposite property
        if (owner)
            (qwrappedobject_cast<QElementPrivate *>(owner->d_func()))->addOwnedElement(q);
    }
}

/*!
    \class QElement

    \inmodule QtMof

    \brief An element is a constituent of a model. As such, it has the capability of owning other elements.
 */

QElement::QElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofObject(*new QElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QElement::QElement(QElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofObject(dd, wrapper, parent)
{
    setPropertyData();
}

QElement::~QElement()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QElement::ownedElements() const
{
    // This is a read-only derived-union association end

    Q_D(const QElement);
    return d->ownedElements;
}

/*!
    The Element that owns this element.
 */
QElement *QElement::owner() const
{
    // This is a read-only derived-union association end

    Q_D(const QElement);
    return d->owner;
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QElement::ownedComments() const
{
    // This is a read-write association end

    Q_D(const QElement);
    return d->ownedComments;
}

void QElement::addOwnedComment(QComment *ownedComment)
{
    // This is a read-write association end

    Q_D(QElement);
    if (!d->ownedComments.contains(ownedComment)) {
        d->ownedComments.insert(ownedComment);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(ownedComment));
    }
}

void QElement::removeOwnedComment(QComment *ownedComment)
{
    // This is a read-write association end

    Q_D(QElement);
    if (d->ownedComments.contains(ownedComment)) {
        d->ownedComments.remove(ownedComment);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(ownedComment));
    }
}

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QElement *> QElement::allOwnedElements() const
{
    QSet<QElement *> allOwnedElements_;
    allOwnedElements(allOwnedElements_);
    return allOwnedElements_;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QElement::mustBeOwned() const
{
    return true;
}

QClass *QElement::getMetaClass() const
{
    qWarning("QElement::getMetaClass: operation to be implemented");

    return 0; // change here to your derived return
}

QElement *QElement::container() const
{
    qWarning("QElement::container: operation to be implemented");

    return 0; // change here to your derived return
}

bool QElement::isInstanceOfType(const QClass *type, bool includesSubtypes) const
{
    qWarning("QElement::isInstanceOfType: operation to be implemented");
    Q_UNUSED(type);
    Q_UNUSED(includesSubtypes);

    return bool(); // change here to your derived return
}

void QElement::delete_()
{
    qWarning("QElement::delete_: operation to be implemented");
}

void QElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Elements owned by this element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("ownedElements")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QElement::owner");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("owner")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("owner")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("owner")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Element that owns this element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("owner")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("owner")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("owner")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QElement::ownedElement");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Comments owned by this element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QElement")][QString::fromLatin1("ownedComments")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QMofObject::setPropertyData();
}

void QElement::allOwnedElements(QSet<QElement *> &allOwnedElements_) const
{
    Q_D(const QElement);
    allOwnedElements_.unite(d->ownedElements);
    foreach (QElement *element, d->ownedElements)
        element->allOwnedElements(allOwnedElements_);
}

#include "moc_qelement.cpp"

QT_END_NAMESPACE_QTMOF

