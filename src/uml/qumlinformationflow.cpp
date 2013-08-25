/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlinformationflow.h"
#include "qumlinformationflow_p.h"

#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlRelationship>

QT_BEGIN_NAMESPACE

QUmlInformationFlowPrivate::QUmlInformationFlowPrivate()
{
}

/*!
    \class QUmlInformationFlow

    \inmodule QtUml

    \brief An information flow specifies that one or more information items circulates from its sources to its targets. Information flows require some kind of information channel for transmitting information items from the source to the destination. An information channel is represented in various ways depending on the nature of its sources and targets. It may be represented by connectors, links, associations, or even dependencies. For example, if the source and destination are parts in some composite structure such as a collaboration, then the information channel is likely to be represented by a connector between them. Or, if the source and target are objects (which are a kind of instance specification), they may be represented by a link that joins the two, and so on.
 */

QUmlInformationFlow::QUmlInformationFlow(bool create_d_ptr) :
    QUmlDirectedRelationship(false),
    QUmlPackageableElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlInformationFlowPrivate);
}

// OWNED ATTRIBUTES

/*!
    Specifies the information items that may circulate on this information flow.
 */
QSet<QUmlClassifier *> QUmlInformationFlow::conveyed() const
{
    // This is a read-write association end

    QM_D(const QUmlInformationFlow);
    return d->conveyed;
}

void QUmlInformationFlow::addConveyed(QUmlClassifier *conveyed)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (!d->conveyed.contains(conveyed)) {
        d->conveyed.insert(conveyed);
    }
}

void QUmlInformationFlow::removeConveyed(QUmlClassifier *conveyed)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (d->conveyed.contains(conveyed)) {
        d->conveyed.remove(conveyed);
    }
}

/*!
    Defines from which source the conveyed InformationItems are initiated.
 */
QSet<QUmlNamedElement *> QUmlInformationFlow::informationSource() const
{
    // This is a read-write association end

    QM_D(const QUmlInformationFlow);
    return d->informationSource;
}

void QUmlInformationFlow::addInformationSource(QUmlNamedElement *informationSource)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (!d->informationSource.contains(informationSource)) {
        d->informationSource.insert(informationSource);
    }
}

void QUmlInformationFlow::removeInformationSource(QUmlNamedElement *informationSource)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (d->informationSource.contains(informationSource)) {
        d->informationSource.remove(informationSource);
    }
}

/*!
    Defines to which target the conveyed InformationItems are directed.
 */
QSet<QUmlNamedElement *> QUmlInformationFlow::informationTarget() const
{
    // This is a read-write association end

    QM_D(const QUmlInformationFlow);
    return d->informationTarget;
}

void QUmlInformationFlow::addInformationTarget(QUmlNamedElement *informationTarget)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (!d->informationTarget.contains(informationTarget)) {
        d->informationTarget.insert(informationTarget);
    }
}

void QUmlInformationFlow::removeInformationTarget(QUmlNamedElement *informationTarget)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (d->informationTarget.contains(informationTarget)) {
        d->informationTarget.remove(informationTarget);
    }
}

/*!
    Determines which Relationship will realize the specified flow
 */
QSet<QUmlRelationship *> QUmlInformationFlow::realization() const
{
    // This is a read-write association end

    QM_D(const QUmlInformationFlow);
    return d->realization;
}

void QUmlInformationFlow::addRealization(QUmlRelationship *realization)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (!d->realization.contains(realization)) {
        d->realization.insert(realization);
    }
}

void QUmlInformationFlow::removeRealization(QUmlRelationship *realization)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (d->realization.contains(realization)) {
        d->realization.remove(realization);
    }
}

/*!
    Determines which ActivityEdges will realize the specified flow.
 */
QSet<QUmlActivityEdge *> QUmlInformationFlow::realizingActivityEdge() const
{
    // This is a read-write association end

    QM_D(const QUmlInformationFlow);
    return d->realizingActivityEdge;
}

void QUmlInformationFlow::addRealizingActivityEdge(QUmlActivityEdge *realizingActivityEdge)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (!d->realizingActivityEdge.contains(realizingActivityEdge)) {
        d->realizingActivityEdge.insert(realizingActivityEdge);
    }
}

void QUmlInformationFlow::removeRealizingActivityEdge(QUmlActivityEdge *realizingActivityEdge)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (d->realizingActivityEdge.contains(realizingActivityEdge)) {
        d->realizingActivityEdge.remove(realizingActivityEdge);
    }
}

/*!
    Determines which Connectors will realize the specified flow.
 */
QSet<QUmlConnector *> QUmlInformationFlow::realizingConnector() const
{
    // This is a read-write association end

    QM_D(const QUmlInformationFlow);
    return d->realizingConnector;
}

void QUmlInformationFlow::addRealizingConnector(QUmlConnector *realizingConnector)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (!d->realizingConnector.contains(realizingConnector)) {
        d->realizingConnector.insert(realizingConnector);
    }
}

void QUmlInformationFlow::removeRealizingConnector(QUmlConnector *realizingConnector)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (d->realizingConnector.contains(realizingConnector)) {
        d->realizingConnector.remove(realizingConnector);
    }
}

/*!
    Determines which Messages will realize the specified flow.
 */
QSet<QUmlMessage *> QUmlInformationFlow::realizingMessage() const
{
    // This is a read-write association end

    QM_D(const QUmlInformationFlow);
    return d->realizingMessage;
}

void QUmlInformationFlow::addRealizingMessage(QUmlMessage *realizingMessage)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (!d->realizingMessage.contains(realizingMessage)) {
        d->realizingMessage.insert(realizingMessage);
    }
}

void QUmlInformationFlow::removeRealizingMessage(QUmlMessage *realizingMessage)
{
    // This is a read-write association end

    QM_D(QUmlInformationFlow);
    if (d->realizingMessage.contains(realizingMessage)) {
        d->realizingMessage.remove(realizingMessage);
    }
}

QT_END_NAMESPACE

