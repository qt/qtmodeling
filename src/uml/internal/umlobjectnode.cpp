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
#include "umlobjectnode_p.h"

#include "private/umlbehavior_p.h"
#include "private/umlstate_p.h"
#include "private/umlvaluespecification_p.h"

UmlObjectNode::UmlObjectNode() :
    _isControlType(false),
    _ordering(QtUml::ObjectNodeOrderingKindFIFO),
    _selection(0),
    _upperBound(0)
{
}

// OWNED ATTRIBUTES

const QSet<UmlState *> UmlObjectNode::inState() const
{
    // This is a read-write association end

    return _inState;
}

void UmlObjectNode::addInState(UmlState *inState)
{
    // This is a read-write association end

    if (!_inState.contains(inState)) {
        _inState.insert(inState);
    }
}

void UmlObjectNode::removeInState(UmlState *inState)
{
    // This is a read-write association end

    if (_inState.contains(inState)) {
        _inState.remove(inState);
    }
}

bool UmlObjectNode::isControlType() const
{
    // This is a read-write property

    return _isControlType;
}

void UmlObjectNode::setControlType(bool isControlType)
{
    // This is a read-write property

    if (_isControlType != isControlType) {
        _isControlType = isControlType;
    }
}

QtUml::ObjectNodeOrderingKind UmlObjectNode::ordering() const
{
    // This is a read-write property

    return _ordering;
}

void UmlObjectNode::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    // This is a read-write property

    if (_ordering != ordering) {
        _ordering = ordering;
    }
}

UmlBehavior *UmlObjectNode::selection() const
{
    // This is a read-write association end

    return _selection;
}

void UmlObjectNode::setSelection(UmlBehavior *selection)
{
    // This is a read-write association end

    if (_selection != selection) {
        _selection = selection;
    }
}

UmlValueSpecification *UmlObjectNode::upperBound() const
{
    // This is a read-write association end

    return _upperBound;
}

void UmlObjectNode::setUpperBound(UmlValueSpecification *upperBound)
{
    // This is a read-write association end

    if (_upperBound != upperBound) {
        // Adjust subsetted properties
        removeOwnedElement(_upperBound);

        _upperBound = upperBound;

        // Adjust subsetted properties
        if (upperBound) {
            addOwnedElement(upperBound);
        }
    }
}

