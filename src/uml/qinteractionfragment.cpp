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

#include "qinteractionfragment.h"
#include "qinteractionfragment_p.h"
#include "qelement_p.h"
#include "qnamedelement_p.h"
#include "qnamedelement_p.h"

#include <QtUml/QGeneralOrdering>
#include <QtUml/QInteractionOperand>
#include <QtUml/QLifeline>
#include <QtUml/QInteraction>

QT_BEGIN_NAMESPACE_QTUML

QInteractionFragmentPrivate::QInteractionFragmentPrivate() :
    generalOrderings(new QSet<QGeneralOrdering *>),
    enclosingInteraction(0),
    covered(new QSet<QLifeline *>),
    enclosingOperand(0)
{
}

QInteractionFragmentPrivate::~QInteractionFragmentPrivate()
{
    delete generalOrderings;
    delete covered;
}

void QInteractionFragmentPrivate::addGeneralOrdering(const QGeneralOrdering *generalOrdering)
{
    this->generalOrderings->insert(const_cast<QGeneralOrdering *>(generalOrdering));

    // Adjust subsetted property(ies)
    addOwnedElement(generalOrdering);
}

void QInteractionFragmentPrivate::removeGeneralOrdering(const QGeneralOrdering *generalOrdering)
{
    this->generalOrderings->remove(const_cast<QGeneralOrdering *>(generalOrdering));

    // Adjust subsetted property(ies)
    removeOwnedElement(generalOrdering);
}

void QInteractionFragmentPrivate::setEnclosingInteraction(const QInteraction *enclosingInteraction)
{
    this->enclosingInteraction = const_cast<QInteraction *>(enclosingInteraction);

    // Adjust subsetted property(ies)
    setNamespace_(enclosingInteraction);
}

void QInteractionFragmentPrivate::addCovered(const QLifeline *covered)
{
    this->covered->insert(const_cast<QLifeline *>(covered));
}

void QInteractionFragmentPrivate::removeCovered(const QLifeline *covered)
{
    this->covered->remove(const_cast<QLifeline *>(covered));
}

void QInteractionFragmentPrivate::setEnclosingOperand(const QInteractionOperand *enclosingOperand)
{
    this->enclosingOperand = const_cast<QInteractionOperand *>(enclosingOperand);

    // Adjust subsetted property(ies)
    setNamespace_(enclosingOperand);
}

/*!
    \class QInteractionFragment

    \inmodule QtUml

    \brief InteractionFragment is an abstract notion of the most general interaction unit. An interaction fragment is a piece of an interaction. Each interaction fragment is conceptually like an interaction by itself.
 */

QInteractionFragment::QInteractionFragment()
{
    d_umlptr = new QInteractionFragmentPrivate;
}

QInteractionFragment::~QInteractionFragment()
{
}

/*!
    The general ordering relationships contained in this fragment.
 */
const QSet<QGeneralOrdering *> *QInteractionFragment::generalOrderings() const
{
    QTUML_D(const QInteractionFragment);
    return d->generalOrderings;
}

void QInteractionFragment::addGeneralOrdering(const QGeneralOrdering *generalOrdering)
{
    QTUML_D(QInteractionFragment);
    d->addGeneralOrdering(const_cast<QGeneralOrdering *>(generalOrdering));
}

void QInteractionFragment::removeGeneralOrdering(const QGeneralOrdering *generalOrdering)
{
    QTUML_D(QInteractionFragment);
    d->removeGeneralOrdering(const_cast<QGeneralOrdering *>(generalOrdering));
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QInteraction *QInteractionFragment::enclosingInteraction() const
{
    QTUML_D(const QInteractionFragment);
    return d->enclosingInteraction;
}

void QInteractionFragment::setEnclosingInteraction(const QInteraction *enclosingInteraction)
{
    QTUML_D(QInteractionFragment);
    d->setEnclosingInteraction(const_cast<QInteraction *>(enclosingInteraction));
}

/*!
    References the Lifelines that the InteractionFragment involves.
 */
const QSet<QLifeline *> *QInteractionFragment::covered() const
{
    QTUML_D(const QInteractionFragment);
    return d->covered;
}

void QInteractionFragment::addCovered(const QLifeline *covered)
{
    QTUML_D(QInteractionFragment);
    d->addCovered(const_cast<QLifeline *>(covered));
}

void QInteractionFragment::removeCovered(const QLifeline *covered)
{
    QTUML_D(QInteractionFragment);
    d->removeCovered(const_cast<QLifeline *>(covered));
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QInteractionOperand *QInteractionFragment::enclosingOperand() const
{
    QTUML_D(const QInteractionFragment);
    return d->enclosingOperand;
}

void QInteractionFragment::setEnclosingOperand(const QInteractionOperand *enclosingOperand)
{
    QTUML_D(QInteractionFragment);
    d->setEnclosingOperand(const_cast<QInteractionOperand *>(enclosingOperand));
}

QT_END_NAMESPACE_QTUML

