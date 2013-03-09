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

#include "qumlaction.h"
#include "qumlaction_p.h"

#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlActionPrivate::QUmlActionPrivate() :
    isLocallyReentrant(false)
{
}

QUmlActionPrivate::~QUmlActionPrivate()
{
}

void QUmlActionPrivate::addInput(QUmlInputPin *input)
{
    // This is a read-only derived-union association end

    if (!this->inputs.contains(input)) {
        this->inputs.append(input);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(this))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(input));
    }
}

void QUmlActionPrivate::removeInput(QUmlInputPin *input)
{
    // This is a read-only derived-union association end

    if (this->inputs.contains(input)) {
        this->inputs.removeAll(input);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(this))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(input));
    }
}

void QUmlActionPrivate::addOutput(QUmlOutputPin *output)
{
    // This is a read-only derived-union association end

    if (!this->outputs.contains(output)) {
        this->outputs.append(output);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(this))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(output));
    }
}

void QUmlActionPrivate::removeOutput(QUmlOutputPin *output)
{
    // This is a read-only derived-union association end

    if (this->outputs.contains(output)) {
        this->outputs.removeAll(output);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(this))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(output));
    }
}

/*!
    \class QUmlAction

    \inmodule QtUml

    \brief An action has pre- and post-conditions.An action represents a single step within an activity, that is, one that is not further decomposed within the activity.An action is a named element that is the fundamental unit of executable functionality. The execution of an action represents some transformation or processing in the modeled system, be it a computer system or otherwise.
 */

QUmlAction::QUmlAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlExecutableNode(*new QUmlActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlAction::QUmlAction(QUmlActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlExecutableNode(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlAction::~QUmlAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlAction
// ---------------------------------------------------------------

/*!
    If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed.
 */
bool QUmlAction::isLocallyReentrant() const
{
    // This is a read-write attribute

    Q_D(const QUmlAction);
    return d->isLocallyReentrant;
}

void QUmlAction::setLocallyReentrant(bool isLocallyReentrant)
{
    // This is a read-write attribute

    Q_D(QUmlAction);
    if (d->isLocallyReentrant != isLocallyReentrant) {
        d->isLocallyReentrant = isLocallyReentrant;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isLocallyReentrant");
}

void QUmlAction::unsetLocallyReentrant()
{
    setLocallyReentrant(false);
    Q_D(QUmlAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLocallyReentrant"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlAction
// ---------------------------------------------------------------

/*!
    The classifier that owns the behavior of which this action is a part.
 */
QUmlClassifier *QUmlAction::context() const
{
    // This is a read-only derived association end

    qWarning("QUmlAction::context: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    Constraint that must be satisfied when executed is completed.
 */
QSet<QUmlConstraint *> QUmlAction::localPostconditions() const
{
    // This is a read-write association end

    Q_D(const QUmlAction);
    return d->localPostconditions;
}

void QUmlAction::addLocalPostcondition(QUmlConstraint *localPostcondition)
{
    // This is a read-write association end

    Q_D(QUmlAction);
    if (!d->localPostconditions.contains(localPostcondition)) {
        d->localPostconditions.insert(localPostcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(localPostcondition));
    }
}

void QUmlAction::removeLocalPostcondition(QUmlConstraint *localPostcondition)
{
    // This is a read-write association end

    Q_D(QUmlAction);
    if (d->localPostconditions.contains(localPostcondition)) {
        d->localPostconditions.remove(localPostcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(localPostcondition));
    }
}

/*!
    Constraint that must be satisfied when execution is started.
 */
QSet<QUmlConstraint *> QUmlAction::localPreconditions() const
{
    // This is a read-write association end

    Q_D(const QUmlAction);
    return d->localPreconditions;
}

void QUmlAction::addLocalPrecondition(QUmlConstraint *localPrecondition)
{
    // This is a read-write association end

    Q_D(QUmlAction);
    if (!d->localPreconditions.contains(localPrecondition)) {
        d->localPreconditions.insert(localPrecondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(localPrecondition));
    }
}

void QUmlAction::removeLocalPrecondition(QUmlConstraint *localPrecondition)
{
    // This is a read-write association end

    Q_D(QUmlAction);
    if (d->localPreconditions.contains(localPrecondition)) {
        d->localPreconditions.remove(localPrecondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(localPrecondition));
    }
}

/*!
    The ordered set of input pins connected to the Action. These are among the total set of inputs.
 */
QList<QUmlInputPin *> QUmlAction::inputs() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlAction);
    return d->inputs;
}

/*!
    The ordered set of output pins connected to the Action. The action places its results onto pins in this set.
 */
QList<QUmlOutputPin *> QUmlAction::outputs() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlAction);
    return d->outputs;
}

void QUmlAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("isLocallyReentrant")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("isLocallyReentrant")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("isLocallyReentrant")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("isLocallyReentrant")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("isLocallyReentrant")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("isLocallyReentrant")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("context")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("context")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("context")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier that owns the behavior of which this action is a part.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("context")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("context")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("context")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("localPostconditions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("localPostconditions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("localPostconditions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Constraint that must be satisfied when executed is completed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("localPostconditions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("localPostconditions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("localPostconditions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("localPreconditions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("localPreconditions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("localPreconditions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Constraint that must be satisfied when execution is started.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("localPreconditions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("localPreconditions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("localPreconditions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("inputs")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("inputs")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("inputs")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ordered set of input pins connected to the Action. These are among the total set of inputs.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("inputs")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("inputs")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("inputs")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("outputs")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("outputs")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("outputs")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ordered set of output pins connected to the Action. The action places its results onto pins in this set.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("outputs")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("outputs")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAction")][QString::fromLatin1("outputs")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlExecutableNode::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlaction.cpp"

