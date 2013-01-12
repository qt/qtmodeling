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

#include "qobjectflow.h"
#include "qobjectflow_p.h"

#include <QtUml/QBehavior>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QObjectFlowPrivate::QObjectFlowPrivate() :
    isMultireceive(false),
    isMulticast(false),
    selection(0),
    transformation(0)
{
}

QObjectFlowPrivate::~QObjectFlowPrivate()
{
}

/*!
    \class QObjectFlow

    \inmodule QtUml

    \brief An object flow is an activity edge that can have objects or data passing along it.Object flows have support for multicast/receive, token selection from object nodes, and transformation of tokens.
 */

QObjectFlow::QObjectFlow(QWrappedObject *wrapper, QWrappedObject *parent) :
    QActivityEdge(*new QObjectFlowPrivate, wrapper, parent)
{
    setPropertyData();
}

QObjectFlow::QObjectFlow(QObjectFlowPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QActivityEdge(dd, wrapper, parent)
{
    setPropertyData();
}

QObjectFlow::~QObjectFlow()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QObjectFlow
// ---------------------------------------------------------------

/*!
    Tells whether the objects in the flow are gathered from respondents to multicasting.
 */
bool QObjectFlow::isMultireceive() const
{
    // This is a read-write attribute

    Q_D(const QObjectFlow);
    return d->isMultireceive;
}

void QObjectFlow::setMultireceive(bool isMultireceive)
{
    // This is a read-write attribute

    Q_D(QObjectFlow);
    if (d->isMultireceive != isMultireceive) {
        d->isMultireceive = isMultireceive;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isMultireceive");
}

void QObjectFlow::unsetMultireceive()
{
    setMultireceive(false);
    Q_D(QObjectFlow);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isMultireceive"));
}

/*!
    Tells whether the objects in the flow are passed by multicasting.
 */
bool QObjectFlow::isMulticast() const
{
    // This is a read-write attribute

    Q_D(const QObjectFlow);
    return d->isMulticast;
}

void QObjectFlow::setMulticast(bool isMulticast)
{
    // This is a read-write attribute

    Q_D(QObjectFlow);
    if (d->isMulticast != isMulticast) {
        d->isMulticast = isMulticast;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isMulticast");
}

void QObjectFlow::unsetMulticast()
{
    setMulticast(false);
    Q_D(QObjectFlow);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isMulticast"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QObjectFlow
// ---------------------------------------------------------------

/*!
    Selects tokens from a source object node.
 */
QBehavior *QObjectFlow::selection() const
{
    // This is a read-write association end

    Q_D(const QObjectFlow);
    return d->selection;
}

void QObjectFlow::setSelection(QBehavior *selection)
{
    // This is a read-write association end

    Q_D(QObjectFlow);
    if (d->selection != selection) {
        d->selection = selection;
    }
}

/*!
    Changes or replaces data tokens flowing along edge.
 */
QBehavior *QObjectFlow::transformation() const
{
    // This is a read-write association end

    Q_D(const QObjectFlow);
    return d->transformation;
}

void QObjectFlow::setTransformation(QBehavior *transformation)
{
    // This is a read-write association end

    Q_D(QObjectFlow);
    if (d->transformation != transformation) {
        d->transformation = transformation;
    }
}

void QObjectFlow::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("isMultireceive")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("isMultireceive")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("isMultireceive")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the objects in the flow are gathered from respondents to multicasting.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("isMultireceive")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("isMultireceive")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("isMultireceive")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("isMulticast")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("isMulticast")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("isMulticast")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the objects in the flow are passed by multicasting.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("isMulticast")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("isMulticast")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("isMulticast")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("selection")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("selection")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("selection")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Selects tokens from a source object node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("selection")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("selection")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("selection")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("transformation")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("transformation")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("transformation")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Changes or replaces data tokens flowing along edge.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("transformation")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("transformation")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QObjectFlow")][QString::fromLatin1("transformation")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QActivityEdge::setPropertyData();
}

#include "moc_qobjectflow.cpp"

QT_END_NAMESPACE_QTUML

