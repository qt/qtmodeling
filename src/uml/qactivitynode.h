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

    // From QActivityNode
    Q_PROPERTY(const QSet<QActivityNode *> * redefinedNodes READ redefinedNodes)
    Q_PROPERTY(const QSet<QActivityEdge *> * incomings READ incomings)
    Q_PROPERTY(QActivity * activity READ activity WRITE setActivity)
    Q_PROPERTY(const QSet<QActivityGroup *> * inGroup READ inGroup)
    Q_PROPERTY(QStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(const QSet<QActivityPartition *> * inPartition READ inPartition)
    Q_PROPERTY(const QSet<QInterruptibleActivityRegion *> * inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(const QSet<QActivityEdge *> * outgoings READ outgoings)

    Q_DISABLE_COPY(QActivityNode)
    Q_DECLARE_PRIVATE(QActivityNode)

public:
    explicit QActivityNode(QObject *parent = 0);
    virtual ~QActivityNode();

    // Association ends from QActivityNode
    const QSet<QActivityNode *> *redefinedNodes() const;
    void addRedefinedNode(QActivityNode *redefinedNode);
    void removeRedefinedNode(QActivityNode *redefinedNode);
    const QSet<QActivityEdge *> *incomings() const;
    void addIncoming(QActivityEdge *incoming);
    void removeIncoming(QActivityEdge *incoming);
    QActivity *activity() const;
    void setActivity(QActivity *activity);
    const QSet<QActivityGroup *> *inGroup() const;
    QStructuredActivityNode *inStructuredNode() const;
    void setInStructuredNode(QStructuredActivityNode *inStructuredNode);
    const QSet<QActivityPartition *> *inPartition() const;
    void addInPartition(QActivityPartition *inPartition);
    void removeInPartition(QActivityPartition *inPartition);
    const QSet<QInterruptibleActivityRegion *> *inInterruptibleRegion() const;
    void addInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion);
    void removeInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion);
    const QSet<QActivityEdge *> *outgoings() const;
    void addOutgoing(QActivityEdge *outgoing);
    void removeOutgoing(QActivityEdge *outgoing);

    // Classes which access read-only opposite properties should be friend
    friend class QActivityGroupPrivate;

protected:
    explicit QActivityNode(QActivityNodePrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QActivityNode) *)
Q_DECLARE_METATYPE(QSet<QT_PREPEND_NAMESPACE_QTUML(QActivityNode) *> *)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QActivityNode) *> *)

QT_END_HEADER

#endif // QTUML_QACTIVITYNODE_H

