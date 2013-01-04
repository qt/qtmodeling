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

#include "qclearstructuralfeatureaction.h"
#include "qclearstructuralfeatureaction_p.h"

#include <QtUml/QOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QClearStructuralFeatureActionPrivate::QClearStructuralFeatureActionPrivate() :
    result(0)
{
}

QClearStructuralFeatureActionPrivate::~QClearStructuralFeatureActionPrivate()
{
}

/*!
    \class QClearStructuralFeatureAction

    \inmodule QtUml

    \brief A clear structural feature action is a structural feature action that removes all values of a structural feature.
 */

QClearStructuralFeatureAction::QClearStructuralFeatureAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QStructuralFeatureAction(*new QClearStructuralFeatureActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QClearStructuralFeatureAction::QClearStructuralFeatureAction(QClearStructuralFeatureActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QStructuralFeatureAction(dd, wrapper, parent)
{
    setPropertyData();
}

QClearStructuralFeatureAction::~QClearStructuralFeatureAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QClearStructuralFeatureAction
// ---------------------------------------------------------------

/*!
    Gives the output pin on which the result is put.
 */
QOutputPin *QClearStructuralFeatureAction::result() const
{
    // This is a read-write association end

    Q_D(const QClearStructuralFeatureAction);
    return d->result;
}

void QClearStructuralFeatureAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QClearStructuralFeatureAction);
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

void QClearStructuralFeatureAction::registerMetaTypes() const
{
    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<QSet<QOutputPin *>>("QSet<QOutputPin *>");
    qRegisterMetaType<QList<QOutputPin *>>("QList<QOutputPin *>");

    QStructuralFeatureAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QClearStructuralFeatureAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClearStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClearStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClearStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the output pin on which the result is put.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClearStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClearStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QClearStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QStructuralFeatureAction::setPropertyData();
}

#include "moc_qclearstructuralfeatureaction.cpp"

QT_END_NAMESPACE_QTUML

