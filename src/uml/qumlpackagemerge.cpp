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

#include "qumlpackagemerge.h"
#include "qumlpackagemerge_p.h"

#include <QtUml/QUmlPackage>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlPackageMergePrivate::QUmlPackageMergePrivate() :
    mergedPackage(0),
    receivingPackage(0)
{
}

QUmlPackageMergePrivate::~QUmlPackageMergePrivate()
{
}

/*!
    \class QUmlPackageMerge

    \inmodule QtUml

    \brief A package merge defines how the contents of one package are extended by the contents of another package.
 */

QUmlPackageMerge::QUmlPackageMerge(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDirectedRelationship(*new QUmlPackageMergePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlPackageMerge::QUmlPackageMerge(QUmlPackageMergePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDirectedRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlPackageMerge::~QUmlPackageMerge()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlPackageMerge
// ---------------------------------------------------------------

/*!
    References the Package that is to be merged with the receiving package of the PackageMerge.
 */
QUmlPackage *QUmlPackageMerge::mergedPackage() const
{
    // This is a read-write association end

    Q_D(const QUmlPackageMerge);
    return d->mergedPackage;
}

void QUmlPackageMerge::setMergedPackage(QUmlPackage *mergedPackage)
{
    // This is a read-write association end

    Q_D(QUmlPackageMerge);
    if (d->mergedPackage != mergedPackage) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QUmlElement *>(d->mergedPackage));

        d->mergedPackage = mergedPackage;

        // Adjust subsetted property(ies)
        if (mergedPackage) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QUmlElement *>(mergedPackage));
        }
    }
}

/*!
    References the Package that is being extended with the contents of the merged package of the PackageMerge.
 */
QUmlPackage *QUmlPackageMerge::receivingPackage() const
{
    // This is a read-write association end

    Q_D(const QUmlPackageMerge);
    return d->receivingPackage;
}

void QUmlPackageMerge::setReceivingPackage(QUmlPackage *receivingPackage)
{
    // This is a read-write association end

    Q_D(QUmlPackageMerge);
    if (d->receivingPackage != receivingPackage) {
        // Adjust opposite property
        if (d->receivingPackage)
            d->receivingPackage->removePackageMerge(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QUmlElement *>(d->receivingPackage));

        d->receivingPackage = receivingPackage;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(receivingPackage));
        if (receivingPackage) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QUmlElement *>(receivingPackage));
        }

        // Adjust opposite property
        if (receivingPackage)
            receivingPackage->addPackageMerge(this);
    }
}

void QUmlPackageMerge::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackageMerge")][QString::fromLatin1("mergedPackage")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackageMerge")][QString::fromLatin1("mergedPackage")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackageMerge")][QString::fromLatin1("mergedPackage")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Package that is to be merged with the receiving package of the PackageMerge.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackageMerge")][QString::fromLatin1("mergedPackage")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackageMerge")][QString::fromLatin1("mergedPackage")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackageMerge")][QString::fromLatin1("mergedPackage")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackageMerge")][QString::fromLatin1("receivingPackage")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackageMerge")][QString::fromLatin1("receivingPackage")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackageMerge")][QString::fromLatin1("receivingPackage")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Package that is being extended with the contents of the merged package of the PackageMerge.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackageMerge")][QString::fromLatin1("receivingPackage")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackageMerge")][QString::fromLatin1("receivingPackage")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner QUmlDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackageMerge")][QString::fromLatin1("receivingPackage")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlPackage::packageMerge");

    QUmlDirectedRelationship::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlpackagemerge.cpp"

