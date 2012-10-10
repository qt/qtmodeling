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
#include "qinformationflow_p.h"
#include "qdirectedrelationship_p.h"
#include "qdirectedrelationship_p.h"

#include <QtUml/QConnector>
#include <QtUml/QMessage>
#include <QtUml/QActivityEdge>
#include <QtUml/QNamedElement>
#include <QtUml/QClassifier>
#include <QtUml/QRelationship>

QT_BEGIN_NAMESPACE_QTUML

QInformationFlowPrivate::QInformationFlowPrivate() :
    informationTargets(new QSet<QNamedElement *>),
    realizingConnectors(new QSet<QConnector *>),
    conveyed(new QSet<QClassifier *>),
    informationSources(new QSet<QNamedElement *>),
    realizingMessages(new QSet<QMessage *>),
    realizingActivityEdges(new QSet<QActivityEdge *>),
    realizations(new QSet<QRelationship *>)
{
}

QInformationFlowPrivate::~QInformationFlowPrivate()
{
    delete informationTargets;
    delete realizingConnectors;
    delete conveyed;
    delete informationSources;
    delete realizingMessages;
    delete realizingActivityEdges;
    delete realizations;
}

void QInformationFlowPrivate::addInformationTarget(const QNamedElement *informationTarget)
{
    this->informationTargets->insert(const_cast<QNamedElement *>(informationTarget));
    // Adjust subsetted property(ies)
    addTarget(informationTarget);
}

void QInformationFlowPrivate::removeInformationTarget(const QNamedElement *informationTarget)
{
    this->informationTargets->remove(const_cast<QNamedElement *>(informationTarget));
    // Adjust subsetted property(ies)
    removeTarget(informationTarget);
}

void QInformationFlowPrivate::addRealizingConnector(const QConnector *realizingConnector)
{
    this->realizingConnectors->insert(const_cast<QConnector *>(realizingConnector));
}

void QInformationFlowPrivate::removeRealizingConnector(const QConnector *realizingConnector)
{
    this->realizingConnectors->remove(const_cast<QConnector *>(realizingConnector));
}

void QInformationFlowPrivate::addConveyed(const QClassifier *conveyed)
{
    this->conveyed->insert(const_cast<QClassifier *>(conveyed));
}

void QInformationFlowPrivate::removeConveyed(const QClassifier *conveyed)
{
    this->conveyed->remove(const_cast<QClassifier *>(conveyed));
}

void QInformationFlowPrivate::addInformationSource(const QNamedElement *informationSource)
{
    this->informationSources->insert(const_cast<QNamedElement *>(informationSource));
    // Adjust subsetted property(ies)
    addSource(informationSource);
}

void QInformationFlowPrivate::removeInformationSource(const QNamedElement *informationSource)
{
    this->informationSources->remove(const_cast<QNamedElement *>(informationSource));
    // Adjust subsetted property(ies)
    removeSource(informationSource);
}

void QInformationFlowPrivate::addRealizingMessage(const QMessage *realizingMessage)
{
    this->realizingMessages->insert(const_cast<QMessage *>(realizingMessage));
}

void QInformationFlowPrivate::removeRealizingMessage(const QMessage *realizingMessage)
{
    this->realizingMessages->remove(const_cast<QMessage *>(realizingMessage));
}

void QInformationFlowPrivate::addRealizingActivityEdge(const QActivityEdge *realizingActivityEdge)
{
    this->realizingActivityEdges->insert(const_cast<QActivityEdge *>(realizingActivityEdge));
}

void QInformationFlowPrivate::removeRealizingActivityEdge(const QActivityEdge *realizingActivityEdge)
{
    this->realizingActivityEdges->remove(const_cast<QActivityEdge *>(realizingActivityEdge));
}

void QInformationFlowPrivate::addRealization(const QRelationship *realization)
{
    this->realizations->insert(const_cast<QRelationship *>(realization));
}

void QInformationFlowPrivate::removeRealization(const QRelationship *realization)
{
    this->realizations->remove(const_cast<QRelationship *>(realization));
}

/*!
    \class QInformationFlow

    \inmodule QtUml

    \brief An information flow specifies that one or more information items circulates from its sources to its targets. Information flows require some kind of information channel for transmitting information items from the source to the destination. An information channel is represented in various ways depending on the nature of its sources and targets. It may be represented by connectors, links, associations, or even dependencies. For example, if the source and destination are parts in some composite structure such as a collaboration, then the information channel is likely to be represented by a connector between them. Or, if the source and target are objects (which are a kind of instance specification), they may be represented by a link that joins the two, and so on.
 */

QInformationFlow::QInformationFlow(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QInformationFlowPrivate;
}

QInformationFlow::QInformationFlow(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QInformationFlowPrivate;
}

QInformationFlow::~QInformationFlow()
{
}

/*!
    Defines to which target the conveyed InformationItems are directed.
 */
const QSet<QNamedElement *> *QInformationFlow::informationTargets() const
{
    Q_D(const QInformationFlow);
    return d->informationTargets;
}

void QInformationFlow::addInformationTarget(const QNamedElement *informationTarget)
{
    Q_D(QInformationFlow);
    d->addInformationTarget(const_cast<QNamedElement *>(informationTarget));
}

void QInformationFlow::removeInformationTarget(const QNamedElement *informationTarget)
{
    Q_D(QInformationFlow);
    d->removeInformationTarget(const_cast<QNamedElement *>(informationTarget));
}

/*!
    Determines which Connectors will realize the specified flow.
 */
const QSet<QConnector *> *QInformationFlow::realizingConnectors() const
{
    Q_D(const QInformationFlow);
    return d->realizingConnectors;
}

void QInformationFlow::addRealizingConnector(const QConnector *realizingConnector)
{
    Q_D(QInformationFlow);
    d->addRealizingConnector(const_cast<QConnector *>(realizingConnector));
}

void QInformationFlow::removeRealizingConnector(const QConnector *realizingConnector)
{
    Q_D(QInformationFlow);
    d->removeRealizingConnector(const_cast<QConnector *>(realizingConnector));
}

/*!
    Specifies the information items that may circulate on this information flow.
 */
const QSet<QClassifier *> *QInformationFlow::conveyed() const
{
    Q_D(const QInformationFlow);
    return d->conveyed;
}

void QInformationFlow::addConveyed(const QClassifier *conveyed)
{
    Q_D(QInformationFlow);
    d->addConveyed(const_cast<QClassifier *>(conveyed));
}

void QInformationFlow::removeConveyed(const QClassifier *conveyed)
{
    Q_D(QInformationFlow);
    d->removeConveyed(const_cast<QClassifier *>(conveyed));
}

/*!
    Defines from which source the conveyed InformationItems are initiated.
 */
const QSet<QNamedElement *> *QInformationFlow::informationSources() const
{
    Q_D(const QInformationFlow);
    return d->informationSources;
}

void QInformationFlow::addInformationSource(const QNamedElement *informationSource)
{
    Q_D(QInformationFlow);
    d->addInformationSource(const_cast<QNamedElement *>(informationSource));
}

void QInformationFlow::removeInformationSource(const QNamedElement *informationSource)
{
    Q_D(QInformationFlow);
    d->removeInformationSource(const_cast<QNamedElement *>(informationSource));
}

/*!
    Determines which Messages will realize the specified flow.
 */
const QSet<QMessage *> *QInformationFlow::realizingMessages() const
{
    Q_D(const QInformationFlow);
    return d->realizingMessages;
}

void QInformationFlow::addRealizingMessage(const QMessage *realizingMessage)
{
    Q_D(QInformationFlow);
    d->addRealizingMessage(const_cast<QMessage *>(realizingMessage));
}

void QInformationFlow::removeRealizingMessage(const QMessage *realizingMessage)
{
    Q_D(QInformationFlow);
    d->removeRealizingMessage(const_cast<QMessage *>(realizingMessage));
}

/*!
    Determines which ActivityEdges will realize the specified flow.
 */
const QSet<QActivityEdge *> *QInformationFlow::realizingActivityEdges() const
{
    Q_D(const QInformationFlow);
    return d->realizingActivityEdges;
}

void QInformationFlow::addRealizingActivityEdge(const QActivityEdge *realizingActivityEdge)
{
    Q_D(QInformationFlow);
    d->addRealizingActivityEdge(const_cast<QActivityEdge *>(realizingActivityEdge));
}

void QInformationFlow::removeRealizingActivityEdge(const QActivityEdge *realizingActivityEdge)
{
    Q_D(QInformationFlow);
    d->removeRealizingActivityEdge(const_cast<QActivityEdge *>(realizingActivityEdge));
}

/*!
    Determines which Relationship will realize the specified flow
 */
const QSet<QRelationship *> *QInformationFlow::realizations() const
{
    Q_D(const QInformationFlow);
    return d->realizations;
}

void QInformationFlow::addRealization(const QRelationship *realization)
{
    Q_D(QInformationFlow);
    d->addRealization(const_cast<QRelationship *>(realization));
}

void QInformationFlow::removeRealization(const QRelationship *realization)
{
    Q_D(QInformationFlow);
    d->removeRealization(const_cast<QRelationship *>(realization));
}

#include "moc_qinformationflow.cpp"

QT_END_NAMESPACE_QTUML

