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

#include "qcontinuation.h"
#include "qcontinuation_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QContinuationPrivate::QContinuationPrivate() :
    setting(true)
{
}

QContinuationPrivate::~QContinuationPrivate()
{
}

/*!
    \class QContinuation

    \inmodule QtUml

    \brief A continuation is a syntactic way to define continuations of different branches of an alternative combined fragment. Continuations is intuitively similar to labels representing intermediate points in a flow of control.
 */

QContinuation::QContinuation(QWrappedObject *wrapper, QWrappedObject *parent) :
    QInteractionFragment(*new QContinuationPrivate, wrapper, parent)
{
    setPropertyData();
}

QContinuation::QContinuation(QContinuationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QInteractionFragment(dd, wrapper, parent)
{
    setPropertyData();
}

QContinuation::~QContinuation()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QContinuation
// ---------------------------------------------------------------

/*!
    True: when the Continuation is at the end of the enclosing InteractionFragment and False when it is in the beginning.
 */
bool QContinuation::setting() const
{
    // This is a read-write attribute

    Q_D(const QContinuation);
    return d->setting;
}

void QContinuation::setSetting(bool setting)
{
    // This is a read-write attribute

    Q_D(QContinuation);
    if (d->setting != setting) {
        d->setting = setting;
    }
    d->modifiedResettableProperties << QString::fromLatin1("setting");
}

void QContinuation::unsetSetting()
{
    setSetting(true);
    Q_D(QContinuation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("setting"));
}

void QContinuation::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QContinuation")][QString::fromLatin1("setting")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QContinuation")][QString::fromLatin1("setting")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QContinuation")][QString::fromLatin1("setting")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("True: when the Continuation is at the end of the enclosing InteractionFragment and False when it is in the beginning.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QContinuation")][QString::fromLatin1("setting")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QContinuation")][QString::fromLatin1("setting")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QContinuation")][QString::fromLatin1("setting")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QInteractionFragment::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qcontinuation.cpp"

