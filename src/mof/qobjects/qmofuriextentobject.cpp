/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofuriextentobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofURIExtent>
#include <QtMof/QMofElement>

QT_BEGIN_NAMESPACE

QMofURIExtentObject::QMofURIExtentObject(QMofURIExtent *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OPERATIONS [URIExtent]

QString QMofURIExtentObject::contextURI() const
{
    return qmodelingelementproperty_cast<QMofURIExtent *>(this)->contextURI();
}

QString QMofURIExtentObject::uri(QObject *object) const
{
    return qmodelingelementproperty_cast<QMofURIExtent *>(this)->uri(qmodelingelementproperty_cast<QMofElement *>(object));
}

QObject *QMofURIExtentObject::element(QString uri) const
{
    if (!qmodelingelementproperty_cast<QMofURIExtent *>(this)->element(uri))
        return 0;
    else
        return qmodelingelementproperty_cast<QMofURIExtent *>(this)->element(uri)->asQModelingObject();
}


void QMofURIExtentObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMof");

    d->propertyGroups << QStringLiteral("QMofURIExtent");
}

void QMofURIExtentObject::setPropertyData()
{
}

QT_END_NAMESPACE

