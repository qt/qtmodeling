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
#include "qumlinterfacerealization.h"

#include "private/qumlinterfacerealizationobject_p.h"

#include <QtUml/QUmlBehavioredClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

/*!
    \class QUmlInterfaceRealization

    \inmodule QtUml

    \brief An interface realization is a specialized realization relationship between a classifier and an interface. This relationship signifies that the realizing classifier conforms to the contract specified by the interface.
 */
QUmlInterfaceRealization::QUmlInterfaceRealization(bool createQObject) :
    QUmlRealization(false),
    _contract(0),
    _implementingClassifier(0)
{
    if (createQObject)
        _qObject = new QUmlInterfaceRealizationObject(this);
    setClassForProperty();
    setPropertyData();
}

QUmlInterfaceRealization::~QUmlInterfaceRealization()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlInterfaceRealization::clone() const
{
    QUmlInterfaceRealization *c = new QUmlInterfaceRealization;
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
    if (mapping())
        c->setMapping(dynamic_cast<QUmlOpaqueExpression *>(mapping()->clone()));
    if (contract())
        c->setContract(dynamic_cast<QUmlInterface *>(contract()->clone()));
    if (implementingClassifier())
        c->setImplementingClassifier(dynamic_cast<QUmlBehavioredClassifier *>(implementingClassifier()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the Interface specifying the conformance contract.
 */
QUmlInterface *QUmlInterfaceRealization::contract() const
{
    // This is a read-write association end

    return _contract;
}

void QUmlInterfaceRealization::setContract(QUmlInterface *contract)
{
    // This is a read-write association end

    if (_contract != contract) {
        // Adjust subsetted properties
        removeSupplier(_contract);

        _contract = contract;
        if (contract && contract->asQObject() && this->asQObject())
            QObject::connect(contract->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setContract()));

        // Adjust subsetted properties
        if (contract) {
            addSupplier(contract);
        }
    }
}

/*!
    References the BehavioredClassifier that owns this Interfacerealization (i.e., the classifier that realizes the Interface to which it points).
 */
QUmlBehavioredClassifier *QUmlInterfaceRealization::implementingClassifier() const
{
    // This is a read-write association end

    return _implementingClassifier;
}

void QUmlInterfaceRealization::setImplementingClassifier(QUmlBehavioredClassifier *implementingClassifier)
{
    // This is a read-write association end

    if (_implementingClassifier != implementingClassifier) {
        // Adjust subsetted properties
        removeClient(_implementingClassifier);

        _implementingClassifier = implementingClassifier;
        if (implementingClassifier && implementingClassifier->asQObject() && this->asQObject())
            QObject::connect(implementingClassifier->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setImplementingClassifier()));

        // Adjust subsetted properties
        setOwner(implementingClassifier);
        if (implementingClassifier) {
            addClient(implementingClassifier);
        }
    }
}

void QUmlInterfaceRealization::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owningTemplateParameter")] = QStringLiteral("QUmlParameterableElement");
    _classForProperty[QStringLiteral("templateParameter")] = QStringLiteral("QUmlParameterableElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlPackageableElement");
    _classForProperty[QStringLiteral("relatedElements")] = QStringLiteral("QUmlRelationship");
    _classForProperty[QStringLiteral("sources")] = QStringLiteral("QUmlDirectedRelationship");
    _classForProperty[QStringLiteral("targets")] = QStringLiteral("QUmlDirectedRelationship");
    _classForProperty[QStringLiteral("clients")] = QStringLiteral("QUmlDependency");
    _classForProperty[QStringLiteral("suppliers")] = QStringLiteral("QUmlDependency");
    _classForProperty[QStringLiteral("mapping")] = QStringLiteral("QUmlAbstraction");
    _classForProperty[QStringLiteral("contract")] = QStringLiteral("QUmlInterfaceRealization");
    _classForProperty[QStringLiteral("implementingClassifier")] = QStringLiteral("QUmlInterfaceRealization");
}

void QUmlInterfaceRealization::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("contract")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("contract")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInterfaceRealization");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("contract")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("contract")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("contract")][QtModeling::DocumentationRole] = QStringLiteral("References the Interface specifying the conformance contract.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("contract")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("contract")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Dependency-supplier");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("contract")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("implementingClassifier")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("implementingClassifier")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInterfaceRealization");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("implementingClassifier")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("implementingClassifier")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("implementingClassifier")][QtModeling::DocumentationRole] = QStringLiteral("References the BehavioredClassifier that owns this Interfacerealization (i.e., the classifier that realizes the Interface to which it points).");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("implementingClassifier")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("implementingClassifier")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner Dependency-client");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterfaceRealization")][QStringLiteral("implementingClassifier")][QtModeling::OppositeEndRole] = QStringLiteral("BehavioredClassifier-interfaceRealization");

}

