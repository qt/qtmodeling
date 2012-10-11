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

#include "qdestroylinkaction.h"
#include "qdestroylinkaction_p.h"

#include <QtUml/QLinkEndDestructionData>

QT_BEGIN_NAMESPACE_QTUML

QDestroyLinkActionPrivate::QDestroyLinkActionPrivate() :
    endData(new QSet<QLinkEndDestructionData *>)
{
}

QDestroyLinkActionPrivate::~QDestroyLinkActionPrivate()
{
    delete endData;
}

void QDestroyLinkActionPrivate::addEndData(const QLinkEndDestructionData *endData)
{
    this->endData->insert(const_cast<QLinkEndDestructionData *>(endData));
}

void QDestroyLinkActionPrivate::removeEndData(const QLinkEndDestructionData *endData)
{
    this->endData->remove(const_cast<QLinkEndDestructionData *>(endData));
}

/*!
    \class QDestroyLinkAction

    \inmodule QtUml

    \brief A destroy link action is a write link action that destroys links and link objects.
 */

QDestroyLinkAction::QDestroyLinkAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QDestroyLinkActionPrivate;
}

QDestroyLinkAction::QDestroyLinkAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QDestroyLinkActionPrivate;
}

QDestroyLinkAction::~QDestroyLinkAction()
{
}

/*!
    Specifies ends of association and inputs.
 */
const QSet<QLinkEndDestructionData *> *QDestroyLinkAction::endData() const
{
    QTUML_D(const QDestroyLinkAction);
    return d->endData;
}

void QDestroyLinkAction::addEndData(const QLinkEndDestructionData *endData)
{
    QTUML_D(QDestroyLinkAction);
    d->addEndData(const_cast<QLinkEndDestructionData *>(endData));
}

void QDestroyLinkAction::removeEndData(const QLinkEndDestructionData *endData)
{
    QTUML_D(QDestroyLinkAction);
    d->removeEndData(const_cast<QLinkEndDestructionData *>(endData));
}

#include "moc_qdestroylinkaction.cpp"

QT_END_NAMESPACE_QTUML

