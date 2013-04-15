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
#include "qumlactionexecutionspecification.h"
#include "qumlactionexecutionspecification_p.h"

#include <QtUml/QUmlAction>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlActionExecutionSpecificationPrivate::QUmlActionExecutionSpecificationPrivate() :
    action(0)
{
}

QUmlActionExecutionSpecificationPrivate::~QUmlActionExecutionSpecificationPrivate()
{
}

/*!
    \class QUmlActionExecutionSpecification

    \inmodule QtUml

    \brief An action execution specification is a kind of execution specification representing the execution of an action.
 */

QUmlActionExecutionSpecification::QUmlActionExecutionSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlExecutionSpecification(*new QUmlActionExecutionSpecificationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlActionExecutionSpecification::QUmlActionExecutionSpecification(QUmlActionExecutionSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlExecutionSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlActionExecutionSpecification::~QUmlActionExecutionSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlActionExecutionSpecification
// ---------------------------------------------------------------

/*!
    Action whose execution is occurring.
 */
QUmlAction *QUmlActionExecutionSpecification::action() const
{
    // This is a read-write association end

    Q_D(const QUmlActionExecutionSpecification);
    return d->action;
}

void QUmlActionExecutionSpecification::setAction(QUmlAction *action)
{
    // This is a read-write association end

    Q_D(QUmlActionExecutionSpecification);
    if (d->action != action) {
        d->action = action;
    }
}

void QUmlActionExecutionSpecification::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActionExecutionSpecification")][QString::fromLatin1("action")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActionExecutionSpecification")][QString::fromLatin1("action")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActionExecutionSpecification")][QString::fromLatin1("action")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Action whose execution is occurring.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActionExecutionSpecification")][QString::fromLatin1("action")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActionExecutionSpecification")][QString::fromLatin1("action")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActionExecutionSpecification")][QString::fromLatin1("action")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlExecutionSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlactionexecutionspecification.cpp"

