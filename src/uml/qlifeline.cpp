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

void QLifelinePrivate::setRepresents(QConnectableElement *represents)
{
    // This is a read-write association end

    this->represents = represents;
}

void QLifelinePrivate::setDecomposedAs(QPartDecomposition *decomposedAs)
{
    // This is a read-write association end

    this->decomposedAs = decomposedAs;
}

void QLifelinePrivate::addCoveredBy(QInteractionFragment *coveredBy)
{
    // This is a read-write association end

    this->coveredBy->insert(coveredBy);
}

void QLifelinePrivate::removeCoveredBy(QInteractionFragment *coveredBy)
{
    // This is a read-write association end

    this->coveredBy->remove(coveredBy);
}

void QLifelinePrivate::setInteraction(QInteraction *interaction)
{
    // This is a read-write association end

    this->interaction = interaction;

    // Adjust subsetted property(ies)
    setNamespace_(interaction);
}

void QLifelinePrivate::setSelector(QValueSpecification *selector)
{
    // This is a read-write association end

    // Adjust subsetted property(ies)
    removeOwnedElement(this->selector);

    this->selector = selector;

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
    // This is a read-write association end

    QTUML_D(const QLifeline);
    return d->represents;
}

void QLifeline::setRepresents(QConnectableElement *represents)
{
    // This is a read-write association end

    QTUML_D(QLifeline);
    if (d->represents != represents) {
        d->setRepresents(represents);
    }
}

/*!
    References the Interaction that represents the decomposition.
 */
QPartDecomposition *QLifeline::decomposedAs() const
{
    // This is a read-write association end

    QTUML_D(const QLifeline);
    return d->decomposedAs;
}

void QLifeline::setDecomposedAs(QPartDecomposition *decomposedAs)
{
    // This is a read-write association end

    QTUML_D(QLifeline);
    if (d->decomposedAs != decomposedAs) {
        d->setDecomposedAs(decomposedAs);
    }
}

/*!
    References the InteractionFragments in which this Lifeline takes part.
 */
const QSet<QInteractionFragment *> *QLifeline::coveredBy() const
{
    // This is a read-write association end

    QTUML_D(const QLifeline);
    return d->coveredBy;
}

void QLifeline::addCoveredBy(QInteractionFragment *coveredBy)
{
    // This is a read-write association end

    QTUML_D(QLifeline);
    if (!d->coveredBy->contains(coveredBy)) {
        d->addCoveredBy(coveredBy);

        // Adjust opposite property
        coveredBy->addCovered(this);
    }
}

void QLifeline::removeCoveredBy(QInteractionFragment *coveredBy)
{
    // This is a read-write association end

    QTUML_D(QLifeline);
    if (d->coveredBy->contains(coveredBy)) {
        d->removeCoveredBy(coveredBy);

        // Adjust opposite property
        coveredBy->removeCovered(this);
    }
}

/*!
    References the Interaction enclosing this Lifeline.
 */
QInteraction *QLifeline::interaction() const
{
    // This is a read-write association end

    QTUML_D(const QLifeline);
    return d->interaction;
}

void QLifeline::setInteraction(QInteraction *interaction)
{
    // This is a read-write association end

    QTUML_D(QLifeline);
    if (d->interaction != interaction) {
        d->setInteraction(interaction);

        // Adjust opposite property
        interaction->addLifeline(this);
    }
}

/*!
    If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set.
 */
QValueSpecification *QLifeline::selector() const
{
    // This is a read-write association end

    QTUML_D(const QLifeline);
    return d->selector;
}

void QLifeline::setSelector(QValueSpecification *selector)
{
    // This is a read-write association end

    QTUML_D(QLifeline);
    if (d->selector != selector) {
        d->setSelector(selector);
    }
}

#include "moc_qlifeline.cpp"

QT_END_NAMESPACE_QTUML

