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
#include "qumllifeline.h"
#include "qumllifeline_p.h"

#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlPartDecomposition>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlLifelinePrivate::QUmlLifelinePrivate() :
    decomposedAs(0),
    interaction(0),
    represents(0),
    selector(0)
{
}

/*!
    \class QUmlLifeline

    \inmodule QtUml

    \brief A lifeline represents an individual participant in the interaction. While parts and structural features may have multiplicity greater than 1, lifelines represent only one interacting entity.
 */

QUmlLifeline::QUmlLifeline(bool create_d_ptr) :
    QUmlNamedElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlLifelinePrivate);
}

// Owned attributes

/*!
    References the InteractionFragments in which this Lifeline takes part.
 */
QSet<QUmlInteractionFragment *> QUmlLifeline::coveredBy() const
{
    return QSet<QUmlInteractionFragment *>();
}

void QUmlLifeline::addCoveredBy(QSet<QUmlInteractionFragment *> coveredBy)
{
    Q_UNUSED(coveredBy);
}

void QUmlLifeline::removeCoveredBy(QSet<QUmlInteractionFragment *> coveredBy)
{
    Q_UNUSED(coveredBy);
}

/*!
    References the Interaction that represents the decomposition.
 */
QUmlPartDecomposition *QUmlLifeline::decomposedAs() const
{
    return 0;
}

void QUmlLifeline::setDecomposedAs(QUmlPartDecomposition *decomposedAs)
{
    Q_UNUSED(decomposedAs);
}

/*!
    References the Interaction enclosing this Lifeline.
 */
QUmlInteraction *QUmlLifeline::interaction() const
{
    return 0;
}

void QUmlLifeline::setInteraction(QUmlInteraction *interaction)
{
    Q_UNUSED(interaction);
}

/*!
    References the ConnectableElement within the classifier that contains the enclosing interaction.
 */
QUmlConnectableElement *QUmlLifeline::represents() const
{
    return 0;
}

void QUmlLifeline::setRepresents(QUmlConnectableElement *represents)
{
    Q_UNUSED(represents);
}

/*!
    If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set.
 */
QUmlValueSpecification *QUmlLifeline::selector() const
{
    return 0;
}

void QUmlLifeline::setSelector(QUmlValueSpecification *selector)
{
    Q_UNUSED(selector);
}

QT_END_NAMESPACE

