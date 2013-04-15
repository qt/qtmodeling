/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#include "qumlprofileapplication.h"
#include "qumlprofileapplication_p.h"

#include <QtUml/QUmlProfile>
#include <QtUml/QUmlPackage>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlProfileApplicationPrivate::QUmlProfileApplicationPrivate() :
    isStrict(false),
    applyingPackage(0),
    appliedProfile(0)
{
}

QUmlProfileApplicationPrivate::~QUmlProfileApplicationPrivate()
{
}

/*!
    \class QUmlProfileApplication

    \inmodule QtUml

    \brief A profile application is used to show which profiles have been applied to a package.
 */

QUmlProfileApplication::QUmlProfileApplication(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDirectedRelationship(*new QUmlProfileApplicationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlProfileApplication::QUmlProfileApplication(QUmlProfileApplicationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDirectedRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlProfileApplication::~QUmlProfileApplication()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlProfileApplication
// ---------------------------------------------------------------

/*!
    Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.
 */
bool QUmlProfileApplication::isStrict() const
{
    // This is a read-write attribute

    Q_D(const QUmlProfileApplication);
    return d->isStrict;
}

void QUmlProfileApplication::setStrict(bool isStrict)
{
    // This is a read-write attribute

    Q_D(QUmlProfileApplication);
    if (d->isStrict != isStrict) {
        d->isStrict = isStrict;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isStrict");
}

void QUmlProfileApplication::unsetStrict()
{
    setStrict(false);
    Q_D(QUmlProfileApplication);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isStrict"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlProfileApplication
// ---------------------------------------------------------------

/*!
    The package that owns the profile application.
 */
QUmlPackage *QUmlProfileApplication::applyingPackage() const
{
    // This is a read-write association end

    Q_D(const QUmlProfileApplication);
    return d->applyingPackage;
}

void QUmlProfileApplication::setApplyingPackage(QUmlPackage *applyingPackage)
{
    // This is a read-write association end

    Q_D(QUmlProfileApplication);
    if (d->applyingPackage != applyingPackage) {
        // Adjust opposite property
        if (d->applyingPackage)
            d->applyingPackage->removeProfileApplication(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QUmlElement *>(d->applyingPackage));

        d->applyingPackage = applyingPackage;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(applyingPackage));
        if (applyingPackage) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QUmlElement *>(applyingPackage));
        }

        // Adjust opposite property
        if (applyingPackage)
            applyingPackage->addProfileApplication(this);
    }
}

/*!
    References the Profiles that are applied to a Package through this ProfileApplication.
 */
QUmlProfile *QUmlProfileApplication::appliedProfile() const
{
    // This is a read-write association end

    Q_D(const QUmlProfileApplication);
    return d->appliedProfile;
}

void QUmlProfileApplication::setAppliedProfile(QUmlProfile *appliedProfile)
{
    // This is a read-write association end

    Q_D(QUmlProfileApplication);
    if (d->appliedProfile != appliedProfile) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QUmlElement *>(d->appliedProfile));

        d->appliedProfile = appliedProfile;

        // Adjust subsetted property(ies)
        if (appliedProfile) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QUmlElement *>(appliedProfile));
        }
    }
}

void QUmlProfileApplication::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("isStrict")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("isStrict")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("isStrict")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("isStrict")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("isStrict")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("isStrict")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("applyingPackage")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("applyingPackage")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("applyingPackage")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The package that owns the profile application.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("applyingPackage")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("applyingPackage")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner QUmlDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("applyingPackage")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlPackage::profileApplication");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("appliedProfile")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("appliedProfile")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("appliedProfile")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Profiles that are applied to a Package through this ProfileApplication.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("appliedProfile")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("appliedProfile")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfileApplication")][QString::fromLatin1("appliedProfile")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlDirectedRelationship::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlprofileapplication.cpp"

