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

#include "qvariable.h"
#include "qvariable_p.h"
#include "qnamedelement_p.h"
#include "qnamedelement_p.h"

#include <QtUml/QActivity>
#include <QtUml/QStructuredActivityNode>
#include <QtUml/QAction>

QT_BEGIN_NAMESPACE_QTUML

QVariablePrivate::QVariablePrivate() :
    scope(0),
    activityScope(0)
{
}

QVariablePrivate::~QVariablePrivate()
{
}

void QVariablePrivate::setScope(const QStructuredActivityNode *scope)
{
    this->scope = const_cast<QStructuredActivityNode *>(scope);
    // Adjust subsetted property(ies)
    setNamespace_(scope);
}

void QVariablePrivate::setActivityScope(const QActivity *activityScope)
{
    this->activityScope = const_cast<QActivity *>(activityScope);
    // Adjust subsetted property(ies)
    setNamespace_(activityScope);
}

/*!
    \class QVariable

    \inmodule QtUml

    \brief A variable is considered a connectable element.Variables are elements for passing data between actions indirectly. A local variable stores values shared by the actions within a structured activity group but not accessible outside it. The output of an action may be written to a variable and read for the input to a subsequent action, which is effectively an indirect data flow path. Because there is no predefined relationship between actions that read and write variables, these actions must be sequenced by control flows to prevent race conditions that may occur between actions that read or write the same variable.
 */

QVariable::QVariable(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QVariablePrivate;
}

QVariable::QVariable(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QVariablePrivate;
}

QVariable::~QVariable()
{
}

/*!
    A structured activity node that owns the variable.
 */
QStructuredActivityNode *QVariable::scope() const
{
    Q_D(const QVariable);
    return d->scope;
}

void QVariable::setScope(const QStructuredActivityNode *scope)
{
    Q_D(QVariable);
    d->setScope(const_cast<QStructuredActivityNode *>(scope));
}

/*!
    An activity that owns the variable.
 */
QActivity *QVariable::activityScope() const
{
    Q_D(const QVariable);
    return d->activityScope;
}

void QVariable::setActivityScope(const QActivity *activityScope)
{
    Q_D(QVariable);
    d->setActivityScope(const_cast<QActivity *>(activityScope));
}

/*!
    The isAccessibleBy() operation is not defined in standard UML. Implementations should define it to specify which actions can access a variable.
 */
bool QVariable::isAccessibleBy(const QAction *a) const
{
    qWarning("QVariable::isAccessibleBy: operation to be implemented");
}

#include "moc_qvariable.cpp"

QT_END_NAMESPACE_QTUML

