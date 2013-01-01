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

#include "qactioninputpin.h"
#include "qactioninputpin_p.h"

#include <QtUml/QAction>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QActionInputPinPrivate::QActionInputPinPrivate() :
    fromAction(0)
{
}

QActionInputPinPrivate::~QActionInputPinPrivate()
{
}

/*!
    \class QActionInputPin

    \inmodule QtUml

    \brief An action input pin is a kind of pin that executes an action to determine the values to input to another.
 */

QActionInputPin::QActionInputPin(QWrappedObject *parent, QWrappedObject *wrapper) :
    QInputPin(*new QActionInputPinPrivate, parent, wrapper)
{
    setPropertyData();
}

QActionInputPin::QActionInputPin(QActionInputPinPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QInputPin(dd, parent, wrapper)
{
    setPropertyData();
}

QActionInputPin::~QActionInputPin()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QActionInputPin
// ---------------------------------------------------------------

/*!
    The action used to provide values.
 */
QAction *QActionInputPin::fromAction() const
{
    // This is a read-write association end

    Q_D(const QActionInputPin);
    return d->fromAction;
}

void QActionInputPin::setFromAction(QAction *fromAction)
{
    // This is a read-write association end

    Q_D(QActionInputPin);
    if (d->fromAction != fromAction) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->fromAction));

        d->fromAction = fromAction;

        // Adjust subsetted property(ies)
        if (fromAction) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(fromAction));
        }
    }
}

void QActionInputPin::registerMetaTypes() const
{
    qRegisterMetaType<QAction *>("QAction *");
    qRegisterMetaType<QSet<QAction *>>("QSet<QAction *>");
    qRegisterMetaType<QList<QAction *>>("QList<QAction *>");

    QInputPin::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QActionInputPin::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActionInputPin")][QString::fromLatin1("fromAction")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActionInputPin")][QString::fromLatin1("fromAction")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActionInputPin")][QString::fromLatin1("fromAction")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The action used to provide values.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActionInputPin")][QString::fromLatin1("fromAction")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActionInputPin")][QString::fromLatin1("fromAction")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElement");

    QInputPin::setPropertyData();
}

#include "moc_qactioninputpin.cpp"

QT_END_NAMESPACE_QTUML

