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
#include "umlelement_p.h"

#include "private/umlcomment_p.h"

UmlElement::UmlElement() :
    _owner(0)
{
}

// OWNED ATTRIBUTES

const QSet<UmlComment *> UmlElement::ownedComment() const
{
    // This is a read-write association end

    return _ownedComment;
}

void UmlElement::addOwnedComment(UmlComment *ownedComment)
{
    // This is a read-write association end

    if (!_ownedComment.contains(ownedComment)) {
        _ownedComment.insert(ownedComment);

        // Adjust subsetted properties
        addOwnedElement(ownedComment);
    }
}

void UmlElement::removeOwnedComment(UmlComment *ownedComment)
{
    // This is a read-write association end

    if (_ownedComment.contains(ownedComment)) {
        _ownedComment.remove(ownedComment);

        // Adjust subsetted properties
        removeOwnedElement(ownedComment);
    }
}

const QSet<UmlElement *> UmlElement::ownedElement() const
{
    // This is a read-only derived union association end

    return _ownedElement;
}

void UmlElement::addOwnedElement(UmlElement *ownedElement)
{
    // This is a read-only derived union association end

    if (!_ownedElement.contains(ownedElement)) {
        _ownedElement.insert(ownedElement);
    }
}

void UmlElement::removeOwnedElement(UmlElement *ownedElement)
{
    // This is a read-only derived union association end

    if (_ownedElement.contains(ownedElement)) {
        _ownedElement.remove(ownedElement);
    }
}

UmlElement *UmlElement::owner() const
{
    // This is a read-only derived union association end

    return _owner;
}

void UmlElement::setOwner(UmlElement *owner)
{
    // This is a read-only derived union association end

    if (_owner != owner) {
        _owner = owner;
    }
}

// OPERATIONS

QSet<UmlElement *> UmlElement::allOwnedElements(
    ) const
{
    qWarning("UmlElement::allOwnedElements(): to be implemented (operation)");

    return QSet<UmlElement *> ();
}

bool UmlElement::mustBeOwned(
    ) const
{
    qWarning("UmlElement::mustBeOwned(): to be implemented (operation)");

    return bool ();
}

