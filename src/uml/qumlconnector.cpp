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
QUmlConnector::QUmlConnector(bool createQObject) :
    _type(0)
{
    if (createQObject)
        _qObject = new QUmlConnectorObject(this);
    setPropertyData();
}

QUmlConnector::~QUmlConnector()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlConnector::clone() const
{
    QUmlConnector *c = new QUmlConnector;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    c->setStatic(isStatic());
    foreach (QUmlBehavior *element, contract())
        c->addContract(dynamic_cast<QUmlBehavior *>(element->clone()));
    foreach (QUmlConnectorEnd *element, end())
        c->addEnd(dynamic_cast<QUmlConnectorEnd *>(element->clone()));
    foreach (QUmlConnector *element, redefinedConnector())
        c->addRedefinedConnector(dynamic_cast<QUmlConnector *>(element->clone()));
    if (type())
        c->setType(dynamic_cast<QUmlAssociation *>(type()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The set of Behaviors that specify the valid interaction patterns across the connector.
 */
const QSet<QUmlBehavior *> QUmlConnector::contract() const
{
    // This is a read-write association end

    return _contract;
}

void QUmlConnector::addContract(QUmlBehavior *contract)
{
    // This is a read-write association end

    if (!_contract.contains(contract)) {
        _contract.insert(contract);
        if (contract && contract->asQObject() && this->asQObject())
            QObject::connect(contract->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeContract(QObject *)));
    }
}

void QUmlConnector::removeContract(QUmlBehavior *contract)
{
    // This is a read-write association end

    if (_contract.contains(contract)) {
        _contract.remove(contract);
    }
}

/*!
    A connector consists of at least two connector ends, each representing the participation of instances of the classifiers typing the connectable elements attached to this end. The set of connector ends is ordered.
 */
const QList<QUmlConnectorEnd *> QUmlConnector::end() const
{
    // This is a read-write association end

    return _end;
}

void QUmlConnector::addEnd(QUmlConnectorEnd *end)
{
    // This is a read-write association end

    if (!_end.contains(end)) {
        _end.append(end);
        if (end && end->asQObject() && this->asQObject())
            QObject::connect(end->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeEnd(QObject *)));
        end->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(end);
    }
}

void QUmlConnector::removeEnd(QUmlConnectorEnd *end)
{
    // This is a read-write association end

    if (_end.contains(end)) {
        _end.removeAll(end);
        if (end->asQObject())
            end->asQObject()->setParent(0);

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

    qWarning("UmlConnector::kind(): to be implemented (this is a derived property)");

    return QtUml::ConnectorKind();
}

void QUmlConnector::setKind(QtUml::ConnectorKind kind)
{
    // This is a read-only derived property

    qWarning("UmlConnector::kind(): to be implemented (this is a derived property)");
    Q_UNUSED(kind);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    A connector may be redefined when its containing classifier is specialized. The redefining connector may have a type that specializes the type of the redefined connector. The types of the connector ends of the redefining connector may specialize the types of the connector ends of the redefined connector. The properties of the connector ends of the redefining connector may be replaced.
 */
const QSet<QUmlConnector *> QUmlConnector::redefinedConnector() const
{
    // This is a read-write association end

    return _redefinedConnector;
}

void QUmlConnector::addRedefinedConnector(QUmlConnector *redefinedConnector)
{
    // This is a read-write association end

    if (!_redefinedConnector.contains(redefinedConnector)) {
        _redefinedConnector.insert(redefinedConnector);
        if (redefinedConnector && redefinedConnector->asQObject() && this->asQObject())
            QObject::connect(redefinedConnector->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRedefinedConnector(QObject *)));

        // Adjust subsetted properties
        addRedefinedElement(redefinedConnector);
    }
}

void QUmlConnector::removeRedefinedConnector(QUmlConnector *redefinedConnector)
{
    // This is a read-write association end

    if (_redefinedConnector.contains(redefinedConnector)) {
        _redefinedConnector.remove(redefinedConnector);

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
        if (type && type->asQObject() && this->asQObject())
            QObject::connect(type->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setType()));
    }
}

void QUmlConnector::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::DocumentationRole] = QStringLiteral("The set of Behaviors that specify the valid interaction patterns across the connector.");
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::DocumentationRole] = QStringLiteral("A connector consists of at least two connector ends, each representing the participation of instances of the classifiers typing the connectable elements attached to this end. The set of connector ends is ordered.");
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::DocumentationRole] = QStringLiteral("Indicates the kind of connector. This is derived: a connector with one or more ends connected to a Port which is not on a Part and which is not a behavior port is a delegation; otherwise it is an assembly.");
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("redefinedConnector")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("redefinedConnector")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("redefinedConnector")][QtModeling::DocumentationRole] = QStringLiteral("A connector may be redefined when its containing classifier is specialized. The redefining connector may have a type that specializes the type of the redefined connector. The types of the connector ends of the redefining connector may specialize the types of the connector ends of the redefined connector. The properties of the connector ends of the redefining connector may be replaced.");
    QModelingObject::propertyDataHash[QStringLiteral("redefinedConnector")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("redefinedConnector")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("RedefinableElement-redefinedElement");
    QModelingObject::propertyDataHash[QStringLiteral("redefinedConnector")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("type")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("type")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("type")][QtModeling::DocumentationRole] = QStringLiteral("An optional association that specifies the link corresponding to this connector.");
    QModelingObject::propertyDataHash[QStringLiteral("type")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("type")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("type")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

