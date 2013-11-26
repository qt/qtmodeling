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
#include "qumldependency.h"

#include "private/qumldependencyobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlDependency

    \inmodule QtUml

    \brief A dependency is a relationship that signifies that a single or a set of model elements requires other model elements for their specification or implementation. This means that the complete semantics of the depending elements is either semantically or structurally dependent on the definition of the supplier element(s).
 */

/*!
    Creates a new QUmlDependency. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlDependency::QUmlDependency(bool createQModelingObject)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlDependencyObject(this));
}

/*!
    Destroys the QUmlDependency.
 */
QUmlDependency::~QUmlDependency()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlDependency.
*/
QModelingElement *QUmlDependency::clone() const
{
    QUmlDependency *c = new QUmlDependency;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    return c;
}

// OWNED ATTRIBUTES

/*!
    The element(s) dependent on the supplier element(s). In some cases (such as a Trace Abstraction) the assignment of direction (that is, the designation of the client element) is at the discretion of the modeler, and is a stipulation.

    \sa addClient(), removeClient()

    \b {Subsetted property(ies):} QUmlDirectedRelationship::sources().

    \b {Opposite property(ies):} QUmlNamedElement::clientDependencies().
 */
const QSet<QUmlNamedElement *> QUmlDependency::clients() const
{
    // This is a read-write association end

    return _clients;
}

/*!
    Adds \a client to clients.

    \sa clients(), removeClient()
 */
void QUmlDependency::addClient(QUmlNamedElement *client)
{
    // This is a read-write association end

    if (!_clients.contains(client)) {
        _clients.insert(client);
        if (client && client->asQModelingObject() && this->asQModelingObject())
            QObject::connect(client->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeClient(QObject *)));

        // Adjust subsetted properties
        addSource(client);

        // Adjust opposite properties
        if (client) {
            client->addClientDependency(this);
        }
    }
}

/*!
    Removes \a client from clients.

    \sa clients(), addClient()
 */
void QUmlDependency::removeClient(QUmlNamedElement *client)
{
    // This is a read-write association end

    if (_clients.contains(client)) {
        _clients.remove(client);

        // Adjust subsetted properties
        removeSource(client);

        // Adjust opposite properties
        if (client) {
            client->removeClientDependency(this);
        }
    }
}

/*!
    The element(s) independent of the client element(s), in the same respect and the same dependency relationship. In some directed dependency relationships (such as Refinement Abstractions), a common convention in the domain of class-based OO software is to put the more abstract element in this role. Despite this convention, users of UML may stipulate a sense of dependency suitable for their domain, which makes a more abstract element dependent on that which is more specific.

    \sa addSupplier(), removeSupplier()

    \b {Subsetted property(ies):} QUmlDirectedRelationship::targets().
 */
const QSet<QUmlNamedElement *> QUmlDependency::suppliers() const
{
    // This is a read-write association end

    return _suppliers;
}

/*!
    Adds \a supplier to suppliers.

    \sa suppliers(), removeSupplier()
 */
void QUmlDependency::addSupplier(QUmlNamedElement *supplier)
{
    // This is a read-write association end

    if (!_suppliers.contains(supplier)) {
        _suppliers.insert(supplier);
        if (supplier && supplier->asQModelingObject() && this->asQModelingObject())
            QObject::connect(supplier->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeSupplier(QObject *)));

        // Adjust subsetted properties
        addTarget(supplier);
    }
}

/*!
    Removes \a supplier from suppliers.

    \sa suppliers(), addSupplier()
 */
void QUmlDependency::removeSupplier(QUmlNamedElement *supplier)
{
    // This is a read-write association end

    if (_suppliers.contains(supplier)) {
        _suppliers.remove(supplier);

        // Adjust subsetted properties
        removeTarget(supplier);
    }
}

QT_END_NAMESPACE

