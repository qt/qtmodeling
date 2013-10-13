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
#include "qmofelement.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>

/*!
    \class QMofElement

    \inmodule QtMof

    \brief An element is a constituent of a model. As such, it has the capability of owning other elements.
 */
QMofElement::QMofElement() :
    QMofObject(false),
    _owner(0)
{
}

QModelingElement *QMofElement::clone() const
{
    QMofElement *c = new QMofElement;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The Comments owned by this element.
 */
const QSet<QMofComment *> QMofElement::ownedComments() const
{
    // This is a read-write association end

    return _ownedComments;
}

void QMofElement::addOwnedComment(QMofComment *ownedComment)
{
    // This is a read-write association end

    if (!_ownedComments.contains(ownedComment)) {
        _ownedComments.insert(ownedComment);
        if (ownedComment && ownedComment->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedComment->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedComment(QObject *)));
        ownedComment->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(ownedComment);
    }
}

void QMofElement::removeOwnedComment(QMofComment *ownedComment)
{
    // This is a read-write association end

    if (_ownedComments.contains(ownedComment)) {
        _ownedComments.remove(ownedComment);
        if (ownedComment->asQModelingObject())
            ownedComment->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(ownedComment);
    }
}

/*!
    The Elements owned by this element.
 */
const QSet<QMofElement *> QMofElement::ownedElements() const
{
    // This is a read-only derived union association end

    return _ownedElements;
}

void QMofElement::addOwnedElement(QMofElement *ownedElement)
{
    // This is a read-only derived union association end

    if (!_ownedElements.contains(ownedElement)) {
        _ownedElements.insert(ownedElement);
        if (ownedElement && ownedElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedElement->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedElement(QObject *)));
        ownedElement->asQModelingObject()->setParent(this->asQModelingObject());
    }
}

void QMofElement::removeOwnedElement(QMofElement *ownedElement)
{
    // This is a read-only derived union association end

    if (_ownedElements.contains(ownedElement)) {
        _ownedElements.remove(ownedElement);
        if (ownedElement->asQModelingObject())
            ownedElement->asQModelingObject()->setParent(0);
    }
}

/*!
    The Element that owns this element.
 */
QMofElement *QMofElement::owner() const
{
    // This is a read-only derived union association end

    return _owner;
}

void QMofElement::setOwner(QMofElement *owner)
{
    // This is a read-only derived union association end

    if (_owner != owner) {
        _owner = owner;
        if (owner && owner->asQModelingObject() && this->asQModelingObject())
            QObject::connect(owner->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setOwner()));
    }
}

// OPERATIONS

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
    qWarning("QMofElement::getMetaClass(): to be implemented (operation)");

    return 0;
}

QMofElement *QMofElement::container() const
{
    qWarning("QMofElement::container(): to be implemented (operation)");

    return 0;
}

bool QMofElement::isInstanceOfType(QMofClass *type, bool includesSubtypes) const
{
    qWarning("QMofElement::isInstanceOfType(): to be implemented (operation)");

    Q_UNUSED(type);
    Q_UNUSED(includesSubtypes);
    return bool ();
}

void QMofElement::delete_()
{
    qWarning("QMofElement::delete(): to be implemented (operation)");

}

void QMofElement::allOwnedElements(QSet<QMofElement *> &allOwnedElements_) const
{
    allOwnedElements_.unite(_ownedElements);
    foreach (QMofElement *element, _ownedElements)
        element->allOwnedElements(allOwnedElements_);
}

