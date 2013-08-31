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
#include "umlinteraction_p.h"

#include "private/umlaction_p.h"
#include "private/umlgate_p.h"
#include "private/umllifeline_p.h"
#include "private/umlmessage_p.h"

UmlInteraction::UmlInteraction()
{
}

// OWNED ATTRIBUTES

const QSet<UmlAction *> UmlInteraction::action() const
{
    // This is a read-write association end

    return _action;
}

void UmlInteraction::addAction(UmlAction *action)
{
    // This is a read-write association end

    if (!_action.contains(action)) {
        _action.insert(action);

        // Adjust subsetted properties
        addOwnedElement(action);
    }
}

void UmlInteraction::removeAction(UmlAction *action)
{
    // This is a read-write association end

    if (_action.contains(action)) {
        _action.remove(action);

        // Adjust subsetted properties
        removeOwnedElement(action);
    }
}

const QSet<UmlGate *> UmlInteraction::formalGate() const
{
    // This is a read-write association end

    return _formalGate;
}

void UmlInteraction::addFormalGate(UmlGate *formalGate)
{
    // This is a read-write association end

    if (!_formalGate.contains(formalGate)) {
        _formalGate.insert(formalGate);

        // Adjust subsetted properties
        addOwnedMember(formalGate);
    }
}

void UmlInteraction::removeFormalGate(UmlGate *formalGate)
{
    // This is a read-write association end

    if (_formalGate.contains(formalGate)) {
        _formalGate.remove(formalGate);

        // Adjust subsetted properties
        removeOwnedMember(formalGate);
    }
}

const QList<UmlInteractionFragment *> UmlInteraction::fragment() const
{
    // This is a read-write association end

    return _fragment;
}

void UmlInteraction::addFragment(UmlInteractionFragment *fragment)
{
    // This is a read-write association end

    if (!_fragment.contains(fragment)) {
        _fragment.append(fragment);

        // Adjust subsetted properties
        addOwnedMember(fragment);

        // Adjust opposite properties
        if (fragment) {
            fragment->setEnclosingInteraction(this);
        }
    }
}

void UmlInteraction::removeFragment(UmlInteractionFragment *fragment)
{
    // This is a read-write association end

    if (_fragment.contains(fragment)) {
        _fragment.removeAll(fragment);

        // Adjust subsetted properties
        removeOwnedMember(fragment);

        // Adjust opposite properties
        if (fragment) {
            fragment->setEnclosingInteraction(0);
        }
    }
}

const QSet<UmlLifeline *> UmlInteraction::lifeline() const
{
    // This is a read-write association end

    return _lifeline;
}

void UmlInteraction::addLifeline(UmlLifeline *lifeline)
{
    // This is a read-write association end

    if (!_lifeline.contains(lifeline)) {
        _lifeline.insert(lifeline);

        // Adjust subsetted properties
        addOwnedMember(lifeline);

        // Adjust opposite properties
        if (lifeline) {
            lifeline->setInteraction(this);
        }
    }
}

void UmlInteraction::removeLifeline(UmlLifeline *lifeline)
{
    // This is a read-write association end

    if (_lifeline.contains(lifeline)) {
        _lifeline.remove(lifeline);

        // Adjust subsetted properties
        removeOwnedMember(lifeline);

        // Adjust opposite properties
        if (lifeline) {
            lifeline->setInteraction(0);
        }
    }
}

const QSet<UmlMessage *> UmlInteraction::message() const
{
    // This is a read-write association end

    return _message;
}

void UmlInteraction::addMessage(UmlMessage *message)
{
    // This is a read-write association end

    if (!_message.contains(message)) {
        _message.insert(message);

        // Adjust subsetted properties
        addOwnedMember(message);

        // Adjust opposite properties
        if (message) {
            message->setInteraction(this);
        }
    }
}

void UmlInteraction::removeMessage(UmlMessage *message)
{
    // This is a read-write association end

    if (_message.contains(message)) {
        _message.remove(message);

        // Adjust subsetted properties
        removeOwnedMember(message);

        // Adjust opposite properties
        if (message) {
            message->setInteraction(0);
        }
    }
}

