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

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QVertex);
        incoming->setTarget(0);
    }
}

void QVertexPrivate::addOutgoing(QTransition *outgoing)
{
    // This is a read-only derived association end

    qWarning("QVertex::addOutgoing: to be implemented (this is a derived associationend)");

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

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QVertex);
        outgoing->setSource(0);
    }
}

/*!
    \class QVertex

    \inmodule QtUml

    \brief A vertex is an abstraction of a node in a state machine graph. In general, it can be the source or destination of any number of transitions.
 */

QVertex::QVertex(QObject *parent) :
    QNamedElement(*new QVertexPrivate, parent)
{
}

QVertex::QVertex(QVertexPrivate &dd, QObject *parent) :
    QNamedElement(dd, parent)
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

    //Q_D(const QVertex);
    //return <derived-return>;
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
        (qtuml_object_cast<QNamedElementPrivate *>(d))->setNamespace_(qtuml_object_cast<QNamespace *>(container));

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

    //Q_D(const QVertex);
    //return <derived-return>;
}

/*!
    The operation containingStateMachine() returns the state machine in which this Vertex is defined
 */
QStateMachine *QVertex::containingStateMachine() const
{
    qWarning("QVertex::containingStateMachine: operation to be implemented");
}

#include "moc_qvertex.cpp"

QT_END_NAMESPACE_QTUML

