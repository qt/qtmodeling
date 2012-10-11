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

#include "qcreatelinkaction.h"
#include "qcreatelinkaction_p.h"

#include <QtUml/QLinkEndCreationData>

QT_BEGIN_NAMESPACE_QTUML

QCreateLinkActionPrivate::QCreateLinkActionPrivate() :
    endData(new QSet<QLinkEndCreationData *>)
{
}

QCreateLinkActionPrivate::~QCreateLinkActionPrivate()
{
    delete endData;
}

void QCreateLinkActionPrivate::addEndData(const QLinkEndCreationData *endData)
{
    this->endData->insert(const_cast<QLinkEndCreationData *>(endData));
}

void QCreateLinkActionPrivate::removeEndData(const QLinkEndCreationData *endData)
{
    this->endData->remove(const_cast<QLinkEndCreationData *>(endData));
}

/*!
    \class QCreateLinkAction

    \inmodule QtUml

    \brief A create link action is a write link action for creating links.
 */

QCreateLinkAction::QCreateLinkAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QCreateLinkActionPrivate;
}

QCreateLinkAction::QCreateLinkAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QCreateLinkActionPrivate;
}

QCreateLinkAction::~QCreateLinkAction()
{
}

/*!
    Specifies ends of association and inputs.
 */
const QSet<QLinkEndCreationData *> *QCreateLinkAction::endData() const
{
    Q_D(const QCreateLinkAction);
    return d->endData;
}

void QCreateLinkAction::addEndData(const QLinkEndCreationData *endData)
{
    Q_D(QCreateLinkAction);
    d->addEndData(const_cast<QLinkEndCreationData *>(endData));
}

void QCreateLinkAction::removeEndData(const QLinkEndCreationData *endData)
{
    Q_D(QCreateLinkAction);
    d->removeEndData(const_cast<QLinkEndCreationData *>(endData));
}

#include "moc_qcreatelinkaction.cpp"

QT_END_NAMESPACE_QTUML
