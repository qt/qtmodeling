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

#include "qbehaviorexecutionspecification.h"

#include <QtUml/QBehavior>

QT_BEGIN_NAMESPACE_QTUML

class QBehaviorExecutionSpecificationPrivate
{
public:
    explicit QBehaviorExecutionSpecificationPrivate();
    virtual ~QBehaviorExecutionSpecificationPrivate();

    QBehavior *behavior;
};

QBehaviorExecutionSpecificationPrivate::QBehaviorExecutionSpecificationPrivate() :
    behavior(0)
{
}

QBehaviorExecutionSpecificationPrivate::~QBehaviorExecutionSpecificationPrivate()
{
}

/*!
    \class QBehaviorExecutionSpecification

    \inmodule QtUml

    \brief A behavior execution specification is a kind of execution specification representing the execution of a behavior.
 */

QBehaviorExecutionSpecification::QBehaviorExecutionSpecification(QObject *parent)
    : QObject(parent), d_ptr(new QBehaviorExecutionSpecificationPrivate)
{
}

QBehaviorExecutionSpecification::~QBehaviorExecutionSpecification()
{
    delete d_ptr;
}

/*!
    Behavior whose execution is occurring.
 */
QBehavior *QBehaviorExecutionSpecification::behavior() const
{
    return d_ptr->behavior;
}

void QBehaviorExecutionSpecification::setBehavior(const QBehavior *behavior)
{
    d_ptr->behavior = const_cast<QBehavior *>(behavior);
}

#include "moc_qbehaviorexecutionspecification.cpp"

QT_END_NAMESPACE_QTUML

