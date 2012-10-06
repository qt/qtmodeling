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

#include <QtUml/QGeneralOrdering>
#include <QtUml/QInteractionOperand>
#include <QtUml/QLifeline>
#include <QtUml/QInteraction>

QT_BEGIN_NAMESPACE_QTUML

class QInteractionFragmentPrivate
{
public:
    explicit QInteractionFragmentPrivate();
    virtual ~QInteractionFragmentPrivate();

    QSet<QLifeline *> *covered;
    QInteraction *enclosingInteraction;
    QInteractionOperand *enclosingOperand;
    QSet<QGeneralOrdering *> *generalOrderings;
};

QInteractionFragmentPrivate::QInteractionFragmentPrivate() :
    covered(new QSet<QLifeline *>),
    generalOrderings(new QSet<QGeneralOrdering *>)
{
}

QInteractionFragmentPrivate::~QInteractionFragmentPrivate()
{
    delete covered;
    delete generalOrderings;
}

/*!
    \class QInteractionFragment

    \inmodule QtUml

    \brief InteractionFragment is an abstract notion of the most general interaction unit. An interaction fragment is a piece of an interaction. Each interaction fragment is conceptually like an interaction by itself.
 */

QInteractionFragment::QInteractionFragment()
    : d_ptr(new QInteractionFragmentPrivate)
{
}

QInteractionFragment::~QInteractionFragment()
{
    delete d_ptr;
}

/*!
    References the Lifelines that the InteractionFragment involves.
 */
const QSet<QLifeline *> *QInteractionFragment::covered() const
{
    return d_ptr->covered;
}

void QInteractionFragment::addCovered(const QLifeline *covered)
{
    d_ptr->covered->insert(const_cast<QLifeline *>(covered));
}

void QInteractionFragment::removeCovered(const QLifeline *covered)
{
    d_ptr->covered->remove(const_cast<QLifeline *>(covered));
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QInteraction *QInteractionFragment::enclosingInteraction() const
{
    return d_ptr->enclosingInteraction;
}

void QInteractionFragment::setEnclosingInteraction(const QInteraction *enclosingInteraction)
{
    d_ptr->enclosingInteraction = const_cast<QInteraction *>(enclosingInteraction);
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QInteractionOperand *QInteractionFragment::enclosingOperand() const
{
    return d_ptr->enclosingOperand;
}

void QInteractionFragment::setEnclosingOperand(const QInteractionOperand *enclosingOperand)
{
    d_ptr->enclosingOperand = const_cast<QInteractionOperand *>(enclosingOperand);
}

/*!
    The general ordering relationships contained in this fragment.
 */
const QSet<QGeneralOrdering *> *QInteractionFragment::generalOrderings() const
{
    return d_ptr->generalOrderings;
}

void QInteractionFragment::addGeneralOrdering(const QGeneralOrdering *generalOrdering)
{
    d_ptr->generalOrderings->insert(const_cast<QGeneralOrdering *>(generalOrdering));
    // Adjust subsetted property(ies)
    addOwnedElement(generalOrdering);
}

void QInteractionFragment::removeGeneralOrdering(const QGeneralOrdering *generalOrdering)
{
    d_ptr->generalOrderings->remove(const_cast<QGeneralOrdering *>(generalOrdering));
    // Adjust subsetted property(ies)
    removeOwnedElement(generalOrdering);
}

QT_END_NAMESPACE_QTUML

