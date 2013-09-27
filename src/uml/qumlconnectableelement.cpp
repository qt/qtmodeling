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
#include "qumlconnectableelement.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElementTemplateParameter>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
/*!
    \class QUmlConnectableElement

    \inmodule QtUml

    \brief ConnectableElement is an abstract metaclass representing a set of instances that play roles of a classifier. Connectable elements may be joined by attached connectors and specify configurations of linked instances to be created within an instance of the containing classifier.A connectable element may be exposed as a connectable element template parameter.
 */
QUmlConnectableElement::QUmlConnectableElement() :
    _templateParameter(0)
{
    setPropertyData();
}

QUmlConnectableElement::~QUmlConnectableElement()
{
}

QModelingObject *QUmlConnectableElement::clone() const
{
    QUmlConnectableElement *c = new QUmlConnectableElement;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (type())
        c->setType(dynamic_cast<QUmlType *>(type()->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlConnectableElementTemplateParameter *>(templateParameter()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
const QList<QUmlConnectorEnd *> QUmlConnectableElement::end() const
{
    // This is a read-only derived association end

    qWarning("UmlConnectableElement::end(): to be implemented (this is a derived association end)");

    return QList<QUmlConnectorEnd *>();
}

void QUmlConnectableElement::addEnd(QUmlConnectorEnd *end)
{
    // This is a read-only derived association end

    qWarning("UmlConnectableElement::end(): to be implemented (this is a derived association end)");
    Q_UNUSED(end);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite properties
        if (end) {
            end->setRole(this);
        }
    }
}

void QUmlConnectableElement::removeEnd(QUmlConnectorEnd *end)
{
    // This is a read-only derived association end

    qWarning("UmlConnectableElement::end(): to be implemented (this is a derived association end)");
    Q_UNUSED(end);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite properties
        if (end) {
            end->setRole(0);
        }
    }
}

/*!
    The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 */
QUmlConnectableElementTemplateParameter *QUmlConnectableElement::templateParameter() const
{
    // This is a read-write association end

    return _templateParameter;
}

void QUmlConnectableElement::setTemplateParameter(QUmlConnectableElementTemplateParameter *templateParameter)
{
    // This is a read-write association end

    if (_templateParameter != templateParameter) {
        _templateParameter = templateParameter;
        if (templateParameter->asQObject() && this->asQObject())
            QObject::connect(templateParameter->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setTemplateParameter()));
    }
}

void QUmlConnectableElement::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::DocumentationRole] = QStringLiteral("Denotes a set of connector ends that attaches to this connectable element.");
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::OppositeEndRole] = QStringLiteral("ConnectorEnd-role");

    QModelingObject::propertyDataHash[QStringLiteral("templateParameter")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("templateParameter")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("templateParameter")][QtModeling::DocumentationRole] = QStringLiteral("The ConnectableElementTemplateParameter for this ConnectableElement parameter.");
    QModelingObject::propertyDataHash[QStringLiteral("templateParameter")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("ParameterableElement-templateParameter");
    QModelingObject::propertyDataHash[QStringLiteral("templateParameter")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("templateParameter")][QtModeling::OppositeEndRole] = QStringLiteral("ConnectableElementTemplateParameter-parameteredElement");

}

