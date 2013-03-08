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

#include "qmofpackagemerge.h"
#include "qmofpackagemerge_p.h"

#include <QtMof/QMofPackage>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofPackageMergePrivate::QMofPackageMergePrivate() :
    mergedPackage(0),
    receivingPackage(0)
{
}

QMofPackageMergePrivate::~QMofPackageMergePrivate()
{
}

/*!
    \class QMofPackageMerge

    \inmodule QtMof

    \brief A package merge defines how the contents of one package are extended by the contents of another package.
 */

QMofPackageMerge::QMofPackageMerge(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofDirectedRelationship(*new QMofPackageMergePrivate, wrapper, parent)
{
    setPropertyData();
}

QMofPackageMerge::QMofPackageMerge(QMofPackageMergePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofDirectedRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QMofPackageMerge::~QMofPackageMerge()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofPackageMerge
// ---------------------------------------------------------------

/*!
    References the Package that is to be merged with the receiving package of the PackageMerge.
 */
QMofPackage *QMofPackageMerge::mergedPackage() const
{
    // This is a read-write association end

    Q_D(const QMofPackageMerge);
    return d->mergedPackage;
}

void QMofPackageMerge::setMergedPackage(QMofPackage *mergedPackage)
{
    // This is a read-write association end

    Q_D(QMofPackageMerge);
    if (d->mergedPackage != mergedPackage) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QMofElement *>(d->mergedPackage));

        d->mergedPackage = mergedPackage;

        // Adjust subsetted property(ies)
        if (mergedPackage) {
            (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QMofElement *>(mergedPackage));
        }
    }
}

/*!
    References the Package that is being extended with the contents of the merged package of the PackageMerge.
 */
QMofPackage *QMofPackageMerge::receivingPackage() const
{
    // This is a read-write association end

    Q_D(const QMofPackageMerge);
    return d->receivingPackage;
}

void QMofPackageMerge::setReceivingPackage(QMofPackage *receivingPackage)
{
    // This is a read-write association end

    Q_D(QMofPackageMerge);
    if (d->receivingPackage != receivingPackage) {
        // Adjust opposite property
        if (d->receivingPackage)
            d->receivingPackage->removePackageMerge(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QMofElement *>(d->receivingPackage));

        d->receivingPackage = receivingPackage;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->setOwner(qwrappedobject_cast<QMofElement *>(receivingPackage));
        if (receivingPackage) {
            (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QMofElement *>(receivingPackage));
        }

        // Adjust opposite property
        if (receivingPackage)
            receivingPackage->addPackageMerge(this);
    }
}

void QMofPackageMerge::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageMerge")][QString::fromLatin1("mergedPackage")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageMerge")][QString::fromLatin1("mergedPackage")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageMerge")][QString::fromLatin1("mergedPackage")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Package that is to be merged with the receiving package of the PackageMerge.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageMerge")][QString::fromLatin1("mergedPackage")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageMerge")][QString::fromLatin1("mergedPackage")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageMerge")][QString::fromLatin1("mergedPackage")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageMerge")][QString::fromLatin1("receivingPackage")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageMerge")][QString::fromLatin1("receivingPackage")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageMerge")][QString::fromLatin1("receivingPackage")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Package that is being extended with the contents of the merged package of the PackageMerge.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageMerge")][QString::fromLatin1("receivingPackage")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageMerge")][QString::fromLatin1("receivingPackage")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::owner QMofDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageMerge")][QString::fromLatin1("receivingPackage")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QPackage::packageMerge");

    QMofDirectedRelationship::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofpackagemerge.cpp"

