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
#include <QtCore/QObject>
#include <QtUml/QActivityGroup>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QActivityPartitionPrivate;
class QActivityEdge;
class QActivityNode;
class QElement;

class Q_UML_EXPORT QActivityPartition : public QObject, public QActivityGroup
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From QActivityGroup
    Q_PROPERTY(QActivity * inActivity READ inActivity WRITE setInActivity)
    Q_PROPERTY(const QSet<QActivityNode *> * containedNodes READ containedNodes)
    Q_PROPERTY(const QSet<QActivityGroup *> * subgroups READ subgroups)
    Q_PROPERTY(const QSet<QActivityEdge *> * containedEdges READ containedEdges)
    Q_PROPERTY(QActivityGroup * superGroup READ superGroup)

    // From QActivityPartition
    Q_PROPERTY(bool isDimension READ isDimension WRITE setDimension)
    Q_PROPERTY(bool isExternal READ isExternal WRITE setExternal)
    Q_PROPERTY(QElement * represents READ represents WRITE setRepresents)
    Q_PROPERTY(const QSet<QActivityPartition *> * subpartitions READ subpartitions)
    Q_PROPERTY(QActivityPartition * superPartition READ superPartition WRITE setSuperPartition)
    Q_PROPERTY(const QSet<QActivityNode *> * nodes READ nodes)
    Q_PROPERTY(const QSet<QActivityEdge *> * edges READ edges)

    Q_DISABLE_COPY(QActivityPartition)
    QTUML_DECLARE_PRIVATE(QActivityPartition)

public:
    explicit QActivityPartition(QObject *parent = 0);
    virtual ~QActivityPartition();

    // Attributes
    bool isDimension() const;
    void setDimension(bool isDimension);
    bool isExternal() const;
    void setExternal(bool isExternal);

    // Association-ends
    QElement *represents() const;
    void setRepresents(const QElement *represents);
    const QSet<QActivityPartition *> *subpartitions() const;
    void addSubpartition(const QActivityPartition *subpartition);
    void removeSubpartition(const QActivityPartition *subpartition);
    QActivityPartition *superPartition() const;
    void setSuperPartition(const QActivityPartition *superPartition);
    const QSet<QActivityNode *> *nodes() const;
    void addNode(const QActivityNode *node);
    void removeNode(const QActivityNode *node);
    const QSet<QActivityEdge *> *edges() const;
    void addEdge(const QActivityEdge *edge);
    void removeEdge(const QActivityEdge *edge);

protected:
    explicit QActivityPartition(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QActivityPartition) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QActivityPartition) *> *)

QT_END_HEADER

#endif // QTUML_QACTIVITYPARTITION_H

