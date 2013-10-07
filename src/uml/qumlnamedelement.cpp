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
#include "qumlnamedelement.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

/*!
    \class QUmlNamedElement

    \inmodule QtUml

    \brief A named element supports using a string expression to specify its name. This allows names of model elements to involve template parameters. The actual name is evaluated from the string expression only when it is sensible to do so (e.g., when a template is bound).A named element is an element in a model that may have a name.
 */
QUmlNamedElement::QUmlNamedElement() :
    _nameExpression(0),
    _namespace_(0)
{
    setPropertyData();
}

QUmlNamedElement::~QUmlNamedElement()
{
}

QModelingObject *QUmlNamedElement::clone() const
{
    QUmlNamedElement *c = new QUmlNamedElement;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlNamedElement::clientDependencies() const
{
    // This is a read-write association end

    return _clientDependencies;
}

void QUmlNamedElement::addClientDependency(QUmlDependency *clientDependency)
{
    // This is a read-write association end

    if (!_clientDependencies.contains(clientDependency)) {
        _clientDependencies.insert(clientDependency);
        if (clientDependency && clientDependency->asQObject() && this->asQObject())
            QObject::connect(clientDependency->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeClientDependency(QObject *)));

        // Adjust opposite properties
        if (clientDependency) {
            clientDependency->addClient(this);
        }
    }
}

void QUmlNamedElement::removeClientDependency(QUmlDependency *clientDependency)
{
    // This is a read-write association end

    if (_clientDependencies.contains(clientDependency)) {
        _clientDependencies.remove(clientDependency);

        // Adjust opposite properties
        if (clientDependency) {
            clientDependency->removeClient(this);
        }
    }
}

/*!
    The name of the NamedElement.
 */
QString QUmlNamedElement::name() const
{
    // This is a read-write property

    return _name;
}

void QUmlNamedElement::setName(QString name)
{
    // This is a read-write property

    if (_name != name) {
        _name = name;
        asQObject()->setObjectName(name);
    }
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlNamedElement::nameExpression() const
{
    // This is a read-write association end

    return _nameExpression;
}

void QUmlNamedElement::setNameExpression(QUmlStringExpression *nameExpression)
{
    // This is a read-write association end

    if (_nameExpression != nameExpression) {
        // Adjust subsetted properties
        removeOwnedElement(_nameExpression);

        _nameExpression = nameExpression;
        if (nameExpression && nameExpression->asQObject() && this->asQObject())
            QObject::connect(nameExpression->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setNameExpression()));
        nameExpression->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (nameExpression) {
            addOwnedElement(nameExpression);
        }
    }
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlNamedElement::namespace_() const
{
    // This is a read-only derived union association end

    return _namespace_;
}

void QUmlNamedElement::setNamespace(QUmlNamespace *namespace_)
{
    // This is a read-only derived union association end

    if (_namespace_ != namespace_) {
        // Adjust subsetted properties

        _namespace_ = namespace_;
        if (namespace_ && namespace_->asQObject() && this->asQObject())
            QObject::connect(namespace_->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setNamespace()));

        // Adjust subsetted properties
        setOwner(namespace_);
    }
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlNamedElement::qualifiedName() const
{
    // This is a read-only derived property

    if (_name.isEmpty()) return QString();
    QString qualifiedName_(_name);
    QList<QUmlNamespace *> allNamespaces_ = allNamespaces();
    QString separator_ = separator();
    foreach (QUmlNamespace *namespace_, allNamespaces_) {
        if (namespace_->name().isEmpty())
            return QString();
        qualifiedName_.prepend(separator_).prepend(namespace_->name());
    }
    return qualifiedName_;
}

void QUmlNamedElement::setQualifiedName(QString qualifiedName)
{
    // This is a read-only derived property

    qWarning("UmlNamedElement::setQualifiedName(): to be implemented (this is a derived property)");
    Q_UNUSED(qualifiedName);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlNamedElement::visibility() const
{
    // This is a read-write property

    return _visibility;
}

void QUmlNamedElement::setVisibility(QtUml::VisibilityKind visibility)
{
    // This is a read-write property

    if (_visibility != visibility) {
        _visibility = visibility;
    }
}

// OPERATIONS

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlNamedElement::allNamespaces() const
{
    if (!_namespace_) {
        return QList<QUmlNamespace *>();
    }
    else {
        QList<QUmlNamespace *> allNamespaces_;
        QUmlNamespace *namespace_ = this->namespace_();
        while (namespace_) {
            allNamespaces_.append(namespace_);
            namespace_ = namespace_->namespace_();
        }
        return allNamespaces_;
    }
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlNamedElement::allOwningPackages() const
{
    qWarning("UmlNamedElement::allOwningPackages(): to be implemented (operation)");

    return QSet<QUmlPackage *> ();
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlNamedElement::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    qWarning("UmlNamedElement::isDistinguishableFrom(): to be implemented (operation)");

    Q_UNUSED(n);
    Q_UNUSED(ns);
    return bool ();
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlNamedElement::separator() const
{
    return QStringLiteral("::");
}

void QUmlNamedElement::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("clientDependency")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("clientDependency")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlNamedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("clientDependency")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("clientDependency")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("clientDependency")][QtModeling::DocumentationRole] = QStringLiteral("Indicates the dependencies that reference the client.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("clientDependency")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("clientDependency")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("A_source_directedRelationship-directedRelationship");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("clientDependency")][QtModeling::OppositeEndRole] = QStringLiteral("Dependency-client");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("name")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("name")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlNamedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("name")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("name")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("name")][QtModeling::DocumentationRole] = QStringLiteral("The name of the NamedElement.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("name")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("name")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("name")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("nameExpression")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("nameExpression")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlNamedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("nameExpression")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("nameExpression")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("nameExpression")][QtModeling::DocumentationRole] = QStringLiteral("The string expression used to define the name of this named element.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("nameExpression")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("nameExpression")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("nameExpression")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("namespace")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("namespace")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlNamedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("namespace")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("namespace")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("namespace")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the namespace that owns the NamedElement.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("namespace")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("namespace")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("namespace")][QtModeling::OppositeEndRole] = QStringLiteral("Namespace-ownedMember");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("qualifiedName")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("qualifiedName")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlNamedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("qualifiedName")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("qualifiedName")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("qualifiedName")][QtModeling::DocumentationRole] = QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("qualifiedName")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("qualifiedName")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("qualifiedName")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("visibility")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("visibility")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlNamedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("visibility")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("visibility")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("visibility")][QtModeling::DocumentationRole] = QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("visibility")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("visibility")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamedElement")][QStringLiteral("visibility")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

