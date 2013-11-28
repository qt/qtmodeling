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
#include "modelinspectorplugin.h"

#include <duseinterfaces/iuicontroller.h>
#include <duseinterfaces/iprojectcontroller.h>

#include <QtModelingWidgets/QModelingObjectView>
#include <QtModelingWidgets/QModelingObjectModel>
#include <QtModelingWidgets/QModelingObjectPropertyEditor>
#include <QtModelingWidgets/QModelingObjectPropertyModel>

#include <QtModeling/QModelingObject>

#include <QtWidgets/QListView>

#include <QtCore/QStringListModel>

ModelInspectorPlugin::ModelInspectorPlugin(QObject *parent) :
    DuSE::IPlugin(parent),
    _modelingObjectView(new QModelingObjectView),
    _modelingObjectModel(new QModelingObjectModel),
    _propertyEditor(new QModelingObjectPropertyEditor),
    _propertyModel(new QModelingObjectPropertyModel(_modelingObjectModel)),
    _outputIssues(new QListView)
{
    _modelingObjectView->setModel(_modelingObjectModel);
    _propertyEditor->setModel(_propertyModel);

    _outputIssues->setAlternatingRowColors(true);
    QPalette outputIssuesPallete = _outputIssues->palette();
    outputIssuesPallete.setColor(QPalette::Active, QPalette::Base, QColor(255, 255, 255));
    outputIssuesPallete.setColor(QPalette::Inactive, QPalette::Base, QColor(255, 255, 255));
    outputIssuesPallete.setColor(QPalette::Active, QPalette::AlternateBase, QColor(225, 225, 225));
    outputIssuesPallete.setColor(QPalette::Inactive, QPalette::AlternateBase, QColor(225, 225, 225));
    _outputIssues->setPalette(outputIssuesPallete);
}

ModelInspectorPlugin::~ModelInspectorPlugin()
{
    delete _outputIssues->model();
    delete _outputIssues;
}

bool ModelInspectorPlugin::initialize()
{
    DuSE::ICore::self()->uiController()->addDockWidget(Qt::LeftDockWidgetArea, tr("Model Inspector"), _modelingObjectView);
    DuSE::ICore::self()->uiController()->addDockWidget(Qt::RightDockWidgetArea, tr("Property Editor"), _propertyEditor);
    DuSE::ICore::self()->uiController()->addDockWidget(Qt::BottomDockWidgetArea, tr("Issues"), _outputIssues);

    connect(DuSE::ICore::self()->projectController(), SIGNAL(modelOpened(QList<QModelingObject*>)), _modelingObjectModel, SLOT(setModelingObjects(QList<QModelingObject*>)));
    connect(DuSE::ICore::self()->projectController(), SIGNAL(modelOpened(QList<QModelingObject*>)), this, SLOT(populateOutputIssues()));

    connect(DuSE::ICore::self()->projectController(), SIGNAL(modelClosed()), _modelingObjectModel, SLOT(clear()));
    connect(DuSE::ICore::self()->projectController(), SIGNAL(modelClosed()), _propertyModel, SLOT(clear()));
    connect(DuSE::ICore::self()->projectController(), SIGNAL(modelClosed()), this, SLOT(populateOutputIssues()));

    connect(_modelingObjectView, &QModelingObjectView::modelingObjectChanged, _propertyModel, &QModelingObjectPropertyModel::setModelingObject);
    connect(_modelingObjectView, SIGNAL(modelingObjectChanged(QModelingObject*)), DuSE::ICore::self()->uiController(), SIGNAL(currentModelingObjectChanged(QModelingObject*)));

    connect(_propertyModel, &QModelingObjectPropertyModel::indexChanged, _modelingObjectModel, &QModelingObjectModel::updateIndex);
    connect(DuSE::ICore::self()->uiController(), SIGNAL(updateCurrentModelingObject()), _modelingObjectView, SLOT(updateSelected()));
    connect(_modelingObjectView, SIGNAL(addToView(QObject*,QQuickItem*)), DuSE::ICore::self()->uiController(), SIGNAL(addToView(QObject*,QQuickItem*)));

    return true;
}

void ModelInspectorPlugin::populateOutputIssues()
{
    delete _outputIssues->model();
    _outputIssues->setModel(new QStringListModel(DuSE::ICore::self()->projectController()->errorStrings()));
}

