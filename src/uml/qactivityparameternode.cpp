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

#include "qactivityparameternode.h"

QT_BEGIN_NAMESPACE_QTUML

class QActivityParameterNodePrivate
{
public:
    explicit QActivityParameterNodePrivate();
    virtual ~QActivityParameterNodePrivate();

    QParameter *parameter;
};

QActivityParameterNodePrivate::QActivityParameterNodePrivate()
{
}

QActivityParameterNodePrivate::~QActivityParameterNodePrivate()
{
}

/*!
    \class QActivityParameterNode

    \inmodule QtUml

    \brief An activity parameter node is an object node for inputs and outputs to activities.
 */

QActivityParameterNode::QActivityParameterNode(QObject *parent)
    : QObject(parent), d_ptr(new QActivityParameterNodePrivate)
{
}

QActivityParameterNode::~QActivityParameterNode()
{
    delete d_ptr;
}

/*!
    The parameter the object node will be accepting or providing values for.
 */
QParameter *QActivityParameterNode::parameter() const
{
    return d_ptr->parameter;
}

void QActivityParameterNode::setParameter(const QParameter *parameter)
{
    d_ptr->parameter = const_cast<QParameter *>(parameter);
}

#include "moc_qactivityparameternode.cpp"

QT_END_NAMESPACE_QTUML

