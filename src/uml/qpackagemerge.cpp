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

#include <QtUml/QPackage>

QT_BEGIN_NAMESPACE_QTUML

QPackageMergePrivate::QPackageMergePrivate(QPackageMerge *q_umlptr) :
    mergedPackage(0),
    receivingPackage(0)
{
    this->q_umlptr = q_umlptr;
}

QPackageMergePrivate::~QPackageMergePrivate()
{
}

/*!
    \class QPackageMerge

    \inmodule QtUml

    \brief A package merge defines how the contents of one package are extended by the contents of another package.
 */

QPackageMerge::QPackageMerge(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QPackageMergePrivate(this);
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
    // This is a read-write association end

    QTUML_D(const QPackageMerge);
    return d->mergedPackage;
}

void QPackageMerge::setMergedPackage(QPackage *mergedPackage)
{
    // This is a read-write association end

    QTUML_D(QPackageMerge);
    if (d->mergedPackage != mergedPackage) {
        // Adjust subsetted property(ies)
        d->QDirectedRelationshipPrivate::removeTarget(dynamic_cast<QElement *>(d->mergedPackage));

        d->mergedPackage = mergedPackage;

        // Adjust subsetted property(ies)
        if (mergedPackage) {
            d->QDirectedRelationshipPrivate::addTarget(dynamic_cast<QElement *>(mergedPackage));
        }
    }
}

/*!
    References the Package that is being extended with the contents of the merged package of the PackageMerge.
 */
QPackage *QPackageMerge::receivingPackage() const
{
    // This is a read-write association end

    QTUML_D(const QPackageMerge);
    return d->receivingPackage;
}

void QPackageMerge::setReceivingPackage(QPackage *receivingPackage)
{
    // This is a read-write association end

    QTUML_D(QPackageMerge);
    if (d->receivingPackage != receivingPackage) {
        // Adjust opposite property
        if (d->receivingPackage)
            d->receivingPackage->removePackageMerge(this);

        // Adjust subsetted property(ies)
        d->QDirectedRelationshipPrivate::removeSource(dynamic_cast<QElement *>(d->receivingPackage));

        d->receivingPackage = receivingPackage;

        // Adjust subsetted property(ies)
        d->QElementPrivate::setOwner(dynamic_cast<QElement *>(receivingPackage));
        if (receivingPackage) {
            d->QDirectedRelationshipPrivate::addSource(dynamic_cast<QElement *>(receivingPackage));
        }

        // Adjust opposite property
        if (receivingPackage)
            receivingPackage->addPackageMerge(this);
    }
}

#include "moc_qpackagemerge.cpp"

QT_END_NAMESPACE_QTUML

