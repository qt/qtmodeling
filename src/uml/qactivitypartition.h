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
#ifndef QTUML_QACTIVITYPARTITION_H
#define QTUML_QACTIVITYPARTITION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QActivityGroup>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QElement;
class QActivityEdge;
class QActivityNode;

class QActivityPartitionPrivate;

class Q_UML_EXPORT QActivityPartition : public QActivityGroup
{
    Q_OBJECT

    Q_PROPERTY(bool isDimension READ isDimension WRITE setDimension)
    Q_PROPERTY(bool isExternal READ isExternal WRITE setExternal)
    Q_PROPERTY(QElement * represents READ represents WRITE setRepresents)
    Q_PROPERTY(const QSet<QActivityPartition *> * subpartitions READ subpartitions)
    Q_PROPERTY(QActivityPartition * superPartition READ superPartition WRITE setSuperPartition)
    Q_PROPERTY(const QSet<QActivityNode *> * nodes READ nodes)
    Q_PROPERTY(const QSet<QActivityEdge *> * edges READ edges)

    Q_DISABLE_COPY(QActivityPartition)
    Q_DECLARE_PRIVATE(QActivityPartition)

public:
    Q_INVOKABLE explicit QActivityPartition(QUmlObject *parent = 0, QUmlObject *wrapper = 0);
    virtual ~QActivityPartition();

    // Attributes from QActivityPartition
    Q_INVOKABLE bool isDimension() const;
    Q_INVOKABLE void setDimension(bool isDimension);
    Q_INVOKABLE bool isExternal() const;
    Q_INVOKABLE void setExternal(bool isExternal);

    // Association ends from QActivityPartition
    Q_INVOKABLE QElement *represents() const;
    Q_INVOKABLE void setRepresents(QElement *represents);
    Q_INVOKABLE const QSet<QActivityPartition *> *subpartitions() const;
    Q_INVOKABLE void addSubpartition(QActivityPartition *subpartition);
    Q_INVOKABLE void removeSubpartition(QActivityPartition *subpartition);
    Q_INVOKABLE QActivityPartition *superPartition() const;
    Q_INVOKABLE void setSuperPartition(QActivityPartition *superPartition);
    Q_INVOKABLE const QSet<QActivityNode *> *nodes() const;
    Q_INVOKABLE void addNode(QActivityNode *node);
    Q_INVOKABLE void removeNode(QActivityNode *node);
    Q_INVOKABLE const QSet<QActivityEdge *> *edges() const;
    Q_INVOKABLE void addEdge(QActivityEdge *edge);
    Q_INVOKABLE void removeEdge(QActivityEdge *edge);

protected:
    explicit QActivityPartition(QActivityPartitionPrivate &dd, QUmlObject *parent = 0, QUmlObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QActivityPartition) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QActivityPartition) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QActivityPartition) *> *)

QT_END_HEADER

#endif // QTUML_QACTIVITYPARTITION_H

