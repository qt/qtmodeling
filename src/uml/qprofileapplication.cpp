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

#include "qprofileapplication.h"
#include "qprofileapplication_p.h"

#include <QtUml/QProfile>
#include <QtUml/QPackage>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QProfileApplicationPrivate::QProfileApplicationPrivate() :
    isStrict(false),
    applyingPackage(0),
    appliedProfile(0)
{
}

QProfileApplicationPrivate::~QProfileApplicationPrivate()
{
}

/*!
    \class QProfileApplication

    \inmodule QtUml

    \brief A profile application is used to show which profiles have been applied to a package.
 */

QProfileApplication::QProfileApplication(QWrappedObject *parent, QWrappedObject *wrapper) :
    QDirectedRelationship(*new QProfileApplicationPrivate, parent, wrapper)
{
    setPropertyData();
}

QProfileApplication::QProfileApplication(QProfileApplicationPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QDirectedRelationship(dd, parent, wrapper)
{
    setPropertyData();
}

QProfileApplication::~QProfileApplication()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QProfileApplication
// ---------------------------------------------------------------

/*!
    Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.
 */
bool QProfileApplication::isStrict() const
{
    // This is a read-write attribute

    Q_D(const QProfileApplication);
    return d->isStrict;
}

void QProfileApplication::setStrict(bool isStrict)
{
    // This is a read-write attribute

    Q_D(QProfileApplication);
    if (d->isStrict != isStrict) {
        d->isStrict = isStrict;
    }
}

void QProfileApplication::unsetStrict()
{
    setStrict(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QProfileApplication
// ---------------------------------------------------------------

/*!
    The package that owns the profile application.
 */
QPackage *QProfileApplication::applyingPackage() const
{
    // This is a read-write association end

    Q_D(const QProfileApplication);
    return d->applyingPackage;
}

void QProfileApplication::setApplyingPackage(QPackage *applyingPackage)
{
    // This is a read-write association end

    Q_D(QProfileApplication);
    if (d->applyingPackage != applyingPackage) {
        // Adjust opposite property
        if (d->applyingPackage)
            d->applyingPackage->removeProfileApplication(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QElement *>(d->applyingPackage));

        d->applyingPackage = applyingPackage;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(applyingPackage));
        if (applyingPackage) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QElement *>(applyingPackage));
        }

        // Adjust opposite property
        if (applyingPackage)
            applyingPackage->addProfileApplication(this);
    }
}

/*!
    References the Profiles that are applied to a Package through this ProfileApplication.
 */
QProfile *QProfileApplication::appliedProfile() const
{
    // This is a read-write association end

    Q_D(const QProfileApplication);
    return d->appliedProfile;
}

void QProfileApplication::setAppliedProfile(QProfile *appliedProfile)
{
    // This is a read-write association end

    Q_D(QProfileApplication);
    if (d->appliedProfile != appliedProfile) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QElement *>(d->appliedProfile));

        d->appliedProfile = appliedProfile;

        // Adjust subsetted property(ies)
        if (appliedProfile) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QElement *>(appliedProfile));
        }
    }
}

void QProfileApplication::registerMetaTypes() const
{
    qRegisterMetaType<QProfile *>("QProfile *");
    qRegisterMetaType<QSet<QProfile *>>("QSet<QProfile *>");
    qRegisterMetaType<QList<QProfile *>>("QList<QProfile *>");

    qRegisterMetaType<QPackage *>("QPackage *");
    qRegisterMetaType<QSet<QPackage *>>("QSet<QPackage *>");
    qRegisterMetaType<QList<QPackage *>>("QList<QPackage *>");

    QDirectedRelationship::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QProfileApplication::setPropertyData()
{

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProfileApplication")][QString::fromLatin1("isStrict")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProfileApplication")][QString::fromLatin1("isStrict")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProfileApplication")][QString::fromLatin1("applyingPackage")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProfileApplication")][QString::fromLatin1("applyingPackage")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The package that owns the profile application.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProfileApplication")][QString::fromLatin1("appliedProfile")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProfileApplication")][QString::fromLatin1("appliedProfile")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Profiles that are applied to a Package through this ProfileApplication.");

    QDirectedRelationship::setPropertyData();
}

#include "moc_qprofileapplication.cpp"

QT_END_NAMESPACE_QTUML

