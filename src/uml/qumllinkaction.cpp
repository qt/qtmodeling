/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumllinkaction.h"
#include "qumllinkaction_p.h"

#include <QtUml/QUmlLinkEndData>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlAssociation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlLinkActionPrivate::QUmlLinkActionPrivate()
{
}

QUmlLinkActionPrivate::~QUmlLinkActionPrivate()
{
}

/*!
    \class QUmlLinkAction

    \inmodule QtUml

    \brief LinkAction is an abstract class for all link actions that identify their links by the objects at the ends of the links and by the qualifiers at ends of the links.
 */

QUmlLinkAction::QUmlLinkAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlLinkActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlLinkAction::QUmlLinkAction(QUmlLinkActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlLinkAction::~QUmlLinkAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlLinkAction
// ---------------------------------------------------------------

/*!
    Pins taking end objects and qualifier values as input.
 */
QSet<QUmlInputPin *> QUmlLinkAction::inputValues() const
{
    // This is a read-write association end

    Q_D(const QUmlLinkAction);
    return d->inputValues;
}

void QUmlLinkAction::addInputValue(QUmlInputPin *inputValue)
{
    // This is a read-write association end

    Q_D(QUmlLinkAction);
    if (!d->inputValues.contains(inputValue)) {
        d->inputValues.insert(inputValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(inputValue));
    }
}

void QUmlLinkAction::removeInputValue(QUmlInputPin *inputValue)
{
    // This is a read-write association end

    Q_D(QUmlLinkAction);
    if (d->inputValues.contains(inputValue)) {
        d->inputValues.remove(inputValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(inputValue));
    }
}

/*!
    Data identifying one end of a link by the objects on its ends and qualifiers.
 */
QSet<QUmlLinkEndData *> QUmlLinkAction::endData() const
{
    // This is a read-write association end

    Q_D(const QUmlLinkAction);
    return d->endData;
}

void QUmlLinkAction::addEndData(QUmlLinkEndData *endData)
{
    // This is a read-write association end

    Q_D(QUmlLinkAction);
    if (!d->endData.contains(endData)) {
        d->endData.insert(endData);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(endData));
    }
}

void QUmlLinkAction::removeEndData(QUmlLinkEndData *endData)
{
    // This is a read-write association end

    Q_D(QUmlLinkAction);
    if (d->endData.contains(endData)) {
        d->endData.remove(endData);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(endData));
    }
}

/*!
    The association operates on LinkAction. It returns the association of the action.
 */
QUmlAssociation *QUmlLinkAction::association() const
{
    qWarning("QUmlLinkAction::association: operation to be implemented");

    return 0; // change here to your derived return
}

void QUmlLinkAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLinkAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLinkAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLinkAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Pins taking end objects and qualifier values as input.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLinkAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLinkAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLinkAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Data identifying one end of a link by the objects on its ends and qualifiers.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumllinkaction.cpp"

