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

#include "qvertex.h"
#include "qvertex_p.h"

#include <QtUml/QRegion>
#include <QtUml/QTransition>
#include <QtUml/QStateMachine>

QT_BEGIN_NAMESPACE_QTUML

QVertexPrivate::QVertexPrivate() :
    container(0)
{
}

QVertexPrivate::~QVertexPrivate()
{
}

void QVertexPrivate::addIncoming(QTransition *incoming)
{
    // This is a read-only derived association end

    qWarning("QVertex::addIncoming: to be implemented (this is a derived associationend)");
    Q_UNUSED(incoming);

    if (false /* <derivedinclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QVertex);
        incoming->setTarget(q);
    }
}

void QVertexPrivate::removeIncoming(QTransition *incoming)
{
    // This is a read-only derived association end

    qWarning("QVertex::removeIncoming: to be implemented (this is a derived associationend)");
    Q_UNUSED(incoming);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        incoming->setTarget(0);
    }
}

void QVertexPrivate::addOutgoing(QTransition *outgoing)
{
    // This is a read-only derived association end

    qWarning("QVertex::addOutgoing: to be implemented (this is a derived associationend)");
    Q_UNUSED(outgoing);

    if (false /* <derivedinclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QVertex);
        outgoing->setSource(q);
    }
}

void QVertexPrivate::removeOutgoing(QTransition *outgoing)
{
    // This is a read-only derived association end

    qWarning("QVertex::removeOutgoing: to be implemented (this is a derived associationend)");
    Q_UNUSED(outgoing);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        outgoing->setSource(0);
    }
}

/*!
    \class QVertex

    \inmodule QtUml

    \brief A vertex is an abstraction of a node in a state machine graph. In general, it can be the source or destination of any number of transitions.
 */

QVertex::QVertex(QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(*new QVertexPrivate, parent, wrapper)
{
}

QVertex::QVertex(QVertexPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(dd, parent, wrapper)
{
}

QVertex::~QVertex()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QVertex
// ---------------------------------------------------------------

/*!
    Specifies the transitions entering this vertex.
 */
const QSet<QTransition *> *QVertex::incomings() const
{
    // This is a read-only derived association end

    qWarning("QVertex::incomings: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The region that contains this vertex.
 */
QRegion *QVertex::container() const
{
    // This is a read-write association end

    Q_D(const QVertex);
    return d->container;
}

void QVertex::setContainer(QRegion *container)
{
    // This is a read-write association end

    Q_D(QVertex);
    if (d->container != container) {
        // Adjust opposite property
        if (d->container)
            d->container->removeSubvertex(this);

        d->container = container;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(container));

        // Adjust opposite property
        if (container)
            container->addSubvertex(this);
    }
}

/*!
    Specifies the transitions departing from this vertex.
 */
const QSet<QTransition *> *QVertex::outgoings() const
{
    // This is a read-only derived association end

    qWarning("QVertex::outgoings: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The operation containingStateMachine() returns the state machine in which this Vertex is defined
 */
QStateMachine *QVertex::containingStateMachine() const
{
    qWarning("QVertex::containingStateMachine: operation to be implemented");

    return 0; // change here to your derived return
}

void QVertex::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QVertex) *>("QT_PREPEND_NAMESPACE_QTUML(QVertex) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QVertex) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QVertex) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QVertex) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QVertex) *> *");
    qRegisterMetaType<QVertex *>("QVertex *");
    qRegisterMetaType<const QSet<QVertex *> *>("const QSet<QVertex *> *");
    qRegisterMetaType<const QList<QVertex *> *>("const QList<QVertex *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QRegion) *>("QT_PREPEND_NAMESPACE_QTUML(QRegion) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QRegion) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QRegion) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QRegion) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QRegion) *> *");
    qRegisterMetaType<QRegion *>("QRegion *");
    qRegisterMetaType<const QSet<QRegion *> *>("const QSet<QRegion *> *");
    qRegisterMetaType<const QList<QRegion *> *>("const QList<QRegion *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QTransition) *>("QT_PREPEND_NAMESPACE_QTUML(QTransition) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QTransition) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QTransition) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QTransition) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QTransition) *> *");
    qRegisterMetaType<QTransition *>("QTransition *");
    qRegisterMetaType<const QSet<QTransition *> *>("const QSet<QTransition *> *");
    qRegisterMetaType<const QList<QTransition *> *>("const QList<QTransition *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QStateMachine) *>("QT_PREPEND_NAMESPACE_QTUML(QStateMachine) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QStateMachine) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QStateMachine) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QStateMachine) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QStateMachine) *> *");
    qRegisterMetaType<QStateMachine *>("QStateMachine *");
    qRegisterMetaType<const QSet<QStateMachine *> *>("const QSet<QStateMachine *> *");
    qRegisterMetaType<const QList<QStateMachine *> *>("const QList<QStateMachine *> *");


    QNamedElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qvertex.cpp"

QT_END_NAMESPACE_QTUML

