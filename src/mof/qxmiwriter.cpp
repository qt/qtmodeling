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
    writeWrappedObject(d->wrappedObject);

    d->writer.writeEndDocument();
    return true;
}

void QXmiWriter::writeWrappedObject(QWrappedObject *wrappedObject, QString elementName)
{
    Q_D(QXmiWriter);

    if (d->visitedObjects.contains(wrappedObject))
        return;

    d->visitedObjects.append(wrappedObject);
    wrappedObject->registerMetaTypes();

    const QMetaWrappedObject *metaWrappedObject = wrappedObject->metaWrappedObject();
    d->writer.writeStartElement(elementName.isEmpty() ? QString::fromLatin1(d->wrappedObject->metaObject()->className()).remove(QRegularExpression(QString::fromLatin1("^Q"))).prepend(QString::fromLatin1("uml:")):elementName);
    if (!elementName.isEmpty())
        d->writer.writeAttribute(QString::fromLatin1("xmi:type"), QString::fromLatin1(wrappedObject->metaObject()->className()).remove(QRegularExpression(QString::fromLatin1("^Q"))).prepend(QString::fromLatin1("uml:")));
    int propertyCount = metaWrappedObject->propertyCount();
    for (int i = propertyCount - 1; i >= 0; --i) {
        QMetaPropertyInfo metaPropertyInfo = metaWrappedObject->property(i);
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        QWrappedObject *propertyWrappedObject = metaPropertyInfo.propertyWrappedObject;
        QString typeName = QString::fromLatin1(metaProperty.typeName());
        QVariant variant = metaProperty.read(propertyWrappedObject);
        if (!metaProperty.isStored())
            continue;
        if (metaProperty.type() == QVariant::String) {
            QString value = variant.toString();
            if (!value.isEmpty())
                d->writer.writeAttribute(QString::fromLatin1(metaProperty.name()), value);
        }
        else if (metaProperty.type() == QVariant::Bool) {
//            if (!metaProperty.isResettable() || (metaProperty.isResettable() && metaPropertyInfo.wasChanged))
                d->writer.writeAttribute(QString::fromLatin1(metaProperty.name()), QString::fromLatin1(variant.toBool() ? "true":"false"));
        }
        else if (metaProperty.isEnumType()) {
//            if (!metaProperty.isResettable() || (metaProperty.isResettable() && metaPropertyInfo.wasChanged)) {
                QMetaEnum metaEnum = metaProperty.enumerator();
                d->writer.writeAttribute(QString::fromLatin1(metaProperty.name()), QString::fromLatin1(metaEnum.key(variant.toInt())).toLower().remove(QString::fromLatin1(metaProperty.name())));
//            }
        }
    }
    for (int i = propertyCount - 1; i >= 0; --i) {
        QMetaPropertyInfo metaPropertyInfo = metaWrappedObject->property(i);
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        QWrappedObject *propertyWrappedObject = metaPropertyInfo.propertyWrappedObject;
        QString typeName = QString::fromLatin1(metaProperty.typeName());
        QVariant variant = metaProperty.read(propertyWrappedObject);
        QString modifiedPropertyName = QString::fromLatin1(metaProperty.name()).remove(QRegularExpression(QString::fromLatin1("s$"))).replace(QRegularExpression(QString::fromLatin1("ie$")), QString::fromLatin1("y")).replace(QRegularExpression(QString::fromLatin1("se$")), QString::fromLatin1("s")).replace(QRegularExpression(QString::fromLatin1("ice$")), QString::fromLatin1("ex")).replace(QRegularExpression(QString::fromLatin1("ce$")), QString::fromLatin1("x"));
        if (!metaProperty.isStored())
            continue;
        if (typeName.endsWith('*') && qvariant_cast<QWrappedObject *>(variant))
            writeWrappedObject(qTopLevelWrapper(qvariant_cast<QWrappedObject *>(variant)), modifiedPropertyName);
        else if (typeName.contains(QString::fromLatin1("QSet")) && variant.isValid()) {
            QSet<QWrappedObject *> elements = *(static_cast<QSet<QWrappedObject *> *>(variant.data()));
            foreach (QWrappedObject *objectElement, elements)
                writeWrappedObject(qTopLevelWrapper(objectElement), modifiedPropertyName);
        }
        else if (typeName.contains(QString::fromLatin1("QList")) && variant.isValid()) {
            QList<QWrappedObject *> elements = *(static_cast<QList<QWrappedObject *> *>(variant.data()));
            foreach (QWrappedObject *objectElement, elements)
                writeWrappedObject(qTopLevelWrapper(objectElement), modifiedPropertyName);
        }
    }
    d->writer.writeEndElement();
}

#include "moc_qxmiwriter.cpp"

QT_END_NAMESPACE_QTMOF

