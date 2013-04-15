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
#include "qumlbehaviorexecutionspecification.h"
#include "qumlbehaviorexecutionspecification_p.h"

#include <QtUml/QUmlBehavior>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlBehaviorExecutionSpecificationPrivate::QUmlBehaviorExecutionSpecificationPrivate() :
    behavior(0)
{
}

QUmlBehaviorExecutionSpecificationPrivate::~QUmlBehaviorExecutionSpecificationPrivate()
{
}

/*!
    \class QUmlBehaviorExecutionSpecification

    \inmodule QtUml

    \brief A behavior execution specification is a kind of execution specification representing the execution of a behavior.
 */

QUmlBehaviorExecutionSpecification::QUmlBehaviorExecutionSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlExecutionSpecification(*new QUmlBehaviorExecutionSpecificationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlBehaviorExecutionSpecification::QUmlBehaviorExecutionSpecification(QUmlBehaviorExecutionSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlExecutionSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlBehaviorExecutionSpecification::~QUmlBehaviorExecutionSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlBehaviorExecutionSpecification
// ---------------------------------------------------------------

/*!
    Behavior whose execution is occurring.
 */
QUmlBehavior *QUmlBehaviorExecutionSpecification::behavior() const
{
    // This is a read-write association end

    Q_D(const QUmlBehaviorExecutionSpecification);
    return d->behavior;
}

void QUmlBehaviorExecutionSpecification::setBehavior(QUmlBehavior *behavior)
{
    // This is a read-write association end

    Q_D(QUmlBehaviorExecutionSpecification);
    if (d->behavior != behavior) {
        d->behavior = behavior;
    }
}

void QUmlBehaviorExecutionSpecification::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehaviorExecutionSpecification")][QString::fromLatin1("behavior")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehaviorExecutionSpecification")][QString::fromLatin1("behavior")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehaviorExecutionSpecification")][QString::fromLatin1("behavior")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Behavior whose execution is occurring.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehaviorExecutionSpecification")][QString::fromLatin1("behavior")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehaviorExecutionSpecification")][QString::fromLatin1("behavior")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBehaviorExecutionSpecification")][QString::fromLatin1("behavior")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlExecutionSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlbehaviorexecutionspecification.cpp"

