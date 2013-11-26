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

#include <duseinterfaces/icore.h>
#include <duseinterfaces/iplugin.h>

#include <QtModeling/QMetaModelPlugin>

#include <QtWidgets/QTreeWidgetItem>

#include <QtCore/QDir>
#include <QtCore/QJsonArray>
#include <QtCore/QJsonObject>
#include <QtCore/QStringList>
#include <QtCore/QPluginLoader>
#include <QtCore/QCoreApplication>

#include <QDebug>

namespace DuSE
{

PluginController::PluginController()
{
}

PluginController::~PluginController()
{
    qDeleteAll(_dusemtPlugins);
}

bool PluginController::initialize()
{
    // Load metamodel plugins
    foreach (QString pluginPath, QCoreApplication::libraryPaths()) {
        QDir pluginsDir(pluginPath);
        pluginsDir.cd("metamodels");
        foreach (const QString &fileName, pluginsDir.entryList(QDir::Files)) {
            QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
            QObject *plugin = loader.instance();
            QMetaModelPlugin *metamodelPlugin = 0;
            if (plugin && (metamodelPlugin = qobject_cast<QMetaModelPlugin *>(plugin))) {
                QJsonObject jsonObject = loader.metaData().value(QStringLiteral("MetaData")).toObject();
                metamodelPlugin->setProperty("metadata", jsonObject);
                _metamodelPlugins.insert(jsonObject.value(QStringLiteral("MetaModelNamespaceUri")).toString(), metamodelPlugin);
            }
        }
    }

    // Load DuSE-MT plugins
    QDir dusePluginsDir(QCoreApplication::applicationDirPath());
    dusePluginsDir.cd("../lib/duse-mt/plugins");
    QHash<QString, QString> invertedDependency;
    QObjectList pluginList;
    foreach (const QFileInfo &subdir, dusePluginsDir.entryInfoList(QDir::Dirs|QDir::NoDotAndDotDot)) {
        QDir dusePluginSubDir(subdir.absoluteFilePath());
        foreach (const QString &fileName, dusePluginSubDir.entryList(QDir::Files)) {
            QPluginLoader loader(dusePluginSubDir.absoluteFilePath(fileName));
            QObject *plugin = loader.instance();
            if (plugin && qobject_cast<DuSE::IPlugin *>(plugin)) {
                QJsonObject jsonObject = loader.metaData().value(QStringLiteral("MetaData")).toObject();
                QJsonArray dependencies = jsonObject.value(QStringLiteral("DependencyList")).toArray();
                plugin->setProperty("metadata", loader.metaData().value(QStringLiteral("MetaData")).toObject());
                plugin->setObjectName(plugin->metaObject()->className());
                int dependencyCount = dependencies.size();
                for (int i = 0; i < dependencyCount; ++i)
                    invertedDependency.insert(dependencies.at(i).toString(), plugin->objectName());
                pluginList << plugin;
            }
            else {
                _errorStrings << "Error when loading plugin" << fileName << ":" << loader.errorString();
            }
        }
    }

    // Initialize DuSE-MT plugins
    ICore *core = ICore::self();
    IPlugin *dusePlugin;
    int previousPluginListSize = 0;
    while (pluginList.size() != previousPluginListSize) {
        previousPluginListSize = pluginList.size();
        foreach (QObject *plugin, pluginList) {
            if (plugin && (dusePlugin = qobject_cast<DuSE::IPlugin *>(plugin))) {
                int dependencyCount = invertedDependency.values(dusePlugin->metaObject()->className()).count();
                int loadedDependencies = 0;
                foreach (const QString &dependency, invertedDependency.values(dusePlugin->metaObject()->className())) {
                    foreach (DuSE::IPlugin *dusePlugin, _dusemtPlugins) {
                        if (dusePlugin->metaObject()->className() == dependency) {
                            ++loadedDependencies;
                            break;
                        }
                    }
                }
                if (loadedDependencies == dependencyCount) {
                    if (dusePlugin->initialize(core)) {
                        _dusemtPlugins << dusePlugin;
                        pluginList.removeAll(plugin);
                    }
                }
            }
        }
    }
    if (!pluginList.isEmpty()) {
        QString errorString = "The following plugins have not been initialized: ";
        foreach (QObject *plugin, pluginList)
            errorString += plugin->objectName() + ", ";
        errorString.chop(2);
        _errorStrings << errorString;
    }

    return _errorStrings.isEmpty() ? true:false;
}

const QHash<QString, QMetaModelPlugin *> &PluginController::metamodelPlugins() const
{
    return _metamodelPlugins;
}

const QList<IPlugin *> &PluginController::dusemtPlugins() const
{
    return _dusemtPlugins;
}

QStringList PluginController::errorStrings() const
{
    return _errorStrings;
}

}
