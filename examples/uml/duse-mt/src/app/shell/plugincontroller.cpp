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
#include "plugincontroller.h"

#include <interfaces/icore.h>
#include <interfaces/iplugin.h>

#include <QtModeling/QMetaModelPlugin>

#include <QtWidgets/QTreeWidgetItem>

#include <QtCore/QDir>
#include <QtCore/QStringList>
#include <QtCore/QPluginLoader>
#include <QtCore/QCoreApplication>

namespace DuSE
{

PluginController::PluginController()
{
}

PluginController::~PluginController()
{
}

bool PluginController::initialize()
{
    ICore *core = ICore::self();
    IPlugin *dusePlugin;
    foreach (QString pluginPath, QCoreApplication::libraryPaths()) {
        QDir pluginsDir(pluginPath);
        pluginsDir.cd("metamodels");
        foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
            QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
            QObject *plugin = loader.instance();
            QMetaModelPlugin *metaModelPlugin = 0;
            if (plugin && (metaModelPlugin = qobject_cast<QMetaModelPlugin *>(plugin))) {
                QJsonObject jsonObject = loader.metaData().value(QString::fromLatin1("MetaData")).toObject();
                _metamodelPlugins.insert(jsonObject.value(QString::fromLatin1("MetaModelNamespaceUri")).toString(), QPair<QMetaModelPlugin *, QJsonObject>(metaModelPlugin, jsonObject));
            }
        }
    }
    QDir dusePluginsDir(QCoreApplication::applicationDirPath());
    dusePluginsDir.cd("../lib/duse-mt/plugins");
    const QFileInfoList subdirs = dusePluginsDir.entryInfoList(QDir::Dirs|QDir::NoDotAndDotDot);
    foreach (const QFileInfo &subdir, subdirs) {
        QDir dusePluginSubDir(subdir.absoluteFilePath());
        foreach (QString fileName, dusePluginSubDir.entryList(QDir::Files)) {
            QPluginLoader loader(dusePluginSubDir.absoluteFilePath(fileName));
            QObject *plugin = loader.instance();
            if (plugin && (dusePlugin = qobject_cast<DuSE::IPlugin *>(plugin))) {
                dusePlugin->initialize(core);
                QJsonObject jsonObject = loader.metaData().value(QString::fromLatin1("MetaData")).toObject();
                _dusemtPlugins << QPair<DuSE::IPlugin *, QJsonObject>(dusePlugin, jsonObject);
            }
            else
                _errorStrings << "Error when loading plugin" << fileName << ":" << loader.errorString();
        }
    }
    return _errorStrings.isEmpty() ? true:false;
}

const QHash<QString, QPair<QMetaModelPlugin *, QJsonObject> > &PluginController::metamodelPlugins() const
{
    return _metamodelPlugins;
}

const QList<QPair<IPlugin *, QJsonObject> > &PluginController::dusemtPlugins() const
{
    return _dusemtPlugins;
}

QStringList PluginController::errorStrings() const
{
    return _errorStrings;
}

}
