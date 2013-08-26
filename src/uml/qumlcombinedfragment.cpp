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
#include "qumlcombinedfragment.h"

#include <QtUml/QUmlGate>
#include <QtUml/QUmlInteractionOperand>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlCombinedFragment

    \inmodule QtUml

    \brief A combined fragment defines an expression of interaction fragments. A combined fragment is defined by an interaction operator and corresponding interaction operands. Through the use of combined fragments the user will be able to describe a number of traces in a compact and concise manner.
 */

QUmlCombinedFragment::QUmlCombinedFragment() :
    _interactionOperator(QtUml::InteractionOperatorSeq)
{
}

// OWNED ATTRIBUTES

/*!
    Specifies the gates that form the interface between this CombinedFragment and its surroundings
 */
QSet<QUmlGate *> QUmlCombinedFragment::cfragmentGate() const
{
    // This is a read-write association end

    return _cfragmentGate;
}

void QUmlCombinedFragment::addCfragmentGate(QUmlGate *cfragmentGate)
{
    // This is a read-write association end

    if (!_cfragmentGate.contains(cfragmentGate)) {
        _cfragmentGate.insert(cfragmentGate);
    }
}

void QUmlCombinedFragment::removeCfragmentGate(QUmlGate *cfragmentGate)
{
    // This is a read-write association end

    if (_cfragmentGate.contains(cfragmentGate)) {
        _cfragmentGate.remove(cfragmentGate);
    }
}

/*!
    Specifies the operation which defines the semantics of this combination of InteractionFragments.
 */
QtUml::InteractionOperatorKind QUmlCombinedFragment::interactionOperator() const
{
    // This is a read-write property

    return _interactionOperator;
}

void QUmlCombinedFragment::setInteractionOperator(QtUml::InteractionOperatorKind interactionOperator)
{
    // This is a read-write property

    if (_interactionOperator != interactionOperator) {
        _interactionOperator = interactionOperator;
    }
}

/*!
    The set of operands of the combined fragment.
 */
QList<QUmlInteractionOperand *> QUmlCombinedFragment::operand() const
{
    // This is a read-write association end

    return _operand;
}

void QUmlCombinedFragment::addOperand(QUmlInteractionOperand *operand)
{
    // This is a read-write association end

    if (!_operand.contains(operand)) {
        _operand.append(operand);
    }
}

void QUmlCombinedFragment::removeOperand(QUmlInteractionOperand *operand)
{
    // This is a read-write association end

    if (_operand.contains(operand)) {
        _operand.removeAll(operand);
    }
}

QT_END_NAMESPACE

