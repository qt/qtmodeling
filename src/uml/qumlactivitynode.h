/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia  LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QUMLACTIVITYNODE_H
#define QUMLACTIVITYNODE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlRedefinableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlActivityEdge;
class QUmlStructuredActivityNode;
class QUmlActivityNode;
class QUmlActivityPartition;
class QUmlActivityGroup;
class QUmlActivity;
class QUmlInterruptibleActivityRegion;

class QUmlActivityNodePrivate;

class Q_UML_EXPORT QUmlActivityNode : public QUmlRedefinableElement
{
    Q_OBJECT

    Q_PROPERTY(QSet<QUmlActivityNode *> redefinedNodes READ redefinedNodes)
    Q_PROPERTY(QSet<QUmlActivityEdge *> incomings READ incomings)
    Q_PROPERTY(QUmlActivity * activity READ activity WRITE setActivity)
    Q_PROPERTY(QSet<QUmlActivityGroup *> inGroup READ inGroup)
    Q_PROPERTY(QUmlStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QSet<QUmlActivityPartition *> inPartition READ inPartition)
    Q_PROPERTY(QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(QSet<QUmlActivityEdge *> outgoings READ outgoings)

    Q_DISABLE_COPY(QUmlActivityNode)
    Q_DECLARE_PRIVATE(QUmlActivityNode)

public:
    Q_INVOKABLE explicit QUmlActivityNode(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlActivityNode();

    // Association ends from QUmlActivityNode
    Q_INVOKABLE QSet<QUmlActivityNode *> redefinedNodes() const;
    Q_INVOKABLE void addRedefinedNode(QUmlActivityNode *redefinedNode);
    Q_INVOKABLE void removeRedefinedNode(QUmlActivityNode *redefinedNode);
    Q_INVOKABLE QSet<QUmlActivityEdge *> incomings() const;
    Q_INVOKABLE void addIncoming(QUmlActivityEdge *incoming);
    Q_INVOKABLE void removeIncoming(QUmlActivityEdge *incoming);
    Q_INVOKABLE QUmlActivity *activity() const;
    Q_INVOKABLE void setActivity(QUmlActivity *activity);
    Q_INVOKABLE QSet<QUmlActivityGroup *> inGroup() const;
    Q_INVOKABLE QUmlStructuredActivityNode *inStructuredNode() const;
    Q_INVOKABLE void setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode);
    Q_INVOKABLE QSet<QUmlActivityPartition *> inPartition() const;
    Q_INVOKABLE void addInPartition(QUmlActivityPartition *inPartition);
    Q_INVOKABLE void removeInPartition(QUmlActivityPartition *inPartition);
    Q_INVOKABLE QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion() const;
    Q_INVOKABLE void addInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion);
    Q_INVOKABLE void removeInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion);
    Q_INVOKABLE QSet<QUmlActivityEdge *> outgoings() const;
    Q_INVOKABLE void addOutgoing(QUmlActivityEdge *outgoing);
    Q_INVOKABLE void removeOutgoing(QUmlActivityEdge *outgoing);

    virtual void setPropertyData();

    // Classes which access read-only opposite properties should be friend
    friend class QUmlActivityGroupPrivate;

protected:
    explicit QUmlActivityNode(QUmlActivityNodePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLACTIVITYNODE_H

