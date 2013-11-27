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

#include <QtUml/QUmlComment>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlElement

    \inmodule QtUml

    \brief An element is a constituent of a model. As such, it has the capability of owning other elements.

    \b {QUmlElement is an abstract class.}
 */

/*!
    Creates a new QUmlElement.
*/
QUmlElement::QUmlElement() :
    _owner(0)
{
}

/*!
    Destroys the QUmlElement.
 */
QUmlElement::~QUmlElement()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlElement.
*/
QModelingElement *QUmlElement::clone() const
{
    QUmlElement *c = new QUmlElement;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The Comments owned by this element.

    \sa addOwnedComment(), removeOwnedComment()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
const QSet<QUmlComment *> QUmlElement::ownedComments() const
{
    // This is a read-write association end

    return _ownedComments;
}

/*!
    Adds \a ownedComment to ownedComments.

    \sa ownedComments(), removeOwnedComment()
 */
void QUmlElement::addOwnedComment(QUmlComment *ownedComment)
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

/*!
    Removes \a ownedComment from ownedComments.

    \sa ownedComments(), addOwnedComment()
 */
void QUmlElement::removeOwnedComment(QUmlComment *ownedComment)
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

    \b {This is a read-only derived union property.}

    \b {Opposite property(ies):} QUmlElement::owner().
 */
const QSet<QUmlElement *> QUmlElement::ownedElements() const
{
    // This is a read-only derived union association end

    return _ownedElements;
}

/*!
    Adds \a ownedElement to ownedElements.

    \sa ownedElements(), removeOwnedElement()
 */
void QUmlElement::addOwnedElement(QUmlElement *ownedElement)
{
    // This is a read-only derived union association end

    if (!_ownedElements.contains(ownedElement)) {
        _ownedElements.insert(ownedElement);
        if (ownedElement && ownedElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedElement->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedElement(QObject *)));
        ownedElement->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust opposite properties
        if (ownedElement) {
            ownedElement->setOwner(this);
        }
    }
}

/*!
    Removes \a ownedElement from ownedElements.

    \sa ownedElements(), addOwnedElement()
 */
void QUmlElement::removeOwnedElement(QUmlElement *ownedElement)
{
    // This is a read-only derived union association end

    if (_ownedElements.contains(ownedElement)) {
        _ownedElements.remove(ownedElement);
        if (ownedElement->asQModelingObject())
            ownedElement->asQModelingObject()->setParent(0);

        // Adjust opposite properties
        if (ownedElement) {
            ownedElement->setOwner(0);
        }
    }
}

/*!
    The Element that owns this element.

    \b {This is a read-only derived union property.}

    \b {Opposite property(ies):} QUmlElement::ownedElements().
 */
QUmlElement *QUmlElement::owner() const
{
    // This is a read-only derived union association end

    return _owner;
}

/*!
    Adjusts owner to \a owner.
 */
void QUmlElement::setOwner(QUmlElement *owner)
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

void QUmlElement::allOwnedElements(QSet<QUmlElement *> &allOwnedElements_) const
{
    allOwnedElements_.unite(_ownedElements);
    foreach (QUmlElement *element, _ownedElements)
        element->allOwnedElements(allOwnedElements_);
}

QT_END_NAMESPACE

