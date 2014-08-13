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
#include "subgraphdominatorpattern.h"

namespace DuSE
{

SubgraphDominatorPattern::SubgraphDominatorPattern()
{
}

void SubgraphDominatorPattern::executePattern(const QStringList &orderedNodes, QMultiMap<QString, QString> dependencies)
{
    // Para cada nó da lista de nós ordenados
    foreach (QString node, orderedNodes) {

        // Chamar coveredSet
        QStringList coveredNodes = coveredSet(node, dependencies);

        if (coveredNodes.contains(node) && (coveredNodes.count() == 1)) {
        } else {
            // Um Subgraph Dominator foi descoberto. Ele será adicionado na lista e será removido do Hash de dependências.
            _subgraphs.append(coveredNodes);
        }
    }
}

QStringList SubgraphDominatorPattern::coveredSet(QString node, QMultiMap<QString, QString> dependencies)
{
    QStringList list;
    QStringList covered;

    // Criar uma lista e colocar o nó lá dentro
    list.append(node);
    int currentListSize = 0;
    int originalListSize = 0;

    do {
        originalListSize = list.count();

        // Guardar em covered os nós para os quais todos os nós da lista apontam,
        // exceto os próprios nós (ou seja, não considera loops) da lista.
        covered = _treeManager.targets(list, dependencies);

        // Cria uma lista falseOnes
        QStringList falseOnes;
        int currentCoveredSize = 0;
        int originalCoveredSize = 0;
        do {
            originalCoveredSize = covered.count();

            // Tirar uma cópia de covered e guardar em both
            QStringList both = covered;

            // Adicionar a lista em both
            foreach (QString itemNode, list) {
                if (!both.contains(itemNode)) {
                    both.append(list);
                }
            }

            foreach (QString coveredNode, covered) {
                bool nodeIsFalseOne = false;
                QStringList sourceList = _treeManager.sources(coveredNode, dependencies);
                foreach (QString source, sourceList) {
                    if (!both.contains(source)) {
                        nodeIsFalseOne = true;
                        break;
                    }
                }

                if (nodeIsFalseOne == true) {
                    falseOnes.append(coveredNode);
                }
            }

            foreach (QString falseOne, falseOnes) {
                covered.removeOne(falseOne);
            }
            currentCoveredSize = covered.count();
        } while (originalCoveredSize != currentCoveredSize);

        foreach (QString coveredNode, covered) {
            if (!list.contains(coveredNode)) {
                list.append(coveredNode);
            }
        }
        currentListSize = list.count();
    } while (originalListSize != currentListSize);

    return list;
}

QStringList SubgraphDominatorPattern::orphanNodes(const QList<QStringList> &subgraphs, QMultiMap<QString, QString> dependencies)
{
    QStringList orphanContainer;
    QStringList allNodes;

    foreach (QString dependent, dependencies.uniqueKeys()) {
        if (!allNodes.contains(dependent)) {
            allNodes.append(dependent);
        }
        foreach (QString dependency, dependencies.values(dependent)) {
            if (!allNodes.contains(dependency)) {
                allNodes.append(dependency);
            }
        }
    }

    foreach (QString node, allNodes) {
        bool nodeIsOrphan = true;

        foreach (QStringList subgraph, subgraphs) {
            if (subgraph.contains(node)) {
                nodeIsOrphan = false;
                break;
            }
        }

        if (nodeIsOrphan == true) {
            if (!orphanContainer.contains(node)) {
                orphanContainer.append(node);
            }
        }
    }

    return orphanContainer;
}

QList<QStringList> SubgraphDominatorPattern::subgraphs()
{
    return _subgraphs;
}

}
