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

#include "qumlreclassifyobjectaction.h"
#include "qumlreclassifyobjectaction_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlReclassifyObjectActionPrivate::QUmlReclassifyObjectActionPrivate() :
    isReplaceAll(false),
    object(0)
{
}

QUmlReclassifyObjectActionPrivate::~QUmlReclassifyObjectActionPrivate()
{
}

/*!
    \class QUmlReclassifyObjectAction

    \inmodule QtUml

    \brief A reclassify object action is an action that changes which classifiers classify an object.
 */

QUmlReclassifyObjectAction::QUmlReclassifyObjectAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlReclassifyObjectActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlReclassifyObjectAction::QUmlReclassifyObjectAction(QUmlReclassifyObjectActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlReclassifyObjectAction::~QUmlReclassifyObjectAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlReclassifyObjectAction
// ---------------------------------------------------------------

/*!
    Specifies whether existing classifiers should be removed before adding the new classifiers.
 */
bool QUmlReclassifyObjectAction::isReplaceAll() const
{
    // This is a read-write attribute

    Q_D(const QUmlReclassifyObjectAction);
    return d->isReplaceAll;
}

void QUmlReclassifyObjectAction::setReplaceAll(bool isReplaceAll)
{
    // This is a read-write attribute

    Q_D(QUmlReclassifyObjectAction);
    if (d->isReplaceAll != isReplaceAll) {
        d->isReplaceAll = isReplaceAll;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isReplaceAll");
}

void QUmlReclassifyObjectAction::unsetReplaceAll()
{
    setReplaceAll(false);
    Q_D(QUmlReclassifyObjectAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isReplaceAll"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlReclassifyObjectAction
// ---------------------------------------------------------------

/*!
    A set of classifiers to be removed from the classifiers of the object.
 */
QSet<QUmlClassifier *> QUmlReclassifyObjectAction::oldClassifiers() const
{
    // This is a read-write association end

    Q_D(const QUmlReclassifyObjectAction);
    return d->oldClassifiers;
}

void QUmlReclassifyObjectAction::addOldClassifier(QUmlClassifier *oldClassifier)
{
    // This is a read-write association end

    Q_D(QUmlReclassifyObjectAction);
    if (!d->oldClassifiers.contains(oldClassifier)) {
        d->oldClassifiers.insert(oldClassifier);
    }
}

void QUmlReclassifyObjectAction::removeOldClassifier(QUmlClassifier *oldClassifier)
{
    // This is a read-write association end

    Q_D(QUmlReclassifyObjectAction);
    if (d->oldClassifiers.contains(oldClassifier)) {
        d->oldClassifiers.remove(oldClassifier);
    }
}

/*!
    Holds the object to be reclassified.
 */
QUmlInputPin *QUmlReclassifyObjectAction::object() const
{
    // This is a read-write association end

    Q_D(const QUmlReclassifyObjectAction);
    return d->object;
}

void QUmlReclassifyObjectAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    Q_D(QUmlReclassifyObjectAction);
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
    A set of classifiers to be added to the classifiers of the object.
 */
QSet<QUmlClassifier *> QUmlReclassifyObjectAction::newClassifiers() const
{
    // This is a read-write association end

    Q_D(const QUmlReclassifyObjectAction);
    return d->newClassifiers;
}

void QUmlReclassifyObjectAction::addNewClassifier(QUmlClassifier *newClassifier)
{
    // This is a read-write association end

    Q_D(QUmlReclassifyObjectAction);
    if (!d->newClassifiers.contains(newClassifier)) {
        d->newClassifiers.insert(newClassifier);
    }
}

void QUmlReclassifyObjectAction::removeNewClassifier(QUmlClassifier *newClassifier)
{
    // This is a read-write association end

    Q_D(QUmlReclassifyObjectAction);
    if (d->newClassifiers.contains(newClassifier)) {
        d->newClassifiers.remove(newClassifier);
    }
}

void QUmlReclassifyObjectAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether existing classifiers should be removed before adding the new classifiers.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("oldClassifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("oldClassifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("oldClassifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A set of classifiers to be removed from the classifiers of the object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("oldClassifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("oldClassifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("oldClassifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Holds the object to be reclassified.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("newClassifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("newClassifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("newClassifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A set of classifiers to be added to the classifiers of the object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("newClassifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("newClassifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReclassifyObjectAction")][QString::fromLatin1("newClassifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlreclassifyobjectaction.cpp"

