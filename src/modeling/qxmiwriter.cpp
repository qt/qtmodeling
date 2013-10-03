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
#include "qxmiwriter.h"
#include "qxmiwriter_p.h"
#include "qmetamodelplugin.h"

#include <QtModeling/QModelingObject>

#include <QtCore/QDebug>

#include <QtCore/QSet>
#include <QtCore/QDir>
#include <QtCore/QJsonObject>
#include <QtCore/QPluginLoader>
#include <QtCore/QMetaClassInfo>
#include <QtCore/QCoreApplication>
#include <QtCore/QRegularExpression>

QT_BEGIN_NAMESPACE

QXmiWriterPrivate::QXmiWriterPrivate(QObject *modelingObject)
    : modelingObject(modelingObject)
{
    writer.setAutoFormatting(true);
    writer.setAutoFormattingIndent(2);
}

QXmiWriterPrivate::~QXmiWriterPrivate()
{
}

QXmiWriter::QXmiWriter(QObject *modelingObject, QObject *parent) :
    QObject(*new QXmiWriterPrivate(modelingObject), parent)
{
    loadPlugins();
}

QXmiWriter::~QXmiWriter()
{
}

void QXmiWriter::loadPlugins()
{
    Q_D(QXmiWriter);

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

bool QXmiWriter::writeFile(QIODevice *device)
{
    Q_D(QXmiWriter);
    d->writer.setDevice(device);

    d->writer.writeStartDocument();
    d->writer.writeStartElement(QString::fromLatin1("xmi:XMI"));
    d->writer.writeNamespace(QString::fromLatin1("http://www.omg.org/spec/XMI/20110701"), QString::fromLatin1("xmi"));

    QString metaModelClassName = QString::fromLatin1(d->modelingObject->metaObject()->className());
    int pos = 2;
    while (metaModelClassName[pos] == metaModelClassName[pos].toLower()) pos++;
    QString metaModelImplementationNamespace = metaModelClassName.left(pos);
    typedef QPair<QMetaModelPlugin *, QJsonObject> PluginData;
    foreach (const PluginData &pair, d->metaModelPlugins.values()) {
        if (pair.second.value(QString::fromLatin1("MetaModelPrefix")).toString() == metaModelImplementationNamespace) {
            d->metaModelXmlNamespace = pair.second.value(QString::fromLatin1("MetaModelPrefix")).toString().mid(1).toLower();
            d->writer.writeNamespace(pair.second.value(QString::fromLatin1("MetaModelNamespaceUri")).toString(), d->metaModelXmlNamespace);
            break;
        }
    }

    d->idMap.clear();
    d->idStack.clear();
    d->blacklistedOppositeEnds.clear();

    d->visitedObjects.clear();
    populateIdMap(d->modelingObject);
    d->visitedObjects.clear();
    writeObject(d->modelingObject);

    d->writer.writeEndDocument();
    return true;
}

void QXmiWriter::populateIdMap(QObject *modelingObject, int index)
{
    Q_D(QXmiWriter);

    if (modelingObject->metaObject()->indexOfProperty("name") != -1)
        d->idStack << modelingObject->property("name").toString();
    else
        d->idStack << QString::fromLatin1(modelingObject->metaObject()->className()).remove(QString::fromLatin1(modelingObject->metaObject()->classInfo(modelingObject->metaObject()->indexOfClassInfo("MetaModelPrefix")).value())) +
                      QString::fromLatin1((index != -1) ? ".%1":"").arg(index);
    d->idMap.insert(modelingObject, d->idStack.join(QString::fromLatin1("-")));
    d->visitedObjects.append(modelingObject);

    const QMetaObject *metaObject = modelingObject->metaObject();
    int propertyCount = metaObject->propertyCount();

    for (int i = 0; i < propertyCount; ++i) {
        QMetaProperty metaProperty = metaObject->property(i);
        QString typeName = QString::fromLatin1(metaProperty.typeName());
        QVariant variant = metaProperty.read(modelingObject);
        QString aggregationRole = QModelingObject::propertyData(metaProperty, QtModeling::AggregationRole).toString();

        if (aggregationRole == QString::fromLatin1("composite"))
            if (!QModelingObject::propertyData(metaProperty, QtModeling::OppositeEndRole).toString().isEmpty()) {
                d->blacklistedOppositeEnds << QModelingObject::propertyData(metaProperty, QtModeling::OppositeEndRole).toString().split('-').last();
                qDebug() << "Incluindo " << QModelingObject::propertyData(metaProperty, QtModeling::OppositeEndRole).toString().split('-').last();
            }

        if (QModelingObject::propertyData(metaProperty, QtModeling::AggregationRole).toString() != QString::fromLatin1("composite"))
            continue;

        if (typeName.endsWith('*') && qvariant_cast<QObject *>(variant))
            populateIdMap(qvariant_cast<QObject *>(variant), 0);
        else if (typeName.contains(QString::fromLatin1("QSet")) && variant.isValid()) {
            QSet<QObject *> elements = *(static_cast<QSet<QObject *> *>(variant.data()));
            int i = 0;
            foreach (QObject *objectElement, elements) {
                if (!d->visitedObjects.contains(objectElement))
                    populateIdMap(objectElement, i++);
            }
        }
        else if (typeName.contains(QString::fromLatin1("QList")) && variant.isValid()) {
            QList<QObject *> elements = *(static_cast<QList<QObject *> *>(variant.data()));
            int i = 0;
            foreach (QObject *objectElement, elements) {
                if (!d->visitedObjects.contains(objectElement))
                    populateIdMap(objectElement, i++);
            }
        }
    }

    d->idStack.removeLast();
}

void QXmiWriter::writeObject(QObject *modelingObject, QString elementName)
{
    Q_D(QXmiWriter);

    if (d->visitedObjects.contains(modelingObject))
        return;

    d->visitedObjects.append(modelingObject);

    d->writer.writeStartElement(elementName.isEmpty() ? QString::fromLatin1(d->modelingObject->metaObject()->className()).remove(QString::fromLatin1(modelingObject->metaObject()->classInfo(modelingObject->metaObject()->indexOfClassInfo("MetaModelPrefix")).value())).remove(QRegExp(QStringLiteral("Object$"))).prepend(QString::fromLatin1("%1:").arg(d->metaModelXmlNamespace))
                                                      :
                                                        elementName);
    if (!elementName.isEmpty())
        d->writer.writeAttribute(QString::fromLatin1("xmi:type"), QString::fromLatin1(modelingObject->metaObject()->className()).remove(QString::fromLatin1(modelingObject->metaObject()->classInfo(modelingObject->metaObject()->indexOfClassInfo("MetaModelPrefix")).value())).remove(QRegExp(QStringLiteral("Object$"))).prepend(QString::fromLatin1(modelingObject->metaObject()->classInfo(modelingObject->metaObject()->indexOfClassInfo("MetaModelPrefix")).value()).mid(1).toLower().append(QString::fromLatin1(":"))));

    const QMetaObject *metaObject = modelingObject->metaObject();
    int propertyCount = metaObject->propertyCount();

    for (int i = propertyCount - 1; i >= 0; --i) {
        QMetaProperty metaProperty = metaObject->property(i);
        QVariant variant = metaProperty.read(modelingObject);

        if (!metaProperty.isStored() || QString::fromLatin1(metaProperty.name()) == QString::fromLatin1("objectName") || QModelingObject::propertyData(metaProperty, QtModeling::IsDerivedUnionRole).toBool())
            continue;

        if (metaProperty.type() == QVariant::String) {
            QString value = variant.toString();
            if (!value.isEmpty())
                d->writer.writeAttribute(QString::fromLatin1(metaProperty.name()), value);
        }
        else if (metaProperty.type() == QVariant::Bool) {
            //if (!metaProperty.isResettable() || (metaProperty.isResettable() && modelingObject->isPropertyModified(metaProperty)))
                d->writer.writeAttribute(QString::fromLatin1(metaProperty.name()), QString::fromLatin1(variant.toBool() ? "true":"false"));
        }
        else if (metaProperty.isEnumType()) {
            //if (!metaProperty.isResettable() || (metaProperty.isResettable() && modelingObject->isPropertyModified(metaProperty))) {
                QMetaEnum metaEnum = metaProperty.enumerator();
                if (!QString::fromLatin1(metaEnum.key(variant.toInt())).isEmpty())
                    d->writer.writeAttribute(QString::fromLatin1(metaProperty.name()), QString::fromLatin1(metaEnum.key(variant.toInt())).toLower().remove(QString::fromLatin1(metaProperty.name())));
            //}
        }
    }

    d->writer.writeAttribute(QString::fromLatin1("xmi:id"), d->idMap.value(modelingObject));
    for (int i = propertyCount - 1; i >= 0; --i) {
        QMetaProperty metaProperty = metaObject->property(i);

        qDebug() << "Contem " << QString::fromLatin1(metaProperty.name()).remove(QRegularExpression(QString::fromLatin1("_$")));
        if (d->blacklistedOppositeEnds.contains(QString::fromLatin1(metaProperty.name()).remove(QRegularExpression(QString::fromLatin1("_$")))))
            continue;

        QString typeName = QString::fromLatin1(metaProperty.typeName());
        QVariant variant = metaProperty.read(modelingObject);
        QString aggregationRole = QModelingObject::propertyData(metaProperty, QtModeling::AggregationRole).toString();
        QString modifiedPropertyName = QString::fromLatin1(metaProperty.name()).remove(QRegularExpression(QString::fromLatin1("_$"))).remove(QRegularExpression(QString::fromLatin1("s$"))).replace(QRegularExpression(QString::fromLatin1("ie$")), QString::fromLatin1("y")).replace(QRegularExpression(QString::fromLatin1("sse$")), QString::fromLatin1("ss")).replace(QRegularExpression(QString::fromLatin1("ice$")), QString::fromLatin1("ex")).replace(QRegularExpression(QString::fromLatin1("ce$")), QString::fromLatin1("x"));

        if (!metaProperty.isStored() || QModelingObject::propertyData(metaProperty, QtModeling::IsDerivedUnionRole).toBool())
            continue;

        if (typeName.endsWith('*') && qvariant_cast<QObject *>(variant)) {
            if (aggregationRole == QString::fromLatin1("composite")) {
                writeObject(qvariant_cast<QObject *>(variant), modifiedPropertyName);
            }
            else {
                d->writer.writeStartElement(QString::fromLatin1(metaProperty.name()));
                d->writer.writeAttribute(QString::fromLatin1("xmi:idref"), d->idMap.value(qvariant_cast<QObject *>(variant)));
                d->writer.writeEndElement();
            }
        }
        else if (typeName.contains(QString::fromLatin1("QSet")) && variant.isValid()) {
            QSet<QObject *> elements = *(static_cast<QSet<QObject *> *>(variant.data()));
            if (aggregationRole == QString::fromLatin1("composite")) {
                foreach (QObject *objectElement, elements)
                    writeObject(objectElement, modifiedPropertyName);
            }
            else {
                foreach (QObject *objectElement, elements) {
                    d->writer.writeStartElement(QString::fromLatin1(metaProperty.name()));
                    d->writer.writeAttribute(QString::fromLatin1("xmi:idref"), d->idMap.value(objectElement));
                    d->writer.writeEndElement();
                }
            }
        }
        else if (typeName.contains(QString::fromLatin1("QList")) && variant.isValid()) {
            QList<QObject *> elements = *(static_cast<QList<QObject *> *>(variant.data()));
            if (aggregationRole == QString::fromLatin1("composite")) {
                foreach (QObject *objectElement, elements)
                    writeObject(objectElement, modifiedPropertyName);
            }
            else {
                foreach (QObject *objectElement, elements) {
                    d->writer.writeStartElement(QString::fromLatin1(metaProperty.name()));
                    d->writer.writeAttribute(QString::fromLatin1("xmi:idref"), d->idMap.value(objectElement));
                    d->writer.writeEndElement();
                }
            }
        }
    }

    d->writer.writeEndElement();
}

#include "moc_qxmiwriter.cpp"

QT_END_NAMESPACE

