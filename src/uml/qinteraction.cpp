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

#include "qinteraction.h"
//#include "qinteraction_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QInteraction

    \inmodule QtUml

    \brief An interaction is a unit of behavior that focuses on the observable exchange of information between connectable elements.
 */

QInteraction::QInteraction(QObject *parent)
    : QBehavior(parent)
{
}

QInteraction::~QInteraction()
{
}

/*!
    Actions owned by the Interaction.
 */
QList<QAction *> *QInteraction::action()
{
}

/*!
    Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.
 */
QList<QGate *> *QInteraction::formalGate()
{
}

/*!
    The ordered set of fragments in the Interaction.
 */
QList<QInteractionFragment *> *QInteraction::fragment()
{
}

/*!
    Specifies the participants in this Interaction.
 */
QList<QLifeline *> *QInteraction::lifeline()
{
}

/*!
    The Messages contained in this Interaction.
 */
QList<QMessage *> *QInteraction::message()
{
}

#include "moc_qinteraction.cpp"

QT_END_NAMESPACE_QTUML

