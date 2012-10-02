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

#include "qinformationflow.h"
//#include "qinformationflow_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QInformationFlow

    \inmodule QtUml

    \brief An information flow specifies that one or more information items circulates from its sources to its targets. Information flows require some kind of information channel for transmitting information items from the source to the destination. An information channel is represented in various ways depending on the nature of its sources and targets. It may be represented by connectors, links, associations, or even dependencies. For example, if the source and destination are parts in some composite structure such as a collaboration, then the information channel is likely to be represented by a connector between them. Or, if the source and target are objects (which are a kind of instance specification), they may be represented by a link that joins the two, and so on.
 */

QInformationFlow::QInformationFlow(QObject *parent)
    : QObject(parent)
{
}

QInformationFlow::~QInformationFlow()
{
}

/*!
    Specifies the information items that may circulate on this information flow.
 */
QList<QClassifier *> *QInformationFlow::conveyed()
{
}

/*!
    Defines from which source the conveyed InformationItems are initiated.
 */
QList<QNamedElement *> *QInformationFlow::informationSource()
{
}

/*!
    Defines to which target the conveyed InformationItems are directed.
 */
QList<QNamedElement *> *QInformationFlow::informationTarget()
{
}

/*!
    Determines which Relationship will realize the specified flow
 */
QList<QRelationship *> *QInformationFlow::realization()
{
}

/*!
    Determines which ActivityEdges will realize the specified flow.
 */
QList<QActivityEdge *> *QInformationFlow::realizingActivityEdge()
{
}

/*!
    Determines which Connectors will realize the specified flow.
 */
QList<QConnector *> *QInformationFlow::realizingConnector()
{
}

/*!
    Determines which Messages will realize the specified flow.
 */
QList<QMessage *> *QInformationFlow::realizingMessage()
{
}

#include "moc_qinformationflow.cpp"

QT_END_NAMESPACE_QTUML

