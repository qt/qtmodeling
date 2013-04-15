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
#ifndef QUMLACTIVITY_H
#define QUMLACTIVITY_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlBehavior>

// Qt includes
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlStructuredActivityNode;
class QUmlVariable;
class QUmlActivityPartition;
class QUmlActivityGroup;
class QUmlActivityEdge;
class QUmlActivityNode;

class QUmlActivityPrivate;

class Q_UML_EXPORT QUmlActivity : public QUmlBehavior
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly RESET unsetReadOnly)
    Q_PROPERTY(bool isSingleExecution READ isSingleExecution WRITE setSingleExecution RESET unsetSingleExecution)
    Q_PROPERTY(QSet<QUmlActivityPartition *> partitions READ partitions)
    Q_PROPERTY(QSet<QUmlActivityNode *> nodes READ nodes)
    Q_PROPERTY(QSet<QUmlVariable *> variables READ variables)
    Q_PROPERTY(QSet<QUmlStructuredActivityNode *> structuredNodes READ structuredNodes)
    Q_PROPERTY(QSet<QUmlActivityGroup *> groups READ groups)
    Q_PROPERTY(QSet<QUmlActivityEdge *> edges READ edges)

    Q_DISABLE_COPY(QUmlActivity)
    Q_DECLARE_PRIVATE(QUmlActivity)

public:
    Q_INVOKABLE explicit QUmlActivity(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlActivity();

    // Attributes from QUmlActivity
    Q_INVOKABLE bool isReadOnly() const;
    Q_INVOKABLE void setReadOnly(bool isReadOnly);
    Q_INVOKABLE void unsetReadOnly();
    Q_INVOKABLE bool isSingleExecution() const;
    Q_INVOKABLE void setSingleExecution(bool isSingleExecution);
    Q_INVOKABLE void unsetSingleExecution();

    // Association ends from QUmlActivity
    Q_INVOKABLE QSet<QUmlActivityPartition *> partitions() const;
    Q_INVOKABLE void addPartition(QUmlActivityPartition *partition);
    Q_INVOKABLE void removePartition(QUmlActivityPartition *partition);
    Q_INVOKABLE QSet<QUmlActivityNode *> nodes() const;
    Q_INVOKABLE void addNode(QUmlActivityNode *node);
    Q_INVOKABLE void removeNode(QUmlActivityNode *node);
    Q_INVOKABLE QSet<QUmlVariable *> variables() const;
    Q_INVOKABLE void addVariable(QUmlVariable *variable);
    Q_INVOKABLE void removeVariable(QUmlVariable *variable);
    Q_INVOKABLE QSet<QUmlStructuredActivityNode *> structuredNodes() const;
    Q_INVOKABLE void addStructuredNode(QUmlStructuredActivityNode *structuredNode);
    Q_INVOKABLE void removeStructuredNode(QUmlStructuredActivityNode *structuredNode);
    Q_INVOKABLE QSet<QUmlActivityGroup *> groups() const;
    Q_INVOKABLE void addGroup(QUmlActivityGroup *group);
    Q_INVOKABLE void removeGroup(QUmlActivityGroup *group);
    Q_INVOKABLE QSet<QUmlActivityEdge *> edges() const;
    Q_INVOKABLE void addEdge(QUmlActivityEdge *edge);
    Q_INVOKABLE void removeEdge(QUmlActivityEdge *edge);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addGroup(QWrappedObjectPointer<QUmlActivityPartition> partition);
    Q_INVOKABLE void removeGroup(QWrappedObjectPointer<QUmlActivityPartition> partition);
    Q_INVOKABLE void addGroup(QWrappedObjectPointer<QUmlStructuredActivityNode> structuredNode);
    Q_INVOKABLE void removeGroup(QWrappedObjectPointer<QUmlStructuredActivityNode> structuredNode);
    Q_INVOKABLE void addNode(QWrappedObjectPointer<QUmlStructuredActivityNode> structuredNode);
    Q_INVOKABLE void removeNode(QWrappedObjectPointer<QUmlStructuredActivityNode> structuredNode);

    virtual void setPropertyData();

protected:
    explicit QUmlActivity(QUmlActivityPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLACTIVITY_H

