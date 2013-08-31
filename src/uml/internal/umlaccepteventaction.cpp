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
#include "umlaccepteventaction_p.h"

#include "private/umloutputpin_p.h"
#include "private/umltrigger_p.h"

UmlAcceptEventAction::UmlAcceptEventAction() :
    _isUnmarshall(false)
{
}

// OWNED ATTRIBUTES

bool UmlAcceptEventAction::isUnmarshall() const
{
    // This is a read-write property

    return _isUnmarshall;
}

void UmlAcceptEventAction::setUnmarshall(bool isUnmarshall)
{
    // This is a read-write property

    if (_isUnmarshall != isUnmarshall) {
        _isUnmarshall = isUnmarshall;
    }
}

const QSet<UmlOutputPin *> UmlAcceptEventAction::result() const
{
    // This is a read-write association end

    return _result;
}

void UmlAcceptEventAction::addResult(UmlOutputPin *result)
{
    // This is a read-write association end

    if (!_result.contains(result)) {
        _result.insert(result);

        // Adjust subsetted properties
        addOutput(result);
    }
}

void UmlAcceptEventAction::removeResult(UmlOutputPin *result)
{
    // This is a read-write association end

    if (_result.contains(result)) {
        _result.remove(result);

        // Adjust subsetted properties
        removeOutput(result);
    }
}

const QSet<UmlTrigger *> UmlAcceptEventAction::trigger() const
{
    // This is a read-write association end

    return _trigger;
}

void UmlAcceptEventAction::addTrigger(UmlTrigger *trigger)
{
    // This is a read-write association end

    if (!_trigger.contains(trigger)) {
        _trigger.insert(trigger);

        // Adjust subsetted properties
        addOwnedElement(trigger);
    }
}

void UmlAcceptEventAction::removeTrigger(UmlTrigger *trigger)
{
    // This is a read-write association end

    if (_trigger.contains(trigger)) {
        _trigger.remove(trigger);

        // Adjust subsetted properties
        removeOwnedElement(trigger);
    }
}

