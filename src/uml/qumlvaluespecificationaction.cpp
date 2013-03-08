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

#include "qumlvaluespecificationaction.h"
#include "qumlvaluespecificationaction_p.h"

#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlValueSpecificationActionPrivate::QUmlValueSpecificationActionPrivate() :
    value(0),
    result(0)
{
}

QUmlValueSpecificationActionPrivate::~QUmlValueSpecificationActionPrivate()
{
}

/*!
    \class QUmlValueSpecificationAction

    \inmodule QtUml

    \brief A value specification action is an action that evaluates a value specification.
 */

QUmlValueSpecificationAction::QUmlValueSpecificationAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlValueSpecificationActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlValueSpecificationAction::QUmlValueSpecificationAction(QUmlValueSpecificationActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlValueSpecificationAction::~QUmlValueSpecificationAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlValueSpecificationAction
// ---------------------------------------------------------------

/*!
    Value specification to be evaluated.
 */
QUmlValueSpecification *QUmlValueSpecificationAction::value() const
{
    // This is a read-write association end

    Q_D(const QUmlValueSpecificationAction);
    return d->value;
}

void QUmlValueSpecificationAction::setValue(QUmlValueSpecification *value)
{
    // This is a read-write association end

    Q_D(QUmlValueSpecificationAction);
    if (d->value != value) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->value));

        d->value = value;

        // Adjust subsetted property(ies)
        if (value) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(value));
        }
    }
}

/*!
    Gives the output pin on which the result is put.
 */
QUmlOutputPin *QUmlValueSpecificationAction::result() const
{
    // This is a read-write association end

    Q_D(const QUmlValueSpecificationAction);
    return d->result;
}

void QUmlValueSpecificationAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlValueSpecificationAction);
    if (d->result != result) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QUmlOutputPin *>(d->result));

        d->result = result;

        // Adjust subsetted property(ies)
        if (result) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addOutput(qwrappedobject_cast<QUmlOutputPin *>(result));
        }
    }
}

void QUmlValueSpecificationAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValueSpecificationAction")][QString::fromLatin1("value")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValueSpecificationAction")][QString::fromLatin1("value")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValueSpecificationAction")][QString::fromLatin1("value")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Value specification to be evaluated.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValueSpecificationAction")][QString::fromLatin1("value")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValueSpecificationAction")][QString::fromLatin1("value")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValueSpecificationAction")][QString::fromLatin1("value")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValueSpecificationAction")][QString::fromLatin1("result")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValueSpecificationAction")][QString::fromLatin1("result")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValueSpecificationAction")][QString::fromLatin1("result")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the output pin on which the result is put.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValueSpecificationAction")][QString::fromLatin1("result")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValueSpecificationAction")][QString::fromLatin1("result")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValueSpecificationAction")][QString::fromLatin1("result")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlvaluespecificationaction.cpp"

