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

#include <QtCore/QProcess>
#include <QtCore/QXmlStreamReader>

#include <duseinterfaces/iuicontroller.h>

namespace DuSE
{

GccXmlArchitectureRecoveryBackendPlugin::GccXmlArchitectureRecoveryBackendPlugin(QObject *parent) :
    IPlugin(parent)
{
}

bool GccXmlArchitectureRecoveryBackendPlugin::initialize()
{
    QAction *newArchitectureRecoveryProcessAction = new QAction(QIcon(), tr("New architecture recovery process"), this);
    connect(newArchitectureRecoveryProcessAction, SIGNAL(triggered()), this, SLOT(newArchitectureRecoveryProcess()));
    ICore::self()->uiController()->addAction(newArchitectureRecoveryProcessAction, tr("menu_File"));
    qRegisterMetaType<ClassFunctions>("ClassFunctions");
    return true;
}

void GccXmlArchitectureRecoveryBackendPlugin::setRootProjectDir(const QDir &rootProjectDir)
{
    _rootProjectDir = rootProjectDir;
}

void GccXmlArchitectureRecoveryBackendPlugin::newArchitectureRecoveryProcess()
{
    QString directory = QFileDialog::getExistingDirectory(0, tr("Open code tree"), QDir::currentPath());
    _rootProjectDir = QDir(directory);
    components();
}

QObjectList GccXmlArchitectureRecoveryBackendPlugin::components()
{
    QObjectList components;

    QStringList headers = _rootProjectDir.entryList(QStringList("*.h"), QDir::Files | QDir::NoSymLinks);
    QStringList xmlFiles = generateXmlFiles(headers);
    int xmlFilesSize = xmlFiles.size();
    for (int i = 0; i < xmlFilesSize; ++i) {
        _xmlFileName = xmlFiles.at(i).toLocal8Bit().constData();

        QObject *component = extractComponent();
        components.append(component);
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
    _xmlFile.setFileName(filePath);
    _xmlReader = new QXmlStreamReader(&_xmlFile);

    if (!_xmlFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return false;
    }

    return true;
}

QStringList GccXmlArchitectureRecoveryBackendPlugin::findConstructorsFromXml()
{
    QStringList constructors;

    openXmlFile(_rootProjectDir.absolutePath() + "/" + _xmlFileName);
    QString className = _xmlFileName;
    className.replace(".xml", "");
    while (!_xmlReader->atEnd() && !_xmlReader->hasError()) {
        QXmlStreamReader::TokenType token = _xmlReader->readNext();

        if (token == QXmlStreamReader::StartElement) {
            if (_xmlReader->name() == "Constructor") {
                QXmlStreamAttributes attributes = _xmlReader->attributes();

                QString attribute = attributes.value("demangled").toString();
                if (attribute.contains(className + "::", Qt::CaseInsensitive)) {
                    constructors.append(attribute);
                }
            }
        }
    }
    if (_xmlFile.isOpen()) {
        _xmlFile.close();
    }

    return constructors;
}

QObject *GccXmlArchitectureRecoveryBackendPlugin::extractComponent()
{
    QObject *component = new QObject;
    QString className;
    QStringList constructors = findConstructorsFromXml();

    if (!constructors.isEmpty()) {
        QString expression = constructors.last();
        QStringList elements = expression.split("::");
        className = elements.at(0) + "::" + elements.at(1);

        component->setObjectName(className);
    } else {
        className = _xmlFileName;
        className.replace(".xml", "");
        component->setObjectName(className);
    }

    findFunctionsFromXml(component);

    return component;
}

void GccXmlArchitectureRecoveryBackendPlugin::findFunctionsFromXml(QObject *component)
{
    QHash<QString, QMultiHash<QString, QString> > classFunctions;

    openXmlFile(_rootProjectDir.absolutePath() + "/" + _xmlFileName);

    QStringList expression = component->objectName().split("::");
    QString classNamespace = expression.first();

    while (!_xmlReader->atEnd() && !_xmlReader->hasError()) {
        QXmlStreamReader::TokenType token = _xmlReader->readNext();

        if (token == QXmlStreamReader::StartElement) {
            if ((_xmlReader->name() == "Method") ||
                    (_xmlReader->name() == "Constructor") ||
                    (_xmlReader->name() == "Destructor")) {
                QString attribute = _xmlReader->attributes().value("demangled").toString();

                if (attribute.contains(classNamespace + "::", Qt::CaseInsensitive)) {
                    classFunctions = classFunctionsContainer(attribute, classFunctions);
                }
            }
        }
    }
    if (_xmlFile.isOpen()) {
        _xmlFile.close();
    }

    component->setProperty("Functions", QVariant::fromValue(classFunctions));
}

QHash<QString, QMultiHash<QString, QString> > GccXmlArchitectureRecoveryBackendPlugin::classFunctionsContainer(QString xmlAttribute, QHash<QString, QMultiHash<QString, QString> > &classFunctions)
{
    QMultiHash<QString, QString> function;

    QStringList signature = xmlAttribute.split("::");
    QString className = signature.at(0) + "::" + signature.at(1);
    QString functionName = signature.at(2).left(signature.at(2).indexOf("("));

    findFunctionParameters(functionName, function);
    classFunctions.insert(className, function);

    return classFunctions;
}

void GccXmlArchitectureRecoveryBackendPlugin::findFunctionParameters(const QString &functionName, QMultiHash<QString, QString> &function)
{
    while (_xmlReader->readNextStartElement()) {
        if (!_xmlReader->attributes().value("name").toString().isEmpty()) {
            QString parameterName = _xmlReader->attributes().value("name").toString();
            QString typeID = _xmlReader->attributes().value("type").toString();

            QString parameterTypeNumber = findTypeNumber(typeID);
            QString parameterType = findType(parameterTypeNumber);
            if (parameterType == "") {
                parameterType = findType(typeID);
            }

            function.insert(functionName, parameterName + " " + parameterType);
        }
    }
}

QString GccXmlArchitectureRecoveryBackendPlugin::findTypeNumber(const QString &typeID)
{
    QFile file(_rootProjectDir.absolutePath() + "/" + _xmlFileName);
    QXmlStreamReader *typeNumberCollector = new QXmlStreamReader(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    while (!typeNumberCollector->atEnd() && !typeNumberCollector->hasError()) {
        QXmlStreamReader::TokenType token = typeNumberCollector->readNext();

        if (token == QXmlStreamReader::StartElement) {
            if (typeNumberCollector->name() == "PointerType") {
                if (typeNumberCollector->attributes().value("id").toString() == typeID) {
                    break;
                }
            }
        }
    }

    QString typeNumber = typeNumberCollector->attributes().value("type").toString();

    file.close();
    delete typeNumberCollector;

    return typeNumber;
}

QString GccXmlArchitectureRecoveryBackendPlugin::findType(const QString &typeNumber)
{
    QFile file(_rootProjectDir.absolutePath() + "/" + _xmlFileName);
    QXmlStreamReader *typeCollector = new QXmlStreamReader(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    while (!typeCollector->atEnd() && !typeCollector->hasError()) {
        QXmlStreamReader::TokenType token = typeCollector->readNext();

        if (token == QXmlStreamReader::StartElement) {
            if (typeCollector->name() == "Class") {
                if (typeCollector->attributes().value("id").toString() == typeNumber) {
                    break;
                }
            }
        }
    }

    QString type = typeCollector->attributes().value("name").toString();

    file.close();
    delete typeCollector;

    return type;
}

}
