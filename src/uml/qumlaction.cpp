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
#include "qumlaction.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlAction

    \inmodule QtUml

    \brief An action has pre- and post-conditions.An action represents a single step within an activity, that is, one that is not further decomposed within the activity.An action is a named element that is the fundamental unit of executable functionality. The execution of an action represents some transformation or processing in the modeled system, be it a computer system or otherwise.
 */

QUmlAction::QUmlAction() :
    _isLocallyReentrant(false)
{
    d_ptr->object.setProperty("context", QVariant::fromValue((QUmlClassifier *)(0)));
    d_ptr->object.setProperty("input", QVariant::fromValue(&_input));
    d_ptr->object.setProperty("isLocallyReentrant", QVariant::fromValue(false));
    d_ptr->object.setProperty("localPostcondition", QVariant::fromValue(&_localPostcondition));
    d_ptr->object.setProperty("localPrecondition", QVariant::fromValue(&_localPrecondition));
    d_ptr->object.setProperty("output", QVariant::fromValue(&_output));
}

// OWNED ATTRIBUTES

/*!
    The classifier that owns the behavior of which this action is a part.
 */
QUmlClassifier *QUmlAction::context() const
{
    // This is a read-only derived association end

    qWarning("QUmlAction::context(): to be implemented (this is a derived association end)");

    return 0;
}

void QUmlAction::setContext(QUmlClassifier *context)
{
    // This is a read-only derived association end

    qWarning("QUmlAction::context(): to be implemented (this is a derived association end)");
    Q_UNUSED(context);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The ordered set of input pins connected to the Action. These are among the total set of inputs.
 */
const QList<QUmlInputPin *> QUmlAction::input() const
{
    // This is a read-only derived union association end

    return _input;
}

void QUmlAction::addInput(QUmlInputPin *input)
{
    // This is a read-only derived union association end

    if (!_input.contains(input)) {
        _input.append(input);

        // Adjust subsetted properties
        addOwnedElement(input);
    }
}

void QUmlAction::removeInput(QUmlInputPin *input)
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
bool QUmlAction::isLocallyReentrant() const
{
    // This is a read-write property

    return _isLocallyReentrant;
}

void QUmlAction::setLocallyReentrant(bool isLocallyReentrant)
{
    // This is a read-write property

    if (_isLocallyReentrant != isLocallyReentrant) {
        _isLocallyReentrant = isLocallyReentrant;
    }
}

/*!
    Constraint that must be satisfied when executed is completed.
 */
const QSet<QUmlConstraint *> QUmlAction::localPostcondition() const
{
    // This is a read-write association end

    return _localPostcondition;
}

void QUmlAction::addLocalPostcondition(QUmlConstraint *localPostcondition)
{
    // This is a read-write association end

    if (!_localPostcondition.contains(localPostcondition)) {
        _localPostcondition.insert(localPostcondition);

        // Adjust subsetted properties
        addOwnedElement(localPostcondition);
    }
}

void QUmlAction::removeLocalPostcondition(QUmlConstraint *localPostcondition)
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
const QSet<QUmlConstraint *> QUmlAction::localPrecondition() const
{
    // This is a read-write association end

    return _localPrecondition;
}

void QUmlAction::addLocalPrecondition(QUmlConstraint *localPrecondition)
{
    // This is a read-write association end

    if (!_localPrecondition.contains(localPrecondition)) {
        _localPrecondition.insert(localPrecondition);

        // Adjust subsetted properties
        addOwnedElement(localPrecondition);
    }
}

void QUmlAction::removeLocalPrecondition(QUmlConstraint *localPrecondition)
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
const QList<QUmlOutputPin *> QUmlAction::output() const
{
    // This is a read-only derived union association end

    return _output;
}

void QUmlAction::addOutput(QUmlOutputPin *output)
{
    // This is a read-only derived union association end

    if (!_output.contains(output)) {
        _output.append(output);

        // Adjust subsetted properties
        addOwnedElement(output);
    }
}

void QUmlAction::removeOutput(QUmlOutputPin *output)
{
    // This is a read-only derived union association end

    if (_output.contains(output)) {
        _output.removeAll(output);

        // Adjust subsetted properties
        removeOwnedElement(output);
    }
}

QT_END_NAMESPACE

