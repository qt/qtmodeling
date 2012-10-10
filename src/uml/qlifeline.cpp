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

#include "qlifeline.h"
#include "qlifeline_p.h"
#include "qnamedelement_p.h"
#include "qelement_p.h"

#include <QtUml/QConnectableElement>
#include <QtUml/QValueSpecification>
#include <QtUml/QInteraction>
#include <QtUml/QInteractionFragment>
#include <QtUml/QPartDecomposition>

QT_BEGIN_NAMESPACE_QTUML

QLifelinePrivate::QLifelinePrivate() :
    represents(0),
    decomposedAs(0),
    coveredBy(new QSet<QInteractionFragment *>),
    interaction(0),
    selector(0)
{
}

QLifelinePrivate::~QLifelinePrivate()
{
    delete coveredBy;
}

void QLifelinePrivate::setRepresents(const QConnectableElement *represents)
{
    this->represents = const_cast<QConnectableElement *>(represents);
}

void QLifelinePrivate::setDecomposedAs(const QPartDecomposition *decomposedAs)
{
    this->decomposedAs = const_cast<QPartDecomposition *>(decomposedAs);
}

void QLifelinePrivate::addCoveredBy(const QInteractionFragment *coveredBy)
{
    this->coveredBy->insert(const_cast<QInteractionFragment *>(coveredBy));
}

void QLifelinePrivate::removeCoveredBy(const QInteractionFragment *coveredBy)
{
    this->coveredBy->remove(const_cast<QInteractionFragment *>(coveredBy));
}

void QLifelinePrivate::setInteraction(const QInteraction *interaction)
{
    this->interaction = const_cast<QInteraction *>(interaction);
    // Adjust subsetted property(ies)
    setNamespace_(interaction);
}

void QLifelinePrivate::setSelector(const QValueSpecification *selector)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->selector);
    this->selector = const_cast<QValueSpecification *>(selector);
    // Adjust subsetted property(ies)
    addOwnedElement(selector);
}

/*!
    \class QLifeline

    \inmodule QtUml

    \brief A lifeline represents an individual participant in the interaction. While parts and structural features may have multiplicity greater than 1, lifelines represent only one interacting entity.
 */

QLifeline::QLifeline(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QLifelinePrivate;
}

QLifeline::QLifeline(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QLifelinePrivate;
}

QLifeline::~QLifeline()
{
}

/*!
    References the ConnectableElement within the classifier that contains the enclosing interaction.
 */
QConnectableElement *QLifeline::represents() const
{
    Q_D(const QLifeline);
    return d->represents;
}

void QLifeline::setRepresents(const QConnectableElement *represents)
{
    Q_D(QLifeline);
    d->setRepresents(const_cast<QConnectableElement *>(represents));
}

/*!
    References the Interaction that represents the decomposition.
 */
QPartDecomposition *QLifeline::decomposedAs() const
{
    Q_D(const QLifeline);
    return d->decomposedAs;
}

void QLifeline::setDecomposedAs(const QPartDecomposition *decomposedAs)
{
    Q_D(QLifeline);
    d->setDecomposedAs(const_cast<QPartDecomposition *>(decomposedAs));
}

/*!
    References the InteractionFragments in which this Lifeline takes part.
 */
const QSet<QInteractionFragment *> *QLifeline::coveredBy() const
{
    Q_D(const QLifeline);
    return d->coveredBy;
}

void QLifeline::addCoveredBy(const QInteractionFragment *coveredBy)
{
    Q_D(QLifeline);
    d->addCoveredBy(const_cast<QInteractionFragment *>(coveredBy));
}

void QLifeline::removeCoveredBy(const QInteractionFragment *coveredBy)
{
    Q_D(QLifeline);
    d->removeCoveredBy(const_cast<QInteractionFragment *>(coveredBy));
}

/*!
    References the Interaction enclosing this Lifeline.
 */
QInteraction *QLifeline::interaction() const
{
    Q_D(const QLifeline);
    return d->interaction;
}

void QLifeline::setInteraction(const QInteraction *interaction)
{
    Q_D(QLifeline);
    d->setInteraction(const_cast<QInteraction *>(interaction));
}

/*!
    If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set.
 */
QValueSpecification *QLifeline::selector() const
{
    Q_D(const QLifeline);
    return d->selector;
}

void QLifeline::setSelector(const QValueSpecification *selector)
{
    Q_D(QLifeline);
    d->setSelector(const_cast<QValueSpecification *>(selector));
}

#include "moc_qlifeline.cpp"

QT_END_NAMESPACE_QTUML

