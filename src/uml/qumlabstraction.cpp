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
#include "qumlabstraction.h"

#include "private/qumlabstractionobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
/*!
    \class QUmlAbstraction

    \inmodule QtUml

    \brief An abstraction is a relationship that relates two elements or sets of elements that represent the same concept at different levels of abstraction or from different viewpoints.
 */
QUmlAbstraction::QUmlAbstraction(bool createQObject) :
    QUmlDependency(false),
    _mapping(0)
{
    if (createQObject)
        _qObject = new QUmlAbstractionObject(this);
    setPropertyData();
}

QUmlAbstraction::~QUmlAbstraction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlAbstraction::clone() const
{
    QUmlAbstraction *c = new QUmlAbstraction;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlNamedElement *element, client())
        c->addClient(dynamic_cast<QUmlNamedElement *>(element->clone()));
    foreach (QUmlNamedElement *element, supplier())
        c->addSupplier(dynamic_cast<QUmlNamedElement *>(element->clone()));
    if (mapping())
        c->setMapping(dynamic_cast<QUmlOpaqueExpression *>(mapping()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    An composition of an Expression that states the abstraction relationship between the supplier and the client. In some cases, such as Derivation, it is usually formal and unidirectional; in other cases, such as Trace, it is usually informal and bidirectional. The mapping expression is optional and may be omitted if the precise relationship between the elements is not specified.
 */
QUmlOpaqueExpression *QUmlAbstraction::mapping() const
{
    // This is a read-write association end

    return _mapping;
}

void QUmlAbstraction::setMapping(QUmlOpaqueExpression *mapping)
{
    // This is a read-write association end

    if (_mapping != mapping) {
        // Adjust subsetted properties
        removeOwnedElement(_mapping);

        _mapping = mapping;
        if (mapping && mapping->asQObject() && this->asQObject())
            QObject::connect(mapping->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setMapping()));
        mapping->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (mapping) {
            addOwnedElement(mapping);
        }
    }
}

void QUmlAbstraction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("mapping")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("mapping")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("mapping")][QtModeling::DocumentationRole] = QStringLiteral("An composition of an Expression that states the abstraction relationship between the supplier and the client. In some cases, such as Derivation, it is usually formal and unidirectional; in other cases, such as Trace, it is usually informal and bidirectional. The mapping expression is optional and may be omitted if the precise relationship between the elements is not specified.");
    QModelingObject::propertyDataHash[QStringLiteral("mapping")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("mapping")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("mapping")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

