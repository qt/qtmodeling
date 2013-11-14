/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtDuse module of the Qt Toolkit.
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
#include "cppdevelopmentplatform.h"

CppDevelopmentPlatform::CppDevelopmentPlatform(QDir *rootProjDir)
{
    _rootProjDir = rootProjDir;
}

CppDevelopmentPlatform::~CppDevelopmentPlatform()
{
}

QObjectList CppDevelopmentPlatform::components()
{
    QList<QObject*> components;

    QStringList headers = findFiles("*.h");
    QStringList xmlFiles = generateXmlFiles(headers);


    for (int i = 0; i < xmlFiles.size(); ++i) {

        QString xmlFile = xmlFiles.at(i).toLocal8Bit().constData();

        if (openXmlFile(_rootProjDir->absolutePath() + "/" + xmlFile)) {

            QObject *component = extractComponent(xmlFile);
            components.append(component);
        }
    }

    return components;
}


QStringList CppDevelopmentPlatform::findFiles(const QString &name) {

    return _rootProjDir->entryList(QStringList(name), QDir::Files | QDir::NoSymLinks);
}


QStringList CppDevelopmentPlatform::generateXmlFiles(const QStringList &codeFiles) {

    for (int i = 0; i < codeFiles.size(); ++i) {

        QString file = codeFiles.at(i).toLocal8Bit().constData();
        QString fileDir = _rootProjDir->absolutePath() + "/" + file;
        QString xmlFileDir = _rootProjDir->absolutePath() + "/" + file.replace(".h", ".xml");

        QString command = "gccxml " + fileDir + " -fxml=" + xmlFileDir;

        QProcess process;
        process.start(command);
        process.waitForFinished();
    }

    return _rootProjDir->entryList(QStringList("*.xml"), QDir::Files | QDir::NoSymLinks);
}


bool CppDevelopmentPlatform::openXmlFile(const QString &filePath) {

    QFile *file = new QFile(filePath);

    xml = new QXmlStreamReader(file);

    if (!file->open(QIODevice::ReadOnly | QIODevice::Text)) {
        return false;
    }

    return true;
}


QStringList CppDevelopmentPlatform::findConstructorsFromXml(const QString &className) {

    QStringList constructors;

    while (!xml->atEnd() && !xml->hasError()) {

        QXmlStreamReader::TokenType token = xml->readNext();

        if (token == QXmlStreamReader::StartDocument) {
            continue;
        }

        if (token == QXmlStreamReader::StartElement) {

            if (xml->name() == "Constructor") {
                QXmlStreamAttributes attributes = xml->attributes();

                QString attribute = attributes.value("demangled").toString();
                if (attribute.contains(className + "::")) {
                    constructors.append(attribute);
                }
            }
        }
    }

    return constructors;
}


QObject* CppDevelopmentPlatform::extractComponent(QString xmlFile) {

    QStringList constructors = findConstructorsFromXml(xmlFile.replace(".xml", ""));

    QString expression = constructors.at(constructors.size() - 1).toLocal8Bit().constData();
    QStringList elements = expression.split("::");
    QString className = elements.at(1).toLocal8Bit().constData();

    QObject *component = new QObject;
    component->setObjectName(className);

    return component;
}
