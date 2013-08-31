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
#include "umlredefinableelement_p.h"

#include "private/umlclassifier_p.h"

UmlRedefinableElement::UmlRedefinableElement() :
    _isLeaf(false)
{
}

// OWNED ATTRIBUTES

bool UmlRedefinableElement::isLeaf() const
{
    // This is a read-write property

    return _isLeaf;
}

void UmlRedefinableElement::setLeaf(bool isLeaf)
{
    // This is a read-write property

    if (_isLeaf != isLeaf) {
        _isLeaf = isLeaf;
    }
}

const QSet<UmlRedefinableElement *> UmlRedefinableElement::redefinedElement() const
{
    // This is a read-only derived union association end

    return _redefinedElement;
}

void UmlRedefinableElement::addRedefinedElement(UmlRedefinableElement *redefinedElement)
{
    // This is a read-only derived union association end

    if (!_redefinedElement.contains(redefinedElement)) {
        _redefinedElement.insert(redefinedElement);
    }
}

void UmlRedefinableElement::removeRedefinedElement(UmlRedefinableElement *redefinedElement)
{
    // This is a read-only derived union association end

    if (_redefinedElement.contains(redefinedElement)) {
        _redefinedElement.remove(redefinedElement);
    }
}

const QSet<UmlClassifier *> UmlRedefinableElement::redefinitionContext() const
{
    // This is a read-only derived union association end

    return _redefinitionContext;
}

void UmlRedefinableElement::addRedefinitionContext(UmlClassifier *redefinitionContext)
{
    // This is a read-only derived union association end

    if (!_redefinitionContext.contains(redefinitionContext)) {
        _redefinitionContext.insert(redefinitionContext);
    }
}

void UmlRedefinableElement::removeRedefinitionContext(UmlClassifier *redefinitionContext)
{
    // This is a read-only derived union association end

    if (_redefinitionContext.contains(redefinitionContext)) {
        _redefinitionContext.remove(redefinitionContext);
    }
}

// OPERATIONS

bool UmlRedefinableElement::isConsistentWith(
    UmlRedefinableElement *redefinee) const
{
    qWarning("UmlRedefinableElement::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

bool UmlRedefinableElement::isRedefinitionContextValid(
    UmlRedefinableElement *redefined) const
{
    qWarning("UmlRedefinableElement::isRedefinitionContextValid(): to be implemented (operation)");

    Q_UNUSED(redefined);
    return bool ();
}

