/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
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

#include "qinformationitem.h"
#include "qinformationitem_p.h"

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QInformationItemPrivate::QInformationItemPrivate()
{
}

QInformationItemPrivate::~QInformationItemPrivate()
{
}

/*!
    \class QInformationItem

    \inmodule QtUml

    \brief An information item is an abstraction of all kinds of information that can be exchanged between objects. It is a kind of classifier intended for representing information in a very abstract way, one which cannot be instantiated.
 */

QInformationItem::QInformationItem(QWrappedObject *wrapper, QWrappedObject *parent) :
    QClassifier(*new QInformationItemPrivate, wrapper, parent)
{
    setPropertyData();
}

QInformationItem::QInformationItem(QInformationItemPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QClassifier(dd, wrapper, parent)
{
    setPropertyData();
}

QInformationItem::~QInformationItem()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInformationItem
// ---------------------------------------------------------------

/*!
    Determines the classifiers that will specify the structure and nature of the information. An information item represents all its represented classifiers.
 */
QSet<QClassifier *> QInformationItem::represented() const
{
    // This is a read-write association end

    Q_D(const QInformationItem);
    return d->represented;
}

void QInformationItem::addRepresented(QClassifier *represented)
{
    // This is a read-write association end

    Q_D(QInformationItem);
    if (!d->represented.contains(represented)) {
        d->represented.insert(represented);
    }
}

void QInformationItem::removeRepresented(QClassifier *represented)
{
    // This is a read-write association end

    Q_D(QInformationItem);
    if (d->represented.contains(represented)) {
        d->represented.remove(represented);
    }
}

void QInformationItem::registerMetaTypes() const
{
    QClassifier::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QInformationItem::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInformationItem")][QString::fromLatin1("represented")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInformationItem")][QString::fromLatin1("represented")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInformationItem")][QString::fromLatin1("represented")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Determines the classifiers that will specify the structure and nature of the information. An information item represents all its represented classifiers.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInformationItem")][QString::fromLatin1("represented")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInformationItem")][QString::fromLatin1("represented")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInformationItem")][QString::fromLatin1("represented")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QClassifier::setPropertyData();
}

#include "moc_qinformationitem.cpp"

QT_END_NAMESPACE_QTUML

