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
#include "umlaction_p.h"

#include "private/umlclassifier_p.h"
#include "private/umlconstraint_p.h"
#include "private/umlinputpin_p.h"
#include "private/umloutputpin_p.h"

/*!
    \class UmlAction

    \inmodule QtUml

    \brief An action has pre- and post-conditions.An action represents a single step within an activity, that is, one that is not further decomposed within the activity.An action is a named element that is the fundamental unit of executable functionality. The execution of an action represents some transformation or processing in the modeled system, be it a computer system or otherwise.
 */

UmlAction::UmlAction() :
    _isLocallyReentrant(false)
{
}

// OWNED ATTRIBUTES

/*!
    The classifier that owns the behavior of which this action is a part.
 */
UmlClassifier *UmlAction::context() const
{
    // This is a read-only derived association end

    qWarning("UmlAction::context(): to be implemented (this is a derived association end)");

    return 0;
}

void UmlAction::setContext(UmlClassifier *context)
{
    // This is a read-only derived association end

    qWarning("UmlAction::context(): to be implemented (this is a derived association end)");
    Q_UNUSED(context);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The ordered set of input pins connected to the Action. These are among the total set of inputs.
 */
const QList<UmlInputPin *> UmlAction::input() const
{
    // This is a read-only derived union association end

    return _input;
}

void UmlAction::addInput(UmlInputPin *input)
{
    // This is a read-only derived union association end

    if (!_input.contains(input)) {
        _input.append(input);

        // Adjust subsetted properties
        addOwnedElement(input);
    }
}

void UmlAction::removeInput(UmlInputPin *input)
{
    // This is a read-only derived union association end

    if (_input.contains(input)) {
        _input.removeAll(input);

        // Adjust subsetted properties
        removeOwnedElement(input);
    }
}

/*!
    If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed.
 */
bool UmlAction::isLocallyReentrant() const
{
    // This is a read-write property

    return _isLocallyReentrant;
}

void UmlAction::setLocallyReentrant(bool isLocallyReentrant)
{
    // This is a read-write property

    if (_isLocallyReentrant != isLocallyReentrant) {
        _isLocallyReentrant = isLocallyReentrant;
    }
}

/*!
    Constraint that must be satisfied when executed is completed.
 */
const QSet<UmlConstraint *> UmlAction::localPostcondition() const
{
    // This is a read-write association end

    return _localPostcondition;
}

void UmlAction::addLocalPostcondition(UmlConstraint *localPostcondition)
{
    // This is a read-write association end

    if (!_localPostcondition.contains(localPostcondition)) {
        _localPostcondition.insert(localPostcondition);

        // Adjust subsetted properties
        addOwnedElement(localPostcondition);
    }
}

void UmlAction::removeLocalPostcondition(UmlConstraint *localPostcondition)
{
    // This is a read-write association end

    if (_localPostcondition.contains(localPostcondition)) {
        _localPostcondition.remove(localPostcondition);

        // Adjust subsetted properties
        removeOwnedElement(localPostcondition);
    }
}

/*!
    Constraint that must be satisfied when execution is started.
 */
const QSet<UmlConstraint *> UmlAction::localPrecondition() const
{
    // This is a read-write association end

    return _localPrecondition;
}

void UmlAction::addLocalPrecondition(UmlConstraint *localPrecondition)
{
    // This is a read-write association end

    if (!_localPrecondition.contains(localPrecondition)) {
        _localPrecondition.insert(localPrecondition);

        // Adjust subsetted properties
        addOwnedElement(localPrecondition);
    }
}

void UmlAction::removeLocalPrecondition(UmlConstraint *localPrecondition)
{
    // This is a read-write association end

    if (_localPrecondition.contains(localPrecondition)) {
        _localPrecondition.remove(localPrecondition);

        // Adjust subsetted properties
        removeOwnedElement(localPrecondition);
    }
}

/*!
    The ordered set of output pins connected to the Action. The action places its results onto pins in this set.
 */
const QList<UmlOutputPin *> UmlAction::output() const
{
    // This is a read-only derived union association end

    return _output;
}

void UmlAction::addOutput(UmlOutputPin *output)
{
    // This is a read-only derived union association end

    if (!_output.contains(output)) {
        _output.append(output);

        // Adjust subsetted properties
        addOwnedElement(output);
    }
}

void UmlAction::removeOutput(UmlOutputPin *output)
{
    // This is a read-only derived union association end

    if (_output.contains(output)) {
        _output.removeAll(output);

        // Adjust subsetted properties
        removeOwnedElement(output);
    }
}

