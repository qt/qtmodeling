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
#include "qmofgeneralization.h"
#include "qmofgeneralization_p.h"

#include <QtMof/QMofClassifier>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofGeneralizationPrivate::QMofGeneralizationPrivate() :
    isSubstitutable(true),
    specific(0),
    general(0)
{
}

QMofGeneralizationPrivate::~QMofGeneralizationPrivate()
{
}

/*!
    \class QMofGeneralization

    \inmodule QtMof

    \brief A generalization is a taxonomic relationship between a more general classifier and a more specific classifier. Each instance of the specific classifier is also an indirect instance of the general classifier. Thus, the specific classifier inherits the features of the more general classifier.
 */

QMofGeneralization::QMofGeneralization(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofDirectedRelationship(*new QMofGeneralizationPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofGeneralization::QMofGeneralization(QMofGeneralizationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofDirectedRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QMofGeneralization::~QMofGeneralization()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofGeneralization
// ---------------------------------------------------------------

/*!
    Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier.
 */
bool QMofGeneralization::isSubstitutable() const
{
    // This is a read-write attribute

    Q_D(const QMofGeneralization);
    return d->isSubstitutable;
}

void QMofGeneralization::setSubstitutable(bool isSubstitutable)
{
    // This is a read-write attribute

    Q_D(QMofGeneralization);
    if (d->isSubstitutable != isSubstitutable) {
        d->isSubstitutable = isSubstitutable;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isSubstitutable");
}

void QMofGeneralization::unsetSubstitutable()
{
    setSubstitutable(true);
    Q_D(QMofGeneralization);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isSubstitutable"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofGeneralization
// ---------------------------------------------------------------

/*!
    References the specializing classifier in the Generalization relationship.
 */
QMofClassifier *QMofGeneralization::specific() const
{
    // This is a read-write association end

    Q_D(const QMofGeneralization);
    return d->specific;
}

void QMofGeneralization::setSpecific(QMofClassifier *specific)
{
    // This is a read-write association end

    Q_D(QMofGeneralization);
    if (d->specific != specific) {
        // Adjust opposite property
        if (d->specific)
            d->specific->removeGeneralization(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QMofElement *>(d->specific));

        d->specific = specific;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->setOwner(qwrappedobject_cast<QMofElement *>(specific));
        if (specific) {
            (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QMofElement *>(specific));
        }

        // Adjust opposite property
        if (specific)
            specific->addGeneralization(this);
    }
}

/*!
    References the general classifier in the Generalization relationship.
 */
QMofClassifier *QMofGeneralization::general() const
{
    // This is a read-write association end

    Q_D(const QMofGeneralization);
    return d->general;
}

void QMofGeneralization::setGeneral(QMofClassifier *general)
{
    // This is a read-write association end

    Q_D(QMofGeneralization);
    if (d->general != general) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QMofElement *>(d->general));

        d->general = general;

        // Adjust subsetted property(ies)
        if (general) {
            (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QMofElement *>(general));
        }
    }
}

void QMofGeneralization::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("isSubstitutable")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("isSubstitutable")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("isSubstitutable")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("isSubstitutable")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("isSubstitutable")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("isSubstitutable")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("specific")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("specific")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("specific")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the specializing classifier in the Generalization relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("specific")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("specific")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::owner QMofDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("specific")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofClassifier::generalization");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("general")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("general")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("general")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the general classifier in the Generalization relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("general")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("general")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofGeneralization")][QString::fromLatin1("general")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QMofDirectedRelationship::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofgeneralization.cpp"

