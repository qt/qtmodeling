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

QT_BEGIN_NAMESPACE_QTUML

class QLifelinePrivate
{
public:
    explicit QLifelinePrivate();
    virtual ~QLifelinePrivate();

    QSet<QInteractionFragment *> *coveredBy;
    QPartDecomposition *decomposedAs;
    QInteraction *interaction;
    QConnectableElement *represents;
    QValueSpecification *selector;
};

QLifelinePrivate::QLifelinePrivate() :
    coveredBy(new QSet<QInteractionFragment *>)
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

QLifeline::QLifeline(QObject *parent)
    : QObject(parent), d_ptr(new QLifelinePrivate)
{
}

QLifeline::~QLifeline()
{
    delete d_ptr;
}

/*!
    References the InteractionFragments in which this Lifeline takes part.
 */
const QSet<QInteractionFragment *> *QLifeline::coveredBy() const
{
    return d_ptr->coveredBy;
}

void QLifeline::addCoveredBy(const QInteractionFragment *coveredBy)
{
    d_ptr->coveredBy->insert(const_cast<QInteractionFragment *>(coveredBy));
}

void QLifeline::removeCoveredBy(const QInteractionFragment *coveredBy)
{
    d_ptr->coveredBy->remove(const_cast<QInteractionFragment *>(coveredBy));
}

/*!
    References the Interaction that represents the decomposition.
 */
QPartDecomposition *QLifeline::decomposedAs() const
{
    return d_ptr->decomposedAs;
}

void QLifeline::setDecomposedAs(const QPartDecomposition *decomposedAs)
{
    d_ptr->decomposedAs = const_cast<QPartDecomposition *>(decomposedAs);
}

/*!
    References the Interaction enclosing this Lifeline.
 */
QInteraction *QLifeline::interaction() const
{
    return d_ptr->interaction;
}

void QLifeline::setInteraction(const QInteraction *interaction)
{
    d_ptr->interaction = const_cast<QInteraction *>(interaction);
}

/*!
    References the ConnectableElement within the classifier that contains the enclosing interaction.
 */
QConnectableElement *QLifeline::represents() const
{
    return d_ptr->represents;
}

void QLifeline::setRepresents(const QConnectableElement *represents)
{
    d_ptr->represents = const_cast<QConnectableElement *>(represents);
}

/*!
    If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set.
 */
QValueSpecification *QLifeline::selector() const
{
    return d_ptr->selector;
}

void QLifeline::setSelector(const QValueSpecification *selector)
{
    d_ptr->selector = const_cast<QValueSpecification *>(selector);
}

#include "moc_qlifeline.cpp"

QT_END_NAMESPACE_QTUML

