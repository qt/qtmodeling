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
#include "qumlprofile.h"
#include "qumlprofile_p.h"

#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlPackageImport>

QT_BEGIN_NAMESPACE

QUmlProfilePrivate::QUmlProfilePrivate()
{
}

/*!
    \class QUmlProfile

    \inmodule QtUml

    \brief A profile defines limited extensions to a reference metamodel with the purpose of adapting the metamodel to a specific platform or domain.
 */

QUmlProfile::QUmlProfile(bool create_d_ptr) :
    QUmlPackage(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlProfilePrivate);
}

// OWNED ATTRIBUTES

/*!
    References a metaclass that may be extended.
 */
QSet<QUmlElementImport *> QUmlProfile::metaclassReference() const
{
    // This is a read-write association end

    QM_D(const QUmlProfile);
    return d->metaclassReference;
}

void QUmlProfile::addMetaclassReference(QUmlElementImport *metaclassReference)
{
    // This is a read-write association end

    QM_D(QUmlProfile);
    if (!d->metaclassReference.contains(metaclassReference)) {
        d->metaclassReference.insert(metaclassReference);
    }
}

void QUmlProfile::removeMetaclassReference(QUmlElementImport *metaclassReference)
{
    // This is a read-write association end

    QM_D(QUmlProfile);
    if (d->metaclassReference.contains(metaclassReference)) {
        d->metaclassReference.remove(metaclassReference);
    }
}

/*!
    References a package containing (directly or indirectly) metaclasses that may be extended.
 */
QSet<QUmlPackageImport *> QUmlProfile::metamodelReference() const
{
    // This is a read-write association end

    QM_D(const QUmlProfile);
    return d->metamodelReference;
}

void QUmlProfile::addMetamodelReference(QUmlPackageImport *metamodelReference)
{
    // This is a read-write association end

    QM_D(QUmlProfile);
    if (!d->metamodelReference.contains(metamodelReference)) {
        d->metamodelReference.insert(metamodelReference);
    }
}

void QUmlProfile::removeMetamodelReference(QUmlPackageImport *metamodelReference)
{
    // This is a read-write association end

    QM_D(QUmlProfile);
    if (d->metamodelReference.contains(metamodelReference)) {
        d->metamodelReference.remove(metamodelReference);
    }
}

QT_END_NAMESPACE

