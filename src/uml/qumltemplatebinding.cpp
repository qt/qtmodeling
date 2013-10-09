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
#include "qumltemplatebinding.h"

#include "private/qumltemplatebindingobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameterSubstitution>
#include <QtUml/QUmlTemplateSignature>

/*!
    \class QUmlTemplateBinding

    \inmodule QtUml

    \brief A template binding represents a relationship between a templateable element and a template. A template binding specifies the substitutions of actual parameters for the formal parameters of the template.
 */
QUmlTemplateBinding::QUmlTemplateBinding(bool createQObject) :
    _boundElement(0),
    _signature(0)
{
    if (createQObject)
        _qObject = new QUmlTemplateBindingObject(this);
    setGroupProperties();
    setPropertyData();
}

QUmlTemplateBinding::~QUmlTemplateBinding()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlTemplateBinding::clone() const
{
    QUmlTemplateBinding *c = new QUmlTemplateBinding;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (boundElement())
        c->setBoundElement(dynamic_cast<QUmlTemplateableElement *>(boundElement()->clone()));
    foreach (QUmlTemplateParameterSubstitution *element, parameterSubstitutions())
        c->addParameterSubstitution(dynamic_cast<QUmlTemplateParameterSubstitution *>(element->clone()));
    if (signature())
        c->setSignature(dynamic_cast<QUmlTemplateSignature *>(signature()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The element that is bound by this binding.
 */
QUmlTemplateableElement *QUmlTemplateBinding::boundElement() const
{
    // This is a read-write association end

    return _boundElement;
}

void QUmlTemplateBinding::setBoundElement(QUmlTemplateableElement *boundElement)
{
    // This is a read-write association end

    if (_boundElement != boundElement) {
        // Adjust subsetted properties
        removeSource(_boundElement);

        _boundElement = boundElement;
        if (boundElement && boundElement->asQObject() && this->asQObject())
            QObject::connect(boundElement->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setBoundElement()));

        // Adjust subsetted properties
        setOwner(boundElement);
        if (boundElement) {
            addSource(boundElement);
        }
    }
}

/*!
    The parameter substitutions owned by this template binding.
 */
const QSet<QUmlTemplateParameterSubstitution *> QUmlTemplateBinding::parameterSubstitutions() const
{
    // This is a read-write association end

    return _parameterSubstitutions;
}

void QUmlTemplateBinding::addParameterSubstitution(QUmlTemplateParameterSubstitution *parameterSubstitution)
{
    // This is a read-write association end

    if (!_parameterSubstitutions.contains(parameterSubstitution)) {
        _parameterSubstitutions.insert(parameterSubstitution);
        if (parameterSubstitution && parameterSubstitution->asQObject() && this->asQObject())
            QObject::connect(parameterSubstitution->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeParameterSubstitution(QObject *)));
        parameterSubstitution->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(parameterSubstitution);

        // Adjust opposite properties
        if (parameterSubstitution) {
            parameterSubstitution->setTemplateBinding(this);
        }
    }
}

void QUmlTemplateBinding::removeParameterSubstitution(QUmlTemplateParameterSubstitution *parameterSubstitution)
{
    // This is a read-write association end

    if (_parameterSubstitutions.contains(parameterSubstitution)) {
        _parameterSubstitutions.remove(parameterSubstitution);
        if (parameterSubstitution->asQObject())
            parameterSubstitution->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(parameterSubstitution);

        // Adjust opposite properties
        if (parameterSubstitution) {
            parameterSubstitution->setTemplateBinding(0);
        }
    }
}

/*!
    The template signature for the template that is the target of the binding.
 */
QUmlTemplateSignature *QUmlTemplateBinding::signature() const
{
    // This is a read-write association end

    return _signature;
}

void QUmlTemplateBinding::setSignature(QUmlTemplateSignature *signature)
{
    // This is a read-write association end

    if (_signature != signature) {
        // Adjust subsetted properties
        removeTarget(_signature);

        _signature = signature;
        if (signature && signature->asQObject() && this->asQObject())
            QObject::connect(signature->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSignature()));

        // Adjust subsetted properties
        if (signature) {
            addTarget(signature);
        }
    }
}

void QUmlTemplateBinding::setGroupProperties()
{
    const QMetaObject *metaObject = _qObject->metaObject();

    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));
    _groupProperties.insert(QStringLiteral("QUmlRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("sources"))));
    _groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targets"))));
    _groupProperties.insert(QStringLiteral("QUmlTemplateBinding"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("boundElement"))));
    _groupProperties.insert(QStringLiteral("QUmlTemplateBinding"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parameterSubstitutions"))));
    _groupProperties.insert(QStringLiteral("QUmlTemplateBinding"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("signature"))));
}

void QUmlTemplateBinding::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("boundElement")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("boundElement")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTemplateBinding");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("boundElement")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("boundElement")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("boundElement")][QtModeling::DocumentationRole] = QStringLiteral("The element that is bound by this binding.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("boundElement")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("boundElement")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner DirectedRelationship-source");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("boundElement")][QtModeling::OppositeEndRole] = QStringLiteral("TemplateableElement-templateBinding");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("parameterSubstitutions")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("parameterSubstitutions")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTemplateBinding");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("parameterSubstitutions")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("parameterSubstitutions")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("parameterSubstitutions")][QtModeling::DocumentationRole] = QStringLiteral("The parameter substitutions owned by this template binding.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("parameterSubstitutions")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("parameterSubstitutions")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("parameterSubstitutions")][QtModeling::OppositeEndRole] = QStringLiteral("TemplateParameterSubstitution-templateBinding");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("signature")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("signature")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTemplateBinding");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("signature")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("signature")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("signature")][QtModeling::DocumentationRole] = QStringLiteral("The template signature for the template that is the target of the binding.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("signature")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("signature")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("DirectedRelationship-target");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateBinding")][QStringLiteral("signature")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

