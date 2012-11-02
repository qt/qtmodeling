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

/*!
    \class QLifeline

    \inmodule QtUml

    \brief A lifeline represents an individual participant in the interaction. While parts and structural features may have multiplicity greater than 1, lifelines represent only one interacting entity.
 */

QLifeline::QLifeline(QObject *parent) :
    QNamedElement(*new QLifelinePrivate, parent)
{
}

QLifeline::QLifeline(QLifelinePrivate &dd, QObject *parent) :
    QNamedElement(dd, parent)
{
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

    Q_D(const QLifeline);
    return d->represents;
}

void QLifeline::setRepresents(QConnectableElement *represents)
{
    // This is a read-write association end

    Q_D(QLifeline);
    if (d->represents != represents) {
        d->represents = represents;
    }
}

/*!
    References the Interaction that represents the decomposition.
 */
QPartDecomposition *QLifeline::decomposedAs() const
{
    // This is a read-write association end

    Q_D(const QLifeline);
    return d->decomposedAs;
}

void QLifeline::setDecomposedAs(QPartDecomposition *decomposedAs)
{
    // This is a read-write association end

    Q_D(QLifeline);
    if (d->decomposedAs != decomposedAs) {
        d->decomposedAs = decomposedAs;
    }
}

/*!
    References the InteractionFragments in which this Lifeline takes part.
 */
const QSet<QInteractionFragment *> *QLifeline::coveredBy() const
{
    // This is a read-write association end

    Q_D(const QLifeline);
    return d->coveredBy;
}

void QLifeline::addCoveredBy(QInteractionFragment *coveredBy)
{
    // This is a read-write association end

    Q_D(QLifeline);
    if (!d->coveredBy->contains(coveredBy)) {
        d->coveredBy->insert(coveredBy);

        // Adjust opposite property
        coveredBy->addCovered(this);
    }
}

void QLifeline::removeCoveredBy(QInteractionFragment *coveredBy)
{
    // This is a read-write association end

    Q_D(QLifeline);
    if (d->coveredBy->contains(coveredBy)) {
        d->coveredBy->remove(coveredBy);

        // Adjust opposite property
        if (coveredBy)
            coveredBy->removeCovered(this);
    }
}

/*!
    References the Interaction enclosing this Lifeline.
 */
QInteraction *QLifeline::interaction() const
{
    // This is a read-write association end

    Q_D(const QLifeline);
    return d->interaction;
}

void QLifeline::setInteraction(QInteraction *interaction)
{
    // This is a read-write association end

    Q_D(QLifeline);
    if (d->interaction != interaction) {
        // Adjust opposite property
        if (d->interaction)
            d->interaction->removeLifeline(this);

        d->interaction = interaction;

        // Adjust subsetted property(ies)
        d->QNamedElementPrivate::setNamespace_(dynamic_cast<QNamespace *>(interaction));

        // Adjust opposite property
        if (interaction)
            interaction->addLifeline(this);
    }
}

/*!
    If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set.
 */
QValueSpecification *QLifeline::selector() const
{
    // This is a read-write association end

    Q_D(const QLifeline);
    return d->selector;
}

void QLifeline::setSelector(QValueSpecification *selector)
{
    // This is a read-write association end

    Q_D(QLifeline);
    if (d->selector != selector) {
        // Adjust subsetted property(ies)
        d->QElementPrivate::removeOwnedElement(dynamic_cast<QElement *>(d->selector));

        d->selector = selector;

        // Adjust subsetted property(ies)
        if (selector) {
            d->QElementPrivate::addOwnedElement(dynamic_cast<QElement *>(selector));
        }
    }
}

#include "moc_qlifeline.cpp"

QT_END_NAMESPACE_QTUML

