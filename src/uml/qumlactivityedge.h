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
#ifndef QUMLACTIVITYEDGE_H
#define QUMLACTIVITYEDGE_H

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
class QUmlInterruptibleActivityRegion;
class QUmlActivityNode;
class QUmlStructuredActivityNode;
class QUmlActivityPartition;
class QUmlActivity;
class QUmlActivityGroup;
class QUmlValueSpecification;

class QUmlActivityEdgePrivate;

class Q_UML_EXPORT QUmlActivityEdge : public QUmlRedefinableElement
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QUmlActivityNode * source READ source WRITE setSource)
    Q_PROPERTY(QSet<QUmlActivityEdge *> redefinedEdges READ redefinedEdges)
    Q_PROPERTY(QSet<QUmlActivityGroup *> inGroup READ inGroup)
    Q_PROPERTY(QUmlValueSpecification * guard READ guard WRITE setGuard)
    Q_PROPERTY(QSet<QUmlActivityPartition *> inPartition READ inPartition)
    Q_PROPERTY(QUmlActivity * activity READ activity WRITE setActivity)
    Q_PROPERTY(QUmlInterruptibleActivityRegion * interrupts READ interrupts WRITE setInterrupts)
    Q_PROPERTY(QUmlValueSpecification * weight READ weight WRITE setWeight)
    Q_PROPERTY(QUmlStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QUmlActivityNode * target READ target WRITE setTarget)

    Q_DISABLE_COPY(QUmlActivityEdge)
    Q_DECLARE_PRIVATE(QUmlActivityEdge)

public:
    Q_INVOKABLE explicit QUmlActivityEdge(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlActivityEdge();

    // Association ends from QUmlActivityEdge
    Q_INVOKABLE QUmlActivityNode *source() const;
    Q_INVOKABLE void setSource(QUmlActivityNode *source);
    Q_INVOKABLE QSet<QUmlActivityEdge *> redefinedEdges() const;
    Q_INVOKABLE void addRedefinedEdge(QUmlActivityEdge *redefinedEdge);
    Q_INVOKABLE void removeRedefinedEdge(QUmlActivityEdge *redefinedEdge);
    Q_INVOKABLE QSet<QUmlActivityGroup *> inGroup() const;
    Q_INVOKABLE QUmlValueSpecification *guard() const;
    Q_INVOKABLE void setGuard(QUmlValueSpecification *guard);
    Q_INVOKABLE QSet<QUmlActivityPartition *> inPartition() const;
    Q_INVOKABLE void addInPartition(QUmlActivityPartition *inPartition);
    Q_INVOKABLE void removeInPartition(QUmlActivityPartition *inPartition);
    Q_INVOKABLE QUmlActivity *activity() const;
    Q_INVOKABLE void setActivity(QUmlActivity *activity);
    Q_INVOKABLE QUmlInterruptibleActivityRegion *interrupts() const;
    Q_INVOKABLE void setInterrupts(QUmlInterruptibleActivityRegion *interrupts);
    Q_INVOKABLE QUmlValueSpecification *weight() const;
    Q_INVOKABLE void setWeight(QUmlValueSpecification *weight);
    Q_INVOKABLE QUmlStructuredActivityNode *inStructuredNode() const;
    Q_INVOKABLE void setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode);
    Q_INVOKABLE QUmlActivityNode *target() const;
    Q_INVOKABLE void setTarget(QUmlActivityNode *target);

    virtual void setPropertyData();

    // Classes which access read-only opposite properties should be friend
    friend class QUmlActivityGroupPrivate;

protected:
    explicit QUmlActivityEdge(QUmlActivityEdgePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLACTIVITYEDGE_H

