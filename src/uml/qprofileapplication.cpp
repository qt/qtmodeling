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

QT_BEGIN_NAMESPACE_QTUML

QProfileApplicationPrivate::QProfileApplicationPrivate(QProfileApplication *q_umlptr) :
    isStrict(false),
    applyingPackage(0),
    appliedProfile(0)
{
    this->q_umlptr = q_umlptr;
}

QProfileApplicationPrivate::~QProfileApplicationPrivate()
{
}

/*!
    \class QProfileApplication

    \inmodule QtUml

    \brief A profile application is used to show which profiles have been applied to a package.
 */

QProfileApplication::QProfileApplication(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QProfileApplicationPrivate(this);
}

QProfileApplication::QProfileApplication(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QProfileApplicationPrivate;
}

QProfileApplication::~QProfileApplication()
{
}

/*!
    Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.
 */
bool QProfileApplication::isStrict() const
{
    // This is a read-write attribute

    QTUML_D(const QProfileApplication);
    return d->isStrict;
}

void QProfileApplication::setStrict(bool isStrict)
{
    // This is a read-write attribute

    QTUML_D(QProfileApplication);
    if (d->isStrict != isStrict) {
        d->isStrict = isStrict;
    }
}

/*!
    The package that owns the profile application.
 */
QPackage *QProfileApplication::applyingPackage() const
{
    // This is a read-write association end

    QTUML_D(const QProfileApplication);
    return d->applyingPackage;
}

void QProfileApplication::setApplyingPackage(QPackage *applyingPackage)
{
    // This is a read-write association end

    QTUML_D(QProfileApplication);
    if (d->applyingPackage != applyingPackage) {
        // Adjust subsetted property(ies)
        d->removeSource(d->applyingPackage);

        d->applyingPackage = applyingPackage;

        // Adjust subsetted property(ies)
        d->setOwner(applyingPackage);
        d->addSource(applyingPackage);

        // Adjust opposite property
        applyingPackage->addProfileApplication(this);
    }
}

/*!
    References the Profiles that are applied to a Package through this ProfileApplication.
 */
QProfile *QProfileApplication::appliedProfile() const
{
    // This is a read-write association end

    QTUML_D(const QProfileApplication);
    return d->appliedProfile;
}

void QProfileApplication::setAppliedProfile(QProfile *appliedProfile)
{
    // This is a read-write association end

    QTUML_D(QProfileApplication);
    if (d->appliedProfile != appliedProfile) {
        // Adjust subsetted property(ies)
        d->removeTarget(d->appliedProfile);

        d->appliedProfile = appliedProfile;

        // Adjust subsetted property(ies)
        d->addTarget(appliedProfile);
    }
}

#include "moc_qprofileapplication.cpp"

QT_END_NAMESPACE_QTUML

