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
#ifndef QUMLACTIVITYNODE_H
#define QUMLACTIVITYNODE_H

#include <QtUml/QtUmlGlobal>

#include <QtUml/QUmlRedefinableElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActivity;
class QUmlActivityEdge;
class QUmlActivityGroup;
class QUmlActivityPartition;
class QUmlInterruptibleActivityRegion;
class QUmlStructuredActivityNode;

class QUmlActivityNodePrivate;
class Q_UML_EXPORT QUmlActivityNode : public QUmlRedefinableElement
{
public:
    Q_DECL_HIDDEN QUmlActivityNode(bool create_d_ptr = true);

    // Owned attributes
    QUmlActivity *activity() const;
    void setActivity(QUmlActivity *activity);
    QSet<QUmlActivityGroup *> inGroup() const;
    QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion() const;
    void addInInterruptibleRegion(QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion);
    void removeInInterruptibleRegion(QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion);
    QSet<QUmlActivityPartition *> inPartition() const;
    void addInPartition(QSet<QUmlActivityPartition *> inPartition);
    void removeInPartition(QSet<QUmlActivityPartition *> inPartition);
    QUmlStructuredActivityNode *inStructuredNode() const;
    void setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode);
    QSet<QUmlActivityEdge *> incoming() const;
    void addIncoming(QSet<QUmlActivityEdge *> incoming);
    void removeIncoming(QSet<QUmlActivityEdge *> incoming);
    QSet<QUmlActivityEdge *> outgoing() const;
    void addOutgoing(QSet<QUmlActivityEdge *> outgoing);
    void removeOutgoing(QSet<QUmlActivityEdge *> outgoing);
    QSet<QUmlActivityNode *> redefinedNode() const;
    void addRedefinedNode(QSet<QUmlActivityNode *> redefinedNode);
    void removeRedefinedNode(QSet<QUmlActivityNode *> redefinedNode);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLACTIVITYNODE_H

