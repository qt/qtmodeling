/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
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

#include <QtUml/QComment>

QT_BEGIN_NAMESPACE_QTUML

QElementPrivate::QElementPrivate() :
    ownedElements(new QSet<QElement *>),
    owner(0),
    ownedComments(new QSet<QComment *>)
{
}

QElementPrivate::~QElementPrivate()
{
    foreach (QElement *element, *ownedElements) {
        QObject *object = element;
        while (object->parent())
            object = object->parent();
        delete object;
    }
    delete ownedElements;
    delete ownedComments;
}

void QElementPrivate::addOwnedElement(QElement *ownedElement)
{
    // This is a read-only derived-union association end

    if (!this->ownedElements->contains(ownedElement)) {
        this->ownedElements->insert(ownedElement);

        // Adjust opposite property
        Q_Q(QElement);
        (qtuml_object_cast<QElementPrivate *>(ownedElement->d_func()))->setOwner(q);
    }
}

void QElementPrivate::removeOwnedElement(QElement *ownedElement)
{
    // This is a read-only derived-union association end

    if (this->ownedElements->contains(ownedElement)) {
        this->ownedElements->remove(ownedElement);

        // Adjust opposite property
        (qtuml_object_cast<QElementPrivate *>(ownedElement->d_func()))->setOwner(0);
    }
}

void QElementPrivate::setOwner(QElement *owner)
{
    // This is a read-only derived-union association end

    if (this->owner != owner) {
        Q_Q(QElement);
        // Adjust opposite property
        if (this->owner)
            (qtuml_object_cast<QElementPrivate *>(this->owner->d_func()))->removeOwnedElement(q);

        this->owner = owner;

        // Adjust opposite property
        if (owner)
            (qtuml_object_cast<QElementPrivate *>(owner->d_func()))->addOwnedElement(q);
    }
}

/*!
    \class QElement

    \inmodule QtUml

    \brief An element is a constituent of a model. As such, it has the capability of owning other elements.
 */

QElement::QElement(QObject *parent) :
    QObject(*new QElementPrivate, parent)
{
    qRegisterMetaType<QElement *>("QElement *");
    qRegisterMetaType<const QSet<QElement *> *>("const QSet<QElement *> *");
    qRegisterMetaType<const QList<QElement *> *>("const QList<QElement *> *");
}

QElement::QElement(QElementPrivate &dd, QObject *parent) :
    QObject(dd, parent)
{
    qRegisterMetaType<QElement *>("QElement *");
    qRegisterMetaType<const QSet<QElement *> *>("const QSet<QElement *> *");
    qRegisterMetaType<const QList<QElement *> *>("const QList<QElement *> *");
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
        (qtuml_object_cast<QElementPrivate *>(d))->addOwnedElement(qtuml_object_cast<QElement *>(ownedComment));
    }
}

void QElement::removeOwnedComment(QComment *ownedComment)
{
    // This is a read-write association end

    Q_D(QElement);
    if (d->ownedComments->contains(ownedComment)) {
        d->ownedComments->remove(ownedComment);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->removeOwnedElement(qtuml_object_cast<QElement *>(ownedComment));
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

#include "moc_qelement.cpp"

QT_END_NAMESPACE_QTUML

