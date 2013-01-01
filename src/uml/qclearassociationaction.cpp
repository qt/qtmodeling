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

#include "qclearassociationaction.h"
#include "qclearassociationaction_p.h"

#include <QtUml/QAssociation>
#include <QtUml/QInputPin>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QClearAssociationActionPrivate::QClearAssociationActionPrivate() :
    object(0),
    association(0)
{
}

QClearAssociationActionPrivate::~QClearAssociationActionPrivate()
{
}

/*!
    \class QClearAssociationAction

    \inmodule QtUml

    \brief A clear association action is an action that destroys all links of an association in which a particular object participates.
 */

QClearAssociationAction::QClearAssociationAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(*new QClearAssociationActionPrivate, parent, wrapper)
{
    setPropertyData();
}

QClearAssociationAction::QClearAssociationAction(QClearAssociationActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(dd, parent, wrapper)
{
    setPropertyData();
}

QClearAssociationAction::~QClearAssociationAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QClearAssociationAction
// ---------------------------------------------------------------

/*!
    Gives the input pin from which is obtained the object whose participation in the association is to be cleared.
 */
QInputPin *QClearAssociationAction::object() const
{
    // This is a read-write association end

    Q_D(const QClearAssociationAction);
    return d->object;
}

void QClearAssociationAction::setObject(QInputPin *object)
{
    // This is a read-write association end

    Q_D(QClearAssociationAction);
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
    Association to be cleared.
 */
QAssociation *QClearAssociationAction::association() const
{
    // This is a read-write association end

    Q_D(const QClearAssociationAction);
    return d->association;
}

void QClearAssociationAction::setAssociation(QAssociation *association)
{
    // This is a read-write association end

    Q_D(QClearAssociationAction);
    if (d->association != association) {
        d->association = association;
    }
}

void QClearAssociationAction::registerMetaTypes() const
{
    qRegisterMetaType<QAssociation *>("QAssociation *");
    qRegisterMetaType<QSet<QAssociation *>>("QSet<QAssociation *>");
    qRegisterMetaType<QList<QAssociation *>>("QList<QAssociation *>");

    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<QSet<QInputPin *>>("QSet<QInputPin *>");
    qRegisterMetaType<QList<QInputPin *>>("QList<QInputPin *>");

    QAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QClearAssociationAction::setPropertyData()
{

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClearAssociationAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClearAssociationAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the input pin from which is obtained the object whose participation in the association is to be cleared.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QClearAssociationAction")][QString::fromLatin1("association")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClearAssociationAction")][QString::fromLatin1("association")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Association to be cleared.");

    QAction::setPropertyData();
}

#include "moc_qclearassociationaction.cpp"

QT_END_NAMESPACE_QTUML

