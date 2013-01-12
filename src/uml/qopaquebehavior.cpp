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

#include "qopaquebehavior.h"
#include "qopaquebehavior_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QOpaqueBehaviorPrivate::QOpaqueBehaviorPrivate()
{
}

QOpaqueBehaviorPrivate::~QOpaqueBehaviorPrivate()
{
}

/*!
    \class QOpaqueBehavior

    \inmodule QtUml

    \brief An behavior with implementation-specific semantics.
 */

QOpaqueBehavior::QOpaqueBehavior(QWrappedObject *wrapper, QWrappedObject *parent) :
    QBehavior(*new QOpaqueBehaviorPrivate, wrapper, parent)
{
    setPropertyData();
}

QOpaqueBehavior::QOpaqueBehavior(QOpaqueBehaviorPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QBehavior(dd, wrapper, parent)
{
    setPropertyData();
}

QOpaqueBehavior::~QOpaqueBehavior()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QOpaqueBehavior
// ---------------------------------------------------------------

/*!
    Languages the body strings use in the same order as the body strings.
 */
QList<QString> QOpaqueBehavior::languages() const
{
    // This is a read-write attribute

    Q_D(const QOpaqueBehavior);
    return d->languages;
}

void QOpaqueBehavior::addLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QOpaqueBehavior);
    if (!d->languages.contains(language)) {
        d->languages.append(language);
    }
}

void QOpaqueBehavior::removeLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QOpaqueBehavior);
    if (d->languages.contains(language)) {
        d->languages.removeAll(language);
    }
}

/*!
    Specifies the behavior in one or more languages.
 */
QList<QString> QOpaqueBehavior::bodies() const
{
    // This is a read-write attribute

    Q_D(const QOpaqueBehavior);
    return d->bodies;
}

void QOpaqueBehavior::addBody(QString body)
{
    // This is a read-write attribute

    Q_D(QOpaqueBehavior);
    if (!d->bodies.contains(body)) {
        d->bodies.append(body);
    }
}

void QOpaqueBehavior::removeBody(QString body)
{
    // This is a read-write attribute

    Q_D(QOpaqueBehavior);
    if (d->bodies.contains(body)) {
        d->bodies.removeAll(body);
    }
}

void QOpaqueBehavior::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueBehavior")][QString::fromLatin1("languages")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueBehavior")][QString::fromLatin1("languages")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueBehavior")][QString::fromLatin1("languages")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Languages the body strings use in the same order as the body strings.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueBehavior")][QString::fromLatin1("languages")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueBehavior")][QString::fromLatin1("languages")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueBehavior")][QString::fromLatin1("languages")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueBehavior")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueBehavior")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueBehavior")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the behavior in one or more languages.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueBehavior")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueBehavior")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOpaqueBehavior")][QString::fromLatin1("bodies")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QBehavior::setPropertyData();
}

#include "moc_qopaquebehavior.cpp"

QT_END_NAMESPACE_QTUML

