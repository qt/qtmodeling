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
#include "gccxmlarchitecturerecoverybackendplugin.h"

#include <QtWidgets/QAction>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>

#include <QtCore/QDebug>
#include <QtCore/QProcess>
#include <QtCore/QXmlStreamReader>

#include <duseinterfaces/iuicontroller.h>

namespace DuSE
{

GccXmlArchitectureRecoveryBackendPlugin::GccXmlArchitectureRecoveryBackendPlugin(QObject *parent) :
    IPlugin(parent)
{
    _name = "C++ (GCC-XML)";
    qRegisterMetaType<DependencyRelations>("DependencyRelations");
}

bool GccXmlArchitectureRecoveryBackendPlugin::initialize()
{
    return true;
}


QObjectList GccXmlArchitectureRecoveryBackendPlugin::components()
{
    QObjectList components;

    QObject *componentsDependencyRelations = new QObject;
    componentsDependencyRelations->setProperty("components", QVariant::fromValue(_dependencyRelations));
    componentsDependencyRelations->setProperty("systemDirectory", QVariant::fromValue(_rootProjectDirectoryString));
    components.append(componentsDependencyRelations);

    return components;
}

QObjectList GccXmlArchitectureRecoveryBackendPlugin::connectors()
{
    QObjectList connectors;

    return connectors;
}

void GccXmlArchitectureRecoveryBackendPlugin::run()
{
    runGccXml();
    recoverDependencyRelations();
}

void GccXmlArchitectureRecoveryBackendPlugin::runGccXml()
{
    _rootProjectDirectoryString = QFileDialog::getExistingDirectory(0, "Escolha o diretório raíz do projeto", QDir::currentPath());

    if (_rootProjectDirectoryString.isEmpty()) {
        QMessageBox errorMessage;
        errorMessage.setInformativeText("Diretório inválido.");
        errorMessage.show();
    } else {
        _rootProjectDirectory = QDir(_rootProjectDirectoryString);
        _xmlFilesList = _xmlFileManager->generateXmlFiles(_rootProjectDirectory);
        _xmlCount = _xmlFilesList.count();
    }
}

void GccXmlArchitectureRecoveryBackendPlugin::recoverDependencyRelations()
{
    QString fileName;

    for (int i = 0; i < _xmlCount; ++i) {
        fileName = _xmlFilesList.at(i).toLocal8Bit().constData();

        _reader = new XmlFileReader(_rootProjectDirectory.absolutePath(), fileName);

        _reader->fillTagContainers();

        _fileClasses.insert(fileName, _reader->fileClasses());
        _fileFields.insert(fileName, _reader->fileFields());
        _filePointers.insert(fileName, _reader->filePointers());
        _fileBases.insert(fileName, _reader->fileBases());
        _fileArguments.insert(fileName, _reader->fileArguments());

        fieldAdjacencies();
        baseAdjacencies();
        argumentsAdjacencies();

        qDebug() << "Tamanho de dependencyRelations: " << _dependencyRelations.count();
    }
}

void GccXmlArchitectureRecoveryBackendPlugin::fieldAdjacencies()
{
    QString fileName;

    for (int i = 0; i < _xmlCount; ++i) {

        fileName = _xmlFilesList.at(i).toLocal8Bit().constData();

        QMap<QString, QString> classes = _fileClasses.value(fileName);
        QList<QPair<QString, QString> > fields = _fileFields.value(fileName);
        QMap<QString, QString> pointers = _filePointers.value(fileName);

        QString dependent;
        QString dependency;

        QStringList classIds = classes.keys();
        foreach (QString classId, classIds) {
            dependent = classes.value(classId);
            for (int i = 0; i < fields.size(); ++i) {
                QPair<QString, QString> field = fields.at(i);
                if (classId == field.first) {
                    if (classes.value(field.second).isEmpty()) {
                        QStringList pointersId = pointers.keys();
                        foreach (QString pointerId, pointersId) {
                            if (field.second == pointerId) {
                                if (!classes.value(pointers.value(pointerId)).isEmpty()) {
                                    dependency = classes.value(pointers.value(pointerId));
                                }
                            }
                        }
                    } else {
                        dependency = classes.value(field.second);
                    }
                }

                if (!_dependencyRelations.keys().contains(dependent)) {
                    if (!dependent.isEmpty() && !dependency.isEmpty()) {
                        _dependencyRelations.insert(dependent, dependency);
                    }
                } else {
                    bool isNewDependencie = false;
                    QStringList dependencies = _dependencyRelations.values(dependent);
                    foreach (QString d, dependencies) {
                        if (dependency == d) {
                            isNewDependencie = true;
                        }
                    }
                    if (isNewDependencie == false) {
                        if (!dependent.isEmpty() && !dependency.isEmpty()) {
                            _dependencyRelations.insert(dependent, dependency);
                        }
                    }
                }

                dependency = "";
            }
        }
    }
}

void GccXmlArchitectureRecoveryBackendPlugin::baseAdjacencies()
{
    QString fileName;

    for (int i = 0; i < _xmlCount; ++i) {

        fileName = _xmlFilesList.at(i).toLocal8Bit().constData();

        QMap<QString, QString> classes = _fileClasses.value(fileName);
        QList<QPair<QString, QString> > bases = _fileBases.value(fileName);

        QString dependent;
        QString dependency;

        QStringList classIds = classes.keys();
        foreach (QString classId, classIds) {
            dependent = classes.value(classId);
            for (int i = 0; i < bases.size(); ++i) {
                QPair<QString, QString> base = bases.at(i);
                if (classId == base.first) {
                    dependency = classes.value(base.second);
                }
            }

            if (!_dependencyRelations.keys().contains(dependent)) {
                if (!dependent.isEmpty() && !dependency.isEmpty()) {
                    _dependencyRelations.insert(dependent, dependency);
                }
            } else {
                bool isNewDependencie = false;
                QStringList dependencies = _dependencyRelations.values(dependent);
                foreach (QString d, dependencies) {
                    if (dependency == d) {
                        isNewDependencie = true;
                    }
                }
                if (isNewDependencie == false) {
                    if (!dependent.isEmpty() && !dependency.isEmpty()) {
                        _dependencyRelations.insert(dependent, dependency);
                    }
                }
            }

            dependency = "";
        }
    }
}

void GccXmlArchitectureRecoveryBackendPlugin::argumentsAdjacencies()
{
    QString fileName;

    for (int i = 0; i < _xmlCount; ++i) {

        fileName = _xmlFilesList.at(i).toLocal8Bit().constData();

        QMap<QString, QString> classes = _fileClasses.value(fileName);
        QList<QPair<QString, QString> > arguments = _fileArguments.value(fileName);
        QMap<QString, QString> pointers = _filePointers.value(fileName);

        QString dependent;
        QString dependency;

        QStringList classIds = classes.keys();
        foreach (QString classId, classIds) {
            dependent = classes.value(classId);
            for (int i = 0; i < arguments.size(); ++i) {
                QPair<QString, QString> argument = arguments.at(i);
                if (classId == argument.first) {
                    if (classes.value(argument.second).isEmpty()) {
                        QStringList pointersId = pointers.keys();
                        foreach (QString pointerId, pointersId) {
                            if (argument.second == pointerId) {
                                if (!classes.value(pointers.value(pointerId)).isEmpty()) {
                                    dependency = classes.value(pointers.value(pointerId));
                                }
                            }
                        }
                    } else {
                        dependency = classes.value(argument.second);
                    }
                }
            }

            if (!_dependencyRelations.keys().contains(dependent)) {
                if (!dependent.isEmpty() && !dependency.isEmpty()) {
                    _dependencyRelations.insert(dependent, dependency);
                }
            } else {
                bool isNewDependencie = false;
                QStringList dependencies = _dependencyRelations.values(dependent);
                foreach (QString d, dependencies) {
                    if (dependency == d) {
                        isNewDependencie = true;
                    }
                }
                if (isNewDependencie == false) {
                    if (!dependent.isEmpty() && !dependency.isEmpty()) {
                        _dependencyRelations.insert(dependent, dependency);
                    }
                }
            }

            dependency = "";
        }
    }
}

}
