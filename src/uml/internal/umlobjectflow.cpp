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
#include "umlobjectflow_p.h"

#include "private/umlbehavior_p.h"

UmlObjectFlow::UmlObjectFlow() :
    _isMulticast(false),
    _isMultireceive(false),
    _selection(0),
    _transformation(0)
{
}

// OWNED ATTRIBUTES

bool UmlObjectFlow::isMulticast() const
{
    // This is a read-write property

    return _isMulticast;
}

void UmlObjectFlow::setMulticast(bool isMulticast)
{
    // This is a read-write property

    if (_isMulticast != isMulticast) {
        _isMulticast = isMulticast;
    }
}

bool UmlObjectFlow::isMultireceive() const
{
    // This is a read-write property

    return _isMultireceive;
}

void UmlObjectFlow::setMultireceive(bool isMultireceive)
{
    // This is a read-write property

    if (_isMultireceive != isMultireceive) {
        _isMultireceive = isMultireceive;
    }
}

UmlBehavior *UmlObjectFlow::selection() const
{
    // This is a read-write association end

    return _selection;
}

void UmlObjectFlow::setSelection(UmlBehavior *selection)
{
    // This is a read-write association end

    if (_selection != selection) {
        _selection = selection;
    }
}

UmlBehavior *UmlObjectFlow::transformation() const
{
    // This is a read-write association end

    return _transformation;
}

void UmlObjectFlow::setTransformation(UmlBehavior *transformation)
{
    // This is a read-write association end

    if (_transformation != transformation) {
        _transformation = transformation;
    }
}

