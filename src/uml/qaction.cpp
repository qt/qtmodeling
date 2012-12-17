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

QT_BEGIN_NAMESPACE_QTUML

QActionPrivate::QActionPrivate() :
    isLocallyReentrant(false),
    localPostconditions(new QSet<QConstraint *>),
    localPreconditions(new QSet<QConstraint *>),
    inputs(new QList<QInputPin *>),
    outputs(new QList<QOutputPin *>)
{
}

QActionPrivate::~QActionPrivate()
{
    delete localPostconditions;
    delete localPreconditions;
    delete inputs;
    delete outputs;
}

void QActionPrivate::addInput(QInputPin *input)
{
    // This is a read-only derived-union association end

    if (!this->inputs->contains(input)) {
        this->inputs->append(input);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(this))->addOwnedElement(qwrappedobject_cast<QElement *>(input));
    }
}

void QActionPrivate::removeInput(QInputPin *input)
{
    // This is a read-only derived-union association end

    if (this->inputs->contains(input)) {
        this->inputs->removeAll(input);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(this))->removeOwnedElement(qwrappedobject_cast<QElement *>(input));
    }
}

void QActionPrivate::addOutput(QOutputPin *output)
{
    // This is a read-only derived-union association end

    if (!this->outputs->contains(output)) {
        this->outputs->append(output);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(this))->addOwnedElement(qwrappedobject_cast<QElement *>(output));
    }
}

void QActionPrivate::removeOutput(QOutputPin *output)
{
    // This is a read-only derived-union association end

    if (this->outputs->contains(output)) {
        this->outputs->removeAll(output);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(this))->removeOwnedElement(qwrappedobject_cast<QElement *>(output));
    }
}

/*!
    \class QAction

    \inmodule QtUml

    \brief An action has pre- and post-conditions.An action represents a single step within an activity, that is, one that is not further decomposed within the activity.An action is a named element that is the fundamental unit of executable functionality. The execution of an action represents some transformation or processing in the modeled system, be it a computer system or otherwise.
 */

QAction::QAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QExecutableNode(*new QActionPrivate, parent, wrapper)
{
}

QAction::QAction(QActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QExecutableNode(dd, parent, wrapper)
{
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
const QSet<QConstraint *> *QAction::localPostconditions() const
{
    // This is a read-write association end

    Q_D(const QAction);
    return d->localPostconditions;
}

void QAction::addLocalPostcondition(QConstraint *localPostcondition)
{
    // This is a read-write association end

    Q_D(QAction);
    if (!d->localPostconditions->contains(localPostcondition)) {
        d->localPostconditions->insert(localPostcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(localPostcondition));
    }
}

void QAction::removeLocalPostcondition(QConstraint *localPostcondition)
{
    // This is a read-write association end

    Q_D(QAction);
    if (d->localPostconditions->contains(localPostcondition)) {
        d->localPostconditions->remove(localPostcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(localPostcondition));
    }
}

/*!
    Constraint that must be satisfied when execution is started.
 */
const QSet<QConstraint *> *QAction::localPreconditions() const
{
    // This is a read-write association end

    Q_D(const QAction);
    return d->localPreconditions;
}

void QAction::addLocalPrecondition(QConstraint *localPrecondition)
{
    // This is a read-write association end

    Q_D(QAction);
    if (!d->localPreconditions->contains(localPrecondition)) {
        d->localPreconditions->insert(localPrecondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(localPrecondition));
    }
}

void QAction::removeLocalPrecondition(QConstraint *localPrecondition)
{
    // This is a read-write association end

    Q_D(QAction);
    if (d->localPreconditions->contains(localPrecondition)) {
        d->localPreconditions->remove(localPrecondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(localPrecondition));
    }
}

/*!
    The ordered set of input pins connected to the Action. These are among the total set of inputs.
 */
const QList<QInputPin *> *QAction::inputs() const
{
    // This is a read-only derived-union association end

    Q_D(const QAction);
    return d->inputs;
}

/*!
    The ordered set of output pins connected to the Action. The action places its results onto pins in this set.
 */
const QList<QOutputPin *> *QAction::outputs() const
{
    // This is a read-only derived-union association end

    Q_D(const QAction);
    return d->outputs;
}

void QAction::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QAction) *>("QT_PREPEND_NAMESPACE_QTUML(QAction) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QAction) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QAction) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QAction) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QAction) *> *");
    qRegisterMetaType<QAction *>("QAction *");
    qRegisterMetaType<const QSet<QAction *> *>("const QSet<QAction *> *");
    qRegisterMetaType<const QList<QAction *> *>("const QList<QAction *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *>("QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *");
    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<const QSet<QOutputPin *> *>("const QSet<QOutputPin *> *");
    qRegisterMetaType<const QList<QOutputPin *> *>("const QList<QOutputPin *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QConstraint) *>("QT_PREPEND_NAMESPACE_QTUML(QConstraint) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QConstraint) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QConstraint) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QConstraint) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QConstraint) *> *");
    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<const QSet<QConstraint *> *>("const QSet<QConstraint *> *");
    qRegisterMetaType<const QList<QConstraint *> *>("const QList<QConstraint *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *>("QT_PREPEND_NAMESPACE_QTUML(QClassifier) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *");
    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<const QSet<QClassifier *> *>("const QSet<QClassifier *> *");
    qRegisterMetaType<const QList<QClassifier *> *>("const QList<QClassifier *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *>("QT_PREPEND_NAMESPACE_QTUML(QInputPin) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *");
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<const QSet<QInputPin *> *>("const QSet<QInputPin *> *");
    qRegisterMetaType<const QList<QInputPin *> *>("const QList<QInputPin *> *");

    QExecutableNode::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qaction.cpp"

QT_END_NAMESPACE_QTUML

