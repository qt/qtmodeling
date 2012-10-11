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

void QProfilePrivate::addMetamodelReference(const QPackageImport *metamodelReference)
{
    this->metamodelReferences->insert(const_cast<QPackageImport *>(metamodelReference));

    // Adjust subsetted property(ies)
    addPackageImport(metamodelReference);
}

void QProfilePrivate::removeMetamodelReference(const QPackageImport *metamodelReference)
{
    this->metamodelReferences->remove(const_cast<QPackageImport *>(metamodelReference));

    // Adjust subsetted property(ies)
    removePackageImport(metamodelReference);
}

void QProfilePrivate::addMetaclassReference(const QElementImport *metaclassReference)
{
    this->metaclassReferences->insert(const_cast<QElementImport *>(metaclassReference));

    // Adjust subsetted property(ies)
    addElementImport(metaclassReference);
}

void QProfilePrivate::removeMetaclassReference(const QElementImport *metaclassReference)
{
    this->metaclassReferences->remove(const_cast<QElementImport *>(metaclassReference));

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
    QTUML_D(const QProfile);
    return d->metamodelReferences;
}

void QProfile::addMetamodelReference(const QPackageImport *metamodelReference)
{
    QTUML_D(QProfile);
    d->addMetamodelReference(const_cast<QPackageImport *>(metamodelReference));
}

void QProfile::removeMetamodelReference(const QPackageImport *metamodelReference)
{
    QTUML_D(QProfile);
    d->removeMetamodelReference(const_cast<QPackageImport *>(metamodelReference));
}

/*!
    References a metaclass that may be extended.
 */
const QSet<QElementImport *> *QProfile::metaclassReferences() const
{
    QTUML_D(const QProfile);
    return d->metaclassReferences;
}

void QProfile::addMetaclassReference(const QElementImport *metaclassReference)
{
    QTUML_D(QProfile);
    d->addMetaclassReference(const_cast<QElementImport *>(metaclassReference));
}

void QProfile::removeMetaclassReference(const QElementImport *metaclassReference)
{
    QTUML_D(QProfile);
    d->removeMetaclassReference(const_cast<QElementImport *>(metaclassReference));
}

#include "moc_qprofile.cpp"

QT_END_NAMESPACE_QTUML

