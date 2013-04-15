/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#include "qumlliteralinteger.h"
#include "qumlliteralinteger_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlLiteralIntegerPrivate::QUmlLiteralIntegerPrivate()
{
}

QUmlLiteralIntegerPrivate::~QUmlLiteralIntegerPrivate()
{
}

/*!
    \class QUmlLiteralInteger

    \inmodule QtUml

    \brief A literal integer is a specification of an integer value.
 */

QUmlLiteralInteger::QUmlLiteralInteger(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlLiteralSpecification(*new QUmlLiteralIntegerPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlLiteralInteger::QUmlLiteralInteger(QUmlLiteralIntegerPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlLiteralSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlLiteralInteger::~QUmlLiteralInteger()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlLiteralInteger
// ---------------------------------------------------------------

/*!
    The specified Integer value.
 */
qint32 QUmlLiteralInteger::value() const
{
    // This is a read-write attribute

    Q_D(const QUmlLiteralInteger);
    return d->value;
}

void QUmlLiteralInteger::setValue(qint32 value)
{
    // This is a read-write attribute

    Q_D(QUmlLiteralInteger);
    if (d->value != value) {
        d->value = value;
    }
}

/*!
    The query integerValue() gives the value.
 */
qint32 QUmlLiteralInteger::integerValue() const
{
    qWarning("QUmlLiteralInteger::integerValue: operation to be implemented");

    return qint32(); // change here to your derived return
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QUmlLiteralInteger::isComputable() const
{
    qWarning("QUmlLiteralInteger::isComputable: operation to be implemented");

    return bool(); // change here to your derived return
}

void QUmlLiteralInteger::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLiteralInteger")][QString::fromLatin1("value")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLiteralInteger")][QString::fromLatin1("value")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLiteralInteger")][QString::fromLatin1("value")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specified Integer value.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLiteralInteger")][QString::fromLatin1("value")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLiteralInteger")][QString::fromLatin1("value")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLiteralInteger")][QString::fromLatin1("value")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlLiteralSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlliteralinteger.cpp"

