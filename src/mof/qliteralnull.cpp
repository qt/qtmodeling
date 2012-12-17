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

#include "qliteralnull.h"
#include "qliteralnull_p.h"

QT_BEGIN_NAMESPACE_QTMOF

QLiteralNullPrivate::QLiteralNullPrivate()
{
}

QLiteralNullPrivate::~QLiteralNullPrivate()
{
}

/*!
    \class QLiteralNull

    \inmodule QtMof

    \brief A literal null specifies the lack of a value.
 */

QLiteralNull::QLiteralNull(QWrappedObject *parent, QWrappedObject *wrapper) :
    QLiteralSpecification(*new QLiteralNullPrivate, parent, wrapper)
{
}

QLiteralNull::QLiteralNull(QLiteralNullPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QLiteralSpecification(dd, parent, wrapper)
{
}

QLiteralNull::~QLiteralNull()
{
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QLiteralNull::isComputable() const
{
    qWarning("QLiteralNull::isComputable: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isNull() returns true.
 */
bool QLiteralNull::isNull() const
{
    qWarning("QLiteralNull::isNull: operation to be implemented");

    return bool(); // change here to your derived return
}

void QLiteralNull::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QLiteralNull) *>("QT_PREPEND_NAMESPACE_QTMOF(QLiteralNull) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QLiteralNull) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QLiteralNull) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QLiteralNull) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QLiteralNull) *> *");
    qRegisterMetaType<QLiteralNull *>("QLiteralNull *");
    qRegisterMetaType<const QSet<QLiteralNull *> *>("const QSet<QLiteralNull *> *");
    qRegisterMetaType<const QList<QLiteralNull *> *>("const QList<QLiteralNull *> *");

    QLiteralSpecification::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qliteralnull.cpp"

QT_END_NAMESPACE_QTMOF

