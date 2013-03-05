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

#include "qvariableaction.h"
#include "qvariableaction_p.h"

#include <QtUml/QVariable>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QVariableActionPrivate::QVariableActionPrivate() :
    variable(0)
{
}

QVariableActionPrivate::~QVariableActionPrivate()
{
}

/*!
    \class QVariableAction

    \inmodule QtUml

    \brief VariableAction is an abstract class for actions that operate on a statically specified variable.
 */

QVariableAction::QVariableAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(*new QVariableActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QVariableAction::QVariableAction(QVariableActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(dd, wrapper, parent)
{
    setPropertyData();
}

QVariableAction::~QVariableAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QVariableAction
// ---------------------------------------------------------------

/*!
    Variable to be read.
 */
QVariable *QVariableAction::variable() const
{
    // This is a read-write association end

    Q_D(const QVariableAction);
    return d->variable;
}

void QVariableAction::setVariable(QVariable *variable)
{
    // This is a read-write association end

    Q_D(QVariableAction);
    if (d->variable != variable) {
        d->variable = variable;
    }
}

void QVariableAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QVariableAction")][QString::fromLatin1("variable")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QVariableAction")][QString::fromLatin1("variable")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QVariableAction")][QString::fromLatin1("variable")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Variable to be read.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QVariableAction")][QString::fromLatin1("variable")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QVariableAction")][QString::fromLatin1("variable")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QVariableAction")][QString::fromLatin1("variable")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qvariableaction.cpp"

