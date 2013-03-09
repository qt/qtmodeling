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

#include "qumlobjectflow.h"
#include "qumlobjectflow_p.h"

#include <QtUml/QUmlBehavior>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlObjectFlowPrivate::QUmlObjectFlowPrivate() :
    isMultireceive(false),
    isMulticast(false),
    selection(0),
    transformation(0)
{
}

QUmlObjectFlowPrivate::~QUmlObjectFlowPrivate()
{
}

/*!
    \class QUmlObjectFlow

    \inmodule QtUml

    \brief An object flow is an activity edge that can have objects or data passing along it.Object flows have support for multicast/receive, token selection from object nodes, and transformation of tokens.
 */

QUmlObjectFlow::QUmlObjectFlow(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlActivityEdge(*new QUmlObjectFlowPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlObjectFlow::QUmlObjectFlow(QUmlObjectFlowPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlActivityEdge(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlObjectFlow::~QUmlObjectFlow()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlObjectFlow
// ---------------------------------------------------------------

/*!
    Tells whether the objects in the flow are gathered from respondents to multicasting.
 */
bool QUmlObjectFlow::isMultireceive() const
{
    // This is a read-write attribute

    Q_D(const QUmlObjectFlow);
    return d->isMultireceive;
}

void QUmlObjectFlow::setMultireceive(bool isMultireceive)
{
    // This is a read-write attribute

    Q_D(QUmlObjectFlow);
    if (d->isMultireceive != isMultireceive) {
        d->isMultireceive = isMultireceive;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isMultireceive");
}

void QUmlObjectFlow::unsetMultireceive()
{
    setMultireceive(false);
    Q_D(QUmlObjectFlow);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isMultireceive"));
}

/*!
    Tells whether the objects in the flow are passed by multicasting.
 */
bool QUmlObjectFlow::isMulticast() const
{
    // This is a read-write attribute

    Q_D(const QUmlObjectFlow);
    return d->isMulticast;
}

void QUmlObjectFlow::setMulticast(bool isMulticast)
{
    // This is a read-write attribute

    Q_D(QUmlObjectFlow);
    if (d->isMulticast != isMulticast) {
        d->isMulticast = isMulticast;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isMulticast");
}

void QUmlObjectFlow::unsetMulticast()
{
    setMulticast(false);
    Q_D(QUmlObjectFlow);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isMulticast"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlObjectFlow
// ---------------------------------------------------------------

/*!
    Selects tokens from a source object node.
 */
QUmlBehavior *QUmlObjectFlow::selection() const
{
    // This is a read-write association end

    Q_D(const QUmlObjectFlow);
    return d->selection;
}

void QUmlObjectFlow::setSelection(QUmlBehavior *selection)
{
    // This is a read-write association end

    Q_D(QUmlObjectFlow);
    if (d->selection != selection) {
        d->selection = selection;
    }
}

/*!
    Changes or replaces data tokens flowing along edge.
 */
QUmlBehavior *QUmlObjectFlow::transformation() const
{
    // This is a read-write association end

    Q_D(const QUmlObjectFlow);
    return d->transformation;
}

void QUmlObjectFlow::setTransformation(QUmlBehavior *transformation)
{
    // This is a read-write association end

    Q_D(QUmlObjectFlow);
    if (d->transformation != transformation) {
        d->transformation = transformation;
    }
}

void QUmlObjectFlow::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("isMultireceive")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("isMultireceive")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("isMultireceive")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the objects in the flow are gathered from respondents to multicasting.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("isMultireceive")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("isMultireceive")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("isMultireceive")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("isMulticast")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("isMulticast")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("isMulticast")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the objects in the flow are passed by multicasting.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("isMulticast")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("isMulticast")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("isMulticast")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("selection")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("selection")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("selection")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Selects tokens from a source object node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("selection")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("selection")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("selection")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("transformation")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("transformation")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("transformation")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Changes or replaces data tokens flowing along edge.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("transformation")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("transformation")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectFlow")][QString::fromLatin1("transformation")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlActivityEdge::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlobjectflow.cpp"

