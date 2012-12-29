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

#include "quriextent.h"
#include "quriextent_p.h"

#include <QtMof/QElement>

QT_BEGIN_NAMESPACE_QTMOF

QURIExtentPrivate::QURIExtentPrivate()
{
}

QURIExtentPrivate::~QURIExtentPrivate()
{
}


QURIExtent::QURIExtent(QWrappedObject *parent, QWrappedObject *wrapper) :
    QExtent(*new QURIExtentPrivate, parent, wrapper)
{
}

QURIExtent::QURIExtent(QURIExtentPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QExtent(dd, parent, wrapper)
{
}

QURIExtent::~QURIExtent()
{
}

QString QURIExtent::contextURI() const
{
    qWarning("QURIExtent::contextURI: operation to be implemented");

    return QString(); // change here to your derived return
}

QString QURIExtent::uri(const QElement *object) const
{
    qWarning("QURIExtent::uri: operation to be implemented");
    Q_UNUSED(object);

    return QString(); // change here to your derived return
}

QElement *QURIExtent::element(QString uri) const
{
    qWarning("QURIExtent::element: operation to be implemented");
    Q_UNUSED(uri);

    return 0; // change here to your derived return
}

void QURIExtent::registerMetaTypes() const
{
    qRegisterMetaType<QElement *>("QElement *");
    qRegisterMetaType<QSet<QElement *>>("QSet<QElement *>");
    qRegisterMetaType<QList<QElement *>>("QList<QElement *>");

    QExtent::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_quriextent.cpp"

QT_END_NAMESPACE_QTMOF

