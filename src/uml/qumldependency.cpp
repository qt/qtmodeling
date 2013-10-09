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

/*!
    \class QUmlDependency

    \inmodule QtUml

    \brief A dependency is a relationship that signifies that a single or a set of model elements requires other model elements for their specification or implementation. This means that the complete semantics of the depending elements is either semantically or structurally dependent on the definition of the supplier element(s).
 */
QUmlDependency::QUmlDependency(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlDependencyObject(this);
    setGroupProperties();
    setPropertyData();
}

QUmlDependency::~QUmlDependency()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlDependency::clone() const
{
    QUmlDependency *c = new QUmlDependency;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlNamedElement *element, clients())
        c->addClient(dynamic_cast<QUmlNamedElement *>(element->clone()));
    foreach (QUmlNamedElement *element, suppliers())
        c->addSupplier(dynamic_cast<QUmlNamedElement *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The element(s) dependent on the supplier element(s). In some cases (such as a Trace Abstraction) the assignment of direction (that is, the designation of the client element) is at the discretion of the modeler, and is a stipulation.
 */
const QSet<QUmlNamedElement *> QUmlDependency::clients() const
{
    // This is a read-write association end

    return _clients;
}

void QUmlDependency::addClient(QUmlNamedElement *client)
{
    // This is a read-write association end

    if (!_clients.contains(client)) {
        _clients.insert(client);
        if (client && client->asQObject() && this->asQObject())
            QObject::connect(client->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeClient(QObject *)));

        // Adjust subsetted properties
        addSource(client);

        // Adjust opposite properties
        if (client) {
            client->addClientDependency(this);
        }
    }
}

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
 */
const QSet<QUmlNamedElement *> QUmlDependency::suppliers() const
{
    // This is a read-write association end

    return _suppliers;
}

void QUmlDependency::addSupplier(QUmlNamedElement *supplier)
{
    // This is a read-write association end

    if (!_suppliers.contains(supplier)) {
        _suppliers.insert(supplier);
        if (supplier && supplier->asQObject() && this->asQObject())
            QObject::connect(supplier->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeSupplier(QObject *)));

        // Adjust subsetted properties
        addTarget(supplier);
    }
}

void QUmlDependency::removeSupplier(QUmlNamedElement *supplier)
{
    // This is a read-write association end

    if (_suppliers.contains(supplier)) {
        _suppliers.remove(supplier);

        // Adjust subsetted properties
        removeTarget(supplier);
    }
}

void QUmlDependency::setGroupProperties()
{
    const QMetaObject *metaObject = _qObject->metaObject();

    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));
    _groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));
    _groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    _groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));
    _groupProperties.insert(QStringLiteral("QUmlRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("sources"))));
    _groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targets"))));
    _groupProperties.insert(QStringLiteral("QUmlDependency"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clients"))));
    _groupProperties.insert(QStringLiteral("QUmlDependency"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("suppliers"))));
}

void QUmlDependency::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("clients")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("clients")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlDependency");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("clients")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("clients")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("clients")][QtModeling::DocumentationRole] = QStringLiteral("The element(s) dependent on the supplier element(s). In some cases (such as a Trace Abstraction) the assignment of direction (that is, the designation of the client element) is at the discretion of the modeler, and is a stipulation.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("clients")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("clients")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("DirectedRelationship-source");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("clients")][QtModeling::OppositeEndRole] = QStringLiteral("NamedElement-clientDependency");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("suppliers")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("suppliers")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlDependency");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("suppliers")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("suppliers")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("suppliers")][QtModeling::DocumentationRole] = QStringLiteral("The element(s) independent of the client element(s), in the same respect and the same dependency relationship. In some directed dependency relationships (such as Refinement Abstractions), a common convention in the domain of class-based OO software is to put the more abstract element in this role. Despite this convention, users of UML may stipulate a sense of dependency suitable for their domain, which makes a more abstract element dependent on that which is more specific.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("suppliers")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("suppliers")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("DirectedRelationship-target");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDependency")][QStringLiteral("suppliers")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

