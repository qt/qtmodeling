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

#include <QtUml/QComment>

QT_BEGIN_NAMESPACE_QTUML

class QElementPrivate
{
public:
    explicit QElementPrivate();
    virtual ~QElementPrivate();

    QSet<QComment *> *ownedComments;
    QSet<QElement *> *ownedElements;
    QElement *owner;
};

QElementPrivate::QElementPrivate() :
    ownedComments(new QSet<QComment *>),
    ownedElements(new QSet<QElement *>)
{
}

QElementPrivate::~QElementPrivate()
{
    delete ownedComments;
    delete ownedElements;
}

/*!
    \class QElement

    \inmodule QtUml

    \brief An element is a constituent of a model. As such, it has the capability of owning other elements.
 */

QElement::QElement()
    : d_ptr(new QElementPrivate)
{
}

QElement::~QElement()
{
    delete d_ptr;
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QElement::ownedComments() const
{
    return d_ptr->ownedComments;
}

void QElement::addOwnedComment(const QComment *ownedComment)
{
    d_ptr->ownedComments->insert(const_cast<QComment *>(ownedComment));
    // Adjust subsetted property(ies)
    addOwnedElement(ownedComment);
}

void QElement::removeOwnedComment(const QComment *ownedComment)
{
    d_ptr->ownedComments->remove(const_cast<QComment *>(ownedComment));
    // Adjust subsetted property(ies)
    removeOwnedElement(ownedComment);
}

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QElement::ownedElements() const
{
    return d_ptr->ownedElements;
}

void QElement::addOwnedElement(const QElement *ownedElement)
{
    d_ptr->ownedElements->insert(const_cast<QElement *>(ownedElement));
}

void QElement::removeOwnedElement(const QElement *ownedElement)
{
    d_ptr->ownedElements->remove(const_cast<QElement *>(ownedElement));
}

/*!
    The Element that owns this element.
 */
QElement *QElement::owner() const
{
    return d_ptr->owner;
}

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
const QSet<QElement *> *QElement::allOwnedElements() const
{
    qWarning("To be implemented");
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QElement::mustBeOwned() const
{
    qWarning("To be implemented");
}

QT_END_NAMESPACE_QTUML

