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
#include "qumlsubstitution.h"

#include "private/qumlsubstitutionobject_p.h"

#include <QtUml/QUmlClassifier>
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
    \class QUmlSubstitution

    \inmodule QtUml

    \brief A substitution is a relationship between two classifiers signifies that the substituting classifier complies with the contract specified by the contract classifier. This implies that instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
 */
QUmlSubstitution::QUmlSubstitution(bool createQObject) :
    QUmlRealization(false),
    _contract(0),
    _substitutingClassifier(0)
{
    if (createQObject)
        _qObject = new QUmlSubstitutionObject(this);
    setPropertyData();
}

QUmlSubstitution::~QUmlSubstitution()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlSubstitution::clone() const
{
    QUmlSubstitution *c = new QUmlSubstitution;
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
        c->setContract(dynamic_cast<QUmlClassifier *>(contract()->clone()));
    if (substitutingClassifier())
        c->setSubstitutingClassifier(dynamic_cast<QUmlClassifier *>(substitutingClassifier()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The contract with which the substituting classifier complies.
 */
QUmlClassifier *QUmlSubstitution::contract() const
{
    // This is a read-write association end

    return _contract;
}

void QUmlSubstitution::setContract(QUmlClassifier *contract)
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
    Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
 */
QUmlClassifier *QUmlSubstitution::substitutingClassifier() const
{
    // This is a read-write association end

    return _substitutingClassifier;
}

void QUmlSubstitution::setSubstitutingClassifier(QUmlClassifier *substitutingClassifier)
{
    // This is a read-write association end

    if (_substitutingClassifier != substitutingClassifier) {
        // Adjust subsetted properties
        removeClient(_substitutingClassifier);

        _substitutingClassifier = substitutingClassifier;
        if (substitutingClassifier && substitutingClassifier->asQObject() && this->asQObject())
            QObject::connect(substitutingClassifier->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSubstitutingClassifier()));

        // Adjust subsetted properties
        setOwner(substitutingClassifier);
        if (substitutingClassifier) {
            addClient(substitutingClassifier);
        }
    }
}

void QUmlSubstitution::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlSubstitution");
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::DocumentationRole] = QStringLiteral("The contract with which the substituting classifier complies.");
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Dependency-supplier");
    QModelingObject::propertyDataHash[QStringLiteral("contract")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("substitutingClassifier")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("substitutingClassifier")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlSubstitution");
    QModelingObject::propertyDataHash[QStringLiteral("substitutingClassifier")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("substitutingClassifier")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("substitutingClassifier")][QtModeling::DocumentationRole] = QStringLiteral("Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.");
    QModelingObject::propertyDataHash[QStringLiteral("substitutingClassifier")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("substitutingClassifier")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner Dependency-client");
    QModelingObject::propertyDataHash[QStringLiteral("substitutingClassifier")][QtModeling::OppositeEndRole] = QStringLiteral("Classifier-substitution");

}

