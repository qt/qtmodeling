/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qxmireader.h"
#include "qxmireader_p.h"

#include <QtCore/QDir>
#include <QtCore/QStack>
#include <QtCore/QIODevice>
#include <QtCore/QMetaMethod>
#include <QtCore/QPluginLoader>
#include <QtCore/QCoreApplication>
#include <QtCore/QRegularExpression>

#include <QtCore/QDebug>

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaModelPlugin>
#include <QtWrappedObjects/QMetaPropertyInfo>
#include <QtWrappedObjects/QMetaWrappedObject>
#include <QtWrappedObjects/QtWrappedObjectsNamespace>

using QT_PREPEND_NAMESPACE_QTWRAPPEDOBJECTS(QMetaPropertyInfo);
using QT_PREPEND_NAMESPACE_QTWRAPPEDOBJECTS(QMetaWrappedObject);

QT_BEGIN_NAMESPACE_QTMOF

QXmiReaderPrivate::QXmiReaderPrivate()
{
}

QXmiReaderPrivate::~QXmiReaderPrivate()
{
}

QXmiReader::QXmiReader(QObject *parent) :
    QObject(*new QXmiReaderPrivate, parent)
{
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
                d->metaModelPlugins.insert(metaModelPlugin->metaModelNamespaceUri(), metaModelPlugin);
        }
    }
    qDebug() << "Metamodel plugins:" << d->metaModelPlugins;
}

QWrappedObject *QXmiReader::readFile(QIODevice *device)
{
    Q_D(QXmiReader);

    d->errors.clear();
    d->reader.setDevice(device);
    QWrappedObject *rootElement = 0;

    while (!d->reader.atEnd()) {
        d->reader.readNext();

        if (d->reader.isStartElement()) {
            foreach (const QXmlStreamNamespaceDeclaration &namespaceDeclaration, d->reader.namespaceDeclarations()) {
                QMetaModelPlugin *metaModelPlugin = d->metaModelPlugins.value(namespaceDeclaration.namespaceUri().toString());
                if (metaModelPlugin)
                    metaModelPlugin->initMetaModel();
                else
                    d->errors << QString::fromLatin1("Could not find metamodel for namespace URI '%1'").arg(namespaceDeclaration.namespaceUri().toString());
            }
            QString xmiType = d->reader.attributes().value(QString::fromLatin1("xmi:type")).toString().split(':').last();
            if (xmiType.isEmpty() && d->reader.namespaceUri() == QString::fromLatin1("http://www.omg.org/spec/UML/20110701"))
                xmiType = d->reader.name().toString();
            if (xmiType.isEmpty())
                continue;
            QString instanceName = d->reader.attributes().value(QString::fromLatin1("name")).toString();
            if (instanceName.isEmpty())
                instanceName = d->reader.attributes().value(QString::fromLatin1("xmi:id")).toString();
            QWrappedObject *wrappedObject = createInstance(xmiType.prepend(QString::fromLatin1("Q")).append(QString::fromLatin1("*")), instanceName);
            if (wrappedObject) {
                d->idMap.insert(d->reader.attributes().value(QString::fromLatin1("xmi:id")).toString(), wrappedObject);
                if (!rootElement)
                    rootElement = wrappedObject;
            }
            else
                d->errors << QString::fromLatin1("Could not create instance with id '%1' and type '%2'. Corresponding metamodel loaded ?").arg(instanceName).arg(xmiType);
        }
    }

    device->reset();
    d->reader.clear();
    d->reader.setDevice(device);
    QStack<QPair<QString, QWrappedObject *>> stack;

    while (!d->reader.atEnd()) {
        d->reader.readNext();

        if (d->reader.isStartElement()) {
            QString id = d->reader.attributes().value(QString::fromLatin1("xmi:id")).toString();
            if (id.isEmpty())
                id = d->reader.attributes().value(QString::fromLatin1("xmi:idref")).toString();
            if (id.isEmpty())
                id = d->reader.attributes().value(QString::fromLatin1("href")).toString();
            if (id.isEmpty() && !stack.isEmpty())
                continue;

            QWrappedObject *wrappedObject = d->idMap.value(id);

            if (wrappedObject) {
                const QMetaWrappedObject *metaWrappedObject = wrappedObject->metaWrappedObject();
                foreach (QXmlStreamAttribute attribute, d->reader.attributes()) {
                    int propertyIndex;
                    if ((propertyIndex = metaWrappedObject->indexOfProperty(attribute.name().toString().toLatin1())) != -1) {
                        QMetaPropertyInfo metaPropertyInfo = metaWrappedObject->property(propertyIndex);
                        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
                        if (metaProperty.type() == QVariant::Bool) {
                            if (!wrappedObject->setProperty(attribute.name().toString().toLatin1(), attribute.value().toString() == QString::fromLatin1("true") ? true:false))
                                d->errors << QString::fromLatin1("Error when setting property '%1' of object with id '%2'.").arg(attribute.name().toString()).arg(id);
                        }
                        else if (metaProperty.isEnumType()) {
                            if (!wrappedObject->setProperty(attribute.name().toString().toLatin1(), QString::fromLatin1(metaProperty.enumerator().valueToKey(attribute.value().toString().toInt())).toLower().remove(QString::fromLatin1(metaProperty.name())).toLatin1()))
                                d->errors << QString::fromLatin1("Error when setting property '%1' of object with id '%2'.").arg(attribute.name().toString()).arg(id);
                        }
                        else if (metaProperty.type() == QVariant::String) {
                            if (!wrappedObject->setProperty(attribute.name().toString().toLatin1(), attribute.value().toString()))
                                d->errors << QString::fromLatin1("Error when setting property '%1' of object with id '%2'.").arg(attribute.name().toString()).arg(id);
                        }
                    }
                    else
                        d->errors << QString::fromLatin1("Property '%1' not found in object of type '%2'. Corresponding metamodel loaded ?").arg(attribute.name().toString()).arg(QString::fromLatin1(wrappedObject->metaObject()->className()));
                }
                if (!stack.isEmpty()) {
                    QWrappedObject *containerObject = stack.top().second;
                    QString elementName = d->reader.name().toString();
                    elementName = elementName.left(1).toUpper() + elementName.mid(1);
                    int methodCount = containerObject->metaObject()->methodCount();
                    int i;
                    for (i = 0; i < methodCount; ++i) {
                        QMetaMethod metaMethod = containerObject->metaObject()->method(i);
                        if (QString::fromLatin1(metaMethod.name()) == QString::fromLatin1("add%1").arg(elementName) ||
                            QString::fromLatin1(metaMethod.name()) == QString::fromLatin1("set%1").arg(elementName)) {
                            if (!metaMethod.invoke(containerObject, ::Q_ARG(QWrappedObject *, wrappedObject)))
                                d->errors << QString::fromLatin1("Error when invoking metamethod '%1' on object '%2'.").arg(QString::fromLatin1(metaMethod.name())).arg(containerObject->objectName());
                            break;
                        }
                    }
                    if (i == methodCount)
                        d->errors << QString::fromLatin1("Metamethod add/set'%1' not found on object '%2'.").arg(elementName).arg(containerObject->objectName());
                }
                stack.push(QPair<QString, QWrappedObject *>(d->reader.name().toString(), wrappedObject));
            }
            else
                d->errors << QString::fromLatin1("Could not cross reference instance with id '%1' in element '%2'. Bad formed XMI file ?").arg(id).arg(d->reader.name().toString());
        }
        else if (d->reader.isEndElement() && !stack.isEmpty() && stack.top().first == d->reader.name()) {
            stack.pop();
        }
    }

    return rootElement;
}

QWrappedObject *QXmiReader::createInstance(QString instanceClass, QString instanceName)
{
    int type;
    if ((type = QMetaType::type(instanceClass.toLatin1())) != QMetaType::UnknownType) {
        const QMetaObject *metaObject = QMetaType::metaObjectForType(type);
        if (metaObject) {
            QWrappedObject *wrappedObject = dynamic_cast<QWrappedObject *>(metaObject->newInstance());
            if (wrappedObject) {
                qTopLevelWrapper(wrappedObject)->setObjectName(instanceName);
                return wrappedObject;
            }
        }
    }
    return 0;
}

QStringList QXmiReader::errorStrings() const
{
    Q_D(const QXmiReader);

    return d->errors;
}

#include "moc_qxmireader.cpp"

QT_END_NAMESPACE_QTMOF

