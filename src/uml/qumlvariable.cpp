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
#include "qumlvariable.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlAction>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlVariable

    \inmodule QtUml

    \brief A variable is considered a connectable element.Variables are elements for passing data between actions indirectly. A local variable stores values shared by the actions within a structured activity group but not accessible outside it. The output of an action may be written to a variable and read for the input to a subsequent action, which is effectively an indirect data flow path. Because there is no predefined relationship between actions that read and write variables, these actions must be sequenced by control flows to prevent race conditions that may occur between actions that read or write the same variable.
 */

QUmlVariable::QUmlVariable() :
    _activityScope(0),
    _scope(0)
{
    d_ptr->object.setProperty("activityScope", QVariant::fromValue((QUmlActivity *)(0)));
    d_ptr->object.setProperty("scope", QVariant::fromValue((QUmlStructuredActivityNode *)(0)));
}

// OWNED ATTRIBUTES

/*!
    An activity that owns the variable.
 */
QUmlActivity *QUmlVariable::activityScope() const
{
    // This is a read-write association end

    return _activityScope;
}

void QUmlVariable::setActivityScope(QUmlActivity *activityScope)
{
    // This is a read-write association end

    if (_activityScope != activityScope) {
        // Adjust subsetted properties

        _activityScope = activityScope;

        // Adjust subsetted properties
        setNamespace(activityScope);
    }
}

/*!
    A structured activity node that owns the variable.
 */
QUmlStructuredActivityNode *QUmlVariable::scope() const
{
    // This is a read-write association end

    return _scope;
}

void QUmlVariable::setScope(QUmlStructuredActivityNode *scope)
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

/*!
    The isAccessibleBy() operation is not defined in standard UML. Implementations should define it to specify which actions can access a variable.
 */
bool QUmlVariable::isAccessibleBy(
    QUmlAction *a) const
{
    qWarning("QUmlVariable::isAccessibleBy(): to be implemented (operation)");

    Q_UNUSED(a);
    return bool ();
}

QT_END_NAMESPACE

