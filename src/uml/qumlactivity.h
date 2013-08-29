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

#include <QtCore/QObject>
#include "private/umlactivity_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActivityEdge;
class QUmlActivityGroup;
class QUmlActivityNode;
class QUmlActivityPartition;
class QUmlStructuredActivityNode;
class QUmlVariable;

class Q_UML_EXPORT QUmlActivity : public QObject, public UmlActivity
{
    Q_OBJECT
    Q_PROPERTY(QSet<QUmlActivityEdge *> edge READ edge)
    Q_PROPERTY(QSet<QUmlActivityGroup *> group READ group)
    Q_PROPERTY(bool isReadOnly READ isReadOnly)
    Q_PROPERTY(bool isSingleExecution READ isSingleExecution)
    Q_PROPERTY(QSet<QUmlActivityNode *> node READ node)
    Q_PROPERTY(QSet<QUmlActivityPartition *> partition READ partition)
    Q_PROPERTY(QSet<QUmlStructuredActivityNode *> structuredNode READ structuredNode)
    Q_PROPERTY(QSet<QUmlVariable *> variable READ variable)

public:
    Q_INVOKABLE explicit QUmlActivity(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QSet<QUmlActivityEdge *> edge() const;
    Q_INVOKABLE void addEdge(UmlActivityEdge *edge);
    Q_INVOKABLE void removeEdge(UmlActivityEdge *edge);
    Q_INVOKABLE const QSet<QUmlActivityGroup *> group() const;
    Q_INVOKABLE void addGroup(UmlActivityGroup *group);
    Q_INVOKABLE void removeGroup(UmlActivityGroup *group);
    Q_INVOKABLE bool isReadOnly() const;
    Q_INVOKABLE void setReadOnly(bool isReadOnly);
    Q_INVOKABLE bool isSingleExecution() const;
    Q_INVOKABLE void setSingleExecution(bool isSingleExecution);
    Q_INVOKABLE const QSet<QUmlActivityNode *> node() const;
    Q_INVOKABLE void addNode(UmlActivityNode *node);
    Q_INVOKABLE void removeNode(UmlActivityNode *node);
    Q_INVOKABLE const QSet<QUmlActivityPartition *> partition() const;
    Q_INVOKABLE void addPartition(UmlActivityPartition *partition);
    Q_INVOKABLE void removePartition(UmlActivityPartition *partition);
    Q_INVOKABLE const QSet<QUmlStructuredActivityNode *> structuredNode() const;
    Q_INVOKABLE void addStructuredNode(UmlStructuredActivityNode *structuredNode);
    Q_INVOKABLE void removeStructuredNode(UmlStructuredActivityNode *structuredNode);
    Q_INVOKABLE const QSet<QUmlVariable *> variable() const;
    Q_INVOKABLE void addVariable(UmlVariable *variable);
    Q_INVOKABLE void removeVariable(UmlVariable *variable);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlActivity *)
Q_DECLARE_METATYPE(QList<QUmlActivity *> *)
Q_DECLARE_METATYPE(QSet<QUmlActivity *> *)

QT_END_HEADER

#endif // QUMLACTIVITY_H

