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

#include "qlinkaction.h"
#include "qlinkaction_p.h"

#include <QtUml/QLinkEndData>
#include <QtUml/QInputPin>
#include <QtUml/QAssociation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QLinkActionPrivate::QLinkActionPrivate()
{
}

QLinkActionPrivate::~QLinkActionPrivate()
{
}

/*!
    \class QLinkAction

    \inmodule QtUml

    \brief LinkAction is an abstract class for all link actions that identify their links by the objects at the ends of the links and by the qualifiers at ends of the links.
 */

QLinkAction::QLinkAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(*new QLinkActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QLinkAction::QLinkAction(QLinkActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(dd, wrapper, parent)
{
    setPropertyData();
}

QLinkAction::~QLinkAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QLinkAction
// ---------------------------------------------------------------

/*!
    Pins taking end objects and qualifier values as input.
 */
QSet<QInputPin *> QLinkAction::inputValues() const
{
    // This is a read-write association end

    Q_D(const QLinkAction);
    return d->inputValues;
}

void QLinkAction::addInputValue(QInputPin *inputValue)
{
    // This is a read-write association end

    Q_D(QLinkAction);
    if (!d->inputValues.contains(inputValue)) {
        d->inputValues.insert(inputValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(inputValue));
    }
}

void QLinkAction::removeInputValue(QInputPin *inputValue)
{
    // This is a read-write association end

    Q_D(QLinkAction);
    if (d->inputValues.contains(inputValue)) {
        d->inputValues.remove(inputValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(inputValue));
    }
}

/*!
    Data identifying one end of a link by the objects on its ends and qualifiers.
 */
QSet<QLinkEndData *> QLinkAction::endData() const
{
    // This is a read-write association end

    Q_D(const QLinkAction);
    return d->endData;
}

void QLinkAction::addEndData(QLinkEndData *endData)
{
    // This is a read-write association end

    Q_D(QLinkAction);
    if (!d->endData.contains(endData)) {
        d->endData.insert(endData);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(endData));
    }
}

void QLinkAction::removeEndData(QLinkEndData *endData)
{
    // This is a read-write association end

    Q_D(QLinkAction);
    if (d->endData.contains(endData)) {
        d->endData.remove(endData);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(endData));
    }
}

/*!
    The association operates on LinkAction. It returns the association of the action.
 */
QAssociation *QLinkAction::association() const
{
    qWarning("QLinkAction::association: operation to be implemented");

    return 0; // change here to your derived return
}

void QLinkAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Pins taking end objects and qualifier values as input.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Data identifying one end of a link by the objects on its ends and qualifiers.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qlinkaction.cpp"

