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
#ifndef QUMLACTIVITYPARTITION_H
#define QUMLACTIVITYPARTITION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlActivityGroup>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlActivityPartition;
class QUmlElement;
class QUmlActivityEdge;
class QUmlActivityNode;

class QUmlActivityPartitionPrivate;

class Q_UML_EXPORT QUmlActivityPartition : public QUmlActivityGroup
{
    Q_OBJECT

    Q_PROPERTY(bool isDimension READ isDimension WRITE setDimension RESET unsetDimension)
    Q_PROPERTY(bool isExternal READ isExternal WRITE setExternal RESET unsetExternal)
    Q_PROPERTY(QUmlElement * represents READ represents WRITE setRepresents)
    Q_PROPERTY(QSet<QUmlActivityPartition *> subpartitions READ subpartitions)
    Q_PROPERTY(QUmlActivityPartition * superPartition READ superPartition WRITE setSuperPartition)
    Q_PROPERTY(QSet<QUmlActivityNode *> nodes READ nodes)
    Q_PROPERTY(QSet<QUmlActivityEdge *> edges READ edges)

    Q_DISABLE_COPY(QUmlActivityPartition)
    Q_DECLARE_PRIVATE(QUmlActivityPartition)

public:
    Q_INVOKABLE explicit QUmlActivityPartition(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlActivityPartition();

    // Attributes from QUmlActivityPartition
    Q_INVOKABLE bool isDimension() const;
    Q_INVOKABLE void setDimension(bool isDimension);
    Q_INVOKABLE void unsetDimension();
    Q_INVOKABLE bool isExternal() const;
    Q_INVOKABLE void setExternal(bool isExternal);
    Q_INVOKABLE void unsetExternal();

    // Association ends from QUmlActivityPartition
    Q_INVOKABLE QUmlElement *represents() const;
    Q_INVOKABLE void setRepresents(QUmlElement *represents);
    Q_INVOKABLE QSet<QUmlActivityPartition *> subpartitions() const;
    Q_INVOKABLE void addSubpartition(QUmlActivityPartition *subpartition);
    Q_INVOKABLE void removeSubpartition(QUmlActivityPartition *subpartition);
    Q_INVOKABLE QUmlActivityPartition *superPartition() const;
    Q_INVOKABLE void setSuperPartition(QUmlActivityPartition *superPartition);
    Q_INVOKABLE QSet<QUmlActivityNode *> nodes() const;
    Q_INVOKABLE void addNode(QUmlActivityNode *node);
    Q_INVOKABLE void removeNode(QUmlActivityNode *node);
    Q_INVOKABLE QSet<QUmlActivityEdge *> edges() const;
    Q_INVOKABLE void addEdge(QUmlActivityEdge *edge);
    Q_INVOKABLE void removeEdge(QUmlActivityEdge *edge);

    virtual void setPropertyData();

protected:
    explicit QUmlActivityPartition(QUmlActivityPartitionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLACTIVITYPARTITION_H

