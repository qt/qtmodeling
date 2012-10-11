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
#include "qpackagemerge_p.h"
#include "qdirectedrelationship_p.h"
#include "qelement_p.h"
#include "qdirectedrelationship_p.h"

#include <QtUml/QPackage>

QT_BEGIN_NAMESPACE_QTUML

QPackageMergePrivate::QPackageMergePrivate() :
    mergedPackage(0),
    receivingPackage(0)
{
}

QPackageMergePrivate::~QPackageMergePrivate()
{
}

void QPackageMergePrivate::setMergedPackage(const QPackage *mergedPackage)
{
    // Adjust subsetted property(ies)
    removeTarget(this->mergedPackage);

    this->mergedPackage = const_cast<QPackage *>(mergedPackage);

    // Adjust subsetted property(ies)
    addTarget(mergedPackage);
}

void QPackageMergePrivate::setReceivingPackage(const QPackage *receivingPackage)
{
    // Adjust subsetted property(ies)
    removeSource(this->receivingPackage);

    this->receivingPackage = const_cast<QPackage *>(receivingPackage);

    // Adjust subsetted property(ies)
    setOwner(receivingPackage);
    addSource(receivingPackage);
}

/*!
    \class QPackageMerge

    \inmodule QtUml

    \brief A package merge defines how the contents of one package are extended by the contents of another package.
 */

QPackageMerge::QPackageMerge(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QPackageMergePrivate;
}

QPackageMerge::QPackageMerge(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QPackageMergePrivate;
}

QPackageMerge::~QPackageMerge()
{
}

/*!
    References the Package that is to be merged with the receiving package of the PackageMerge.
 */
QPackage *QPackageMerge::mergedPackage() const
{
    QTUML_D(const QPackageMerge);
    return d->mergedPackage;
}

void QPackageMerge::setMergedPackage(const QPackage *mergedPackage)
{
    QTUML_D(QPackageMerge);
    d->setMergedPackage(const_cast<QPackage *>(mergedPackage));
}

/*!
    References the Package that is being extended with the contents of the merged package of the PackageMerge.
 */
QPackage *QPackageMerge::receivingPackage() const
{
    QTUML_D(const QPackageMerge);
    return d->receivingPackage;
}

void QPackageMerge::setReceivingPackage(const QPackage *receivingPackage)
{
    QTUML_D(QPackageMerge);
    d->setReceivingPackage(const_cast<QPackage *>(receivingPackage));
}

#include "moc_qpackagemerge.cpp"

QT_END_NAMESPACE_QTUML

