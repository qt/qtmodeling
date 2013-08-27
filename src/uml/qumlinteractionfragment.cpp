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
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlInteractionFragment

    \inmodule QtUml

    \brief InteractionFragment is an abstract notion of the most general interaction unit. An interaction fragment is a piece of an interaction. Each interaction fragment is conceptually like an interaction by itself.
 */

QUmlInteractionFragment::QUmlInteractionFragment() :
    _enclosingInteraction(0),
    _enclosingOperand(0)
{
    d_ptr->object.setProperty("covered", QVariant::fromValue(&_covered));
    d_ptr->object.setProperty("enclosingInteraction", QVariant::fromValue((QUmlInteraction *)(0)));
    d_ptr->object.setProperty("enclosingOperand", QVariant::fromValue((QUmlInteractionOperand *)(0)));
    d_ptr->object.setProperty("generalOrdering", QVariant::fromValue(&_generalOrdering));
}

// OWNED ATTRIBUTES

/*!
    References the Lifelines that the InteractionFragment involves.
 */
const QSet<QUmlLifeline *> QUmlInteractionFragment::covered() const
{
    // This is a read-write association end

    return _covered;
}

void QUmlInteractionFragment::addCovered(QUmlLifeline *covered)
{
    // This is a read-write association end

    if (!_covered.contains(covered)) {
        _covered.insert(covered);

        // Adjust opposite properties
        if (covered) {
            covered->addCoveredBy(this);
        }
    }
}

void QUmlInteractionFragment::removeCovered(QUmlLifeline *covered)
{
    // This is a read-write association end

    if (_covered.contains(covered)) {
        _covered.remove(covered);

        // Adjust opposite properties
        if (covered) {
            covered->removeCoveredBy(this);
        }
    }
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QUmlInteraction *QUmlInteractionFragment::enclosingInteraction() const
{
    // This is a read-write association end

    return _enclosingInteraction;
}

void QUmlInteractionFragment::setEnclosingInteraction(QUmlInteraction *enclosingInteraction)
{
    // This is a read-write association end

    if (_enclosingInteraction != enclosingInteraction) {
        // Adjust subsetted properties

        _enclosingInteraction = enclosingInteraction;

        // Adjust subsetted properties
        setNamespace(enclosingInteraction);
    }
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QUmlInteractionOperand *QUmlInteractionFragment::enclosingOperand() const
{
    // This is a read-write association end

    return _enclosingOperand;
}

void QUmlInteractionFragment::setEnclosingOperand(QUmlInteractionOperand *enclosingOperand)
{
    // This is a read-write association end

    if (_enclosingOperand != enclosingOperand) {
        // Adjust subsetted properties

        _enclosingOperand = enclosingOperand;

        // Adjust subsetted properties
        setNamespace(enclosingOperand);
    }
}

/*!
    The general ordering relationships contained in this fragment.
 */
const QSet<QUmlGeneralOrdering *> QUmlInteractionFragment::generalOrdering() const
{
    // This is a read-write association end

    return _generalOrdering;
}

void QUmlInteractionFragment::addGeneralOrdering(QUmlGeneralOrdering *generalOrdering)
{
    // This is a read-write association end

    if (!_generalOrdering.contains(generalOrdering)) {
        _generalOrdering.insert(generalOrdering);

        // Adjust subsetted properties
        addOwnedElement(generalOrdering);
    }
}

void QUmlInteractionFragment::removeGeneralOrdering(QUmlGeneralOrdering *generalOrdering)
{
    // This is a read-write association end

    if (_generalOrdering.contains(generalOrdering)) {
        _generalOrdering.remove(generalOrdering);

        // Adjust subsetted properties
        removeOwnedElement(generalOrdering);
    }
}

QT_END_NAMESPACE

