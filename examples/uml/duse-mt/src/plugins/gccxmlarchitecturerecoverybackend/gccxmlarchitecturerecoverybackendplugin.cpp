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

GccXmlArchitectureRecoveryBackendPlugin::GccXmlArchitectureRecoveryBackendPlugin(QObject *parent) :
    DuSE::IPlugin(parent)
{
}

bool GccXmlArchitectureRecoveryBackendPlugin::initialize(DuSE::ICore *core)
{
    Q_UNUSED(core);
    return true;
}

void GccXmlArchitectureRecoveryBackendPlugin::setRootProjectDir(const QDir &rootProjectDir)
{
    _rootProjectDir = rootProjectDir;
}

QObjectList GccXmlArchitectureRecoveryBackendPlugin::components()
{
    QObjectList components;

    QStringList headers = _rootProjectDir.entryList(QStringList("*.h"), QDir::Files | QDir::NoSymLinks);
    QStringList xmlFiles = generateXmlFiles(headers);
    int xmlFilesSize = xmlFiles.size();

    for (int i = 0; i < xmlFilesSize; ++i) {
        QString xmlFile = xmlFiles.at(i).toLocal8Bit().constData();

        if (openXmlFile(_rootProjectDir.absolutePath() + "/" + xmlFile)) {
            QObject *component = extractComponent(xmlFile);
            components.append(component);
        }
    }

    return components;
}

QObjectList GccXmlArchitectureRecoveryBackendPlugin::connectors()
{
    return QObjectList();
}

QStringList GccXmlArchitectureRecoveryBackendPlugin::generateXmlFiles(const QStringList &codeFiles) const
{
    int codeFilesSize = codeFiles.size();

    for (int i = 0; i < codeFilesSize; ++i) {
        QString file = codeFiles.at(i).toLocal8Bit().constData();
        QString fileDir = _rootProjectDir.absolutePath() + "/" + file;
        QString xmlFileDir = _rootProjectDir.absolutePath() + "/" + file.replace(".h", ".xml");

        QProcess process;
        process.start("gccxml " + fileDir + " -fxml=" + xmlFileDir);
        process.waitForFinished();
    }

    return _rootProjectDir.entryList(QStringList("*.xml"), QDir::Files | QDir::NoSymLinks);
}

bool GccXmlArchitectureRecoveryBackendPlugin::openXmlFile(const QString &filePath)
{
    QFile file(filePath);
    _xmlReader = new QXmlStreamReader(&file);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return false;
    }

    return true;
}

QStringList GccXmlArchitectureRecoveryBackendPlugin::findConstructorsFromXml(const QString &className)
{
    QStringList constructors;

    while (!_xmlReader->atEnd() && !_xmlReader->hasError()) {
        QXmlStreamReader::TokenType token = _xmlReader->readNext();

        if (token == QXmlStreamReader::StartElement) {
            if (_xmlReader->name() == "Constructor") {
                QXmlStreamAttributes attributes = _xmlReader->attributes();

                QString attribute = attributes.value("demangled").toString();
                if (attribute.contains(className + "::")) {
                    constructors.append(attribute);
                }
            }
        }
    }

    return constructors;
}

QObject *GccXmlArchitectureRecoveryBackendPlugin::extractComponent(QString xmlFile)
{
    QStringList constructors = findConstructorsFromXml(xmlFile.replace(".xml", ""));

    QString expression = constructors.last();
    QStringList elements = expression.split("::");
    QString className = elements.at(1);

    QObject *component = new QObject;
    component->setObjectName(className);

    return component;
}
