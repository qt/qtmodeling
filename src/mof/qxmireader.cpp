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

#include <QtCore/QIODevice>
#include <QtCore/QRegularExpression>
#include <QtCore/QMetaMethod>

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaWrappedObject>
#include <QtWrappedObjects/QMetaPropertyInfo>
#include <QtWrappedObjects/QtWrappedObjectsNamespace>

#include <QtMof/QMofMetaModel>

using QtWrappedObjects::QMetaWrappedObject;
using QtWrappedObjects::QMetaPropertyInfo;

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
    QMofMetaModel::init();
}

QXmiReader::~QXmiReader()
{
}

QWrappedObject *QXmiReader::readFile(QIODevice *device)
{
    Q_D(QXmiReader);

    d->reader.setDevice(device);
    QWrappedObject *rootElement = 0;

    while (!d->reader.atEnd()) {
        d->reader.readNext();

        if (d->reader.isStartElement()) {
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
                            wrappedObject->setProperty(attribute.name().toString().toLatin1(), attribute.value().toString() == QString::fromLatin1("true") ? true:false);
                        }
                        else if (metaProperty.isEnumType()) {
                            wrappedObject->setProperty(attribute.name().toString().toLatin1(), QString::fromLatin1(metaProperty.enumerator().valueToKey(attribute.value().toString().toInt())).toLower().remove(QString::fromLatin1(metaProperty.name())).toLatin1());
                        }
                        else if (metaProperty.type() == QVariant::String) {
                            wrappedObject->setProperty(attribute.name().toString().toLatin1(), attribute.value().toString());
                        }
                    }
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
                            metaMethod.invoke(containerObject, ::Q_ARG(QWrappedObject *, wrappedObject));
                            break;
                        }
                    }
                }
                stack.push(QPair<QString, QWrappedObject *>(d->reader.name().toString(), wrappedObject));
            }
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

#include "moc_qxmireader.cpp"

QT_END_NAMESPACE_QTMOF

