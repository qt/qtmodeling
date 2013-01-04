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

#include "qaction.h"
#include "qaction_p.h"

#include <QtUml/QOutputPin>
#include <QtUml/QConstraint>
#include <QtUml/QClassifier>
#include <QtUml/QInputPin>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QActionPrivate::QActionPrivate() :
    isLocallyReentrant(false)
{
}

QActionPrivate::~QActionPrivate()
{
}

void QActionPrivate::addInput(QInputPin *input)
{
    // This is a read-only derived-union association end

    if (!this->inputs.contains(input)) {
        this->inputs.append(input);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(this))->addOwnedElement(qwrappedobject_cast<QElement *>(input));
    }
}

void QActionPrivate::removeInput(QInputPin *input)
{
    // This is a read-only derived-union association end

    if (this->inputs.contains(input)) {
        this->inputs.removeAll(input);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(this))->removeOwnedElement(qwrappedobject_cast<QElement *>(input));
    }
}

void QActionPrivate::addOutput(QOutputPin *output)
{
    // This is a read-only derived-union association end

    if (!this->outputs.contains(output)) {
        this->outputs.append(output);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(this))->addOwnedElement(qwrappedobject_cast<QElement *>(output));
    }
}

void QActionPrivate::removeOutput(QOutputPin *output)
{
    // This is a read-only derived-union association end

    if (this->outputs.contains(output)) {
        this->outputs.removeAll(output);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(this))->removeOwnedElement(qwrappedobject_cast<QElement *>(output));
    }
}

/*!
    \class QAction

    \inmodule QtUml

    \brief An action has pre- and post-conditions.An action represents a single step within an activity, that is, one that is not further decomposed within the activity.An action is a named element that is the fundamental unit of executable functionality. The execution of an action represents some transformation or processing in the modeled system, be it a computer system or otherwise.
 */

QAction::QAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QExecutableNode(*new QActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QAction::QAction(QActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QExecutableNode(dd, wrapper, parent)
{
    setPropertyData();
}

QAction::~QAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QAction
// ---------------------------------------------------------------

/*!
    If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed.
 */
bool QAction::isLocallyReentrant() const
{
    // This is a read-write attribute

    Q_D(const QAction);
    return d->isLocallyReentrant;
}

void QAction::setLocallyReentrant(bool isLocallyReentrant)
{
    // This is a read-write attribute

    Q_D(QAction);
    if (d->isLocallyReentrant != isLocallyReentrant) {
        d->isLocallyReentrant = isLocallyReentrant;
    }
}

void QAction::unsetLocallyReentrant()
{
    setLocallyReentrant(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QAction
// ---------------------------------------------------------------

/*!
    The classifier that owns the behavior of which this action is a part.
 */
QClassifier *QAction::context() const
{
    // This is a read-only derived association end

    qWarning("QAction::context: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    Constraint that must be satisfied when executed is completed.
 */
QSet<QConstraint *> QAction::localPostconditions() const
{
    // This is a read-write association end

    Q_D(const QAction);
    return d->localPostconditions;
}

void QAction::addLocalPostcondition(QConstraint *localPostcondition)
{
    // This is a read-write association end

    Q_D(QAction);
    if (!d->localPostconditions.contains(localPostcondition)) {
        d->localPostconditions.insert(localPostcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(localPostcondition));
    }
}

void QAction::removeLocalPostcondition(QConstraint *localPostcondition)
{
    // This is a read-write association end

    Q_D(QAction);
    if (d->localPostconditions.contains(localPostcondition)) {
        d->localPostconditions.remove(localPostcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(localPostcondition));
    }
}

/*!
    Constraint that must be satisfied when execution is started.
 */
QSet<QConstraint *> QAction::localPreconditions() const
{
    // This is a read-write association end

    Q_D(const QAction);
    return d->localPreconditions;
}

void QAction::addLocalPrecondition(QConstraint *localPrecondition)
{
    // This is a read-write association end

    Q_D(QAction);
    if (!d->localPreconditions.contains(localPrecondition)) {
        d->localPreconditions.insert(localPrecondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(localPrecondition));
    }
}

void QAction::removeLocalPrecondition(QConstraint *localPrecondition)
{
    // This is a read-write association end

    Q_D(QAction);
    if (d->localPreconditions.contains(localPrecondition)) {
        d->localPreconditions.remove(localPrecondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(localPrecondition));
    }
}

/*!
    The ordered set of input pins connected to the Action. These are among the total set of inputs.
 */
QList<QInputPin *> QAction::inputs() const
{
    // This is a read-only derived-union association end

    Q_D(const QAction);
    return d->inputs;
}

/*!
    The ordered set of output pins connected to the Action. The action places its results onto pins in this set.
 */
QList<QOutputPin *> QAction::outputs() const
{
    // This is a read-only derived-union association end

    Q_D(const QAction);
    return d->outputs;
}

void QAction::registerMetaTypes() const
{
    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<QSet<QOutputPin *>>("QSet<QOutputPin *>");
    qRegisterMetaType<QList<QOutputPin *>>("QList<QOutputPin *>");

    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QConstraint *>");
    qRegisterMetaType<QList<QConstraint *>>("QList<QConstraint *>");

    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QClassifier *>");
    qRegisterMetaType<QList<QClassifier *>>("QList<QClassifier *>");

    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<QSet<QInputPin *>>("QSet<QInputPin *>");
    qRegisterMetaType<QList<QInputPin *>>("QList<QInputPin *>");

    QExecutableNode::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("isLocallyReentrant")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("isLocallyReentrant")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("isLocallyReentrant")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("isLocallyReentrant")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("isLocallyReentrant")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("isLocallyReentrant")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("context")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("context")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("context")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier that owns the behavior of which this action is a part.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("context")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("context")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("context")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("localPostconditions")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("localPostconditions")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("localPostconditions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Constraint that must be satisfied when executed is completed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("localPostconditions")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("localPostconditions")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("localPostconditions")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("localPreconditions")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("localPreconditions")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("localPreconditions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Constraint that must be satisfied when execution is started.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("localPreconditions")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("localPreconditions")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("localPreconditions")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("inputs")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("inputs")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("inputs")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ordered set of input pins connected to the Action. These are among the total set of inputs.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("inputs")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("inputs")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("inputs")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("outputs")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("outputs")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("outputs")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ordered set of output pins connected to the Action. The action places its results onto pins in this set.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("outputs")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("outputs")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAction")][QString::fromLatin1("outputs")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QExecutableNode::setPropertyData();
}

#include "moc_qaction.cpp"

QT_END_NAMESPACE_QTUML

