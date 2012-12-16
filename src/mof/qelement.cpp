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

QT_BEGIN_NAMESPACE_QTMOF

QElementPrivate::QElementPrivate() :
    ownedElements(new QSet<QElement *>),
    owner(0),
    ownedComments(new QSet<QComment *>)
{
}

QElementPrivate::~QElementPrivate()
{
    delete ownedElements;
    delete ownedComments;
}

void QElementPrivate::addOwnedElement(QElement *ownedElement)
{
    // This is a read-only derived-union association end

    if (!this->ownedElements->contains(ownedElement)) {
        this->ownedElements->insert(ownedElement);
        Q_Q(QElement);
        qTopLevelWrapper(ownedElement)->setParent(qTopLevelWrapper(q));

        // Adjust opposite property
        (qwrappedobject_cast<QElementPrivate *>(ownedElement->d_func()))->setOwner(q);
    }
}

void QElementPrivate::removeOwnedElement(QElement *ownedElement)
{
    // This is a read-only derived-union association end

    if (this->ownedElements->contains(ownedElement)) {
        this->ownedElements->remove(ownedElement);
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

QElement::QElement(QWrappedObject *parent, QWrappedObject *wrapper) :
    QMofObject(*new QElementPrivate, parent, wrapper)
{
}

QElement::QElement(QElementPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QMofObject(dd, parent, wrapper)
{
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
const QSet<QElement *> *QElement::ownedElements() const
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
const QSet<QComment *> *QElement::ownedComments() const
{
    // This is a read-write association end

    Q_D(const QElement);
    return d->ownedComments;
}

void QElement::addOwnedComment(QComment *ownedComment)
{
    // This is a read-write association end

    Q_D(QElement);
    if (!d->ownedComments->contains(ownedComment)) {
        d->ownedComments->insert(ownedComment);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(ownedComment));
    }
}

void QElement::removeOwnedComment(QComment *ownedComment)
{
    // This is a read-write association end

    Q_D(QElement);
    if (d->ownedComments->contains(ownedComment)) {
        d->ownedComments->remove(ownedComment);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(ownedComment));
    }
}

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
const QSet<QElement *> *QElement::allOwnedElements() const
{
    qWarning("QElement::allOwnedElements: operation to be implemented");

    return 0; // change here to your derived return
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QElement::mustBeOwned() const
{
    qWarning("QElement::mustBeOwned: operation to be implemented");

    return bool(); // change here to your derived return
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

void QElement::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QElement) *>("QT_PREPEND_NAMESPACE_QTMOF(QElement) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QElement) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QElement) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QElement) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QElement) *> *");
    qRegisterMetaType<QElement *>("QElement *");
    qRegisterMetaType<const QSet<QElement *> *>("const QSet<QElement *> *");
    qRegisterMetaType<const QList<QElement *> *>("const QList<QElement *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QComment) *>("QT_PREPEND_NAMESPACE_QTMOF(QComment) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QComment) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QComment) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QComment) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QComment) *> *");
    qRegisterMetaType<QComment *>("QComment *");
    qRegisterMetaType<const QSet<QComment *> *>("const QSet<QComment *> *");
    qRegisterMetaType<const QList<QComment *> *>("const QList<QComment *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QClass) *>("QT_PREPEND_NAMESPACE_QTMOF(QClass) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QClass) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QClass) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QClass) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QClass) *> *");
    qRegisterMetaType<QClass *>("QClass *");
    qRegisterMetaType<const QSet<QClass *> *>("const QSet<QClass *> *");
    qRegisterMetaType<const QList<QClass *> *>("const QList<QClass *> *");


    QMofObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qelement.cpp"

QT_END_NAMESPACE_QTMOF

