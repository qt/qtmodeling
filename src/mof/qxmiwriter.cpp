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

#include "qxmiwriter.h"
#include "qxmiwriter_p.h"

#include <QtCore/QIODevice>
#include <QtCore/QRegularExpression>

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaWrappedObject>
#include <QtWrappedObjects/QMetaPropertyInfo>
#include <QtWrappedObjects/QtWrappedObjectsEnumerations>
using QtWrappedObjects::QMetaWrappedObject;
using QtWrappedObjects::QMetaPropertyInfo;

QT_BEGIN_NAMESPACE_QTMOF

QXmiWriterPrivate::QXmiWriterPrivate(QWrappedObject *wrappedObject)
    : wrappedObject(wrappedObject)
{
    writer.setAutoFormatting(true);
    writer.setAutoFormattingIndent(2);
}

QXmiWriterPrivate::~QXmiWriterPrivate()
{
}

QXmiWriter::QXmiWriter(QWrappedObject *wrappedObject, QObject *parent) :
    QObject(*new QXmiWriterPrivate(wrappedObject), parent)
{
}

QXmiWriter::~QXmiWriter()
{
}

bool QXmiWriter::writeFile(QIODevice *device)
{
    Q_D(QXmiWriter);
    d->writer.setDevice(device);

    d->writer.writeStartDocument();
    d->writer.writeStartElement(QString::fromLatin1("xmi:XMI"));
    d->writer.writeNamespace(QString::fromLatin1("http://www.omg.org/spec/XMI/20110701"), QString::fromLatin1("xmi"));
    d->writer.writeNamespace(QString::fromLatin1("http://www.omg.org/spec/UML/20110701"), QString::fromLatin1("uml"));
    d->writer.writeNamespace(QString::fromLatin1("http://www.omg.org/spec/MOF/20110701"), QString::fromLatin1("mofext"));

    d->visitedObjects.clear();
    d->idMap.clear();
    d->idStack.clear();
    d->blacklistedOppositeEnds.clear();

    populateIdMap(d->wrappedObject);
    writeWrappedObject(d->wrappedObject);

    d->writer.writeEndDocument();
    return true;
}

void QXmiWriter::populateIdMap(QWrappedObject *wrappedObject, int index)
{
    Q_D(QXmiWriter);

    if (wrappedObject->metaWrappedObject()->indexOfProperty("name") != -1)
        d->idStack << wrappedObject->property("name").toString();
    else
        d->idStack << QString::fromLatin1(wrappedObject->metaObject()->className()).remove(QRegularExpression(QString::fromLatin1("^Q"))) +
                      QString::fromLatin1((index != -1) ? ".%1":"").arg(index);
    d->idMap.insert(wrappedObject, d->idStack.join(QString::fromLatin1("-")));

    wrappedObject->registerMetaTypes();

    const QMetaWrappedObject *metaWrappedObject = wrappedObject->metaWrappedObject();
    int propertyCount = metaWrappedObject->propertyCount();

    for (int i = 0; i < propertyCount; ++i) {
        QMetaPropertyInfo metaPropertyInfo = metaWrappedObject->property(i);
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        QWrappedObject *propertyWrappedObject = metaPropertyInfo.propertyWrappedObject;
        QString typeName = QString::fromLatin1(metaProperty.typeName());
        QVariant variant = metaProperty.read(propertyWrappedObject);
        QString aggregationRole = wrappedObject->propertyData(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className()),
                                                              metaProperty,
                                                              QtWrappedObjects::QtWrappedObjects::AggregationRole).toString();

        if (aggregationRole == QString::fromLatin1("composite"))
            if (!wrappedObject->propertyData(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className()),
                                             metaProperty,
                                             QtWrappedObjects::QtWrappedObjects::OppositeEndRole).toString().isEmpty())
                d->blacklistedOppositeEnds << wrappedObject->propertyData(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className()),
                                                                          metaProperty,
                                                                          QtWrappedObjects::QtWrappedObjects::OppositeEndRole).toString();

        if (wrappedObject->propertyData(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className()),
                                        metaProperty,
                                        QtWrappedObjects::QtWrappedObjects::AggregationRole).toString() != QString::fromLatin1("composite"))
            continue;

        if (typeName.endsWith('*') && qvariant_cast<QWrappedObject *>(variant))
            populateIdMap(qTopLevelWrapper(qvariant_cast<QWrappedObject *>(variant)), 0);
        else if (typeName.contains(QString::fromLatin1("QSet")) && variant.isValid()) {
            QSet<QWrappedObject *> elements = *(static_cast<QSet<QWrappedObject *> *>(variant.data()));
            int i = 0;
            foreach (QWrappedObject *objectElement, elements)
                populateIdMap(qTopLevelWrapper(objectElement), i++);
        }
        else if (typeName.contains(QString::fromLatin1("QList")) && variant.isValid()) {
            QList<QWrappedObject *> elements = *(static_cast<QList<QWrappedObject *> *>(variant.data()));
            int i = 0;
            foreach (QWrappedObject *objectElement, elements)
                populateIdMap(qTopLevelWrapper(objectElement), i++);
        }
    }

    d->idStack.removeLast();
}

void QXmiWriter::writeWrappedObject(QWrappedObject *wrappedObject, QString elementName)
{
    Q_D(QXmiWriter);

    if (d->visitedObjects.contains(wrappedObject))
        return;

    d->visitedObjects.append(wrappedObject);
    wrappedObject->registerMetaTypes();

    d->writer.writeStartElement(elementName.isEmpty() ? QString::fromLatin1(d->wrappedObject->metaObject()->className()).remove(QRegularExpression(QString::fromLatin1("^Q"))).prepend(QString::fromLatin1("uml:"))
                                                      :
                                                        elementName);
    if (!elementName.isEmpty())
        d->writer.writeAttribute(QString::fromLatin1("xmi:type"), QString::fromLatin1(wrappedObject->metaObject()->className()).remove(QRegularExpression(QString::fromLatin1("^Q"))).prepend(QString::fromLatin1("uml:")));

    const QMetaWrappedObject *metaWrappedObject = wrappedObject->metaWrappedObject();
    int propertyCount = metaWrappedObject->propertyCount();

    for (int i = propertyCount - 1; i >= 0; --i) {
        QMetaPropertyInfo metaPropertyInfo = metaWrappedObject->property(i);
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        QWrappedObject *propertyWrappedObject = metaPropertyInfo.propertyWrappedObject;
        QVariant variant = metaProperty.read(propertyWrappedObject);

        if (!metaProperty.isStored() || QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className()),
                                                                     metaProperty,
                                                                     QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole).toBool())
            continue;

        if (metaProperty.type() == QVariant::String) {
            QString value = variant.toString();
            if (!value.isEmpty())
                d->writer.writeAttribute(QString::fromLatin1(metaProperty.name()), value);
        }
        else if (metaProperty.type() == QVariant::Bool) {
            if (!metaProperty.isResettable() || (metaProperty.isResettable() && propertyWrappedObject->isPropertyModified(metaProperty)))
                d->writer.writeAttribute(QString::fromLatin1(metaProperty.name()), QString::fromLatin1(variant.toBool() ? "true":"false"));
        }
        else if (metaProperty.isEnumType()) {
            if (!metaProperty.isResettable() || (metaProperty.isResettable() && propertyWrappedObject->isPropertyModified(metaProperty))) {
                QMetaEnum metaEnum = metaProperty.enumerator();
                if (!QString::fromLatin1(metaEnum.key(variant.toInt())).isEmpty())
                    d->writer.writeAttribute(QString::fromLatin1(metaProperty.name()), QString::fromLatin1(metaEnum.key(variant.toInt())).toLower().remove(QString::fromLatin1(metaProperty.name())));
            }
        }
    }

    d->writer.writeAttribute(QString::fromLatin1("xmi:id"), d->idMap.value(wrappedObject));
    for (int i = propertyCount - 1; i >= 0; --i) {
        QMetaPropertyInfo metaPropertyInfo = metaWrappedObject->property(i);
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;

        if (d->blacklistedOppositeEnds.contains(QString::fromLatin1("%1::%2").arg(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className())).arg(QString::fromLatin1(metaProperty.name()).remove(QRegularExpression(QString::fromLatin1("_$"))))))
            continue;

        QWrappedObject *propertyWrappedObject = metaPropertyInfo.propertyWrappedObject;
        QString typeName = QString::fromLatin1(metaProperty.typeName());
        QVariant variant = metaProperty.read(propertyWrappedObject);
        QString aggregationRole = wrappedObject->propertyData(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className()),
                                                              metaProperty,
                                                              QtWrappedObjects::QtWrappedObjects::AggregationRole).toString();
        QString modifiedPropertyName = QString::fromLatin1(metaProperty.name()).remove(QRegularExpression(QString::fromLatin1("_$"))).remove(QRegularExpression(QString::fromLatin1("s$"))).replace(QRegularExpression(QString::fromLatin1("ie$")), QString::fromLatin1("y")).replace(QRegularExpression(QString::fromLatin1("sse$")), QString::fromLatin1("ss")).replace(QRegularExpression(QString::fromLatin1("ice$")), QString::fromLatin1("ex")).replace(QRegularExpression(QString::fromLatin1("ce$")), QString::fromLatin1("x"));

        if (!metaProperty.isStored() || QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className()), metaProperty, QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole).toBool())
            continue;

        if (typeName.endsWith('*') && qvariant_cast<QWrappedObject *>(variant)) {
            if (aggregationRole == QString::fromLatin1("composite")) {
                writeWrappedObject(qTopLevelWrapper(qvariant_cast<QWrappedObject *>(variant)), modifiedPropertyName);
            }
            else {
                d->writer.writeStartElement(QString::fromLatin1(metaProperty.name()));
                d->writer.writeAttribute(QString::fromLatin1("xmi:idref"), d->idMap.value(qTopLevelWrapper(qvariant_cast<QWrappedObject *>(variant))));
                d->writer.writeEndElement();
            }
        }
        else if (typeName.contains(QString::fromLatin1("QSet")) && variant.isValid()) {
            QSet<QWrappedObject *> elements = *(static_cast<QSet<QWrappedObject *> *>(variant.data()));
            if (aggregationRole == QString::fromLatin1("composite")) {
                foreach (QWrappedObject *objectElement, elements)
                    writeWrappedObject(qTopLevelWrapper(objectElement), modifiedPropertyName);
            }
            else {
                foreach (QWrappedObject *objectElement, elements) {
                    d->writer.writeStartElement(QString::fromLatin1(metaProperty.name()));
                    d->writer.writeAttribute(QString::fromLatin1("xmi:idref"), d->idMap.value(qTopLevelWrapper(objectElement)));
                    d->writer.writeEndElement();
                }
            }
        }
        else if (typeName.contains(QString::fromLatin1("QList")) && variant.isValid()) {
            QList<QWrappedObject *> elements = *(static_cast<QList<QWrappedObject *> *>(variant.data()));
            if (aggregationRole == QString::fromLatin1("composite")) {
                foreach (QWrappedObject *objectElement, elements)
                    writeWrappedObject(qTopLevelWrapper(objectElement), modifiedPropertyName);
            }
            else {
                foreach (QWrappedObject *objectElement, elements) {
                    d->writer.writeStartElement(QString::fromLatin1(metaProperty.name()));
                    d->writer.writeAttribute(QString::fromLatin1("xmi:idref"), d->idMap.value(qTopLevelWrapper(objectElement)));
                    d->writer.writeEndElement();
                }
            }
        }
    }

    d->writer.writeEndElement();
}

#include "moc_qxmiwriter.cpp"

QT_END_NAMESPACE_QTMOF

