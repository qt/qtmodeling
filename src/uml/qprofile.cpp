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

/*!
    \class QProfile

    \inmodule QtUml

    \brief A profile defines limited extensions to a reference metamodel with the purpose of adapting the metamodel to a specific platform or domain.
 */

QProfile::QProfile(QObject *parent) :
    QPackage(*new QProfilePrivate, parent)
{
    qRegisterMetaType<QProfile *>("QProfile *");
    qRegisterMetaType<const QSet<QProfile *> *>("const QSet<QProfile *> *");
    qRegisterMetaType<const QList<QProfile *> *>("const QList<QProfile *> *");
}

QProfile::QProfile(QProfilePrivate &dd, QObject *parent) :
    QPackage(dd, parent)
{
    qRegisterMetaType<QProfile *>("QProfile *");
    qRegisterMetaType<const QSet<QProfile *> *>("const QSet<QProfile *> *");
    qRegisterMetaType<const QList<QProfile *> *>("const QList<QProfile *> *");
}

QProfile::~QProfile()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QProfile
// ---------------------------------------------------------------

/*!
    References a package containing (directly or indirectly) metaclasses that may be extended.
 */
const QSet<QPackageImport *> *QProfile::metamodelReferences() const
{
    // This is a read-write association end

    Q_D(const QProfile);
    return d->metamodelReferences;
}

void QProfile::addMetamodelReference(QPackageImport *metamodelReference)
{
    // This is a read-write association end

    Q_D(QProfile);
    if (!d->metamodelReferences->contains(metamodelReference)) {
        d->metamodelReferences->insert(metamodelReference);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespace *>(this))->addPackageImport(qtuml_object_cast<QPackageImport *>(metamodelReference));
    }
}

void QProfile::removeMetamodelReference(QPackageImport *metamodelReference)
{
    // This is a read-write association end

    Q_D(QProfile);
    if (d->metamodelReferences->contains(metamodelReference)) {
        d->metamodelReferences->remove(metamodelReference);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespace *>(this))->removePackageImport(qtuml_object_cast<QPackageImport *>(metamodelReference));
    }
}

/*!
    References a metaclass that may be extended.
 */
const QSet<QElementImport *> *QProfile::metaclassReferences() const
{
    // This is a read-write association end

    Q_D(const QProfile);
    return d->metaclassReferences;
}

void QProfile::addMetaclassReference(QElementImport *metaclassReference)
{
    // This is a read-write association end

    Q_D(QProfile);
    if (!d->metaclassReferences->contains(metaclassReference)) {
        d->metaclassReferences->insert(metaclassReference);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespace *>(this))->addElementImport(qtuml_object_cast<QElementImport *>(metaclassReference));
    }
}

void QProfile::removeMetaclassReference(QElementImport *metaclassReference)
{
    // This is a read-write association end

    Q_D(QProfile);
    if (d->metaclassReferences->contains(metaclassReference)) {
        d->metaclassReferences->remove(metaclassReference);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespace *>(this))->removeElementImport(qtuml_object_cast<QElementImport *>(metaclassReference));
    }
}

#include "moc_qprofile.cpp"

QT_END_NAMESPACE_QTUML

