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

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlAction

    \inmodule QtUml

    \brief An action has pre- and post-conditions.An action represents a single step within an activity, that is, one that is not further decomposed within the activity.An action is a named element that is the fundamental unit of executable functionality. The execution of an action represents some transformation or processing in the modeled system, be it a computer system or otherwise.

    \b {QUmlAction is an abstract class.}
 */

/*!
    Creates a new QUmlAction.
*/
QUmlAction::QUmlAction() :
    _isLocallyReentrant(false)
{
}

/*!
    Destroys the QUmlAction.
 */
QUmlAction::~QUmlAction()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlAction.
*/
QModelingElement *QUmlAction::clone() const
{
    QUmlAction *c = new QUmlAction;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlExceptionHandler *element, handlers())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    c->setLocallyReentrant(isLocallyReentrant());
    foreach (QUmlConstraint *element, localPostconditions())
        c->addLocalPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, localPreconditions())
        c->addLocalPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The classifier that owns the behavior of which this action is a part.

    \b {This is a read-only derived property.}
 */
QUmlClassifier *QUmlAction::context() const
{
    // This is a read-only derived association end

    qWarning("QUmlAction::context(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    Adjusts context to \a context.
 */
void QUmlAction::setContext(QUmlClassifier *context)
{
    // This is a read-only derived association end

    qWarning("QUmlAction::setContext(): to be implemented (this is a derived association end)");
    Q_UNUSED(context);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The ordered set of input pins connected to the Action. These are among the total set of inputs.

    \b {This is a read-only derived union property.}

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
const QList<QUmlInputPin *> QUmlAction::inputs() const
{
    // This is a read-only derived union association end

    return _inputs;
}

/*!
    Adds \a input to inputs.

    \sa inputs(), removeInput()
 */
void QUmlAction::addInput(QUmlInputPin *input)
{
    // This is a read-only derived union association end

    if (!_inputs.contains(input)) {
        _inputs.append(input);
        if (input && input->asQModelingObject() && this->asQModelingObject())
            QObject::connect(input->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeInput(QObject *)));
        input->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(input);
    }
}

/*!
    Removes \a input from inputs.

    \sa inputs(), addInput()
 */
void QUmlAction::removeInput(QUmlInputPin *input)
{
    // This is a read-only derived union association end

    if (_inputs.contains(input)) {
        _inputs.removeAll(input);
        if (input->asQModelingObject())
            input->asQModelingObject()->setParent(0);

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

/*!
    Adjusts isLocallyReentrant to \a isLocallyReentrant.
 */
void QUmlAction::setLocallyReentrant(bool isLocallyReentrant)
{
    // This is a read-write property

    if (_isLocallyReentrant != isLocallyReentrant) {
        _isLocallyReentrant = isLocallyReentrant;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isLocallyReentrant");
    }
}

/*!
    Constraint that must be satisfied when executed is completed.

    \sa addLocalPostcondition(), removeLocalPostcondition()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
const QSet<QUmlConstraint *> QUmlAction::localPostconditions() const
{
    // This is a read-write association end

    return _localPostconditions;
}

/*!
    Adds \a localPostcondition to localPostconditions.

    \sa localPostconditions(), removeLocalPostcondition()
 */
void QUmlAction::addLocalPostcondition(QUmlConstraint *localPostcondition)
{
    // This is a read-write association end

    if (!_localPostconditions.contains(localPostcondition)) {
        _localPostconditions.insert(localPostcondition);
        if (localPostcondition && localPostcondition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(localPostcondition->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeLocalPostcondition(QObject *)));
        localPostcondition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(localPostcondition);
    }
}

/*!
    Removes \a localPostcondition from localPostconditions.

    \sa localPostconditions(), addLocalPostcondition()
 */
void QUmlAction::removeLocalPostcondition(QUmlConstraint *localPostcondition)
{
    // This is a read-write association end

    if (_localPostconditions.contains(localPostcondition)) {
        _localPostconditions.remove(localPostcondition);
        if (localPostcondition->asQModelingObject())
            localPostcondition->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(localPostcondition);
    }
}

/*!
    Constraint that must be satisfied when execution is started.

    \sa addLocalPrecondition(), removeLocalPrecondition()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
const QSet<QUmlConstraint *> QUmlAction::localPreconditions() const
{
    // This is a read-write association end

    return _localPreconditions;
}

/*!
    Adds \a localPrecondition to localPreconditions.

    \sa localPreconditions(), removeLocalPrecondition()
 */
void QUmlAction::addLocalPrecondition(QUmlConstraint *localPrecondition)
{
    // This is a read-write association end

    if (!_localPreconditions.contains(localPrecondition)) {
        _localPreconditions.insert(localPrecondition);
        if (localPrecondition && localPrecondition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(localPrecondition->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeLocalPrecondition(QObject *)));
        localPrecondition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(localPrecondition);
    }
}

/*!
    Removes \a localPrecondition from localPreconditions.

    \sa localPreconditions(), addLocalPrecondition()
 */
void QUmlAction::removeLocalPrecondition(QUmlConstraint *localPrecondition)
{
    // This is a read-write association end

    if (_localPreconditions.contains(localPrecondition)) {
        _localPreconditions.remove(localPrecondition);
        if (localPrecondition->asQModelingObject())
            localPrecondition->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(localPrecondition);
    }
}

/*!
    The ordered set of output pins connected to the Action. The action places its results onto pins in this set.

    \b {This is a read-only derived union property.}

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
const QList<QUmlOutputPin *> QUmlAction::outputs() const
{
    // This is a read-only derived union association end

    return _outputs;
}

/*!
    Adds \a output to outputs.

    \sa outputs(), removeOutput()
 */
void QUmlAction::addOutput(QUmlOutputPin *output)
{
    // This is a read-only derived union association end

    if (!_outputs.contains(output)) {
        _outputs.append(output);
        if (output && output->asQModelingObject() && this->asQModelingObject())
            QObject::connect(output->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOutput(QObject *)));
        output->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(output);
    }
}

/*!
    Removes \a output from outputs.

    \sa outputs(), addOutput()
 */
void QUmlAction::removeOutput(QUmlOutputPin *output)
{
    // This is a read-only derived union association end

    if (_outputs.contains(output)) {
        _outputs.removeAll(output);
        if (output->asQModelingObject())
            output->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(output);
    }
}

QT_END_NAMESPACE

