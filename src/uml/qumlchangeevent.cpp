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

#include "qumlchangeevent.h"
#include "qumlchangeevent_p.h"

#include <QtUml/QUmlValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlChangeEventPrivate::QUmlChangeEventPrivate() :
    changeExpression(0)
{
}

QUmlChangeEventPrivate::~QUmlChangeEventPrivate()
{
}

/*!
    \class QUmlChangeEvent

    \inmodule QtUml

    \brief A change event models a change in the system configuration that makes a condition true.
 */

QUmlChangeEvent::QUmlChangeEvent(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlEvent(*new QUmlChangeEventPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlChangeEvent::QUmlChangeEvent(QUmlChangeEventPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlEvent(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlChangeEvent::~QUmlChangeEvent()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlChangeEvent
// ---------------------------------------------------------------

/*!
    A Boolean-valued expression that will result in a change event whenever its value changes from false to true.
 */
QUmlValueSpecification *QUmlChangeEvent::changeExpression() const
{
    // This is a read-write association end

    Q_D(const QUmlChangeEvent);
    return d->changeExpression;
}

void QUmlChangeEvent::setChangeExpression(QUmlValueSpecification *changeExpression)
{
    // This is a read-write association end

    Q_D(QUmlChangeEvent);
    if (d->changeExpression != changeExpression) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->changeExpression));

        d->changeExpression = changeExpression;

        // Adjust subsetted property(ies)
        if (changeExpression) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(changeExpression));
        }
    }
}

void QUmlChangeEvent::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlChangeEvent")][QString::fromLatin1("changeExpression")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlChangeEvent")][QString::fromLatin1("changeExpression")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlChangeEvent")][QString::fromLatin1("changeExpression")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A Boolean-valued expression that will result in a change event whenever its value changes from false to true.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlChangeEvent")][QString::fromLatin1("changeExpression")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlChangeEvent")][QString::fromLatin1("changeExpression")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlChangeEvent")][QString::fromLatin1("changeExpression")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlEvent::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlchangeevent.cpp"

