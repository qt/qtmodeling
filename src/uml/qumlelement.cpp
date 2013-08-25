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

QT_BEGIN_NAMESPACE

QUmlElementPrivate::QUmlElementPrivate() :
    owner(0)
{
}

/*!
    \class QUmlElement

    \inmodule QtUml

    \brief An element is a constituent of a model. As such, it has the capability of owning other elements.
 */

QUmlElement::QUmlElement(bool create_d_ptr) :
    QModelingObject(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlElementPrivate);
}

// Owned attributes

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlElement::ownedComment() const
{
    return QSet<QUmlComment *>();
}

void QUmlElement::addOwnedComment(QSet<QUmlComment *> ownedComment)
{
    Q_UNUSED(ownedComment);
}

void QUmlElement::removeOwnedComment(QSet<QUmlComment *> ownedComment)
{
    Q_UNUSED(ownedComment);
}

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlElement::ownedElement() const
{
    return QSet<QUmlElement *>();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlElement::owner() const
{
    return 0;
}

// Operations

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlElement::allOwnedElements() const
{
    return QSet<QUmlElement *> ();
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlElement::mustBeOwned() const
{
    return bool ();
}

QT_END_NAMESPACE

