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
#include "qumlinteractionfragment.h"
#include "qumlinteractionfragment_p.h"

#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>

QT_BEGIN_NAMESPACE

QUmlInteractionFragmentPrivate::QUmlInteractionFragmentPrivate() :
    enclosingInteraction(0),
    enclosingOperand(0)
{
}

/*!
    \class QUmlInteractionFragment

    \inmodule QtUml

    \brief InteractionFragment is an abstract notion of the most general interaction unit. An interaction fragment is a piece of an interaction. Each interaction fragment is conceptually like an interaction by itself.
 */

QUmlInteractionFragment::QUmlInteractionFragment(bool create_d_ptr) :
    QUmlNamedElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlInteractionFragmentPrivate);
}

// Owned attributes

/*!
    References the Lifelines that the InteractionFragment involves.
 */
QSet<QUmlLifeline *> QUmlInteractionFragment::covered() const
{
    return QSet<QUmlLifeline *>();
}

void QUmlInteractionFragment::addCovered(QSet<QUmlLifeline *> covered)
{
    Q_UNUSED(covered);
}

void QUmlInteractionFragment::removeCovered(QSet<QUmlLifeline *> covered)
{
    Q_UNUSED(covered);
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QUmlInteraction *QUmlInteractionFragment::enclosingInteraction() const
{
    return 0;
}

void QUmlInteractionFragment::setEnclosingInteraction(QUmlInteraction *enclosingInteraction)
{
    Q_UNUSED(enclosingInteraction);
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QUmlInteractionOperand *QUmlInteractionFragment::enclosingOperand() const
{
    return 0;
}

void QUmlInteractionFragment::setEnclosingOperand(QUmlInteractionOperand *enclosingOperand)
{
    Q_UNUSED(enclosingOperand);
}

/*!
    The general ordering relationships contained in this fragment.
 */
QSet<QUmlGeneralOrdering *> QUmlInteractionFragment::generalOrdering() const
{
    return QSet<QUmlGeneralOrdering *>();
}

void QUmlInteractionFragment::addGeneralOrdering(QSet<QUmlGeneralOrdering *> generalOrdering)
{
    Q_UNUSED(generalOrdering);
}

void QUmlInteractionFragment::removeGeneralOrdering(QSet<QUmlGeneralOrdering *> generalOrdering)
{
    Q_UNUSED(generalOrdering);
}

QT_END_NAMESPACE

