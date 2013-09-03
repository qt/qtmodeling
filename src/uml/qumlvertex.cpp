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
#include "qumlvertex.h"

#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlTransition>

/*!
    \class QUmlVertex

    \inmodule QtUml

    \brief A vertex is an abstraction of a node in a state machine graph. In general, it can be the source or destination of any number of transitions.
 */
QUmlVertex::QUmlVertex() :
    _container(0)
{
}

QUmlVertex::~QUmlVertex()
{
}

// OWNED ATTRIBUTES

/*!
    The region that contains this vertex.
 */
QUmlRegion *
QUmlVertex::container() const
{
    // This is a read-write association end

    return _container;
}

void QUmlVertex::setContainer(QUmlRegion *container)
{
    // This is a read-write association end

    if (_container != container) {
        // Adjust subsetted properties

        _container = container;
        if (container->asQObject() && this->asQObject())
            QObject::connect(container->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setContainer()));

        // Adjust subsetted properties
        setNamespace(container);
    }
}

/*!
    Specifies the transitions entering this vertex.
 */
const QSet<QUmlTransition *> 
QUmlVertex::incoming() const
{
    // This is a read-only derived association end

    qWarning("UmlVertex::incoming(): to be implemented (this is a derived association end)");

    return QSet<QUmlTransition *>();
}

void QUmlVertex::addIncoming(QUmlTransition *incoming)
{
    // This is a read-only derived association end

    qWarning("UmlVertex::incoming(): to be implemented (this is a derived association end)");
    Q_UNUSED(incoming);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite properties
        if (incoming) {
            incoming->setTarget(this);
        }
    }
}

void QUmlVertex::removeIncoming(QUmlTransition *incoming)
{
    // This is a read-only derived association end

    qWarning("UmlVertex::incoming(): to be implemented (this is a derived association end)");
    Q_UNUSED(incoming);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite properties
        if (incoming) {
            incoming->setTarget(0);
        }
    }
}

/*!
    Specifies the transitions departing from this vertex.
 */
const QSet<QUmlTransition *> 
QUmlVertex::outgoing() const
{
    // This is a read-only derived association end

    qWarning("UmlVertex::outgoing(): to be implemented (this is a derived association end)");

    return QSet<QUmlTransition *>();
}

void QUmlVertex::addOutgoing(QUmlTransition *outgoing)
{
    // This is a read-only derived association end

    qWarning("UmlVertex::outgoing(): to be implemented (this is a derived association end)");
    Q_UNUSED(outgoing);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite properties
        if (outgoing) {
            outgoing->setSource(this);
        }
    }
}

void QUmlVertex::removeOutgoing(QUmlTransition *outgoing)
{
    // This is a read-only derived association end

    qWarning("UmlVertex::outgoing(): to be implemented (this is a derived association end)");
    Q_UNUSED(outgoing);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite properties
        if (outgoing) {
            outgoing->setSource(0);
        }
    }
}

// OPERATIONS

/*!
    The operation containingStateMachine() returns the state machine in which this Vertex is defined
 */
QUmlStateMachine *QUmlVertex::containingStateMachine() const
{
    qWarning("UmlVertex::containingStateMachine(): to be implemented (operation)");

    return 0;
}

