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
#include "uicontroller.h"

#include <QtWidgets/QAction>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>

#include "ui_mainwindow.h"

namespace DuSE
{

UiController::UiController() :
    _lastBottomDockWidgetAdded(0)
{
}

UiController::~UiController()
{
}

bool UiController::initialize()
{
    _mainWindow.populatePluginDialog();
    _mainWindow.showMaximized();
    _mainWindow.readSettings();
    _mainWindow.ui->centralWidget->setCurrentIndex(0);

    return true;
}

void UiController::addDockWidget(Qt::DockWidgetArea area, QString name, QWidget *widget)
{
    QDockWidget *dockWidget = new QDockWidget;
    dockWidget->setWindowTitle(name);
    dockWidget->setObjectName(name);
    dockWidget->setWidget(widget);
    widget->setParent(dockWidget);

    _mainWindow.addDockWidget(area, dockWidget);
    if (area == Qt::BottomDockWidgetArea) {
        if (_lastBottomDockWidgetAdded)
            _mainWindow.tabifyDockWidget(_lastBottomDockWidgetAdded, dockWidget);
        _lastBottomDockWidgetAdded = dockWidget;
    }
}

void UiController::removeDockWidget(const QString &name)
{
    foreach (QObject *child, _mainWindow.children())
        if (child->objectName() == name && qobject_cast<QDockWidget *>(child) != 0)
            delete child;
}

void UiController::addCentralWidgetTab(QWidget *widget, const QString &label, int position, const QIcon &icon)
{
    if (position == -1)
        _mainWindow.ui->centralWidget->addTab(widget, icon, label);
    else
        _mainWindow.ui->centralWidget->insertTab(position, widget, icon, label);
    widget->setObjectName(label);
}

void UiController::removeCentralWidgetTab(const QString &name)
{
    int tabCount = _mainWindow.ui->centralWidget->count();
    for (int i = 0; i < tabCount; ++i)
        if (_mainWindow.ui->centralWidget->widget(i)->objectName() == name) {
            _mainWindow.ui->centralWidget->removeTab(i);
            break;
        }
}

void UiController::addAction(QAction *action, const QString &menuTitle, const QString &toolbarName)
{
    foreach (QMenu *menu, _mainWindow.ui->menuBar->findChildren<QMenu *>())
        if (menu->objectName() == menuTitle)
            menu->addAction(action);
    foreach (QToolBar *toolbar, _mainWindow.findChildren<QToolBar *>())
        if (toolbar->objectName() == toolbarName)
            toolbar->addAction(action);
}

}
