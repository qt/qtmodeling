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

#include "qaddstructuralfeaturevalueaction.h"
#include "qaddstructuralfeaturevalueaction_p.h"
#include "qaction_p.h"

#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QAddStructuralFeatureValueActionPrivate::QAddStructuralFeatureValueActionPrivate() :
    isReplaceAll(false),
    insertAt(0)
{
}

QAddStructuralFeatureValueActionPrivate::~QAddStructuralFeatureValueActionPrivate()
{
}

void QAddStructuralFeatureValueActionPrivate::setReplaceAll(bool isReplaceAll)
{
    this->isReplaceAll = isReplaceAll;
}

void QAddStructuralFeatureValueActionPrivate::setInsertAt(const QInputPin *insertAt)
{
    // Adjust subsetted property(ies)
    removeInput(this->insertAt);

    this->insertAt = const_cast<QInputPin *>(insertAt);

    // Adjust subsetted property(ies)
    addInput(insertAt);
}

/*!
    \class QAddStructuralFeatureValueAction

    \inmodule QtUml

    \brief An add structural feature value action is a write structural feature action for adding values to a structural feature.
 */

QAddStructuralFeatureValueAction::QAddStructuralFeatureValueAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QAddStructuralFeatureValueActionPrivate;
}

QAddStructuralFeatureValueAction::QAddStructuralFeatureValueAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QAddStructuralFeatureValueActionPrivate;
}

QAddStructuralFeatureValueAction::~QAddStructuralFeatureValueAction()
{
}

/*!
    Specifies whether existing values of the structural feature of the object should be removed before adding the new value.
 */
bool QAddStructuralFeatureValueAction::isReplaceAll() const
{
    Q_D(const QAddStructuralFeatureValueAction);
    return d->isReplaceAll;
}

void QAddStructuralFeatureValueAction::setReplaceAll(bool isReplaceAll)
{
    Q_D(QAddStructuralFeatureValueAction);
    d->setReplaceAll(isReplaceAll);
}

/*!
    Gives the position at which to insert a new value or move an existing value in ordered structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero. This pin is omitted for unordered structural features.
 */
QInputPin *QAddStructuralFeatureValueAction::insertAt() const
{
    Q_D(const QAddStructuralFeatureValueAction);
    return d->insertAt;
}

void QAddStructuralFeatureValueAction::setInsertAt(const QInputPin *insertAt)
{
    Q_D(QAddStructuralFeatureValueAction);
    d->setInsertAt(const_cast<QInputPin *>(insertAt));
}

#include "moc_qaddstructuralfeaturevalueaction.cpp"

QT_END_NAMESPACE_QTUML

