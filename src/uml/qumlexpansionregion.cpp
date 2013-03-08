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

#include "qumlexpansionregion.h"
#include "qumlexpansionregion_p.h"

#include <QtUml/QUmlExpansionNode>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlExpansionRegionPrivate::QUmlExpansionRegionPrivate() :
    mode(QtUml::ExpansionIterative)
{
}

QUmlExpansionRegionPrivate::~QUmlExpansionRegionPrivate()
{
}

/*!
    \class QUmlExpansionRegion

    \inmodule QtUml

    \brief An expansion region is a structured activity region that executes multiple times corresponding to elements of an input collection.
 */

QUmlExpansionRegion::QUmlExpansionRegion(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStructuredActivityNode(*new QUmlExpansionRegionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlExpansionRegion::QUmlExpansionRegion(QUmlExpansionRegionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStructuredActivityNode(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlExpansionRegion::~QUmlExpansionRegion()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlExpansionRegion
// ---------------------------------------------------------------

/*!
    The way in which the executions interact: parallel: all interactions are independent iterative: the interactions occur in order of the elements stream: a stream of values flows into a single execution
 */
QtUml::ExpansionKind QUmlExpansionRegion::mode() const
{
    // This is a read-write attribute

    Q_D(const QUmlExpansionRegion);
    return d->mode;
}

void QUmlExpansionRegion::setMode(QtUml::ExpansionKind mode)
{
    // This is a read-write attribute

    Q_D(QUmlExpansionRegion);
    if (d->mode != mode) {
        d->mode = mode;
    }
    d->modifiedResettableProperties << QString::fromLatin1("mode");
}

void QUmlExpansionRegion::unsetMode()
{
    setMode(QtUml::ExpansionIterative);
    Q_D(QUmlExpansionRegion);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("mode"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlExpansionRegion
// ---------------------------------------------------------------

/*!
    An object node that holds a separate element of the input collection during each of the multiple executions of the region.
 */
QSet<QUmlExpansionNode *> QUmlExpansionRegion::inputElements() const
{
    // This is a read-write association end

    Q_D(const QUmlExpansionRegion);
    return d->inputElements;
}

void QUmlExpansionRegion::addInputElement(QUmlExpansionNode *inputElement)
{
    // This is a read-write association end

    Q_D(QUmlExpansionRegion);
    if (!d->inputElements.contains(inputElement)) {
        d->inputElements.insert(inputElement);

        // Adjust opposite property
        inputElement->setRegionAsInput(this);
    }
}

void QUmlExpansionRegion::removeInputElement(QUmlExpansionNode *inputElement)
{
    // This is a read-write association end

    Q_D(QUmlExpansionRegion);
    if (d->inputElements.contains(inputElement)) {
        d->inputElements.remove(inputElement);

        // Adjust opposite property
        inputElement->setRegionAsInput(0);
    }
}

/*!
    An object node that accepts a separate element of the output collection during each of the multiple executions of the region. The values are formed into a collection that is available when the execution of the region is complete.
 */
QSet<QUmlExpansionNode *> QUmlExpansionRegion::outputElements() const
{
    // This is a read-write association end

    Q_D(const QUmlExpansionRegion);
    return d->outputElements;
}

void QUmlExpansionRegion::addOutputElement(QUmlExpansionNode *outputElement)
{
    // This is a read-write association end

    Q_D(QUmlExpansionRegion);
    if (!d->outputElements.contains(outputElement)) {
        d->outputElements.insert(outputElement);

        // Adjust opposite property
        outputElement->setRegionAsOutput(this);
    }
}

void QUmlExpansionRegion::removeOutputElement(QUmlExpansionNode *outputElement)
{
    // This is a read-write association end

    Q_D(QUmlExpansionRegion);
    if (d->outputElements.contains(outputElement)) {
        d->outputElements.remove(outputElement);

        // Adjust opposite property
        outputElement->setRegionAsOutput(0);
    }
}

void QUmlExpansionRegion::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("mode")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("mode")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("mode")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The way in which the executions interact: parallel: all interactions are independent iterative: the interactions occur in order of the elements stream: a stream of values flows into a single execution");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("mode")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("mode")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("mode")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("inputElements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("inputElements")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("inputElements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An object node that holds a separate element of the input collection during each of the multiple executions of the region.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("inputElements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("inputElements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("inputElements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QExpansionNode::regionAsInput");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("outputElements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("outputElements")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("outputElements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An object node that accepts a separate element of the output collection during each of the multiple executions of the region. The values are formed into a collection that is available when the execution of the region is complete.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("outputElements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("outputElements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExpansionRegion")][QString::fromLatin1("outputElements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QExpansionNode::regionAsOutput");

    QUmlStructuredActivityNode::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlexpansionregion.cpp"

