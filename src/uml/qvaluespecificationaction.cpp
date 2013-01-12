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

#include "qvaluespecificationaction.h"
#include "qvaluespecificationaction_p.h"

#include <QtUml/QOutputPin>
#include <QtUml/QValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QValueSpecificationActionPrivate::QValueSpecificationActionPrivate() :
    value(0),
    result(0)
{
}

QValueSpecificationActionPrivate::~QValueSpecificationActionPrivate()
{
}

/*!
    \class QValueSpecificationAction

    \inmodule QtUml

    \brief A value specification action is an action that evaluates a value specification.
 */

QValueSpecificationAction::QValueSpecificationAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(*new QValueSpecificationActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QValueSpecificationAction::QValueSpecificationAction(QValueSpecificationActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(dd, wrapper, parent)
{
    setPropertyData();
}

QValueSpecificationAction::~QValueSpecificationAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QValueSpecificationAction
// ---------------------------------------------------------------

/*!
    Value specification to be evaluated.
 */
QValueSpecification *QValueSpecificationAction::value() const
{
    // This is a read-write association end

    Q_D(const QValueSpecificationAction);
    return d->value;
}

void QValueSpecificationAction::setValue(QValueSpecification *value)
{
    // This is a read-write association end

    Q_D(QValueSpecificationAction);
    if (d->value != value) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->value));

        d->value = value;

        // Adjust subsetted property(ies)
        if (value) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(value));
        }
    }
}

/*!
    Gives the output pin on which the result is put.
 */
QOutputPin *QValueSpecificationAction::result() const
{
    // This is a read-write association end

    Q_D(const QValueSpecificationAction);
    return d->result;
}

void QValueSpecificationAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QValueSpecificationAction);
    if (d->result != result) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QOutputPin *>(d->result));

        d->result = result;

        // Adjust subsetted property(ies)
        if (result) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addOutput(qwrappedobject_cast<QOutputPin *>(result));
        }
    }
}

void QValueSpecificationAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QValueSpecificationAction")][QString::fromLatin1("value")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QValueSpecificationAction")][QString::fromLatin1("value")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QValueSpecificationAction")][QString::fromLatin1("value")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Value specification to be evaluated.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QValueSpecificationAction")][QString::fromLatin1("value")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QValueSpecificationAction")][QString::fromLatin1("value")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QValueSpecificationAction")][QString::fromLatin1("value")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QValueSpecificationAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QValueSpecificationAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QValueSpecificationAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the output pin on which the result is put.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QValueSpecificationAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QValueSpecificationAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QValueSpecificationAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

#include "moc_qvaluespecificationaction.cpp"

QT_END_NAMESPACE_QTUML

