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
#ifndef QUMLACTIVITYEDGE_H
#define QUMLACTIVITYEDGE_H

#include <QtUml/QtUmlGlobal>

#include <QtUml/QUmlRedefinableElement>


QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActivity;
class QUmlActivityGroup;
class QUmlActivityNode;
class QUmlActivityPartition;
class QUmlInterruptibleActivityRegion;
class QUmlStructuredActivityNode;
class QUmlValueSpecification;

class Q_UML_EXPORT QUmlActivityEdge : public QUmlRedefinableElement
{
public:
    virtual ~QUmlActivityEdge();

    Q_DECL_HIDDEN QModelingObject *clone() const;

    // Owned attributes
    QUmlActivity *activity() const;
    void setActivity(QUmlActivity *activity);
    QUmlValueSpecification *guard() const;
    void setGuard(QUmlValueSpecification *guard);
    const QSet<QUmlActivityGroup *> inGroups() const;
    Q_DECL_HIDDEN void addInGroup(QUmlActivityGroup *inGroup);
    Q_DECL_HIDDEN void removeInGroup(QUmlActivityGroup *inGroup);
    const QSet<QUmlActivityPartition *> inPartitions() const;
    void addInPartition(QUmlActivityPartition *inPartition);
    void removeInPartition(QUmlActivityPartition *inPartition);
    QUmlStructuredActivityNode *inStructuredNode() const;
    void setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode);
    QUmlInterruptibleActivityRegion *interrupts() const;
    void setInterrupts(QUmlInterruptibleActivityRegion *interrupts);
    const QSet<QUmlActivityEdge *> redefinedEdges() const;
    void addRedefinedEdge(QUmlActivityEdge *redefinedEdge);
    void removeRedefinedEdge(QUmlActivityEdge *redefinedEdge);
    QUmlActivityNode *source() const;
    void setSource(QUmlActivityNode *source);
    QUmlActivityNode *target() const;
    void setTarget(QUmlActivityNode *target);
    QUmlValueSpecification *weight() const;
    void setWeight(QUmlValueSpecification *weight);

protected:
    explicit QUmlActivityEdge();

    QUmlActivity *_activity;
    QUmlValueSpecification *_guard;
    QSet<QUmlActivityGroup *> _inGroups;
    QSet<QUmlActivityPartition *> _inPartitions;
    QUmlStructuredActivityNode *_inStructuredNode;
    QUmlInterruptibleActivityRegion *_interrupts;
    QSet<QUmlActivityEdge *> _redefinedEdges;
    QUmlActivityNode *_source;
    QUmlActivityNode *_target;
    QUmlValueSpecification *_weight;

    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QUmlActivityEdge) *)

QT_END_HEADER

#endif // QUMLACTIVITYEDGE_H

