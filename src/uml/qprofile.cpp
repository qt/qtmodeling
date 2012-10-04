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
//#include "qprofile_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QProfile

    \inmodule QtUml

    \brief A profile defines limited extensions to a reference metamodel with the purpose of adapting the metamodel to a specific platform or domain.
 */

QProfile::QProfile(QObject *parent)
    : QPackage(parent)
{
}

QProfile::~QProfile()
{
}

/*!
    References a metaclass that may be extended.
 */
const QSet<QElementImport *> *QProfile::metaclassReferences() const
{
}

void QProfile::addMetaclassReference(const QElementImport *metaclassReference)
{
}

void QProfile::removeMetaclassReference(const QElementImport *metaclassReference)
{
}

/*!
    References a package containing (directly or indirectly) metaclasses that may be extended.
 */
const QSet<QPackageImport *> *QProfile::metamodelReferences() const
{
}

void QProfile::addMetamodelReference(const QPackageImport *metamodelReference)
{
}

void QProfile::removeMetamodelReference(const QPackageImport *metamodelReference)
{
}

#include "moc_qprofile.cpp"

QT_END_NAMESPACE_QTUML

