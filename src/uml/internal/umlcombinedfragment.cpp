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
#include "umlcombinedfragment_p.h"

#include "private/umlgate_p.h"
#include "private/umlinteractionoperand_p.h"

UmlCombinedFragment::UmlCombinedFragment() :
    _interactionOperator(QtUml::InteractionOperatorKindSeq)
{
}

// OWNED ATTRIBUTES

const QSet<UmlGate *> UmlCombinedFragment::cfragmentGate() const
{
    // This is a read-write association end

    return _cfragmentGate;
}

void UmlCombinedFragment::addCfragmentGate(UmlGate *cfragmentGate)
{
    // This is a read-write association end

    if (!_cfragmentGate.contains(cfragmentGate)) {
        _cfragmentGate.insert(cfragmentGate);

        // Adjust subsetted properties
        addOwnedElement(cfragmentGate);
    }
}

void UmlCombinedFragment::removeCfragmentGate(UmlGate *cfragmentGate)
{
    // This is a read-write association end

    if (_cfragmentGate.contains(cfragmentGate)) {
        _cfragmentGate.remove(cfragmentGate);

        // Adjust subsetted properties
        removeOwnedElement(cfragmentGate);
    }
}

QtUml::InteractionOperatorKind UmlCombinedFragment::interactionOperator() const
{
    // This is a read-write property

    return _interactionOperator;
}

void UmlCombinedFragment::setInteractionOperator(QtUml::InteractionOperatorKind interactionOperator)
{
    // This is a read-write property

    if (_interactionOperator != interactionOperator) {
        _interactionOperator = interactionOperator;
    }
}

const QList<UmlInteractionOperand *> UmlCombinedFragment::operand() const
{
    // This is a read-write association end

    return _operand;
}

void UmlCombinedFragment::addOperand(UmlInteractionOperand *operand)
{
    // This is a read-write association end

    if (!_operand.contains(operand)) {
        _operand.append(operand);

        // Adjust subsetted properties
        addOwnedElement(operand);
    }
}

void UmlCombinedFragment::removeOperand(UmlInteractionOperand *operand)
{
    // This is a read-write association end

    if (_operand.contains(operand)) {
        _operand.removeAll(operand);

        // Adjust subsetted properties
        removeOwnedElement(operand);
    }
}

