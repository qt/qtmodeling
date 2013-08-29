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
#ifndef UMLACTIVITY_H
#define UMLACTIVITY_H

#include <QtUml/QtUmlGlobal>

#include "private/umlbehavior_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlActivityEdge;
class UmlActivityGroup;
class UmlActivityNode;
class UmlActivityPartition;
class UmlStructuredActivityNode;
class UmlVariable;

class Q_UML_EXPORT UmlActivity : public UmlBehavior
{
public:
    Q_DECL_HIDDEN explicit UmlActivity();

    // Owned attributes
    const QSet<UmlActivityEdge *> edge() const;
    void addEdge(UmlActivityEdge *edge);
    void removeEdge(UmlActivityEdge *edge);
    const QSet<UmlActivityGroup *> group() const;
    void addGroup(UmlActivityGroup *group);
    void removeGroup(UmlActivityGroup *group);
    bool isReadOnly() const;
    void setReadOnly(bool isReadOnly);
    bool isSingleExecution() const;
    void setSingleExecution(bool isSingleExecution);
    const QSet<UmlActivityNode *> node() const;
    void addNode(UmlActivityNode *node);
    void removeNode(UmlActivityNode *node);
    const QSet<UmlActivityPartition *> partition() const;
    void addPartition(UmlActivityPartition *partition);
    void removePartition(UmlActivityPartition *partition);
    const QSet<UmlStructuredActivityNode *> structuredNode() const;
    void addStructuredNode(UmlStructuredActivityNode *structuredNode);
    void removeStructuredNode(UmlStructuredActivityNode *structuredNode);
    const QSet<UmlVariable *> variable() const;
    void addVariable(UmlVariable *variable);
    void removeVariable(UmlVariable *variable);

protected:
    QSet<UmlActivityEdge *> _edge;
    QSet<UmlActivityGroup *> _group;
    bool _isReadOnly;
    bool _isSingleExecution;
    QSet<UmlActivityNode *> _node;
    QSet<UmlActivityPartition *> _partition;
    QSet<UmlStructuredActivityNode *> _structuredNode;
    QSet<UmlVariable *> _variable;
};

#endif // UMLACTIVITY_H

