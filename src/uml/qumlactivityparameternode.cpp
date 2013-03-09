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

#include "qumlactivityparameternode.h"
#include "qumlactivityparameternode_p.h"

#include <QtUml/QUmlParameter>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlActivityParameterNodePrivate::QUmlActivityParameterNodePrivate() :
    parameter(0)
{
}

QUmlActivityParameterNodePrivate::~QUmlActivityParameterNodePrivate()
{
}

/*!
    \class QUmlActivityParameterNode

    \inmodule QtUml

    \brief An activity parameter node is an object node for inputs and outputs to activities.
 */

QUmlActivityParameterNode::QUmlActivityParameterNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlObjectNode(*new QUmlActivityParameterNodePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlActivityParameterNode::QUmlActivityParameterNode(QUmlActivityParameterNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlObjectNode(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlActivityParameterNode::~QUmlActivityParameterNode()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlActivityParameterNode
// ---------------------------------------------------------------

/*!
    The parameter the object node will be accepting or providing values for.
 */
QUmlParameter *QUmlActivityParameterNode::parameter() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityParameterNode);
    return d->parameter;
}

void QUmlActivityParameterNode::setParameter(QUmlParameter *parameter)
{
    // This is a read-write association end

    Q_D(QUmlActivityParameterNode);
    if (d->parameter != parameter) {
        d->parameter = parameter;
    }
}

void QUmlActivityParameterNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityParameterNode")][QString::fromLatin1("parameter")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityParameterNode")][QString::fromLatin1("parameter")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityParameterNode")][QString::fromLatin1("parameter")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The parameter the object node will be accepting or providing values for.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityParameterNode")][QString::fromLatin1("parameter")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityParameterNode")][QString::fromLatin1("parameter")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityParameterNode")][QString::fromLatin1("parameter")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlObjectNode::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlactivityparameternode.cpp"

