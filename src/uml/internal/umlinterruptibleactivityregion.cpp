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
#include "umlinterruptibleactivityregion_p.h"

#include "private/umlactivityedge_p.h"
#include "private/umlactivitynode_p.h"

UmlInterruptibleActivityRegion::UmlInterruptibleActivityRegion()
{
}

// OWNED ATTRIBUTES

const QSet<UmlActivityEdge *> UmlInterruptibleActivityRegion::interruptingEdge() const
{
    // This is a read-write association end

    return _interruptingEdge;
}

void UmlInterruptibleActivityRegion::addInterruptingEdge(UmlActivityEdge *interruptingEdge)
{
    // This is a read-write association end

    if (!_interruptingEdge.contains(interruptingEdge)) {
        _interruptingEdge.insert(interruptingEdge);

        // Adjust opposite properties
        if (interruptingEdge) {
            interruptingEdge->setInterrupts(this);
        }
    }
}

void UmlInterruptibleActivityRegion::removeInterruptingEdge(UmlActivityEdge *interruptingEdge)
{
    // This is a read-write association end

    if (_interruptingEdge.contains(interruptingEdge)) {
        _interruptingEdge.remove(interruptingEdge);

        // Adjust opposite properties
        if (interruptingEdge) {
            interruptingEdge->setInterrupts(0);
        }
    }
}

const QSet<UmlActivityNode *> UmlInterruptibleActivityRegion::node() const
{
    // This is a read-write association end

    return _node;
}

void UmlInterruptibleActivityRegion::addNode(UmlActivityNode *node)
{
    // This is a read-write association end

    if (!_node.contains(node)) {
        _node.insert(node);

        // Adjust subsetted properties
        addContainedNode(node);

        // Adjust opposite properties
        if (node) {
            node->addInInterruptibleRegion(this);
        }
    }
}

void UmlInterruptibleActivityRegion::removeNode(UmlActivityNode *node)
{
    // This is a read-write association end

    if (_node.contains(node)) {
        _node.remove(node);

        // Adjust subsetted properties
        removeContainedNode(node);

        // Adjust opposite properties
        if (node) {
            node->removeInInterruptibleRegion(this);
        }
    }
}

