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

#include "qumlclearassociationaction.h"
#include "qumlclearassociationaction_p.h"

#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlClearAssociationActionPrivate::QUmlClearAssociationActionPrivate() :
    object(0),
    association(0)
{
}

QUmlClearAssociationActionPrivate::~QUmlClearAssociationActionPrivate()
{
}

/*!
    \class QUmlClearAssociationAction

    \inmodule QtUml

    \brief A clear association action is an action that destroys all links of an association in which a particular object participates.
 */

QUmlClearAssociationAction::QUmlClearAssociationAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlClearAssociationActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlClearAssociationAction::QUmlClearAssociationAction(QUmlClearAssociationActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlClearAssociationAction::~QUmlClearAssociationAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlClearAssociationAction
// ---------------------------------------------------------------

/*!
    Gives the input pin from which is obtained the object whose participation in the association is to be cleared.
 */
QUmlInputPin *QUmlClearAssociationAction::object() const
{
    // This is a read-write association end

    Q_D(const QUmlClearAssociationAction);
    return d->object;
}

void QUmlClearAssociationAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    Q_D(QUmlClearAssociationAction);
    if (d->object != object) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->object));

        d->object = object;

        // Adjust subsetted property(ies)
        if (object) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(object));
        }
    }
}

/*!
    Association to be cleared.
 */
QUmlAssociation *QUmlClearAssociationAction::association() const
{
    // This is a read-write association end

    Q_D(const QUmlClearAssociationAction);
    return d->association;
}

void QUmlClearAssociationAction::setAssociation(QUmlAssociation *association)
{
    // This is a read-write association end

    Q_D(QUmlClearAssociationAction);
    if (d->association != association) {
        d->association = association;
    }
}

void QUmlClearAssociationAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearAssociationAction")][QString::fromLatin1("object")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearAssociationAction")][QString::fromLatin1("object")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearAssociationAction")][QString::fromLatin1("object")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the input pin from which is obtained the object whose participation in the association is to be cleared.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearAssociationAction")][QString::fromLatin1("object")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearAssociationAction")][QString::fromLatin1("object")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearAssociationAction")][QString::fromLatin1("object")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearAssociationAction")][QString::fromLatin1("association")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearAssociationAction")][QString::fromLatin1("association")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearAssociationAction")][QString::fromLatin1("association")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Association to be cleared.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearAssociationAction")][QString::fromLatin1("association")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearAssociationAction")][QString::fromLatin1("association")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearAssociationAction")][QString::fromLatin1("association")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlclearassociationaction.cpp"

