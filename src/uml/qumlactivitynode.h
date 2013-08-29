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

#include <QtCore/QObject>
#include "private/umlactivitynode_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActivity;
class QUmlActivityEdge;
class QUmlActivityGroup;
class QUmlActivityPartition;
class QUmlInterruptibleActivityRegion;
class QUmlStructuredActivityNode;

class Q_UML_EXPORT QUmlActivityNode : public QObject, public UmlActivityNode
{
    Q_OBJECT
    Q_PROPERTY(QUmlActivity * activity READ activity)
    Q_PROPERTY(QSet<QUmlActivityGroup *> inGroup READ inGroup)
    Q_PROPERTY(QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(QSet<QUmlActivityPartition *> inPartition READ inPartition)
    Q_PROPERTY(QUmlStructuredActivityNode * inStructuredNode READ inStructuredNode)
    Q_PROPERTY(QSet<QUmlActivityEdge *> incoming READ incoming)
    Q_PROPERTY(QSet<QUmlActivityEdge *> outgoing READ outgoing)
    Q_PROPERTY(QSet<QUmlActivityNode *> redefinedNode READ redefinedNode)

public:
    Q_DECL_HIDDEN explicit QUmlActivityNode(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QUmlActivity *activity() const;
    Q_INVOKABLE void setActivity(QUmlActivity *activity);
    Q_INVOKABLE const QSet<QUmlActivityGroup *> inGroup() const;
    Q_INVOKABLE const QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion() const;
    Q_INVOKABLE void addInInterruptibleRegion(UmlInterruptibleActivityRegion *inInterruptibleRegion);
    Q_INVOKABLE void removeInInterruptibleRegion(UmlInterruptibleActivityRegion *inInterruptibleRegion);
    Q_INVOKABLE const QSet<QUmlActivityPartition *> inPartition() const;
    Q_INVOKABLE void addInPartition(UmlActivityPartition *inPartition);
    Q_INVOKABLE void removeInPartition(UmlActivityPartition *inPartition);
    Q_INVOKABLE QUmlStructuredActivityNode *inStructuredNode() const;
    Q_INVOKABLE void setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode);
    Q_INVOKABLE const QSet<QUmlActivityEdge *> incoming() const;
    Q_INVOKABLE void addIncoming(UmlActivityEdge *incoming);
    Q_INVOKABLE void removeIncoming(UmlActivityEdge *incoming);
    Q_INVOKABLE const QSet<QUmlActivityEdge *> outgoing() const;
    Q_INVOKABLE void addOutgoing(UmlActivityEdge *outgoing);
    Q_INVOKABLE void removeOutgoing(UmlActivityEdge *outgoing);
    Q_INVOKABLE const QSet<QUmlActivityNode *> redefinedNode() const;
    Q_INVOKABLE void addRedefinedNode(UmlActivityNode *redefinedNode);
    Q_INVOKABLE void removeRedefinedNode(UmlActivityNode *redefinedNode);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlActivityNode *)
Q_DECLARE_METATYPE(QList<QUmlActivityNode *> *)
Q_DECLARE_METATYPE(QSet<QUmlActivityNode *> *)

QT_END_HEADER

#endif // QUMLACTIVITYNODE_H

