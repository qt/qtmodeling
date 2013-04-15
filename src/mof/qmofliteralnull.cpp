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
#include "qmofliteralnull.h"
#include "qmofliteralnull_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofLiteralNullPrivate::QMofLiteralNullPrivate()
{
}

QMofLiteralNullPrivate::~QMofLiteralNullPrivate()
{
}

/*!
    \class QMofLiteralNull

    \inmodule QtMof

    \brief A literal null specifies the lack of a value.
 */

QMofLiteralNull::QMofLiteralNull(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofLiteralSpecification(*new QMofLiteralNullPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofLiteralNull::QMofLiteralNull(QMofLiteralNullPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofLiteralSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QMofLiteralNull::~QMofLiteralNull()
{
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QMofLiteralNull::isComputable() const
{
    qWarning("QMofLiteralNull::isComputable: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isNull() returns true.
 */
bool QMofLiteralNull::isNull() const
{
    qWarning("QMofLiteralNull::isNull: operation to be implemented");

    return bool(); // change here to your derived return
}

void QMofLiteralNull::setPropertyData()
{
    QMofLiteralSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofliteralnull.cpp"

