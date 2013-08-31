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
#include "umlvariable_p.h"

#include "private/umlaction_p.h"
#include "private/umlactivity_p.h"
#include "private/umlstructuredactivitynode_p.h"

UmlVariable::UmlVariable() :
    _activityScope(0),
    _scope(0)
{
}

// OWNED ATTRIBUTES

UmlActivity *UmlVariable::activityScope() const
{
    // This is a read-write association end

    return _activityScope;
}

void UmlVariable::setActivityScope(UmlActivity *activityScope)
{
    // This is a read-write association end

    if (_activityScope != activityScope) {
        // Adjust subsetted properties

        _activityScope = activityScope;

        // Adjust subsetted properties
        setNamespace(activityScope);
    }
}

UmlStructuredActivityNode *UmlVariable::scope() const
{
    // This is a read-write association end

    return _scope;
}

void UmlVariable::setScope(UmlStructuredActivityNode *scope)
{
    // This is a read-write association end

    if (_scope != scope) {
        // Adjust subsetted properties

        _scope = scope;

        // Adjust subsetted properties
        setNamespace(scope);
    }
}

// OPERATIONS

bool UmlVariable::isAccessibleBy(
    UmlAction *a) const
{
    qWarning("UmlVariable::isAccessibleBy(): to be implemented (operation)");

    Q_UNUSED(a);
    return bool ();
}

