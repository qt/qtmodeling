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
    Q_PROPERTY(const QSet<QActivityEdge *> * redefinedEdges READ redefinedEdges)
    Q_PROPERTY(const QSet<QActivityGroup *> * inGroup READ inGroup)
    Q_PROPERTY(QValueSpecification * guard READ guard WRITE setGuard)
    Q_PROPERTY(const QSet<QActivityPartition *> * inPartition READ inPartition)
    Q_PROPERTY(QActivity * activity READ activity WRITE setActivity)
    Q_PROPERTY(QInterruptibleActivityRegion * interrupts READ interrupts WRITE setInterrupts)
    Q_PROPERTY(QValueSpecification * weight READ weight WRITE setWeight)
    Q_PROPERTY(QStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QActivityNode * target READ target WRITE setTarget)

    Q_DISABLE_COPY(QActivityEdge)
    Q_DECLARE_PRIVATE(QActivityEdge)

public:
    explicit QActivityEdge(QObject *parent = 0);
    virtual ~QActivityEdge();

    // Association ends from QActivityEdge
    QActivityNode *source() const;
    void setSource(QActivityNode *source);
    const QSet<QActivityEdge *> *redefinedEdges() const;
    void addRedefinedEdge(QActivityEdge *redefinedEdge);
    void removeRedefinedEdge(QActivityEdge *redefinedEdge);
    const QSet<QActivityGroup *> *inGroup() const;
    QValueSpecification *guard() const;
    void setGuard(QValueSpecification *guard);
    const QSet<QActivityPartition *> *inPartition() const;
    void addInPartition(QActivityPartition *inPartition);
    void removeInPartition(QActivityPartition *inPartition);
    QActivity *activity() const;
    void setActivity(QActivity *activity);
    QInterruptibleActivityRegion *interrupts() const;
    void setInterrupts(QInterruptibleActivityRegion *interrupts);
    QValueSpecification *weight() const;
    void setWeight(QValueSpecification *weight);
    QStructuredActivityNode *inStructuredNode() const;
    void setInStructuredNode(QStructuredActivityNode *inStructuredNode);
    QActivityNode *target() const;
    void setTarget(QActivityNode *target);

    // Classes which access read-only opposite properties should be friend
    friend class QActivityGroupPrivate;

protected:
    explicit QActivityEdge(QActivityEdgePrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QActivityEdge) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QActivityEdge) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QActivityEdge) *> *)

QT_END_HEADER

#endif // QTUML_QACTIVITYEDGE_H

