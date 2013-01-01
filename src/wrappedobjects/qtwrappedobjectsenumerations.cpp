/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtWrappedObjects module of the Qt Toolkit.
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

#include "qtwrappedobjectsenumerations.h"

QT_BEGIN_NAMESPACE_QTWRAPPEDOBJECTS

QtWrappedObjects::QtWrappedObjects()
{
}

/*!
    \enum QtWrappedObjects::QEnumerations::VisibilityKind

    VisibilityKind is an enumeration type that defines literals to determine the visibility of elements in a model.

    \value VisibilityPublic
    A public element is visible to all elements that can access the contents of the namespace that owns it.
    \value VisibilityPrivate
    A private element is only visible inside the namespace that owns it.
    \value VisibilityProtected
    A protected element is visible to elements that have a generalization relationship to the namespace that owns it.
    \value VisibilityPackage
    A package element is owned by a namespace that is not a package, and is visible to elements that are in the same package as its owning namespace. Only named elements that are not owned by packages can be marked as having package visibility. Any element marked as having package visibility is visible to all elements within the nearest enclosing package (given that other owning elements have proper visibility). Outside the nearest enclosing package, an element marked as having package visibility is not visible.
 */

#include "moc_qtwrappedobjectsenumerations.cpp"

QT_END_NAMESPACE_QTWRAPPEDOBJECTS

