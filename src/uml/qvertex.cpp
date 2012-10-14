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
#include "qnamedelement_p.h"

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

void QVertexPrivate::setContainer(QRegion *container)
{
    // This is a read-write association end

    this->container = container;

    // Adjust subsetted property(ies)
    setNamespace_(container);
}

/*!
    \class QVertex

    \inmodule QtUml

    \brief A vertex is an abstraction of a node in a state machine graph. In general, it can be the source or destination of any number of transitions.
 */

QVertex::QVertex()
{
}

QVertex::~QVertex()
{
}

/*!
    Specifies the transitions entering this vertex.
 */
const QSet<QTransition *> *QVertex::incomings() const
{
    // This is a read-only derived association end

    qWarning("QVertex::incomings: to be implemented (this is a derived associationend)");

    QTUML_D(const QVertex);
    //return <derived-return>;
}

/*!
    The region that contains this vertex.
 */
QRegion *QVertex::container() const
{
    // This is a read-write association end

    QTUML_D(const QVertex);
    return d->container;
}

void QVertex::setContainer(QRegion *container)
{
    // This is a read-write association end

    QTUML_D(QVertex);
    if (d->container != container) {
        d->setContainer(container);

        // Adjust opposite property
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

    QTUML_D(const QVertex);
    //return <derived-return>;
}

/*!
    The operation containingStateMachine() returns the state machine in which this Vertex is defined
 */
QStateMachine *QVertex::containingStateMachine() const
{
    qWarning("QVertex::containingStateMachine: operation to be implemented");
}

QT_END_NAMESPACE_QTUML

