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

#include "qumlvertex.h"
#include "qumlvertex_p.h"

#include <QtUml/QUmlRegion>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlStateMachine>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlVertexPrivate::QUmlVertexPrivate() :
    container(0)
{
}

QUmlVertexPrivate::~QUmlVertexPrivate()
{
}

void QUmlVertexPrivate::addIncoming(QUmlTransition *incoming)
{
    // This is a read-only derived association end

    qWarning("QUmlVertex::addIncoming: to be implemented (this is a derived associationend)");
    Q_UNUSED(incoming);

    if (false /* <derivedinclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QUmlVertex);
        incoming->setTarget(q);
    }
}

void QUmlVertexPrivate::removeIncoming(QUmlTransition *incoming)
{
    // This is a read-only derived association end

    qWarning("QUmlVertex::removeIncoming: to be implemented (this is a derived associationend)");
    Q_UNUSED(incoming);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        incoming->setTarget(0);
    }
}

void QUmlVertexPrivate::addOutgoing(QUmlTransition *outgoing)
{
    // This is a read-only derived association end

    qWarning("QUmlVertex::addOutgoing: to be implemented (this is a derived associationend)");
    Q_UNUSED(outgoing);

    if (false /* <derivedinclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QUmlVertex);
        outgoing->setSource(q);
    }
}

void QUmlVertexPrivate::removeOutgoing(QUmlTransition *outgoing)
{
    // This is a read-only derived association end

    qWarning("QUmlVertex::removeOutgoing: to be implemented (this is a derived associationend)");
    Q_UNUSED(outgoing);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        outgoing->setSource(0);
    }
}

/*!
    \class QUmlVertex

    \inmodule QtUml

    \brief A vertex is an abstraction of a node in a state machine graph. In general, it can be the source or destination of any number of transitions.
 */

QUmlVertex::QUmlVertex(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(*new QUmlVertexPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlVertex::QUmlVertex(QUmlVertexPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlVertex::~QUmlVertex()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlVertex
// ---------------------------------------------------------------

/*!
    Specifies the transitions entering this vertex.
 */
QSet<QUmlTransition *> QUmlVertex::incomings() const
{
    // This is a read-only derived association end

    qWarning("QUmlVertex::incomings: to be implemented (this is a derived associationend)");

    return QSet<QUmlTransition *>(); // change here to your derived return
}

/*!
    The region that contains this vertex.
 */
QUmlRegion *QUmlVertex::container() const
{
    // This is a read-write association end

    Q_D(const QUmlVertex);
    return d->container;
}

void QUmlVertex::setContainer(QUmlRegion *container)
{
    // This is a read-write association end

    Q_D(QUmlVertex);
    if (d->container != container) {
        // Adjust opposite property
        if (d->container)
            d->container->removeSubvertex(this);

        d->container = container;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(container));

        // Adjust opposite property
        if (container)
            container->addSubvertex(this);
    }
}

/*!
    Specifies the transitions departing from this vertex.
 */
QSet<QUmlTransition *> QUmlVertex::outgoings() const
{
    // This is a read-only derived association end

    qWarning("QUmlVertex::outgoings: to be implemented (this is a derived associationend)");

    return QSet<QUmlTransition *>(); // change here to your derived return
}

/*!
    The operation containingStateMachine() returns the state machine in which this Vertex is defined
 */
QUmlStateMachine *QUmlVertex::containingStateMachine() const
{
    qWarning("QUmlVertex::containingStateMachine: operation to be implemented");

    return 0; // change here to your derived return
}

void QUmlVertex::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("incomings")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("incomings")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("incomings")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the transitions entering this vertex.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("incomings")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("incomings")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("incomings")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlTransition::target");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("container")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("container")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("container")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The region that contains this vertex.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("container")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("container")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("container")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlRegion::subvertex");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("outgoings")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("outgoings")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("outgoings")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the transitions departing from this vertex.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("outgoings")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("outgoings")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVertex")][QString::fromLatin1("outgoings")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlTransition::source");

    QUmlNamedElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlvertex.cpp"

