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

#include "qmofliteralinteger.h"
#include "qmofliteralinteger_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofLiteralIntegerPrivate::QMofLiteralIntegerPrivate()
{
}

QMofLiteralIntegerPrivate::~QMofLiteralIntegerPrivate()
{
}

/*!
    \class QMofLiteralInteger

    \inmodule QtMof

    \brief A literal integer is a specification of an integer value.
 */

QMofLiteralInteger::QMofLiteralInteger(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofLiteralSpecification(*new QMofLiteralIntegerPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofLiteralInteger::QMofLiteralInteger(QMofLiteralIntegerPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofLiteralSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QMofLiteralInteger::~QMofLiteralInteger()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofLiteralInteger
// ---------------------------------------------------------------

/*!
    The specified Integer value.
 */
qint32 QMofLiteralInteger::value() const
{
    // This is a read-write attribute

    Q_D(const QMofLiteralInteger);
    return d->value;
}

void QMofLiteralInteger::setValue(qint32 value)
{
    // This is a read-write attribute

    Q_D(QMofLiteralInteger);
    if (d->value != value) {
        d->value = value;
    }
}

/*!
    The query integerValue() gives the value.
 */
qint32 QMofLiteralInteger::integerValue() const
{
    qWarning("QMofLiteralInteger::integerValue: operation to be implemented");

    return qint32(); // change here to your derived return
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QMofLiteralInteger::isComputable() const
{
    qWarning("QMofLiteralInteger::isComputable: operation to be implemented");

    return bool(); // change here to your derived return
}

void QMofLiteralInteger::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLiteralInteger")][QString::fromLatin1("value")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLiteralInteger")][QString::fromLatin1("value")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLiteralInteger")][QString::fromLatin1("value")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specified Integer value.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLiteralInteger")][QString::fromLatin1("value")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLiteralInteger")][QString::fromLatin1("value")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLiteralInteger")][QString::fromLatin1("value")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QMofLiteralSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofliteralinteger.cpp"

