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

void QInformationFlowPrivate::addInformationTarget(QNamedElement *informationTarget)
{
    this->informationTargets->insert(informationTarget);

    // Adjust subsetted property(ies)
    addTarget(informationTarget);
}

void QInformationFlowPrivate::removeInformationTarget(QNamedElement *informationTarget)
{
    this->informationTargets->remove(informationTarget);

    // Adjust subsetted property(ies)
    removeTarget(informationTarget);
}

void QInformationFlowPrivate::addRealizingConnector(QConnector *realizingConnector)
{
    this->realizingConnectors->insert(realizingConnector);
}

void QInformationFlowPrivate::removeRealizingConnector(QConnector *realizingConnector)
{
    this->realizingConnectors->remove(realizingConnector);
}

void QInformationFlowPrivate::addConveyed(QClassifier *conveyed)
{
    this->conveyed->insert(conveyed);
}

void QInformationFlowPrivate::removeConveyed(QClassifier *conveyed)
{
    this->conveyed->remove(conveyed);
}

void QInformationFlowPrivate::addInformationSource(QNamedElement *informationSource)
{
    this->informationSources->insert(informationSource);

    // Adjust subsetted property(ies)
    addSource(informationSource);
}

void QInformationFlowPrivate::removeInformationSource(QNamedElement *informationSource)
{
    this->informationSources->remove(informationSource);

    // Adjust subsetted property(ies)
    removeSource(informationSource);
}

void QInformationFlowPrivate::addRealizingMessage(QMessage *realizingMessage)
{
    this->realizingMessages->insert(realizingMessage);
}

void QInformationFlowPrivate::removeRealizingMessage(QMessage *realizingMessage)
{
    this->realizingMessages->remove(realizingMessage);
}

void QInformationFlowPrivate::addRealizingActivityEdge(QActivityEdge *realizingActivityEdge)
{
    this->realizingActivityEdges->insert(realizingActivityEdge);
}

void QInformationFlowPrivate::removeRealizingActivityEdge(QActivityEdge *realizingActivityEdge)
{
    this->realizingActivityEdges->remove(realizingActivityEdge);
}

void QInformationFlowPrivate::addRealization(QRelationship *realization)
{
    this->realizations->insert(realization);
}

void QInformationFlowPrivate::removeRealization(QRelationship *realization)
{
    this->realizations->remove(realization);
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
    QTUML_D(const QInformationFlow);
    return d->informationTargets;
}

void QInformationFlow::addInformationTarget(QNamedElement *informationTarget)
{
    QTUML_D(QInformationFlow);
    if (!d->informationTargets->contains(informationTarget)) {
        d->addInformationTarget(informationTarget);
    }
}

void QInformationFlow::removeInformationTarget(QNamedElement *informationTarget)
{
    QTUML_D(QInformationFlow);
    if (d->informationTargets->contains(informationTarget)) {
        d->removeInformationTarget(informationTarget);
    }
}

/*!
    Determines which Connectors will realize the specified flow.
 */
const QSet<QConnector *> *QInformationFlow::realizingConnectors() const
{
    QTUML_D(const QInformationFlow);
    return d->realizingConnectors;
}

void QInformationFlow::addRealizingConnector(QConnector *realizingConnector)
{
    QTUML_D(QInformationFlow);
    if (!d->realizingConnectors->contains(realizingConnector)) {
        d->addRealizingConnector(realizingConnector);
    }
}

void QInformationFlow::removeRealizingConnector(QConnector *realizingConnector)
{
    QTUML_D(QInformationFlow);
    if (d->realizingConnectors->contains(realizingConnector)) {
        d->removeRealizingConnector(realizingConnector);
    }
}

/*!
    Specifies the information items that may circulate on this information flow.
 */
const QSet<QClassifier *> *QInformationFlow::conveyed() const
{
    QTUML_D(const QInformationFlow);
    return d->conveyed;
}

void QInformationFlow::addConveyed(QClassifier *conveyed)
{
    QTUML_D(QInformationFlow);
    if (!d->conveyed->contains(conveyed)) {
        d->addConveyed(conveyed);
    }
}

void QInformationFlow::removeConveyed(QClassifier *conveyed)
{
    QTUML_D(QInformationFlow);
    if (d->conveyed->contains(conveyed)) {
        d->removeConveyed(conveyed);
    }
}

/*!
    Defines from which source the conveyed InformationItems are initiated.
 */
const QSet<QNamedElement *> *QInformationFlow::informationSources() const
{
    QTUML_D(const QInformationFlow);
    return d->informationSources;
}

void QInformationFlow::addInformationSource(QNamedElement *informationSource)
{
    QTUML_D(QInformationFlow);
    if (!d->informationSources->contains(informationSource)) {
        d->addInformationSource(informationSource);
    }
}

void QInformationFlow::removeInformationSource(QNamedElement *informationSource)
{
    QTUML_D(QInformationFlow);
    if (d->informationSources->contains(informationSource)) {
        d->removeInformationSource(informationSource);
    }
}

/*!
    Determines which Messages will realize the specified flow.
 */
const QSet<QMessage *> *QInformationFlow::realizingMessages() const
{
    QTUML_D(const QInformationFlow);
    return d->realizingMessages;
}

void QInformationFlow::addRealizingMessage(QMessage *realizingMessage)
{
    QTUML_D(QInformationFlow);
    if (!d->realizingMessages->contains(realizingMessage)) {
        d->addRealizingMessage(realizingMessage);
    }
}

void QInformationFlow::removeRealizingMessage(QMessage *realizingMessage)
{
    QTUML_D(QInformationFlow);
    if (d->realizingMessages->contains(realizingMessage)) {
        d->removeRealizingMessage(realizingMessage);
    }
}

/*!
    Determines which ActivityEdges will realize the specified flow.
 */
const QSet<QActivityEdge *> *QInformationFlow::realizingActivityEdges() const
{
    QTUML_D(const QInformationFlow);
    return d->realizingActivityEdges;
}

void QInformationFlow::addRealizingActivityEdge(QActivityEdge *realizingActivityEdge)
{
    QTUML_D(QInformationFlow);
    if (!d->realizingActivityEdges->contains(realizingActivityEdge)) {
        d->addRealizingActivityEdge(realizingActivityEdge);
    }
}

void QInformationFlow::removeRealizingActivityEdge(QActivityEdge *realizingActivityEdge)
{
    QTUML_D(QInformationFlow);
    if (d->realizingActivityEdges->contains(realizingActivityEdge)) {
        d->removeRealizingActivityEdge(realizingActivityEdge);
    }
}

/*!
    Determines which Relationship will realize the specified flow
 */
const QSet<QRelationship *> *QInformationFlow::realizations() const
{
    QTUML_D(const QInformationFlow);
    return d->realizations;
}

void QInformationFlow::addRealization(QRelationship *realization)
{
    QTUML_D(QInformationFlow);
    if (!d->realizations->contains(realization)) {
        d->addRealization(realization);
    }
}

void QInformationFlow::removeRealization(QRelationship *realization)
{
    QTUML_D(QInformationFlow);
    if (d->realizations->contains(realization)) {
        d->removeRealization(realization);
    }
}

#include "moc_qinformationflow.cpp"

QT_END_NAMESPACE_QTUML

