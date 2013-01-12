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

#include "qreadlinkobjectendaction.h"
#include "qreadlinkobjectendaction_p.h"

#include <QtUml/QProperty>
#include <QtUml/QInputPin>
#include <QtUml/QOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QReadLinkObjectEndActionPrivate::QReadLinkObjectEndActionPrivate() :
    end(0),
    object(0),
    result(0)
{
}

QReadLinkObjectEndActionPrivate::~QReadLinkObjectEndActionPrivate()
{
}

/*!
    \class QReadLinkObjectEndAction

    \inmodule QtUml

    \brief A read link object end action is an action that retrieves an end object from a link object.
 */

QReadLinkObjectEndAction::QReadLinkObjectEndAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(*new QReadLinkObjectEndActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QReadLinkObjectEndAction::QReadLinkObjectEndAction(QReadLinkObjectEndActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(dd, wrapper, parent)
{
    setPropertyData();
}

QReadLinkObjectEndAction::~QReadLinkObjectEndAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QReadLinkObjectEndAction
// ---------------------------------------------------------------

/*!
    Link end to be read.
 */
QProperty *QReadLinkObjectEndAction::end() const
{
    // This is a read-write association end

    Q_D(const QReadLinkObjectEndAction);
    return d->end;
}

void QReadLinkObjectEndAction::setEnd(QProperty *end)
{
    // This is a read-write association end

    Q_D(QReadLinkObjectEndAction);
    if (d->end != end) {
        d->end = end;
    }
}

/*!
    Gives the input pin from which the link object is obtained.
 */
QInputPin *QReadLinkObjectEndAction::object() const
{
    // This is a read-write association end

    Q_D(const QReadLinkObjectEndAction);
    return d->object;
}

void QReadLinkObjectEndAction::setObject(QInputPin *object)
{
    // This is a read-write association end

    Q_D(QReadLinkObjectEndAction);
    if (d->object != object) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->object));

        d->object = object;

        // Adjust subsetted property(ies)
        if (object) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(object));
        }
    }
}

/*!
    Pin where the result value is placed.
 */
QOutputPin *QReadLinkObjectEndAction::result() const
{
    // This is a read-write association end

    Q_D(const QReadLinkObjectEndAction);
    return d->result;
}

void QReadLinkObjectEndAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QReadLinkObjectEndAction);
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

void QReadLinkObjectEndAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("end")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("end")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("end")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Link end to be read.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("end")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("end")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("end")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the input pin from which the link object is obtained.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Pin where the result value is placed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkObjectEndAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

#include "moc_qreadlinkobjectendaction.cpp"

QT_END_NAMESPACE_QTUML

