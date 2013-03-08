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

#include "qumlclearstructuralfeatureaction.h"
#include "qumlclearstructuralfeatureaction_p.h"

#include <QtUml/QUmlOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlClearStructuralFeatureActionPrivate::QUmlClearStructuralFeatureActionPrivate() :
    result(0)
{
}

QUmlClearStructuralFeatureActionPrivate::~QUmlClearStructuralFeatureActionPrivate()
{
}

/*!
    \class QUmlClearStructuralFeatureAction

    \inmodule QtUml

    \brief A clear structural feature action is a structural feature action that removes all values of a structural feature.
 */

QUmlClearStructuralFeatureAction::QUmlClearStructuralFeatureAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStructuralFeatureAction(*new QUmlClearStructuralFeatureActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlClearStructuralFeatureAction::QUmlClearStructuralFeatureAction(QUmlClearStructuralFeatureActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStructuralFeatureAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlClearStructuralFeatureAction::~QUmlClearStructuralFeatureAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlClearStructuralFeatureAction
// ---------------------------------------------------------------

/*!
    Gives the output pin on which the result is put.
 */
QUmlOutputPin *QUmlClearStructuralFeatureAction::result() const
{
    // This is a read-write association end

    Q_D(const QUmlClearStructuralFeatureAction);
    return d->result;
}

void QUmlClearStructuralFeatureAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlClearStructuralFeatureAction);
    if (d->result != result) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QUmlOutputPin *>(d->result));

        d->result = result;

        // Adjust subsetted property(ies)
        if (result) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addOutput(qwrappedobject_cast<QUmlOutputPin *>(result));
        }
    }
}

void QUmlClearStructuralFeatureAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the output pin on which the result is put.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlClearStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlStructuralFeatureAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlclearstructuralfeatureaction.cpp"

