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
#ifndef QTUML_QACTIVITYNODE_H
#define QTUML_QACTIVITYNODE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QRedefinableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QActivityEdge;
class QStructuredActivityNode;
class QActivityPartition;
class QActivityGroup;
class QActivity;
class QInterruptibleActivityRegion;

class QActivityNodePrivate;

class Q_UML_EXPORT QActivityNode : public QRedefinableElement
{
    Q_OBJECT

    Q_PROPERTY(QSet<QActivityNode *> redefinedNodes READ redefinedNodes)
    Q_PROPERTY(QSet<QActivityEdge *> incomings READ incomings)
    Q_PROPERTY(QActivity * activity READ activity WRITE setActivity)
    Q_PROPERTY(QSet<QActivityGroup *> inGroup READ inGroup)
    Q_PROPERTY(QStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QSet<QActivityPartition *> inPartition READ inPartition)
    Q_PROPERTY(QSet<QInterruptibleActivityRegion *> inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(QSet<QActivityEdge *> outgoings READ outgoings)

    Q_DISABLE_COPY(QActivityNode)
    Q_DECLARE_PRIVATE(QActivityNode)

public:
    Q_INVOKABLE explicit QActivityNode(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QActivityNode();

    // Association ends from QActivityNode
    Q_INVOKABLE QSet<QActivityNode *> redefinedNodes() const;
    Q_INVOKABLE void addRedefinedNode(QActivityNode *redefinedNode);
    Q_INVOKABLE void removeRedefinedNode(QActivityNode *redefinedNode);
    Q_INVOKABLE QSet<QActivityEdge *> incomings() const;
    Q_INVOKABLE void addIncoming(QActivityEdge *incoming);
    Q_INVOKABLE void removeIncoming(QActivityEdge *incoming);
    Q_INVOKABLE QActivity *activity() const;
    Q_INVOKABLE void setActivity(QActivity *activity);
    Q_INVOKABLE QSet<QActivityGroup *> inGroup() const;
    Q_INVOKABLE QStructuredActivityNode *inStructuredNode() const;
    Q_INVOKABLE void setInStructuredNode(QStructuredActivityNode *inStructuredNode);
    Q_INVOKABLE QSet<QActivityPartition *> inPartition() const;
    Q_INVOKABLE void addInPartition(QActivityPartition *inPartition);
    Q_INVOKABLE void removeInPartition(QActivityPartition *inPartition);
    Q_INVOKABLE QSet<QInterruptibleActivityRegion *> inInterruptibleRegion() const;
    Q_INVOKABLE void addInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion);
    Q_INVOKABLE void removeInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion);
    Q_INVOKABLE QSet<QActivityEdge *> outgoings() const;
    Q_INVOKABLE void addOutgoing(QActivityEdge *outgoing);
    Q_INVOKABLE void removeOutgoing(QActivityEdge *outgoing);
    virtual void registerMetaTypes() const;
    virtual void setPropertyData();

    // Classes which access read-only opposite properties should be friend
    friend class QActivityGroupPrivate;

protected:
    explicit QActivityNode(QActivityNodePrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QACTIVITYNODE_H

