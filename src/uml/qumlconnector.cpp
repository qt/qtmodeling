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
#include "qumlconnector.h"

#include "private/qumlconnectorobject_p.h"

#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>

/*!
    \class QUmlConnector

    \inmodule QtUml

    \brief A delegation connector is a connector that links the external contract of a component (as specified by its ports) to the realization of that behavior. It represents the forwarding of events (operation requests and events): a signal that arrives at a port that has a delegation connector to one or more parts or ports on parts will be passed on to those targets for handling. An assembly connector is a connector between two or more parts or ports on parts that defines that one or more parts provide the services that other parts use.Specifies a link that enables communication between two or more instances. This link may be an instance of an association, or it may represent the possibility of the instances being able to communicate because their identities are known by virtue of being passed in as parameters, held in variables or slots, or because the communicating instances are the same instance. The link may be realized by something as simple as a pointer or by something as complex as a network connection. In contrast to associations, which specify links between any instance of the associated classifiers, connectors specify links between instances playing the connected parts only.
 */
QUmlConnector::QUmlConnector(bool createQModelingObject) :
    _type(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlConnectorObject(this));
}

QModelingElement *QUmlConnector::clone() const
{
    QUmlConnector *c = new QUmlConnector;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    c->setStatic(isStatic());
    foreach (QUmlBehavior *element, contracts())
        c->addContract(dynamic_cast<QUmlBehavior *>(element->clone()));
    foreach (QUmlConnectorEnd *element, ends())
        c->addEnd(dynamic_cast<QUmlConnectorEnd *>(element->clone()));
    foreach (QUmlConnector *element, redefinedConnectors())
        c->addRedefinedConnector(dynamic_cast<QUmlConnector *>(element->clone()));
    if (type())
        c->setType(dynamic_cast<QUmlAssociation *>(type()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The set of Behaviors that specify the valid interaction patterns across the connector.
 */
const QSet<QUmlBehavior *> QUmlConnector::contracts() const
{
    // This is a read-write association end

    return _contracts;
}

void QUmlConnector::addContract(QUmlBehavior *contract)
{
    // This is a read-write association end

    if (!_contracts.contains(contract)) {
        _contracts.insert(contract);
        if (contract && contract->asQModelingObject() && this->asQModelingObject())
            QObject::connect(contract->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeContract(QObject *)));
    }
}

void QUmlConnector::removeContract(QUmlBehavior *contract)
{
    // This is a read-write association end

    if (_contracts.contains(contract)) {
        _contracts.remove(contract);
    }
}

/*!
    A connector consists of at least two connector ends, each representing the participation of instances of the classifiers typing the connectable elements attached to this end. The set of connector ends is ordered.
 */
const QList<QUmlConnectorEnd *> QUmlConnector::ends() const
{
    // This is a read-write association end

    return _ends;
}

void QUmlConnector::addEnd(QUmlConnectorEnd *end)
{
    // This is a read-write association end

    if (!_ends.contains(end)) {
        _ends.append(end);
        if (end && end->asQModelingObject() && this->asQModelingObject())
            QObject::connect(end->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeEnd(QObject *)));
        end->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(end);
    }
}

void QUmlConnector::removeEnd(QUmlConnectorEnd *end)
{
    // This is a read-write association end

    if (_ends.contains(end)) {
        _ends.removeAll(end);
        if (end->asQModelingObject())
            end->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(end);
    }
}

/*!
    Indicates the kind of connector. This is derived: a connector with one or more ends connected to a Port which is not on a Part and which is not a behavior port is a delegation; otherwise it is an assembly.
 */
QtUml::ConnectorKind QUmlConnector::kind() const
{
    // This is a read-only derived property

    qWarning("QUmlConnector::kind(): to be implemented (this is a derived property)");

    return QtUml::ConnectorKind();
}

void QUmlConnector::setKind(QtUml::ConnectorKind kind)
{
    // This is a read-only derived property

    qWarning("QUmlConnector::setKind(): to be implemented (this is a derived property)");
    Q_UNUSED(kind);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    A connector may be redefined when its containing classifier is specialized. The redefining connector may have a type that specializes the type of the redefined connector. The types of the connector ends of the redefining connector may specialize the types of the connector ends of the redefined connector. The properties of the connector ends of the redefining connector may be replaced.
 */
const QSet<QUmlConnector *> QUmlConnector::redefinedConnectors() const
{
    // This is a read-write association end

    return _redefinedConnectors;
}

void QUmlConnector::addRedefinedConnector(QUmlConnector *redefinedConnector)
{
    // This is a read-write association end

    if (!_redefinedConnectors.contains(redefinedConnector)) {
        _redefinedConnectors.insert(redefinedConnector);
        if (redefinedConnector && redefinedConnector->asQModelingObject() && this->asQModelingObject())
            QObject::connect(redefinedConnector->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRedefinedConnector(QObject *)));

        // Adjust subsetted properties
        addRedefinedElement(redefinedConnector);
    }
}

void QUmlConnector::removeRedefinedConnector(QUmlConnector *redefinedConnector)
{
    // This is a read-write association end

    if (_redefinedConnectors.contains(redefinedConnector)) {
        _redefinedConnectors.remove(redefinedConnector);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedConnector);
    }
}

/*!
    An optional association that specifies the link corresponding to this connector.
 */
QUmlAssociation *QUmlConnector::type() const
{
    // This is a read-write association end

    return _type;
}

void QUmlConnector::setType(QUmlAssociation *type)
{
    // This is a read-write association end

    if (_type != type) {
        _type = type;
        if (type && type->asQModelingObject() && this->asQModelingObject())
            QObject::connect(type->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setType()));
    }
}

