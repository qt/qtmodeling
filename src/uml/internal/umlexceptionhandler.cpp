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
#include "umlexceptionhandler_p.h"

#include "private/umlclassifier_p.h"
#include "private/umlexecutablenode_p.h"
#include "private/umlobjectnode_p.h"

UmlExceptionHandler::UmlExceptionHandler() :
    _exceptionInput(0),
    _handlerBody(0),
    _protectedNode(0)
{
}

// OWNED ATTRIBUTES

UmlObjectNode *UmlExceptionHandler::exceptionInput() const
{
    // This is a read-write association end

    return _exceptionInput;
}

void UmlExceptionHandler::setExceptionInput(UmlObjectNode *exceptionInput)
{
    // This is a read-write association end

    if (_exceptionInput != exceptionInput) {
        _exceptionInput = exceptionInput;
    }
}

const QSet<UmlClassifier *> UmlExceptionHandler::exceptionType() const
{
    // This is a read-write association end

    return _exceptionType;
}

void UmlExceptionHandler::addExceptionType(UmlClassifier *exceptionType)
{
    // This is a read-write association end

    if (!_exceptionType.contains(exceptionType)) {
        _exceptionType.insert(exceptionType);
    }
}

void UmlExceptionHandler::removeExceptionType(UmlClassifier *exceptionType)
{
    // This is a read-write association end

    if (_exceptionType.contains(exceptionType)) {
        _exceptionType.remove(exceptionType);
    }
}

UmlExecutableNode *UmlExceptionHandler::handlerBody() const
{
    // This is a read-write association end

    return _handlerBody;
}

void UmlExceptionHandler::setHandlerBody(UmlExecutableNode *handlerBody)
{
    // This is a read-write association end

    if (_handlerBody != handlerBody) {
        _handlerBody = handlerBody;
    }
}

UmlExecutableNode *UmlExceptionHandler::protectedNode() const
{
    // This is a read-write association end

    return _protectedNode;
}

void UmlExceptionHandler::setProtectedNode(UmlExecutableNode *protectedNode)
{
    // This is a read-write association end

    if (_protectedNode != protectedNode) {
        // Adjust subsetted properties

        _protectedNode = protectedNode;

        // Adjust subsetted properties
        setOwner(protectedNode);
    }
}

