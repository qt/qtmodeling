/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtModeling module of the Qt Toolkit.
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
#include "qxmireader.h"
#include "qxmireader_p.h"
#include "qmetamodelplugin.h"

#include <QtModeling/QModelingElement>
#include <QtModeling/QtModelingNamespace>

#include <QtCore/QDir>
#include <QtCore/QUrl>
#include <QtCore/QStack>
#include <QtCore/QJsonObject>
#include <QtCore/QPluginLoader>
#include <QtCore/QMetaProperty>
#include <QtCore/QCoreApplication>

QT_BEGIN_NAMESPACE

QXmiReaderPrivate::QXmiReaderPrivate()
{
}

QXmiReaderPrivate::~QXmiReaderPrivate()
{
}

QXmiReader::QXmiReader(QScriptEngine *scriptEngine, bool initMetaModel, QObject *parent) :
    QObject(*new QXmiReaderPrivate, parent)
{
    Q_D(QXmiReader);
    d->scriptEngine = scriptEngine;
    d->initMetaModel = initMetaModel;
    loadPlugins();
}

QXmiReader::~QXmiReader()
{
}

void QXmiReader::loadPlugins()
{
    Q_D(QXmiReader);

    d->metaModelPlugins.clear();
    QMetaModelPlugin *metaModelPlugin = 0;
    foreach (QString pluginPath, QCoreApplication::libraryPaths()) {
        QDir pluginsDir(pluginPath);
        pluginsDir.cd(QString::fromLatin1("metamodels"));
        foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
            QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
            QObject *plugin = loader.instance();
            if (plugin && (metaModelPlugin = qobject_cast<QMetaModelPlugin *>(plugin)))
                d->metaModelPlugins.insert(loader.metaData().value(QString::fromLatin1("MetaData")).toObject().value(QString::fromLatin1("MetaModelNamespaceUri")).toString(), QPair<QMetaModelPlugin *, QJsonObject>(metaModelPlugin, loader.metaData().value(QString::fromLatin1("MetaData")).toObject()));
        }
    }
}

QList<QModelingElement *> QXmiReader::readFile(QIODevice *device, QString importedId)
{
    Q_D(QXmiReader);

    if (importedId.isEmpty()) {
        d->idMap.clear();
        d->errors.clear();
        d->xmlNamespaceToImplementationNamespace.clear();
    }
    QXmlStreamReader reader;
    reader.setDevice(device);
    QList<QModelingElement *> modelingObjectList;
    QModelingElement *rootElement = 0;
    bool importedIdFound = false;
    QStack<QString> idStack;
    QString currentNamespaceUri;
    int insertPosition = 0;

    while (!reader.atEnd()) {
        reader.readNext();

        if (!reader.namespaceUri().toString().isEmpty())
            currentNamespaceUri = reader.namespaceUri().toString();

        if (!importedId.isEmpty() && !importedIdFound && reader.attributes().value(QString::fromLatin1("xmi:id")).toString() != importedId)
            continue;

        if (!importedId.isEmpty() && !importedIdFound)
            importedIdFound = true;

        if (reader.isStartElement()) {
            idStack.push(reader.name().toString());
            QString elementName = reader.name().toString();
            if (elementName == QString::fromLatin1("importedPackage") || elementName == QString::fromLatin1("importedElement") || elementName == QString::fromLatin1("appliedProfile")) {
                QFile importFile(reader.attributes().value(QString::fromLatin1("href")).toString().split(QString::fromLatin1("#")).first());
                if (!importFile.open(QFile::ReadOnly | QFile::Text))
                    d->errors << QString::fromLatin1("Could not open imported file '%1'").arg(importFile.fileName());
                QList<QModelingElement *> importList = readFile(&importFile, reader.attributes().value(QString::fromLatin1("href")).toString().split(QString::fromLatin1("#")).last());
                if (importList.count() > 0) {
                    if (elementName == QString::fromLatin1("importedPackage"))
                        importList.first()->asQModelingObject()->setProperty("role", QtModeling::ImportedPackageRole);
                    else if (elementName == QString::fromLatin1("importedElement"))
                        importList.first()->asQModelingObject()->setProperty("role", QtModeling::ImportedElementRole);
                    else if (elementName == QString::fromLatin1("appliedProfile"))
                        importList.first()->asQModelingObject()->setProperty("role", QtModeling::AppliedProfileRole);
                }
                foreach (QModelingElement *importedObject, importList) {
                    modelingObjectList.append(importedObject);
                }
            }

            foreach (const QXmlStreamNamespaceDeclaration &namespaceDeclaration, reader.namespaceDeclarations()) {
                QMetaModelPlugin *metaModelPlugin = d->metaModelPlugins.value(namespaceDeclaration.namespaceUri().toString()).first;
                if (metaModelPlugin) {
                    if (d->initMetaModel)
                       metaModelPlugin->initMetaModel(d->scriptEngine);
                    d->xmlNamespaceToImplementationNamespace.insert(namespaceDeclaration.prefix().toString(), d->metaModelPlugins.value(namespaceDeclaration.namespaceUri().toString()).second.value(QString::fromLatin1("MetaModelPrefix")).toString());
                }
                else {
                    d->errors << QString::fromLatin1("Could not find metamodel for namespace URI '%1'").arg(namespaceDeclaration.namespaceUri().toString());
                }
            }
            QString xmiType = reader.attributes().value(QString::fromLatin1("xmi:type")).toString();
            if (xmiType.isEmpty() && reader.qualifiedName() != reader.name())
                xmiType = reader.qualifiedName().toString();
            if (xmiType.isEmpty() || d->xmlNamespaceToImplementationNamespace[xmiType.split(':').first()].isEmpty())
                continue;
            xmiType = QString::fromLatin1("%1%2").arg(d->xmlNamespaceToImplementationNamespace[xmiType.split(':').first()]).arg(xmiType.split(':').last());
            QString instanceName = reader.attributes().value(QString::fromLatin1("name")).toString();
            if (instanceName.isEmpty())
                instanceName = reader.attributes().value(QString::fromLatin1("xmi:id")).toString();
            QModelingElement *modelingObject = createInstance(currentNamespaceUri, xmiType, instanceName);
            if (modelingObject) {
                d->idMap.insert(reader.attributes().value(QString::fromLatin1("xmi:id")).toString(), modelingObject);
                if (!rootElement) {
                    rootElement = modelingObject;
                    modelingObjectList.insert(insertPosition, rootElement);
                }
            }
            else
                d->errors << QString::fromLatin1("Could not create instance with id '%1' and type '%2'. Corresponding metamodel loaded ?").arg(instanceName).arg(xmiType);
        }
        else if (reader.isEndElement()) {
            idStack.pop();
            if (idStack.isEmpty() && !importedId.isEmpty())
                break;
            if (idStack.count() == 1 && importedId.isEmpty()) {
                rootElement = 0;
                ++insertPosition;
            }
        }
    }

    importedIdFound = false;

    device->reset();
    reader.clear();
    reader.setDevice(device);
    QStack< QPair<QString, QModelingElement *> > stack;

    while (!reader.atEnd()) {
        reader.readNext();

        if (!importedId.isEmpty() && !importedIdFound && reader.attributes().value(QString::fromLatin1("xmi:id")).toString() != importedId)
            continue;

        if (!importedId.isEmpty() && !importedIdFound)
            importedIdFound = true;

        if (reader.isStartElement()) {
            QString id = reader.attributes().value(QString::fromLatin1("xmi:id")).toString();
            if (id.isEmpty())
                id = reader.attributes().value(QString::fromLatin1("xmi:idref")).toString();
            if (id.isEmpty())
                id = reader.attributes().value(QString::fromLatin1("href")).toString().split(QString::fromLatin1("#")).last();
            if (id.isEmpty() && !stack.isEmpty())
                continue;

            QModelingElement *modelingObject = d->idMap.value(id);

            if (modelingObject) {
                const QMetaObject *metaObject = modelingObject->asQModelingObject()->metaObject();
                foreach (QXmlStreamAttribute attribute, reader.attributes()) {
                    int propertyIndex;
                    if ((propertyIndex = metaObject->indexOfProperty(attribute.name().toString().toLatin1())) != -1) {
                        QMetaProperty metaProperty = metaObject->property(propertyIndex);
                        if (metaProperty.type() == QVariant::Bool) {
                            if (!modelingObject->asQModelingObject()->setProperty(attribute.name().toString().toLatin1(), attribute.value().toString() == QString::fromLatin1("true") ? true:false))
                                d->errors << QString::fromLatin1("Error when setting property '%1' of object with id '%2'.").arg(attribute.name().toString()).arg(id);
                        }
                        else if (metaProperty.isEnumType()) {
                            QString enumName = attribute.value().toString();
                            enumName = enumName.left(1).toUpper() + enumName.mid(1);
                            QString propertyName = QString::fromLatin1(metaProperty.name());
                            enumName.prepend(propertyName.left(1).toUpper() + propertyName.mid(1));
                            if (!modelingObject->asQModelingObject()->setProperty(attribute.name().toString().toLatin1(), enumName))
                                d->errors << QString::fromLatin1("Error when setting property '%1' of object with id '%2'.").arg(attribute.name().toString()).arg(id);
                        }
                        else if (metaProperty.type() == QVariant::String) {
                            if (!modelingObject->asQModelingObject()->setProperty(attribute.name().toString().toLatin1(), attribute.value().toString()))
                                d->errors << QString::fromLatin1("Error when setting property '%1' of object with id '%2'.").arg(attribute.name().toString()).arg(id);
                        }
                        else if (metaProperty.type() == QVariant::UserType) {
                            QModelingElement *propertyObject = d->idMap.value(attribute.value().toString());
                            if (propertyObject) {
                                QString elementName = attribute.name().toString();
                                elementName = elementName.left(1).toUpper() + elementName.mid(1);
                                int methodCount = modelingObject->asQModelingObject()->metaObject()->methodCount();
                                int i;
                                for (i = 0; i < methodCount; ++i) {
                                    QMetaMethod metaMethod = modelingObject->asQModelingObject()->metaObject()->method(i);
                                    if (QString::fromLatin1(metaMethod.name()) == QString::fromLatin1("set%1").arg(elementName)) {
                                        if (!metaMethod.invoke(modelingObject->asQModelingObject(), ::Q_ARG(QObject *, propertyObject->asQModelingObject())))
                                            d->errors << QString::fromLatin1("Error when invoking metamethod '%1' on object '%2'.").arg(QString::fromLatin1(metaMethod.name())).arg(propertyObject->asQModelingObject()->objectName());
                                        break;
                                    }
                                }
                                if (i == methodCount)
                                    d->errors << QString::fromLatin1("Metamethod add/set'%1' not found on object '%2'.").arg(elementName).arg(propertyObject->asQModelingObject()->objectName());

                            }
                        }
                    }
                    else
                        d->errors << QString::fromLatin1("Property '%1' not found in object of type '%2'. Corresponding metamodel loaded ?").arg(attribute.name().toString()).arg(QString::fromLatin1(modelingObject->asQModelingObject()->metaObject()->className()));
                }
                if (!stack.isEmpty()) {
                    QModelingElement *containerObject = stack.top().second;
                    QString elementName = reader.name().toString();
                    elementName = elementName.left(1).toUpper() + elementName.mid(1);
                    int methodCount = containerObject->asQModelingObject()->metaObject()->methodCount();
                    int i;
                    for (i = 0; i < methodCount; ++i) {
                        QMetaMethod metaMethod = containerObject->asQModelingObject()->metaObject()->method(i);
                        if (QString::fromLatin1(metaMethod.name()) == QString::fromLatin1("add%1").arg(elementName) ||
                            QString::fromLatin1(metaMethod.name()) == QString::fromLatin1("set%1").arg(elementName)) {
                            if (!metaMethod.invoke(containerObject->asQModelingObject(), ::Q_ARG(QObject *, modelingObject->asQModelingObject())))
                                d->errors << QString::fromLatin1("Error when invoking metamethod '%1' on object '%2'.").arg(QString::fromLatin1(metaMethod.name())).arg(containerObject->asQModelingObject()->objectName());
                            break;
                        }
                    }
                    if (i == methodCount)
                        d->errors << QString::fromLatin1("Metamethod add/set'%1' not found on object '%2'.").arg(elementName).arg(containerObject->asQModelingObject()->objectName());
                }
                stack.push(QPair<QString, QModelingElement *>(reader.name().toString(), modelingObject));
            }
            else
                d->errors << QString::fromLatin1("Could not cross reference instance with id '%1' in element '%2'. Bad formed XMI file ?").arg(id).arg(reader.name().toString());
        }
        else if (reader.isEndElement() && !stack.isEmpty() && stack.top().first == reader.name()) {
            stack.pop();
            if (stack.isEmpty() && !importedId.isEmpty())
                break;
        }
    }

    return modelingObjectList;
}

QModelingElement *QXmiReader::createInstance(QString namespaceUri, QString instanceClass, QString instanceName)
{
    Q_D(QXmiReader);
    QMetaModelPlugin *metamodelPlugin = d->metaModelPlugins[namespaceUri].first;
    QModelingElement *modelingObject = metamodelPlugin->createModelingElement(instanceClass);
    if (modelingObject) {
        modelingObject->asQModelingObject()->setObjectName(instanceName);
        return modelingObject;
    }
    return 0;
}

QStringList QXmiReader::errorStrings() const
{
    Q_D(const QXmiReader);

    return d->errors;
}

#include "moc_qxmireader.cpp"

QT_END_NAMESPACE

