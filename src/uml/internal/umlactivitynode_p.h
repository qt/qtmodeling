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
#ifndef UMLACTIVITYNODE_H
#define UMLACTIVITYNODE_H

#include <QtUml/QtUmlGlobal>

#include "private/umlredefinableelement_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlActivity;
class UmlActivityEdge;
class UmlActivityGroup;
class UmlActivityPartition;
class UmlInterruptibleActivityRegion;
class UmlStructuredActivityNode;

class Q_UML_EXPORT UmlActivityNode : public UmlRedefinableElement
{
public:
    Q_DECL_HIDDEN explicit UmlActivityNode();

    // Owned attributes
    UmlActivity *activity() const;
    void setActivity(UmlActivity *activity);
    const QSet<UmlActivityGroup *> inGroup() const;
    Q_DECL_HIDDEN void addInGroup(UmlActivityGroup *inGroup);
    Q_DECL_HIDDEN void removeInGroup(UmlActivityGroup *inGroup);
    const QSet<UmlInterruptibleActivityRegion *> inInterruptibleRegion() const;
    void addInInterruptibleRegion(UmlInterruptibleActivityRegion *inInterruptibleRegion);
    void removeInInterruptibleRegion(UmlInterruptibleActivityRegion *inInterruptibleRegion);
    const QSet<UmlActivityPartition *> inPartition() const;
    void addInPartition(UmlActivityPartition *inPartition);
    void removeInPartition(UmlActivityPartition *inPartition);
    UmlStructuredActivityNode *inStructuredNode() const;
    void setInStructuredNode(UmlStructuredActivityNode *inStructuredNode);
    const QSet<UmlActivityEdge *> incoming() const;
    void addIncoming(UmlActivityEdge *incoming);
    void removeIncoming(UmlActivityEdge *incoming);
    const QSet<UmlActivityEdge *> outgoing() const;
    void addOutgoing(UmlActivityEdge *outgoing);
    void removeOutgoing(UmlActivityEdge *outgoing);
    const QSet<UmlActivityNode *> redefinedNode() const;
    void addRedefinedNode(UmlActivityNode *redefinedNode);
    void removeRedefinedNode(UmlActivityNode *redefinedNode);

protected:
    UmlActivity *_activity;
    QSet<UmlActivityGroup *> _inGroup;
    QSet<UmlInterruptibleActivityRegion *> _inInterruptibleRegion;
    QSet<UmlActivityPartition *> _inPartition;
    UmlStructuredActivityNode *_inStructuredNode;
    QSet<UmlActivityEdge *> _incoming;
    QSet<UmlActivityEdge *> _outgoing;
    QSet<UmlActivityNode *> _redefinedNode;
};

#endif // UMLACTIVITYNODE_H

