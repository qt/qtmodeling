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

#include <QtUml/QUmlBehavior>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActivityEdge;
class QUmlActivityGroup;
class QUmlActivityNode;
class QUmlActivityPartition;
class QUmlStructuredActivityNode;
class QUmlVariable;

class QUmlActivityPrivate;
class Q_UML_EXPORT QUmlActivity : public QUmlBehavior
{
public:
    QUmlActivity(bool create_d_ptr = true);

    // Owned attributes
    QSet<QUmlActivityEdge *> edge() const;
    void addEdge(QUmlActivityEdge *edge);
    void removeEdge(QUmlActivityEdge *edge);
    QSet<QUmlActivityGroup *> group() const;
    void addGroup(QUmlActivityGroup *group);
    void removeGroup(QUmlActivityGroup *group);
    bool isReadOnly() const;
    void setReadOnly(bool isReadOnly);
    bool isSingleExecution() const;
    void setSingleExecution(bool isSingleExecution);
    QSet<QUmlActivityNode *> node() const;
    void addNode(QUmlActivityNode *node);
    void removeNode(QUmlActivityNode *node);
    QSet<QUmlActivityPartition *> partition() const;
    void addPartition(QUmlActivityPartition *partition);
    void removePartition(QUmlActivityPartition *partition);
    QSet<QUmlStructuredActivityNode *> structuredNode() const;
    void addStructuredNode(QUmlStructuredActivityNode *structuredNode);
    void removeStructuredNode(QUmlStructuredActivityNode *structuredNode);
    QSet<QUmlVariable *> variable() const;
    void addVariable(QUmlVariable *variable);
    void removeVariable(QUmlVariable *variable);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLACTIVITY_H

