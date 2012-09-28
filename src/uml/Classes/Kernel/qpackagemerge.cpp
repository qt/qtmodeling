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

#include "qpackagemerge.h"
//#include "qpackagemerge_p.h"

QT_BEGIN_NAMESPACE_QTUML_CLASSES_KERNEL

/*!
    \class QPackageMerge

    \inmodule QtUml

    \brief A package merge defines how the contents of one package are extended by the contents of another package.
 */

QPackageMerge::QPackageMerge(QObject *parent)
    : QObject(parent)
{
}

QPackageMerge::~QPackageMerge()
{
}

/*!
    References the Package that is to be merged with the receiving package of the PackageMerge.
 */
QPackage *QPackageMerge::mergedPackage() const
{
}

void QPackageMerge::setMergedPackage(QPackage *mergedPackage)
{
}

/*!
    References the Package that is being extended with the contents of the merged package of the PackageMerge.
 */
QPackage *QPackageMerge::receivingPackage() const
{
}

void QPackageMerge::setReceivingPackage(QPackage *receivingPackage)
{
}

#include "moc_qpackagemerge.cpp"

QT_END_NAMESPACE_QTUML_CLASSES_KERNEL

