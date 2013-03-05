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

#include "qreception.h"
#include "qreception_p.h"

#include <QtUml/QSignal>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QReceptionPrivate::QReceptionPrivate() :
    signal(0)
{
}

QReceptionPrivate::~QReceptionPrivate()
{
}

/*!
    \class QReception

    \inmodule QtUml

    \brief A reception is a declaration stating that a classifier is prepared to react to the receipt of a signal. A reception designates a signal and specifies the expected behavioral response. The details of handling a signal are specified by the behavior associated with the reception or the classifier itself.
 */

QReception::QReception(QWrappedObject *wrapper, QWrappedObject *parent) :
    QBehavioralFeature(*new QReceptionPrivate, wrapper, parent)
{
    setPropertyData();
}

QReception::QReception(QReceptionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QBehavioralFeature(dd, wrapper, parent)
{
    setPropertyData();
}

QReception::~QReception()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QReception
// ---------------------------------------------------------------

/*!
    The signal that this reception handles.
 */
QSignal *QReception::signal() const
{
    // This is a read-write association end

    Q_D(const QReception);
    return d->signal;
}

void QReception::setSignal(QSignal *signal)
{
    // This is a read-write association end

    Q_D(QReception);
    if (d->signal != signal) {
        d->signal = signal;
    }
}

void QReception::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReception")][QString::fromLatin1("signal")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReception")][QString::fromLatin1("signal")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReception")][QString::fromLatin1("signal")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The signal that this reception handles.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReception")][QString::fromLatin1("signal")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReception")][QString::fromLatin1("signal")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReception")][QString::fromLatin1("signal")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QBehavioralFeature::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qreception.cpp"

