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
#include "dependencyrelationstreemanager.h"

namespace DuSE
{

DependencyRelationsTreeManager::DependencyRelationsTreeManager()
{
}

void DependencyRelationsTreeManager::fillNodesTable(QHash<QString, int> &nodesTable, const QMultiMap<QString, QString> &dependencies)
{
    foreach (QString key, dependencies.uniqueKeys()) {
        nodesTable.insert(key, dependencies.values(key).count());
    }

    foreach (QString value, dependencies.values()) {
        if (!nodesTable.keys().contains(value)) {
            nodesTable.insert(value, 0);
        }
    }
}

void DependencyRelationsTreeManager::orderNodes(const QHash<QString, int> &nodesTable, QStringList &nodeList)
{
    int max = findMax(nodesTable);

    for (int i = 1; i <= max; ++i) {
        foreach (QString node, nodesTable.keys()) {
            int count = nodesTable.value(node);

            if (i == count) {
                nodeList.append(node);
            }
        }
    }
}

int DependencyRelationsTreeManager::findMax(const QHash<QString, int> &nodesTable)
{
    int max = 0;
    foreach (int count, nodesTable.values()) {
        if (count > max) {
            max = count;
        }
    }

    return max;
}

QStringList DependencyRelationsTreeManager::targets(const QStringList &nodesList, const QMultiMap<QString, QString> &dependencies)
{
    QStringList coveredNodes;
    foreach (QString itemNode, nodesList) {
        foreach (QString coveredNode, dependencies.values(itemNode)) {
            if ((coveredNode != itemNode) && !coveredNodes.contains(coveredNode)) {
                coveredNodes.append(coveredNode);
            }
        }
    }

    return coveredNodes;
}

QStringList DependencyRelationsTreeManager::sources(QString node, QMultiMap<QString, QString> dependencies)
{
    QStringList sourceList;

    foreach (QString key, dependencies.keys()) {
        if (dependencies.values(key).contains(node)) {
            sourceList.append(key);
        }
    }

    return sourceList;
}

}
