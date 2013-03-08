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

#include "qumlliteralboolean.h"
#include "qumlliteralboolean_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlLiteralBooleanPrivate::QUmlLiteralBooleanPrivate() :
    value(false)
{
}

QUmlLiteralBooleanPrivate::~QUmlLiteralBooleanPrivate()
{
}

/*!
    \class QUmlLiteralBoolean

    \inmodule QtUml

    \brief A literal Boolean is a specification of a Boolean value.
 */

QUmlLiteralBoolean::QUmlLiteralBoolean(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlLiteralSpecification(*new QUmlLiteralBooleanPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlLiteralBoolean::QUmlLiteralBoolean(QUmlLiteralBooleanPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlLiteralSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlLiteralBoolean::~QUmlLiteralBoolean()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlLiteralBoolean
// ---------------------------------------------------------------

/*!
    The specified Boolean value.
 */
bool QUmlLiteralBoolean::value() const
{
    // This is a read-write attribute

    Q_D(const QUmlLiteralBoolean);
    return d->value;
}

void QUmlLiteralBoolean::setValue(bool value)
{
    // This is a read-write attribute

    Q_D(QUmlLiteralBoolean);
    if (d->value != value) {
        d->value = value;
    }
    d->modifiedResettableProperties << QString::fromLatin1("value");
}

void QUmlLiteralBoolean::unsetValue()
{
    setValue(false);
    Q_D(QUmlLiteralBoolean);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("value"));
}

/*!
    The query booleanValue() gives the value.
 */
bool QUmlLiteralBoolean::booleanValue() const
{
    qWarning("QUmlLiteralBoolean::booleanValue: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QUmlLiteralBoolean::isComputable() const
{
    qWarning("QUmlLiteralBoolean::isComputable: operation to be implemented");

    return bool(); // change here to your derived return
}

void QUmlLiteralBoolean::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLiteralBoolean")][QString::fromLatin1("value")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLiteralBoolean")][QString::fromLatin1("value")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLiteralBoolean")][QString::fromLatin1("value")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specified Boolean value.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLiteralBoolean")][QString::fromLatin1("value")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLiteralBoolean")][QString::fromLatin1("value")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLiteralBoolean")][QString::fromLatin1("value")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlLiteralSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlliteralboolean.cpp"

