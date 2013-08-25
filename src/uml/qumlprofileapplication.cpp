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

#include <QtUml/QUmlPackage>
#include <QtUml/QUmlProfile>

QT_BEGIN_NAMESPACE

QUmlProfileApplicationPrivate::QUmlProfileApplicationPrivate() :
    appliedProfile(0),
    applyingPackage(0),
    isStrict(false)
{
}

/*!
    \class QUmlProfileApplication

    \inmodule QtUml

    \brief A profile application is used to show which profiles have been applied to a package.
 */

QUmlProfileApplication::QUmlProfileApplication(bool create_d_ptr) :
    QUmlDirectedRelationship(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlProfileApplicationPrivate);
}

// Owned attributes

/*!
    References the Profiles that are applied to a Package through this ProfileApplication.
 */
QUmlProfile *QUmlProfileApplication::appliedProfile() const
{
    return 0;
}

void QUmlProfileApplication::setAppliedProfile(QUmlProfile *appliedProfile)
{
    Q_UNUSED(appliedProfile);
}

/*!
    The package that owns the profile application.
 */
QUmlPackage *QUmlProfileApplication::applyingPackage() const
{
    return 0;
}

void QUmlProfileApplication::setApplyingPackage(QUmlPackage *applyingPackage)
{
    Q_UNUSED(applyingPackage);
}

/*!
    Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.
 */
bool QUmlProfileApplication::isStrict() const
{
    return bool();
}

void QUmlProfileApplication::setStrict(bool isStrict)
{
    Q_UNUSED(isStrict);
}

QT_END_NAMESPACE

