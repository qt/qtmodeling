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

#include "qprofile.h"
#include "qprofile_p.h"
#include "qnamespace_p.h"

#include <QtUml/QElementImport>
#include <QtUml/QPackageImport>

QT_BEGIN_NAMESPACE_QTUML

QProfilePrivate::QProfilePrivate() :
    metamodelReferences(new QSet<QPackageImport *>),
    metaclassReferences(new QSet<QElementImport *>)
{
}

QProfilePrivate::~QProfilePrivate()
{
    delete metamodelReferences;
    delete metaclassReferences;
}

void QProfilePrivate::addMetamodelReference(QPackageImport *metamodelReference)
{
    // This is a read-write association end

    this->metamodelReferences->insert(metamodelReference);

    // Adjust subsetted property(ies)
    addPackageImport(metamodelReference);
}

void QProfilePrivate::removeMetamodelReference(QPackageImport *metamodelReference)
{
    // This is a read-write association end

    this->metamodelReferences->remove(metamodelReference);

    // Adjust subsetted property(ies)
    removePackageImport(metamodelReference);
}

void QProfilePrivate::addMetaclassReference(QElementImport *metaclassReference)
{
    // This is a read-write association end

    this->metaclassReferences->insert(metaclassReference);

    // Adjust subsetted property(ies)
    addElementImport(metaclassReference);
}

void QProfilePrivate::removeMetaclassReference(QElementImport *metaclassReference)
{
    // This is a read-write association end

    this->metaclassReferences->remove(metaclassReference);

    // Adjust subsetted property(ies)
    removeElementImport(metaclassReference);
}

/*!
    \class QProfile

    \inmodule QtUml

    \brief A profile defines limited extensions to a reference metamodel with the purpose of adapting the metamodel to a specific platform or domain.
 */

QProfile::QProfile(QObject *parent)
    : QPackage(false, parent)
{
    d_umlptr = new QProfilePrivate;
}

QProfile::QProfile(bool createPimpl, QObject *parent)
    : QPackage(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QProfilePrivate;
}

QProfile::~QProfile()
{
}

/*!
    References a package containing (directly or indirectly) metaclasses that may be extended.
 */
const QSet<QPackageImport *> *QProfile::metamodelReferences() const
{
    // This is a read-write association end

    QTUML_D(const QProfile);
    return d->metamodelReferences;
}

void QProfile::addMetamodelReference(QPackageImport *metamodelReference)
{
    // This is a read-write association end

    QTUML_D(QProfile);
    if (!d->metamodelReferences->contains(metamodelReference)) {
        d->addMetamodelReference(metamodelReference);
    }
}

void QProfile::removeMetamodelReference(QPackageImport *metamodelReference)
{
    // This is a read-write association end

    QTUML_D(QProfile);
    if (d->metamodelReferences->contains(metamodelReference)) {
        d->removeMetamodelReference(metamodelReference);
    }
}

/*!
    References a metaclass that may be extended.
 */
const QSet<QElementImport *> *QProfile::metaclassReferences() const
{
    // This is a read-write association end

    QTUML_D(const QProfile);
    return d->metaclassReferences;
}

void QProfile::addMetaclassReference(QElementImport *metaclassReference)
{
    // This is a read-write association end

    QTUML_D(QProfile);
    if (!d->metaclassReferences->contains(metaclassReference)) {
        d->addMetaclassReference(metaclassReference);
    }
}

void QProfile::removeMetaclassReference(QElementImport *metaclassReference)
{
    // This is a read-write association end

    QTUML_D(QProfile);
    if (d->metaclassReferences->contains(metaclassReference)) {
        d->removeMetaclassReference(metaclassReference);
    }
}

#include "moc_qprofile.cpp"

QT_END_NAMESPACE_QTUML

