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
#ifndef QTUML_QACTIVITY_H
#define QTUML_QACTIVITY_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QBehavior>

// Qt includes
#include <QtCore/QSet>

#include <QtUml/QUmlPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QStructuredActivityNode;
class QVariable;
class QActivityPartition;
class QActivityGroup;
class QActivityEdge;
class QActivityNode;

class QActivityPrivate;

class Q_UML_EXPORT QActivity : public QBehavior
{
    Q_OBJECT

    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly)
    Q_PROPERTY(bool isSingleExecution READ isSingleExecution WRITE setSingleExecution)
    Q_PROPERTY(const QSet<QActivityPartition *> * partitions READ partitions)
    Q_PROPERTY(const QSet<QActivityNode *> * nodes READ nodes)
    Q_PROPERTY(const QSet<QVariable *> * variables READ variables)
    Q_PROPERTY(const QSet<QStructuredActivityNode *> * structuredNodes READ structuredNodes)
    Q_PROPERTY(const QSet<QActivityGroup *> * groups READ groups)
    Q_PROPERTY(const QSet<QActivityEdge *> * edges READ edges)

    Q_DISABLE_COPY(QActivity)
    Q_DECLARE_PRIVATE(QActivity)

public:
    Q_INVOKABLE explicit QActivity(QUmlObject *parent = 0, QUmlObject *wrapper = 0);
    virtual ~QActivity();

    // Attributes from QActivity
    Q_INVOKABLE bool isReadOnly() const;
    Q_INVOKABLE void setReadOnly(bool isReadOnly);
    Q_INVOKABLE bool isSingleExecution() const;
    Q_INVOKABLE void setSingleExecution(bool isSingleExecution);

    // Association ends from QActivity
    Q_INVOKABLE const QSet<QActivityPartition *> *partitions() const;
    Q_INVOKABLE void addPartition(QActivityPartition *partition);
    Q_INVOKABLE void removePartition(QActivityPartition *partition);
    Q_INVOKABLE const QSet<QActivityNode *> *nodes() const;
    Q_INVOKABLE void addNode(QActivityNode *node);
    Q_INVOKABLE void removeNode(QActivityNode *node);
    Q_INVOKABLE const QSet<QVariable *> *variables() const;
    Q_INVOKABLE void addVariable(QVariable *variable);
    Q_INVOKABLE void removeVariable(QVariable *variable);
    Q_INVOKABLE const QSet<QStructuredActivityNode *> *structuredNodes() const;
    Q_INVOKABLE void addStructuredNode(QStructuredActivityNode *structuredNode);
    Q_INVOKABLE void removeStructuredNode(QStructuredActivityNode *structuredNode);
    Q_INVOKABLE const QSet<QActivityGroup *> *groups() const;
    Q_INVOKABLE void addGroup(QActivityGroup *group);
    Q_INVOKABLE void removeGroup(QActivityGroup *group);
    Q_INVOKABLE const QSet<QActivityEdge *> *edges() const;
    Q_INVOKABLE void addEdge(QActivityEdge *edge);
    Q_INVOKABLE void removeEdge(QActivityEdge *edge);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addGroup(QUmlPointer<QActivityPartition> partition);
    Q_INVOKABLE void removeGroup(QUmlPointer<QActivityPartition> partition);
    Q_INVOKABLE void addGroup(QUmlPointer<QStructuredActivityNode> structuredNode);
    Q_INVOKABLE void removeGroup(QUmlPointer<QStructuredActivityNode> structuredNode);
    Q_INVOKABLE void addNode(QUmlPointer<QStructuredActivityNode> structuredNode);
    Q_INVOKABLE void removeNode(QUmlPointer<QStructuredActivityNode> structuredNode);

protected:
    explicit QActivity(QActivityPrivate &dd, QUmlObject *parent = 0, QUmlObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QActivity) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QActivity) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QActivity) *> *)

QT_END_HEADER

#endif // QTUML_QACTIVITY_H

