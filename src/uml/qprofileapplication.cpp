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

QT_BEGIN_NAMESPACE_QTUML

class QProfileApplicationPrivate
{
public:
    explicit QProfileApplicationPrivate();
    virtual ~QProfileApplicationPrivate();

    bool isStrict;
    QProfile *appliedProfile;
    QPackage *applyingPackage;
};

QProfileApplicationPrivate::QProfileApplicationPrivate()
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

QProfileApplication::QProfileApplication(QObject *parent)
    : QObject(parent), d_ptr(new QProfileApplicationPrivate)
{
}

QProfileApplication::~QProfileApplication()
{
    delete d_ptr;
}

/*!
    Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.
 */
bool QProfileApplication::isStrict() const
{
    return d_ptr->isStrict;
}

void QProfileApplication::setStrict(bool isStrict)
{
    d_ptr->isStrict = isStrict;
}

/*!
    References the Profiles that are applied to a Package through this ProfileApplication.
 */
QProfile *QProfileApplication::appliedProfile() const
{
    return d_ptr->appliedProfile;
}

void QProfileApplication::setAppliedProfile(const QProfile *appliedProfile)
{
    d_ptr->appliedProfile = const_cast<QProfile *>(appliedProfile);
}

/*!
    The package that owns the profile application.
 */
QPackage *QProfileApplication::applyingPackage() const
{
    return d_ptr->applyingPackage;
}

void QProfileApplication::setApplyingPackage(const QPackage *applyingPackage)
{
    d_ptr->applyingPackage = const_cast<QPackage *>(applyingPackage);
}

#include "moc_qprofileapplication.cpp"

QT_END_NAMESPACE_QTUML

