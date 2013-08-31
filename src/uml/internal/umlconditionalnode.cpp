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
#include "umlconditionalnode_p.h"

#include "private/umlclause_p.h"
#include "private/umloutputpin_p.h"

UmlConditionalNode::UmlConditionalNode() :
    _isAssured(false),
    _isDeterminate(false)
{
}

// OWNED ATTRIBUTES

const QSet<UmlClause *> UmlConditionalNode::clause() const
{
    // This is a read-write association end

    return _clause;
}

void UmlConditionalNode::addClause(UmlClause *clause)
{
    // This is a read-write association end

    if (!_clause.contains(clause)) {
        _clause.insert(clause);

        // Adjust subsetted properties
        addOwnedElement(clause);
    }
}

void UmlConditionalNode::removeClause(UmlClause *clause)
{
    // This is a read-write association end

    if (_clause.contains(clause)) {
        _clause.remove(clause);

        // Adjust subsetted properties
        removeOwnedElement(clause);
    }
}

bool UmlConditionalNode::isAssured() const
{
    // This is a read-write property

    return _isAssured;
}

void UmlConditionalNode::setAssured(bool isAssured)
{
    // This is a read-write property

    if (_isAssured != isAssured) {
        _isAssured = isAssured;
    }
}

bool UmlConditionalNode::isDeterminate() const
{
    // This is a read-write property

    return _isDeterminate;
}

void UmlConditionalNode::setDeterminate(bool isDeterminate)
{
    // This is a read-write property

    if (_isDeterminate != isDeterminate) {
        _isDeterminate = isDeterminate;
    }
}

const QList<UmlOutputPin *> UmlConditionalNode::result() const
{
    // This is a read-write association end

    return _result;
}

void UmlConditionalNode::addResult(UmlOutputPin *result)
{
    // This is a read-write association end

    if (!_result.contains(result)) {
        _result.append(result);
    }
}

void UmlConditionalNode::removeResult(UmlOutputPin *result)
{
    // This is a read-write association end

    if (_result.contains(result)) {
        _result.removeAll(result);
    }
}

