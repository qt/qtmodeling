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

#include "qusage.h"
#include "qusage_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QUsagePrivate::QUsagePrivate()
{
}

QUsagePrivate::~QUsagePrivate()
{
}

/*!
    \class QUsage

    \inmodule QtUml

    \brief A usage is a relationship in which one element requires another element (or set of elements) for its full implementation or operation. A usage is a dependency in which the client requires the presence of the supplier.
 */

QUsage::QUsage(QWrappedObject *wrapper, QWrappedObject *parent) :
    QDependency(*new QUsagePrivate, wrapper, parent)
{
    setPropertyData();
}

QUsage::QUsage(QUsagePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QDependency(dd, wrapper, parent)
{
    setPropertyData();
}

QUsage::~QUsage()
{
}

void QUsage::setPropertyData()
{
    QDependency::setPropertyData();
}

#include "moc_qusage.cpp"

QT_END_NAMESPACE_QTUML

