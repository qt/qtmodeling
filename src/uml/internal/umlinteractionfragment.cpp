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
#include "umlinteractionfragment_p.h"

#include "private/umlgeneralordering_p.h"
#include "private/umlinteraction_p.h"
#include "private/umlinteractionoperand_p.h"
#include "private/umllifeline_p.h"

UmlInteractionFragment::UmlInteractionFragment() :
    _enclosingInteraction(0),
    _enclosingOperand(0)
{
}

// OWNED ATTRIBUTES

const QSet<UmlLifeline *> UmlInteractionFragment::covered() const
{
    // This is a read-write association end

    return _covered;
}

void UmlInteractionFragment::addCovered(UmlLifeline *covered)
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

void UmlInteractionFragment::removeCovered(UmlLifeline *covered)
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

UmlInteraction *UmlInteractionFragment::enclosingInteraction() const
{
    // This is a read-write association end

    return _enclosingInteraction;
}

void UmlInteractionFragment::setEnclosingInteraction(UmlInteraction *enclosingInteraction)
{
    // This is a read-write association end

    if (_enclosingInteraction != enclosingInteraction) {
        // Adjust subsetted properties

        _enclosingInteraction = enclosingInteraction;

        // Adjust subsetted properties
        setNamespace(enclosingInteraction);
    }
}

UmlInteractionOperand *UmlInteractionFragment::enclosingOperand() const
{
    // This is a read-write association end

    return _enclosingOperand;
}

void UmlInteractionFragment::setEnclosingOperand(UmlInteractionOperand *enclosingOperand)
{
    // This is a read-write association end

    if (_enclosingOperand != enclosingOperand) {
        // Adjust subsetted properties

        _enclosingOperand = enclosingOperand;

        // Adjust subsetted properties
        setNamespace(enclosingOperand);
    }
}

const QSet<UmlGeneralOrdering *> UmlInteractionFragment::generalOrdering() const
{
    // This is a read-write association end

    return _generalOrdering;
}

void UmlInteractionFragment::addGeneralOrdering(UmlGeneralOrdering *generalOrdering)
{
    // This is a read-write association end

    if (!_generalOrdering.contains(generalOrdering)) {
        _generalOrdering.insert(generalOrdering);

        // Adjust subsetted properties
        addOwnedElement(generalOrdering);
    }
}

void UmlInteractionFragment::removeGeneralOrdering(UmlGeneralOrdering *generalOrdering)
{
    // This is a read-write association end

    if (_generalOrdering.contains(generalOrdering)) {
        _generalOrdering.remove(generalOrdering);

        // Adjust subsetted properties
        removeOwnedElement(generalOrdering);
    }
}

