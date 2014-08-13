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
#include "acdcarchitecturerecoveryalgorithmplugin.h"

#include <QDebug>

namespace DuSE
{

AcdcArchitectureRecoveryAlgorithmPlugin::AcdcArchitectureRecoveryAlgorithmPlugin(QObject *parent)
    : IPlugin(parent), _dependencyRelationsTreeManager(new DependencyRelationsTreeManager),
      _subgraphDominatorPattern(new SubgraphDominatorPattern)
{
    _name = "ACDC";
}

bool AcdcArchitectureRecoveryAlgorithmPlugin::initialize()
{
    return true;
}

void AcdcArchitectureRecoveryAlgorithmPlugin::run()
{
    _dependencyRelationsTreeManager->fillNodesTable(_nodesTable, _dependencyRelations);
    _dependencyRelationsTreeManager->orderNodes(_nodesTable, _orderedNodes);
    _subgraphDominatorPattern->executePattern(_orderedNodes, _dependencyRelations);
    _subgraphs = _subgraphDominatorPattern->subgraphs();
    _orphanNodes = _subgraphDominatorPattern->orphanNodes(_subgraphs, _dependencyRelations);
    _subgraphs.append(_orphanNodes);
}

void AcdcArchitectureRecoveryAlgorithmPlugin::setDependencyRelations(QMultiMap<QString, QString> m_dependencyRelations)
{
    _dependencyRelations = m_dependencyRelations;
}

QList<QStringList> AcdcArchitectureRecoveryAlgorithmPlugin::subgraphs()
{
    return _subgraphs;
}

void AcdcArchitectureRecoveryAlgorithmPlugin::setDevelopmentPlatform(IDevelopmentPlatform *m_developmentPlatform)
{
    _developmentPlatform = m_developmentPlatform;
}

void AcdcArchitectureRecoveryAlgorithmPlugin::setModelingNotation(IModelingNotation *m_modelingNotation)
{
    _modelingNotation = m_modelingNotation;
}

IDevelopmentPlatform *AcdcArchitectureRecoveryAlgorithmPlugin::developmentPlatform()
{
    return _developmentPlatform;
}

IModelingNotation *AcdcArchitectureRecoveryAlgorithmPlugin::modelingNotation()
{
    return _modelingNotation;
}

}
