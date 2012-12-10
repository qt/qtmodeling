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

#include "qpackagemerge.h"
#include "qpackagemerge_p.h"

#include <QtMof/QPackage>

QT_BEGIN_NAMESPACE_QTMOF

QPackageMergePrivate::QPackageMergePrivate() :
    mergedPackage(0),
    receivingPackage(0)
{
}

QPackageMergePrivate::~QPackageMergePrivate()
{
}

/*!
    \class QPackageMerge

    \inmodule QtMof

    \brief A package merge defines how the contents of one package are extended by the contents of another package.
 */

QPackageMerge::QPackageMerge(QMofObject *parent, QMofObject *wrapper) :
    QDirectedRelationship(*new QPackageMergePrivate, parent, wrapper)
{
}

QPackageMerge::QPackageMerge(QPackageMergePrivate &dd, QMofObject *parent, QMofObject *wrapper) :
    QDirectedRelationship(dd, parent, wrapper)
{
}

QPackageMerge::~QPackageMerge()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QPackageMerge
// ---------------------------------------------------------------

/*!
    References the Package that is to be merged with the receiving package of the PackageMerge.
 */
QPackage *QPackageMerge::mergedPackage() const
{
    // This is a read-write association end

    Q_D(const QPackageMerge);
    return d->mergedPackage;
}

void QPackageMerge::setMergedPackage(QPackage *mergedPackage)
{
    // This is a read-write association end

    Q_D(QPackageMerge);
    if (d->mergedPackage != mergedPackage) {
        // Adjust subsetted property(ies)
        (qmofobject_cast<QDirectedRelationshipPrivate *>(d))->removeTarget(qmofobject_cast<QElement *>(d->mergedPackage));

        d->mergedPackage = mergedPackage;

        // Adjust subsetted property(ies)
        if (mergedPackage) {
            (qmofobject_cast<QDirectedRelationshipPrivate *>(d))->addTarget(qmofobject_cast<QElement *>(mergedPackage));
        }
    }
}

/*!
    References the Package that is being extended with the contents of the merged package of the PackageMerge.
 */
QPackage *QPackageMerge::receivingPackage() const
{
    // This is a read-write association end

    Q_D(const QPackageMerge);
    return d->receivingPackage;
}

void QPackageMerge::setReceivingPackage(QPackage *receivingPackage)
{
    // This is a read-write association end

    Q_D(QPackageMerge);
    if (d->receivingPackage != receivingPackage) {
        // Adjust opposite property
        if (d->receivingPackage)
            d->receivingPackage->removePackageMerge(this);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QDirectedRelationshipPrivate *>(d))->removeSource(qmofobject_cast<QElement *>(d->receivingPackage));

        d->receivingPackage = receivingPackage;

        // Adjust subsetted property(ies)
        (qmofobject_cast<QElementPrivate *>(d))->setOwner(qmofobject_cast<QElement *>(receivingPackage));
        if (receivingPackage) {
            (qmofobject_cast<QDirectedRelationshipPrivate *>(d))->addSource(qmofobject_cast<QElement *>(receivingPackage));
        }

        // Adjust opposite property
        if (receivingPackage)
            receivingPackage->addPackageMerge(this);
    }
}

#include "moc_qpackagemerge.cpp"

QT_END_NAMESPACE_QTMOF

