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
                QJsonObject jsonObject = loader.metaData().value(QStringLiteral("MetaData")).toObject();
                _metamodelPlugins.insert(jsonObject.value(QStringLiteral("MetaModelNamespaceUri")).toString(), DuSE::IPluginController::MetamodelPluginPair(metaModelPlugin, jsonObject));
            }
        }
    }
    QDir dusePluginsDir(QCoreApplication::applicationDirPath());
    dusePluginsDir.cd("../lib/duse-mt/plugins");
    const QFileInfoList subdirs = dusePluginsDir.entryInfoList(QDir::Dirs|QDir::NoDotAndDotDot);
    QHash<QString, QString> invertedDependency;
    QStringList pluginList;
    foreach (const QFileInfo &subdir, subdirs) {
        QDir dusePluginSubDir(subdir.absoluteFilePath());
        foreach (QString fileName, dusePluginSubDir.entryList(QDir::Files)) {
            QPluginLoader loader(dusePluginSubDir.absoluteFilePath(fileName));
            QObject *plugin = loader.instance();
            if (plugin && (dusePlugin = qobject_cast<DuSE::IPlugin *>(plugin))) {
                QJsonObject jsonObject = loader.metaData().value(QStringLiteral("MetaData")).toObject();
                QJsonArray dependencies = jsonObject.value(QStringLiteral("DependencyList")).toArray();
                int dependencyCount = dependencies.size();
                for (int i = 0; i < dependencyCount; ++i)
                    invertedDependency.insert(dependencies.at(i).toString(), dusePlugin->metaObject()->className());
                pluginList << dusePluginSubDir.absoluteFilePath(fileName);
            }
            delete plugin;
        }
    }
    int previousPluginListSize = 0;
    while (pluginList.size() != previousPluginListSize) {
        previousPluginListSize = pluginList.size();
        foreach (const QString &pluginFileName, pluginList) {
            QPluginLoader loader(pluginFileName);
            QObject *plugin = loader.instance();
            if (plugin && (dusePlugin = qobject_cast<DuSE::IPlugin *>(plugin))) {
                int dependencyCount = invertedDependency.values(dusePlugin->metaObject()->className()).count();
                int loadedDependencies = 0;
                foreach (const QString &dependency, invertedDependency.values(dusePlugin->metaObject()->className())) {
                    foreach (const DuSE::IPluginController::DusemtPluginPair &pair, _dusemtPlugins) {
                        if (pair.first->metaObject()->className() == dependency) {
                            ++loadedDependencies;
                            break;
                        }
                    }
                }
                if (loadedDependencies == dependencyCount) {
                    dusePlugin->initialize(core);
                    _dusemtPlugins << DuSE::IPluginController::DusemtPluginPair(dusePlugin, loader.metaData().value(QStringLiteral("MetaData")).toObject());
                    pluginList.removeAll(pluginFileName);
                }
            }
            else
                _errorStrings << "Error when loading plugin" << pluginFileName << ":" << loader.errorString();
        }
    }
    return _errorStrings.isEmpty() ? true:false;
}

const QHash<QString, DuSE::IPluginController::MetamodelPluginPair> &PluginController::metamodelPlugins() const
{
    return _metamodelPlugins;
}

const QList<DuSE::IPluginController::DusemtPluginPair> &PluginController::dusemtPlugins() const
{
    return _dusemtPlugins;
}

QStringList PluginController::errorStrings() const
{
    return _errorStrings;
}

}
