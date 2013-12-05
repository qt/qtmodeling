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

#include <QtCore/QDir>
#include <QtCore/QStack>
#include <QtCore/QJsonObject>
#include <QtCore/QPluginLoader>
#include <QtCore/QCoreApplication>

QT_BEGIN_NAMESPACE

/*!
    \class QXmiReader

    \inmodule QtModeling

    \brief The QXmiReader class provides funcionalities for importing models as XMI (XML) files.

    \sa QXmiWriter
 */

QXmiReaderPrivate::QXmiReaderPrivate()
{
}

QXmiReaderPrivate::~QXmiReaderPrivate()
{
}

/*!
    Creates a new QXmiReader with the given \a parent.
*/
QXmiReader::QXmiReader(QObject *parent) :
    QObject(*new QXmiReaderPrivate, parent)
{
    loadPlugins();
}

/*!
    Destroys the QXmiReader.
*/
QXmiReader::~QXmiReader()
{
}

/*!
    Loads all installed Qt metamodel plugins.
*/
void QXmiReader::loadPlugins()
{
    Q_D(QXmiReader);

    d->metaModelPlugins.clear();
    QMetaModelPlugin *metaModelPlugin = 0;
    foreach (QString pluginPath, QCoreApplication::libraryPaths()) {
        QDir pluginsDir(pluginPath);
        pluginsDir.cd(QStringLiteral("metamodels"));
        foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
            QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
            QObject *plugin = loader.instance();
            if (plugin && (metaModelPlugin = qobject_cast<QMetaModelPlugin *>(plugin)))
                d->metaModelPlugins.insert(loader.metaData().value(QStringLiteral("MetaData")).toObject().value(QStringLiteral("MetaModelNamespaceUri")).toString(), QPair<QMetaModelPlugin *, QJsonObject>(metaModelPlugin, loader.metaData().value(QStringLiteral("MetaData")).toObject()));
        }
    }
}

/*!
    Reads the model from \a device and returns it as a QList<QModelingElement *>. If specified, \a importedId limits the import to only the element with matching ID.
*/
QList<QModelingElement *> QXmiReader::readFile(QIODevice *device, QString importedId)
{
    Q_D(QXmiReader);

    if (importedId.isEmpty()) {
        d->idMap.clear();
        d->errors.clear();
        d->xmlNamespaceToImplementationNamespace.clear();
        d->xmlNamespaceToNamespaceUri.clear();
    }
    QXmlStreamReader reader;
    device->reset();
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

        if (!importedId.isEmpty() && !importedIdFound && reader.attributes().value(QStringLiteral("xmi:id")).toString() != importedId)
            continue;

        if (!importedId.isEmpty() && !importedIdFound)
            importedIdFound = true;

        if (reader.isStartElement()) {
            idStack.push(reader.name().toString());
            QString elementName = reader.name().toString();
            if (elementName == QStringLiteral("importedPackage") || elementName == QStringLiteral("importedElement") || elementName == QStringLiteral("appliedProfile")) {
                QDir currentPath = QFileInfo(*dynamic_cast<QFile *>(device)).absoluteDir();
                QString importedFileName = reader.attributes().value(QStringLiteral("href")).toString().split('#').first().split('/').last();
                QFile importFile(currentPath.filePath(importedFileName));
                if (!importFile.open(QFile::ReadOnly | QFile::Text)) {
                    foreach (QString pluginPath, QCoreApplication::libraryPaths()) {
                        QDir pluginsDir(pluginPath);
                        pluginsDir.cd(QStringLiteral("metamodels"));
                        importFile.setFileName(pluginsDir.filePath(importedFileName));
                        if (importFile.open(QFile::ReadOnly | QFile::Text))
                            break;
                    }
                    if (!importFile.isOpen())
                        d->errors << QStringLiteral("Could not open imported file '%1'").arg(importFile.fileName());
                }
                QList<QModelingElement *> importList = readFile(&importFile, reader.attributes().value(QStringLiteral("href")).toString().split('#').last());
                if (importList.count() > 0) {
                    if (elementName == QStringLiteral("importedPackage"))
                        importList.first()->asQModelingObject()->setProperty("role", QVariant::fromValue(QtModeling::ImportedPackageRole));
                    else if (elementName == QStringLiteral("importedElement"))
                        importList.first()->asQModelingObject()->setProperty("role", QVariant::fromValue(QtModeling::ImportedElementRole));
                    else if (elementName == QStringLiteral("appliedProfile"))
                        importList.first()->asQModelingObject()->setProperty("role", QVariant::fromValue(QtModeling::AppliedProfileRole));
                }
                foreach (QModelingElement *importedObject, importList) {
                    modelingObjectList.append(importedObject);
                }
            }

            foreach (const QXmlStreamNamespaceDeclaration &namespaceDeclaration, reader.namespaceDeclarations()) {
                d->xmlNamespaceToNamespaceUri.insert(namespaceDeclaration.prefix().toString(), namespaceDeclaration.namespaceUri().toString());
                QMetaModelPlugin *metaModelPlugin = d->metaModelPlugins.value(namespaceDeclaration.namespaceUri().toString()).first;
                if (metaModelPlugin) {
                    d->xmlNamespaceToImplementationNamespace.insert(namespaceDeclaration.prefix().toString(), d->metaModelPlugins.value(namespaceDeclaration.namespaceUri().toString()).second.value(QStringLiteral("MetaModelPrefix")).toString());
                }
                else {
                    d->errors << QStringLiteral("Could not find metamodel for namespace URI '%1'").arg(namespaceDeclaration.namespaceUri().toString());
                }
            }
            QString xmiType = reader.attributes().value(QStringLiteral("xmi:type")).toString();
            if (xmiType.isEmpty() && reader.qualifiedName() != reader.name())
                xmiType = reader.qualifiedName().toString();
            if (xmiType.isEmpty() || d->xmlNamespaceToImplementationNamespace[xmiType.split(':').first()].isEmpty())
                continue;
            QString typeNamespaceUri = d->xmlNamespaceToNamespaceUri[xmiType.split(':').first()];
            QString prefix = d->xmlNamespaceToImplementationNamespace[xmiType.split(':').first()];
            xmiType = QStringLiteral("%1%2").arg(prefix).arg(xmiType.split(':').last());
            QString instanceName = reader.attributes().value(QStringLiteral("name")).toString();
            if (instanceName.isEmpty())
                instanceName = reader.attributes().value(QStringLiteral("xmi:id")).toString();
            QModelingElement *modelingElement = createInstance(typeNamespaceUri, xmiType, instanceName);
            if (modelingElement) {
                modelingElement->asQModelingObject()->setProperty("factoryType", QStringLiteral("%1%2").arg(prefix).arg(instanceName));
                d->idMap.insert(reader.attributes().value(QStringLiteral("xmi:id")).toString(), modelingElement);
                if (!rootElement) {
                    rootElement = modelingElement;
                    modelingObjectList.insert(insertPosition, rootElement);
                }
            }
            else
                d->errors << QStringLiteral("Could not create instance with id '%1' and type '%2'. Corresponding metamodel loaded ?").arg(instanceName).arg(xmiType);
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

        if (!importedId.isEmpty() && !importedIdFound && reader.attributes().value(QStringLiteral("xmi:id")).toString() != importedId)
            continue;

        if (!importedId.isEmpty() && !importedIdFound)
            importedIdFound = true;

        if (reader.isStartElement()) {
            QString id = reader.attributes().value(QStringLiteral("xmi:id")).toString();
            if (id.isEmpty())
                id = reader.attributes().value(QStringLiteral("xmi:idref")).toString();
            if (id.isEmpty())
                id = reader.attributes().value(QStringLiteral("href")).toString().split('#').last();
            if (id.isEmpty() && !stack.isEmpty()) {
                QObject *top = stack.top().second->asQModelingObject();
                if (top->metaObject()->indexOfProperty(reader.name().toLatin1()) != -1) {
                    QStringRef propertyName = reader.name();
                    reader.readNext();
                    top->setProperty(propertyName.toLatin1(), reader.text().toLatin1());
                }
                QString elementName = reader.name().toString();
                elementName = elementName.left(1).toUpper() + elementName.mid(1);
                int methodIndex;
                if ((methodIndex = top->metaObject()->indexOfMethod(QStringLiteral("add%1(QString)").arg(elementName).toLatin1())) != -1) {
                    QMetaMethod metaMethod = top->metaObject()->method(methodIndex);
                    reader.readNext();
                    metaMethod.invoke(top, ::Q_ARG(QString, reader.text().toString()));
                }
                continue;
            }

            QModelingElement *modelingObject = d->idMap.value(id);

            if (modelingObject) {
                const QMetaObject *metaObject = modelingObject->asQModelingObject()->metaObject();
                foreach (QXmlStreamAttribute attribute, reader.attributes()) {
                    int propertyIndex;
                    QString elementName = attribute.name().toString();
                    elementName = elementName.left(1).toUpper() + elementName.mid(1);
                    if ((propertyIndex = metaObject->indexOfProperty(attribute.name().toString().toLatin1())) != -1 ||
                            metaObject->indexOfMethod(QStringLiteral("add%1").arg(elementName).toLatin1()) != -1) {
                        QMetaProperty metaProperty = metaObject->property(propertyIndex);
                        if (metaProperty.type() == QVariant::Bool) {
                            if (!modelingObject->asQModelingObject()->setProperty(attribute.name().toString().toLatin1(), attribute.value().toString() == QStringLiteral("true") ? true:false))
                                d->errors << QStringLiteral("Error when setting property '%1' of object with id '%2'.").arg(attribute.name().toString()).arg(id);
                        }
                        else if (metaProperty.isEnumType()) {
                            QString enumName = attribute.value().toString();
                            enumName = enumName.left(1).toUpper() + enumName.mid(1);
                            enumName.prepend(QString::fromLatin1(metaProperty.typeName()).split(':').last());
                            if (!modelingObject->asQModelingObject()->setProperty(attribute.name().toString().toLatin1(), enumName))
                                d->errors << QStringLiteral("Error when setting property '%1' of object with id '%2'.").arg(attribute.name().toString()).arg(id);
                        }
                        else if (metaProperty.type() == QVariant::String) {
                            if (!modelingObject->asQModelingObject()->setProperty(attribute.name().toString().toLatin1(), attribute.value().toString()))
                                d->errors << QStringLiteral("Error when setting property '%1' of object with id '%2'.").arg(attribute.name().toString()).arg(id);
                        }
                        else if (metaProperty.type() == QVariant::Int) {
                            if (!modelingObject->asQModelingObject()->setProperty(attribute.name().toString().toLatin1(), attribute.value().toInt()))
                                d->errors << QStringLiteral("Error when setting property '%1' of object with id '%2'.").arg(attribute.name().toString()).arg(id);
                        }
                        else if (QString::fromLatin1(metaProperty.typeName()).endsWith('*')) {
                            QModelingElement *propertyObject = d->idMap.value(attribute.value().toString());
                            if (propertyObject) {
                                int methodCount = modelingObject->asQModelingObject()->metaObject()->methodCount();
                                int i;
                                for (i = 0; i < methodCount; ++i) {
                                    QMetaMethod metaMethod = modelingObject->asQModelingObject()->metaObject()->method(i);
                                    if (QString::fromLatin1(metaMethod.name()) == QStringLiteral("set%1").arg(elementName)) {
                                        if (!metaMethod.invoke(modelingObject->asQModelingObject(), ::Q_ARG(QObject *, propertyObject->asQModelingObject())))
                                            d->errors << QStringLiteral("Error when invoking metamethod '%1' on object '%2'.").arg(QString::fromLatin1(metaMethod.name())).arg(propertyObject->asQModelingObject()->objectName());
                                        break;
                                    }
                                }
                                if (i == methodCount)
                                    d->errors << QStringLiteral("Metamethod add/set'%1' not found on object '%2'.").arg(elementName).arg(propertyObject->asQModelingObject()->objectName());

                            }
                        }
                    }
                    else
                        d->errors << QStringLiteral("Property '%1' not found in object of type '%2'. Corresponding metamodel loaded ?").arg(attribute.name().toString()).arg(QString::fromLatin1(modelingObject->asQModelingObject()->metaObject()->className()));
                }
                if (!stack.isEmpty()) {
                    QModelingElement *containerObject = stack.top().second;
                    QString elementName = reader.name().toString();
                    elementName = elementName.left(1).toUpper() + elementName.mid(1);
                    int methodCount = containerObject->asQModelingObject()->metaObject()->methodCount();
                    int i;
                    for (i = 0; i < methodCount; ++i) {
                        QMetaMethod metaMethod = containerObject->asQModelingObject()->metaObject()->method(i);
                        if (QString::fromLatin1(metaMethod.name()) == QStringLiteral("add%1").arg(elementName) ||
                            QString::fromLatin1(metaMethod.name()) == QStringLiteral("set%1").arg(elementName)) {
                            if (!metaMethod.invoke(containerObject->asQModelingObject(), ::Q_ARG(QObject *, modelingObject->asQModelingObject())))
                                d->errors << QStringLiteral("Error when invoking metamethod '%1' on object '%2'.").arg(QString::fromLatin1(metaMethod.name())).arg(containerObject->asQModelingObject()->objectName());
                            break;
                        }
                    }
                    if (i == methodCount)
                        d->errors << QStringLiteral("Metamethod add/set'%1' not found on object '%2'.").arg(elementName).arg(containerObject->asQModelingObject()->objectName());
                }
                stack.push(QPair<QString, QModelingElement *>(reader.name().toString(), modelingObject));
            }
            else
                d->errors << QStringLiteral("Could not cross reference instance with id '%1' in element '%2'. Bad formed XMI file ?").arg(id).arg(reader.name().toString());
        }
        else if (reader.isEndElement() && !stack.isEmpty() && stack.top().first == reader.name()) {
            stack.pop();
            if (stack.isEmpty() && !importedId.isEmpty())
                break;
        }
    }

    return modelingObjectList;
}

/*!
    Use the factory facilities of metamodel plugin identified by \a namespaceUri to create \a instanceName as an object with type is \a instanceClass.
*/
QModelingElement *QXmiReader::createInstance(QString namespaceUri, QString instanceType, QString instanceName)
{
    Q_D(QXmiReader);
    QMetaModelPlugin *metamodelPlugin = d->metaModelPlugins[namespaceUri].first;
    QModelingElement *modelingElement = metamodelPlugin->createModelingElement(instanceType);
    if (modelingElement) {
        modelingElement->asQModelingObject()->setObjectName(instanceName);
        modelingElement->asQModelingObject()->setProperty("namespaceUri", namespaceUri);
        return modelingElement;
    }
    return 0;
}

/*!
    Returns the errors found during model import.
*/
QStringList QXmiReader::errorStrings() const
{
    Q_D(const QXmiReader);

    return d->errors;
}

#include "moc_qxmireader.cpp"

QT_END_NAMESPACE

