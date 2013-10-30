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
#include "designspaceexplorerplugin.h"

#include <interfaces/iuicontroller.h>

#include <QtQuick/QQuickView>

#include <QtWidgets/QWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

DesignSpaceExplorerPlugin::DesignSpaceExplorerPlugin(QObject *parent) :
    DuSE::IPlugin(parent),
    _currentDesignSpaceLocationQuickView(new QQuickView),
    _metricsQuickView(new QQuickView),
    _designSpaceExplorer(new QTableWidget)
{
}

bool DesignSpaceExplorerPlugin::initialize(DuSE::ICore *core)
{
    _currentDesignSpaceLocationQuickView->setSource(QUrl("qrc:/designspaceexplorer/currentdesignspacelocation.qml"));
    _currentDesignSpaceLocationQuickView->setResizeMode(QQuickView::SizeRootObjectToView);

    core->uiController()->addCentralWidgetTab(QWidget::createWindowContainer(_currentDesignSpaceLocationQuickView), "Current Design Space Location");

    _metricsQuickView->setSource(QUrl("qrc:/designspaceexplorer/qualitymetrics/qualitymetrics.qml"));
    _metricsQuickView->setResizeMode(QQuickView::SizeRootObjectToView);

    core->uiController()->addDockWidget(Qt::LeftDockWidgetArea, tr("Quality Metrics"), QWidget::createWindowContainer(_metricsQuickView));

    _designSpaceExplorer->setAlternatingRowColors(true);
    _designSpaceExplorer->horizontalHeader()->setStretchLastSection(true);
    _designSpaceExplorer->verticalHeader()->setVisible(false);
    _designSpaceExplorer->setColumnCount(3);
    _designSpaceExplorer->setHorizontalHeaderItem(0, new QTableWidgetItem(tr("Design Dimension")));
    _designSpaceExplorer->setHorizontalHeaderItem(1, new QTableWidgetItem(tr("Dimension Instance Target")));
    _designSpaceExplorer->setHorizontalHeaderItem(2, new QTableWidgetItem(tr("Variation Point")));
    _designSpaceExplorer->resizeColumnToContents(0);
    _designSpaceExplorer->resizeColumnToContents(1);
    _designSpaceExplorer->resizeColumnToContents(2);

    core->uiController()->addDockWidget(Qt::RightDockWidgetArea, "Design Space Explorer", _designSpaceExplorer);

    return true;
}

