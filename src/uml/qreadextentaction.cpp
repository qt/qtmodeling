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

#include "qreadextentaction.h"
#include "qreadextentaction_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QReadExtentActionPrivate::QReadExtentActionPrivate() :
    classifier(0),
    result(0)
{
}

QReadExtentActionPrivate::~QReadExtentActionPrivate()
{
}

/*!
    \class QReadExtentAction

    \inmodule QtUml

    \brief A read extent action is an action that retrieves the current instances of a classifier.
 */

QReadExtentAction::QReadExtentAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(*new QReadExtentActionPrivate, parent, wrapper)
{
    setPropertyData();
}

QReadExtentAction::QReadExtentAction(QReadExtentActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(dd, parent, wrapper)
{
    setPropertyData();
}

QReadExtentAction::~QReadExtentAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QReadExtentAction
// ---------------------------------------------------------------

/*!
    The classifier whose instances are to be retrieved.
 */
QClassifier *QReadExtentAction::classifier() const
{
    // This is a read-write association end

    Q_D(const QReadExtentAction);
    return d->classifier;
}

void QReadExtentAction::setClassifier(QClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QReadExtentAction);
    if (d->classifier != classifier) {
        d->classifier = classifier;
    }
}

/*!
    The runtime instances of the classifier.
 */
QOutputPin *QReadExtentAction::result() const
{
    // This is a read-write association end

    Q_D(const QReadExtentAction);
    return d->result;
}

void QReadExtentAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QReadExtentAction);
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

void QReadExtentAction::registerMetaTypes() const
{
    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QClassifier *>");
    qRegisterMetaType<QList<QClassifier *>>("QList<QClassifier *>");

    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<QSet<QOutputPin *>>("QSet<QOutputPin *>");
    qRegisterMetaType<QList<QOutputPin *>>("QList<QOutputPin *>");

    QAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QReadExtentAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadExtentAction")][QString::fromLatin1("classifier")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadExtentAction")][QString::fromLatin1("classifier")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadExtentAction")][QString::fromLatin1("classifier")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier whose instances are to be retrieved.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadExtentAction")][QString::fromLatin1("classifier")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadExtentAction")][QString::fromLatin1("classifier")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadExtentAction")][QString::fromLatin1("classifier")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadExtentAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadExtentAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadExtentAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The runtime instances of the classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadExtentAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadExtentAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadExtentAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

#include "moc_qreadextentaction.cpp"

QT_END_NAMESPACE_QTUML

