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
#ifndef QTUML_QACTIVITYEDGE_H
#define QTUML_QACTIVITYEDGE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QRedefinableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QInterruptibleActivityRegion;
class QActivityNode;
class QStructuredActivityNode;
class QActivityPartition;
class QActivity;
class QActivityGroup;
class QValueSpecification;

class QActivityEdgePrivate;

class Q_UML_EXPORT QActivityEdge : public QRedefinableElement
{
    Q_OBJECT

    Q_PROPERTY(QActivityNode * source READ source WRITE setSource)
    Q_PROPERTY(QSet<QActivityEdge *> redefinedEdges READ redefinedEdges)
    Q_PROPERTY(QSet<QActivityGroup *> inGroup READ inGroup)
    Q_PROPERTY(QValueSpecification * guard READ guard WRITE setGuard)
    Q_PROPERTY(QSet<QActivityPartition *> inPartition READ inPartition)
    Q_PROPERTY(QActivity * activity READ activity WRITE setActivity)
    Q_PROPERTY(QInterruptibleActivityRegion * interrupts READ interrupts WRITE setInterrupts)
    Q_PROPERTY(QValueSpecification * weight READ weight WRITE setWeight)
    Q_PROPERTY(QStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QActivityNode * target READ target WRITE setTarget)

    Q_DISABLE_COPY(QActivityEdge)
    Q_DECLARE_PRIVATE(QActivityEdge)

public:
    Q_INVOKABLE explicit QActivityEdge(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QActivityEdge();

    // Association ends from QActivityEdge
    Q_INVOKABLE QActivityNode *source() const;
    Q_INVOKABLE void setSource(QActivityNode *source);
    Q_INVOKABLE QSet<QActivityEdge *> redefinedEdges() const;
    Q_INVOKABLE void addRedefinedEdge(QActivityEdge *redefinedEdge);
    Q_INVOKABLE void removeRedefinedEdge(QActivityEdge *redefinedEdge);
    Q_INVOKABLE QSet<QActivityGroup *> inGroup() const;
    Q_INVOKABLE QValueSpecification *guard() const;
    Q_INVOKABLE void setGuard(QValueSpecification *guard);
    Q_INVOKABLE QSet<QActivityPartition *> inPartition() const;
    Q_INVOKABLE void addInPartition(QActivityPartition *inPartition);
    Q_INVOKABLE void removeInPartition(QActivityPartition *inPartition);
    Q_INVOKABLE QActivity *activity() const;
    Q_INVOKABLE void setActivity(QActivity *activity);
    Q_INVOKABLE QInterruptibleActivityRegion *interrupts() const;
    Q_INVOKABLE void setInterrupts(QInterruptibleActivityRegion *interrupts);
    Q_INVOKABLE QValueSpecification *weight() const;
    Q_INVOKABLE void setWeight(QValueSpecification *weight);
    Q_INVOKABLE QStructuredActivityNode *inStructuredNode() const;
    Q_INVOKABLE void setInStructuredNode(QStructuredActivityNode *inStructuredNode);
    Q_INVOKABLE QActivityNode *target() const;
    Q_INVOKABLE void setTarget(QActivityNode *target);

    virtual void setPropertyData();

    // Classes which access read-only opposite properties should be friend
    friend class QActivityGroupPrivate;

protected:
    explicit QActivityEdge(QActivityEdgePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QACTIVITYEDGE_H

