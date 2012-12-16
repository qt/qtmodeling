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

#include "qliteralboolean.h"
#include "qliteralboolean_p.h"

QT_BEGIN_NAMESPACE_QTMOF

QLiteralBooleanPrivate::QLiteralBooleanPrivate() :
    value(false)
{
}

QLiteralBooleanPrivate::~QLiteralBooleanPrivate()
{
}

/*!
    \class QLiteralBoolean

    \inmodule QtMof

    \brief A literal Boolean is a specification of a Boolean value.
 */

QLiteralBoolean::QLiteralBoolean(QWrappedObject *parent, QWrappedObject *wrapper) :
    QLiteralSpecification(*new QLiteralBooleanPrivate, parent, wrapper)
{
}

QLiteralBoolean::QLiteralBoolean(QLiteralBooleanPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QLiteralSpecification(dd, parent, wrapper)
{
}

QLiteralBoolean::~QLiteralBoolean()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QLiteralBoolean
// ---------------------------------------------------------------

/*!
    The specified Boolean value.
 */
bool QLiteralBoolean::value() const
{
    // This is a read-write attribute

    Q_D(const QLiteralBoolean);
    return d->value;
}

void QLiteralBoolean::setValue(bool value)
{
    // This is a read-write attribute

    Q_D(QLiteralBoolean);
    if (d->value != value) {
        d->value = value;
    }
}

/*!
    The query booleanValue() gives the value.
 */
bool QLiteralBoolean::booleanValue() const
{
    qWarning("QLiteralBoolean::booleanValue: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QLiteralBoolean::isComputable() const
{
    qWarning("QLiteralBoolean::isComputable: operation to be implemented");

    return bool(); // change here to your derived return
}

void QLiteralBoolean::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QLiteralBoolean) *>("QT_PREPEND_NAMESPACE_QTMOF(QLiteralBoolean) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QLiteralBoolean) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QLiteralBoolean) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QLiteralBoolean) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QLiteralBoolean) *> *");
    qRegisterMetaType<QLiteralBoolean *>("QLiteralBoolean *");
    qRegisterMetaType<const QSet<QLiteralBoolean *> *>("const QSet<QLiteralBoolean *> *");
    qRegisterMetaType<const QList<QLiteralBoolean *> *>("const QList<QLiteralBoolean *> *");


    QLiteralSpecification::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qliteralboolean.cpp"

QT_END_NAMESPACE_QTMOF

